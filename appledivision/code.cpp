#include<bits/stdc++.h>
using namespace std;
#define ll long long

void recursion(ll& ans,ll l,ll r,vector<ll>& vl,int i,int n){
    if(i==n){
        ans=min(ans,abs(l-r));
        return;
    }
    recursion(ans,l+vl[i],r,vl,i+1,n);
    recursion(ans,l,r+vl[i],vl,i+1,n);
}

int main(){
    ll ans = LLONG_MAX;
    vector<ll> vl;
    int n;
    cin>>n;

    for (size_t i = 0; i < n; i++){
        ll x;
        cin>>x;
        vl.push_back(x);
    }

    recursion(ans,0,0,vl,0,n);
    cout<< ans <<endl; 
}
