#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int start=-1;
        int result[nums.size()];
        vector<int>vi;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                start=i;
                cout<<"i="<<i<<endl;
                continue;
            }else{
                cout<<"ei="<<i<<endl;
                cout<<"s="<<start<<endl;
                int pow1=nums[i]*nums[i];
                if(start>=0){
                    int pow2=nums[start]*nums[start];
                    if(pow1<pow2){
                        vi.push_back(pow1);
                    }else{
                        vi.push_back(pow2);
                        i--;
                        start--;
                    }
                }else{
                    vi.push_back(pow1);
                }

            }
        }
        while(start>=0){
            vi.push_back(nums[start]*nums[start]);
            start--; 
        }
        for(int i=0;i<vi.size();i++){
            cout<<vi[i]<<" ";
        }
        return vi;
        cout<<endl;
    }
};

int main(){
    vector<int>vu;
    vu.push_back(-7);
    vu.push_back(-3);

    vu.push_back(2);

    vu.push_back(3);

    vu.push_back(11);
    Solution s;
    s.sortedSquares(vu);


}