# Annyeong-One/cppheader
는 gs22059 / annyeong1 가 Codeforces, AtCoder 등의 Competitive Programing 및 BOJ, Koistudy 등의 Problem Solving 사이트에서 개인적으로 사용하기 위해 만든 C++ 헤더입니다. 
### #define Redirects
> i64 을 long long 으로 redirect \
> i32 을 int(signed) 으로 redirect \
> p32 을 pair<i32,i32>으로 redirect \
> p64 을 pair<i64,i64>으로 redirect \
> endl 을 '\n' 으로 redirect \
> elif 을 else if 으로 redirect \
> fi 을 first 으로 redirect \
> se 을 second 으로 redirect \
> pb 을 push_back 으로 redirect
### #define Macros
> f2(i,x) : i를 0 이상 x 미만의 범위에서 오름차순으로 1씩 더하는 2-변수 for문 \
> f2b(i,x) : i를 x 미만 0 이상의 범위에서 내림차순으로 1씩 빼는 2-변수 for문 \
> f3(i,x,y) : i를 x 이상 y 이하의 범위에서 오름차순으로 1씩 더하는 3-변수 for문 \
> fall(x) : sort, reverse 등에서 사용하는 x.begin(), x.end() 매크로문 \
> sort1(x) : 단순 배열이 아닌 x를 stl 정렬하는 매크로문 (algorithm 헤더 종속) \
> rev(x) : 단순 배열이 아닌 x를 stl 뒤집는 매크로문 (algorithm 헤더 종속) \
> fast : cin/cout 최적화를 위한 매크로문
### Functions
> gcd(x,y) : Great Common Divisor 함수, long long 범위 재귀함수 \
> lcm(x,y) : Least Common Multiplier 함수, long long 범위 (gcd 함수에 종속) \
> expm(x,y,m) : x의 y제곱을 mod m에서 O(log y) 시간에 계산하는 long long 범위 함수 
## Presettings in main()
> i32 (32-bit signed) main 사용 \
> fast 최적화 적용 \
> return 기본값 0으로 설정
## Source Code
```c++
#include<bits/stdc++.h>
//#pragma GCC optimize("O3") // optimization
//#pragma GCC optimize("Ofast") // optimization
//#pragma GCC optimize("unroll-loops") // optimization
using namespace std;
#define i32 signed
//#define int long long // CP
#define i64 long long
#define endl '\n'
#define elif else if
#define fi first
#define se second
#define pb push_back
#define p32 pair<i32,i32>
#define p64 pair<i64,i64>
#define f2(i,x) for((i)=0;(i)<(x);(i)++)
#define f2b(i,x) for((i)=(x)-1;(i)>=0;(i)--)
#define f3(i,f,t) for((i)=(f);(i)<(t);(i)++)
#define fall(x) (x).begin(), (x).end()
#define sort1(x) sort(fall(x))
#define rev(x) reverse(fall(x))
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fl fflush(stdout)
#define nl cout<<endl;fflush(stdout)
i64 gcd(i64 a, i64 b){if(a<b){a=a^b;b=a^b;a=a^b;} return b==0?a:gcd(b,a%b);}
i64 lcm(i64 a, i64 b){return a/gcd(a,b)*b;}
i64 expm(i64 a, i64 b, i64 m){i64 r=1;while(b){if(b&1)r=r*a%m;a=a*a%m;b>>=1;}return r%m;}
i64 expm(i64 a, i64 b){i64 r=1,m=1e9+7while(b){if(b&1)r=r*a%m;a=a*a%m;b>>=1;}return r%m;}
i64 minv(i64 a, i64 m){return expm(a,m-2,m);}
i64 ncrm(i64 n, i64 r, i64 m){i64 i,j,k; i64 out=1; f3(i,1,n+1){out*=i;out%=m;}f3(i,1,r+1){out*=minv(i,m);out%=m;}f3(i,1,n-r+1){out*=minv(i,m);out%=m;}return out%m;}
int n,m,k,a[300010],b[300010]; char c[300010];
void f(){
    int i,j,l;
    
}
i32 main(){
    fast;
        int tc; cin>>tc;
        while(tc--)f();
    //f();
    return 0;
}
```
