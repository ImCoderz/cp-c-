#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll> vi1;
vector<ll> vi2;

int main(){
    

    int n;
    cin>>n;
    if(n%4==3){
        vi1.push_back(1);
        vi1.push_back(2);
        vi2.push_back(3);
        for(int i=4;i<n;i+=4){
            vi1.push_back(i);
            vi1.push_back(i+3);

            vi2.push_back(i+1);
            vi2.push_back(i+2);
        }
    }else{
        bool test=true;
        ll s=n*(n+1)/2 %2;
        if(n%2==0 && s%2==0){
            for(int i=1;i<n;i+=2){
                if(test){
                    vi1.push_back(i);
                    vi2.push_back(i+1);
                }else{
                    vi2.push_back(i);
                    vi1.push_back(i+1);
                }
                test=!test;
            }
        }
        else{
            cout <<"NO"<<endl;
        }
    }
    
    if(vi1.size()!=0){
        cout<<"YES"<<endl;

        cout<<vi1.size()<<endl;

        for (size_t i = 0; i < vi1.size(); i++)
        {
            if(i==vi1.size()-1){
                cout<<vi1[i]<<endl;
            }else{
                cout<<vi1[i]<<" ";
            }
        }

        cout<<vi2.size()<<endl;

        for (size_t i = 0; i < vi2.size(); i++)
        {
            if(i==vi2.size()-1){
                cout<<vi2[i]<<endl;
            }else{
                cout<<vi2[i]<<" ";
            }
        }

    }
    
}