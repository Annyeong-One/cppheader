// https://github.com/Annyeong-One/cppheader
// Annyeong1's header
#include<bits/stdc++.h> // basic all in one header
#include <immintrin.h> // SIMD optimization
using namespace std; // std functions
#pragma GCC optimize("O3") // SIMD
#pragma GCC optimize("Ofast") // SIMD
#pragma GCC optimize("unroll-loops") // SIMD
#pragma GCC target("avx,avx2,fma") // SIMD
#define i32 signed // redirect
#define int long long // redirect
#define ll long long // redirect
#define endl '\n' // redirect
#define fall(x) (x).begin(), (x).end() // macro
#define f2(i,x) for((i)=0; (i)<(x); (i)++) // macro
#define f2b(i,x) for((i)=(x)-1; (i)>=0; (i)--) // macro
#define f3(i,f,t) for((i)=(f);(i)<=(t);(i)++) // macro
#define sort1(x) sort(fall(x)) // macro
#define rev(x) reverse(fall(x)) // macro
#define SIMDE_ENABLE_NATIVE_ALIASES
int gcd(int a, int b){if(a<b){a=a^b;b=a^b;a=a^b;} return b==0?a:gcd(b,a%b);} // function
int lcm(int a, int b){return a/gcd(a,b)*b;} // function
// variable declarations

// functions

i32 main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // code

    return 0;
}