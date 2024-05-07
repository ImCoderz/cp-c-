#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    vector<ll> vi;
    int t;
    cin >>t;
    while(t--){
        ll y,x;
        ll m;
        ll s;
        cin>>y;
        cin>>x;
        m=max(y,x);
        cout << m<<endl;
        if(m%2==0){
            cout<<"pow :"<<pow(m-1,2)<<endl;
            if(x>=y){
                s=pow(m-1,2)+y;
            }else{
                s=pow(m-1,2)+2*y-x;
            }
        }else{
            if(x<=y){
                s=pow(m-1,2)+x;
            }else{
                s=pow(m-1,2)+2*x-y;
            }
        }
        vi.push_back(s);
    }
    for (size_t i = 0; i < vi.size(); i++)
    {
        cout << vi[i]<<endl;
    }
    
}