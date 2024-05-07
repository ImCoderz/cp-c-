#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    vector<ll> vi;
    ll n;
    cin >> n;
    while(n!=1){
        vi.push_back(n);
        if(n%2==0){
            n=n/2;
        }else{
            n=3*n+1;
        }
    }
    vi.push_back(1);
    for (size_t i = 0; i < vi.size(); i++)
    {
        if(i==vi.size()-1){
            cout << vi[i]<<endl;
        }else{
            cout << vi[i]<<" ";
        }
    }
    
}