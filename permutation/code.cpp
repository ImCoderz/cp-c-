#include <bits/stdc++.h>
using namespace std;


vector<int>vi;

int main(){
    int n;
    cin>>n;
    if(n<=4){
        if(n==4){
            cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
        }
        else{
            if(n==1){
                cout<<1<<endl;
            }else{
            cout << "NO SOLUTION"<<endl;
            }
        }
    }else{
        for(int i=0;2*i+1<=n;i++){
            vi.push_back(2*i+1);
        }
        for(int i=1;2*i<=n;i++){
            vi.push_back(2*i);
        }
    }
    for (size_t i = 0; i < vi.size(); i++)
    {
        if(i==vi.size()-1){
            cout<<vi[i]<<endl;
        }else{
            cout<<vi[i]<<" ";
        }
    }
    
}

