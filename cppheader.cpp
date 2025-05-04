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
i64 expm(i64 a, i64 b){i64 r=1,m=1e9+7;while(b){if(b&1)r=r*a%m;a=a*a%m;b>>=1;}return r%m;}
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
