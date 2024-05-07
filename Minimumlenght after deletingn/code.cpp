#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        int start=0;
        int end=s.length()-1;
        while(end>start){
            if(s[start]==s[end]){
                start++;
                end--;
                while((end>start)&&s[start]==s[start-1]){
                    start++;
                }
                while((end>start)&&s[end]==s[end+1]){
                    end--;
                }
                cout<<"start:"<<start<<endl;
                cout<<"end:"<<end<<endl;

            }else{
                break;
            }
        }
        return end-start+1;
    }
};

int main(){
    Solution s;
    s.minimumLength("cabaabac");

}
 