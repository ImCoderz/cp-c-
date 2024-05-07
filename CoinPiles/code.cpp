#include <bits/stdc++.h>
using namespace std;

#define PB push_back

vector<string> vi;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >>a;
        cin >>b;
        if(b>2*a || a>2*b){
            vi.PB("NO");
        }else{
            if((a+b)%3==0){
                vi.PB("YES");

            }else{
                vi.PB("NO");
            }
        }
    }
    for (size_t i = 0; i < vi.size(); i++)
    {
        cout<< vi[i]<<endl;
    }
    
}