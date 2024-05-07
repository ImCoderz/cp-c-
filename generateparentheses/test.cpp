#include <bits/stdc++.h>
using namespace std;


void generateParentheses(vector<string>& vi,int n,string s,int o,int c){
    if(c==n){
        vi.push_back(s);
        return;
    }else{
        if(o<n){
            generateParentheses(vi,n,s+"(",o+1,c);
        }
        if(c<o){
            generateParentheses(vi,n,s+")",o,c+1);
        }
    }
}
vector<string> generateParenthesis(int n) {
    vector<string> vi; 
    generateParentheses(vi,n,"",0,0);
    return vi;
}

int main(){
    generateParenthesis(3);
    
}
