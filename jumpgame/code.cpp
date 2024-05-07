#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();

        vector<bool> possible(n, false);
        possible[n-1]=(nums[n-1]!=0);

        for(int i=nums.size()-2;i>=0;i--){
            cout<<"possible:"<<possible[i+1]<<endl;
            cout<<"i:"<<i<<endl;
            int j=nums[i];
            if(j==0)continue;
            while(j--){
                cout<<"j:"<<i<<endl;
                if(((i+j)==(n-1))||possible[i+1]||((i+j<n)&&possible[i+j])){
                    possible[i]=true;
                    break;
                }
            }
        }
        return possible[0];
    }
};

int main(){
    vector<int>vi;

    vi.push_back(3);
    vi.push_back(2);
    vi.push_back(1);
    vi.push_back(0);
    vi.push_back(4);

    Solution s;

    bool ans=s.canJump(vi);
    cout<<ans<<endl;
    
}