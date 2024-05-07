#include<bits/stdc++.h>
using namespace std;


void printMatrix(const vector<vector<int>>& matrix) {
    int rows = matrix.size();
    if (rows == 0) {
        cout << "Matrix is empty." << endl;
        return;
    }
    int cols = matrix[0].size();

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"--------------------"<<endl;
}

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int s1 = text1.size();
        int s2 = text2.size();
        vector<vector<int>> dp(s1 + 1, vector<int>(s2 + 1, 0));

        dp[1][1] = text1[0] == text2[0] ? 1 : 0;
        for (int i = 0 ; i < s1 ; ++i) {
            for (int j = 0 ; j < s2 ; ++j) {
                if (i == 0 && j == 0) continue;

                if (text1[i] == text2[j]) {
                    dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j] + 1);
                } else {
                    dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
                }
                printMatrix(dp);
            }
        }
        return dp.back().back();
    }
};

int main(){
    Solution s;
    s.longestCommonSubsequence("abcde","ace");
}
