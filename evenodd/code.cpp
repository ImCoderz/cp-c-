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

TreeNode* constructTree1() {
    // Level order traversal to construct the tree
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(10);
    root->right = new TreeNode(4);
    root->left->left = new TreeNode(3);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);

    root->left->left->left = new TreeNode(12);
    root->left->left->right = new TreeNode(8);

    root->right->left->left = new TreeNode(6);
    root->right->right->right = new TreeNode(2);

    return root;
}

TreeNode* constructTree() {
    // Level order traversal to construct the tree
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(2);

    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(3);

    root->right->left = new TreeNode(7);

    return root;
}

 class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        if (root == nullptr) return false;

        queue<TreeNode*> q;
        q.push(root);
        int ans;
        bool res=true;
        bool isEven=false;


        while (!q.empty()&&res) {

            int levelSize = q.size();
            bool isEven=!isEven;
            int ans = q.front()->val;           
         
            for (int i = 0; i < levelSize; ++i) {

                TreeNode* current = q.front();
                q.pop();
                if(i!=0 && current->val==ans){
                    res=false;
                    break;
                }

                cout<<current->val<<endl;
                cout<<"i="<<i<<"ans:"<<ans<<"  "<<"val:"<<current->val<<endl;

                if(isEven){
                    if(ans>current->val || current->val%2==0){
                        cout<<"here even"<<ans<<"   "<<current->val<<endl;
                        res=false;

                        break;
                    }
                }else{
                    if(ans<current->val || current->val%2!=0){
                        cout<<"here odd"<<ans<<"   "<<current->val<<endl;
                        res=false;
                        break;
                    }   
                }

        
                ans=current->val;
                
                if (current->left != nullptr)
                    q.push(current->left);
                if (current->right != nullptr)
                    q.push(current->right);
            }
        }

        return res;
    }
};


int main(){
    TreeNode* t=constructTree();
    Solution s;
    s.isEvenOddTree(t);
}