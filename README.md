# Annyeong-One/cppheader
는 Codeforces, AtCoder 등의 Competitive Programing 및 BOJ, Koistudy 등의 Problem Solving 사이트에서 개인적으로 사용하기 위해 만든 C++ 헤더입니다. 

## Redirects
> int 를 long long 으로 redirect \
> ll 을 long long 으로 redirect \
> endl 을 '\n' 으로 redirect
## Macros
> fall(x) : sort, reverse 등에서 사용하는 x.begin(), x.end() 매크로문 \
> f2(i,x) : i를 0 이상 x 미만의 범위에서 오름차순으로 1씩 더하는 2-변수 for문 \
> f2b(i,x) : i를 x 미만 0 이상의 범위에서 내림차순으로 1씩 빼는 2-변수 for문 \
> f3(i,x,y) : i를 x 이상 y 이하의 범위에서 오름차순으로 1씩 더하는 3-변수 for문
> sort1(x) : 단순 배열이 아닌 x를 stl 정렬하는 매크로문 (algorithm 헤더 종속) \
> rev(x) : 단순 배열이 아닌 x를 stl 뒤집는 매크로문 (algorithm 헤더 종속)
## Functions
> gcd(x,y) : Great Common Divisor 함수, long long 범위 재귀함수 \
> lcm(x,y) : Least Common Multiplier 함수, long long 범위 (gcd 함수에 종속)
## Presettings in main()
> int가 long long으로 redirect되었으므로 signed main 사용 \
> cin/cout 최적화 적용 \
> return 기본값 0으로 설정
## Source Code
```c++
// https://github.com/Annyeong-One/cppheader
// Annyeong1's header
#include<bits/stdc++.h>
using namespace std;
#define i32 int
#define int long long int // redirect
#define ll long long int // redirect
#define endl '\n' // redirect
#define fall(x) (x).begin(), (x).end() // macro
#define f2(i,x) for((i)=0; (i)<(x); (i)++) // macro
#define f2b(i,x) for((i)=(x)-1; (i)>=0; (i)--) // macro
#define f3(i,f,t) for((i)=(f);(i)<=(t);(i)++) // macro
#define sort1(x) sort(fall(x)) // macro
#define rev(x) reverse(fall(x)) // macro
int gcd(int a, int b){if(a<b){a=a^b;b=a^b;a=a^b;} return b==0?a:gcd(b,a%b);} // function
int lcm(int a, int b){return a/gcd(a,b)*b;} // function
// variable declarations

// functions

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // code
    
    return 0;
}
```
