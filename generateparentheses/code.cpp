#include <bits/stdc++.h>
using namespace std;

int n=3;
vector<string> vi; 

void generateParentheses(string s,int o,int c){
    if(c==n){
        vi.push_back(s);
    }else{
        if(o<n){
            generateParentheses(s+"(",o+1,c);
        }
        if(c<o){
            generateParentheses(s+")",o,c+1);
        }
    }
}



int main(){
    generateParentheses("",0,0);
    for (size_t i = 0; i < vi.size(); ++i) {
        cout << vi[i] << " ";
    }
    cout <<""<<endl;
}