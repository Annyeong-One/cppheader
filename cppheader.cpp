// https://github.com/Annyeong-One/cppheader
// Annyeong1's header
#include<bits/stdc++.h>
using namespace std;
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