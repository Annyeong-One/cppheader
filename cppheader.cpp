#include<bits/stdc++.h>
using namespace std;
#define f2(i,x) for((i)=0; (i)<(x); (i)++) // 2-var for
#define f2b(i,x) for((i)=(x)-1; (i)>=0; (i)--) // 2-var backwards for
#define f3(i,f,t) for((i)=(f);(i)<=(t);(i)++) // 3-var for
#define int long long int
int gcd(int a, int b){
    if(a<b){a=a^b;b=a^b;a=a^b;}
    return b==0?a:gcd(b,a%b);
}
int lcm(int a, int b){return a/gcd(a,b)*b;}