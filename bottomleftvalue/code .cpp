#include <bits/stdc++.h>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

 class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        // if (root == nullptr) return NULL;

        queue<TreeNode*> q;
        q.push(root);
        int val;
        int ans;

        while (!q.empty()) {

            int levelSize = q.size();

            for (int i = 0; i < levelSize; ++i) {

                TreeNode* current = q.front();
                q.pop();

                if(i==0){
                    ans=current->val;
                }
                if (current->left != nullptr)
                    q.push(current->left);
                if (current->right != nullptr)
                    q.push(current->right);
                
            }
        }

        return ans;
    }
};