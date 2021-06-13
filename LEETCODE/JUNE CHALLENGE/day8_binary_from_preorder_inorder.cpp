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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder){
        if(preorder.size() == 1){
            TreeNode* root = new TreeNode(preorder[0]);
             return root;
        }
        return genTree(preorder, inorder, 0, preorder.size()-1);
    }

private:
    TreeNode* genTree(vector<int>& preorder, vector<int>& inorder, int start, int end) {
        static int preIndex = 0;

        if(start>end) {
            return NULL;
        }

        TreeNode* root = new TreeNode(preorder[preIndex]);

        if(start==end) {
            preIndex++;
            return root;
        }

        int j = 0;
        for(int i=start; i<end; i++) {
            if(preorder[preIndex]==inorder[i]) {
                j = i;
                break;
            }
        }

        preIndex++;
        root->left = genTree(preorder, inorder, start, j-1);
        root->right = genTree(preorder, inorder, j+1, end);

        return root;
    }
};