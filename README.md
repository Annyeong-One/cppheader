# Annyeong-One/cppheader
는 gs22059 / annyeong1 가 Codeforces, AtCoder 등의 Competitive Programing 및 BOJ, Koistudy 등의 Problem Solving 사이트에서 개인적으로 사용하기 위해 만든 C++ 헤더입니다. 
## Features
> ncr, npr, exp 함수 제공 (1.3~) \
> swap 매크로 제공  (1.3~) \
> ~~SIMD 제공 (1.2~)~~ \
> sort, reverse 매크로 기능 제공 (1.1~) \
> cin/cout 최적화 및 리다이렉트 제공 (1.1~) \
> gcd, lcm 함수 제공 (1.0~) \
> for문 2-변수, 3-변수 매크로 제공 (1.0~) \
> int 자동 64-bit화 제공 (1.0~) 
### #define Redirects
> int 를 long long 으로 redirect \
> ll 을 long long 으로 redirect \
> i32를 int(signed) 으로 redirect \
> endl 을 '\n' 으로 redirect \
> elif 을 else if 로 redirect
### #define Macros
> f2(i,x) : i를 0 이상 x 미만의 범위에서 오름차순으로 1씩 더하는 2-변수 for문 \
> f2b(i,x) : i를 x 미만 0 이상의 범위에서 내림차순으로 1씩 빼는 2-변수 for문 \
> f3(i,x,y) : i를 x 이상 y 이하의 범위에서 오름차순으로 1씩 더하는 3-변수 for문 \
> fall(x) : sort, reverse 등에서 사용하는 x.begin(), x.end() 매크로문 \
> sort1(x) : 단순 배열이 아닌 x를 stl 정렬하는 매크로문 (algorithm 헤더 종속) \
> rev(x) : 단순 배열이 아닌 x를 stl 뒤집는 매크로문 (algorithm 헤더 종속) \
> swap(x,y) : x와 y의 값을 바꾸는 매크로문 \
> fast : cin/cout 최적화를 위한 매크로문
### Functions
> gcd(x,y) : Great Common Divisor 함수, long long 범위 재귀함수 \
> lcm(x,y) : Least Common Multiplier 함수, long long 범위 (gcd 함수에 종속) \
> exp(x,y) : x의 y제곱을 O(log y) 시간에 계산하는 long long 범위 함수 \
> ncr(x,y) : Combination 함수, long long 범위 함수 \
> npr(x,y) : Permutation 함수, long long 범위 함수
## Presettings in main()
> i32 (32-bit signed) main 사용 \
> fast 최적화 적용 \
> return 기본값 0으로 설정
## Source Code
```c++
#include<bits/stdc++.h> // header
using namespace std; // std function
#define i32 signed // redirect
#define int long long // redirect
#define ll long long // redirect
#define endl '\n' // redirect
#define elif else if // redirect
#define f2(i,x) for((i)=0; (i)<(x); (i)++) // macro
#define f2b(i,x) for((i)=(x)-1; (i)>=0; (i)--) // macro
#define f3(i,f,t) for((i)=(f);(i)<=(t);(i)++) // macro
#define fall(x) (x).begin(), (x).end() // macro
#define sort1(x) sort(fall(x)) // macro
#define rev(x) reverse(fall(x)) // macro
#define swap(x,y) (x)=(x)^(y);(y)=(x)^(y);(x)=(x)^(y) // macro
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0) // macro
int gcd(int a, int b){if(a<b){a=a^b;b=a^b;a=a^b;} return b==0?a:gcd(b,a%b);} // function
int lcm(int a, int b){return a/gcd(a,b)*b;} // function
int exp(int a, int b){int r=1;while(b){if(b&1)r=r*a;a=a*a;b>>=1;}return r;} // function
int ncr(int n, int r){int i,j;if(n==r)return 1;if(r==1)return n;if(r>n/2)r=n-r;int p=1;for(i=0;i<r;i++){p*=n-i;p/=i+1;}return p;} // function
int npr(int n, int r){int i,j;if(r==0)return 1;if(r==1)return n;int p=1;for(i=0;i<r;i++){p*=n-i;p/=i+1;}return p;} // function
// variable declarations

// functions

i32 main(){
    fast;
    // code

    return 0;
}
```
