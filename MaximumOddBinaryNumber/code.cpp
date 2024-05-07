#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.length();
        int start=n-1;
        for (int i = 0; i < n-1; i++){
            if(s[i]=='1'){
                if(s[start]=='1'&&start==n-1){
                    start=(start+1)%n;
                }
                swap(s[start],s[i]);
                start=(start+1)%n;
            }
        }
        return s;
    }
};




int main(){
    string s;
    cin>>s;
    Solution so;
    string out=so.maximumOddBinaryNumber(s);
    cout<<out<<endl;
}