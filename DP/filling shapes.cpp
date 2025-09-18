#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll n){
    ll f[n+1];
    f[0]=1;
    f[1]=0;
    for (ll i = 2; i <= n; i++)
    {
        f[i]=f[i-2]+f[i-2];

    }
    cout<<f[n];
}

int main()
{   
    ll n;
    cin>>n;
    solve(n);
    return 0;
}