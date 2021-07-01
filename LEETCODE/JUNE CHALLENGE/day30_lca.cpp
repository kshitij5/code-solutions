#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        // Base case
        if(root == NULL) {
            return NULL;
        }
        
        // If either p or q matches with root, report
        // the presence by returning that root as we don't need
        // to traverse any further
        if(root == p || root == q) {
            return root;
        }

        // Look for keys in left and right subtrees
        TreeNode *left = lowestCommonAncestor(root->left, p, q);
        TreeNode *right = lowestCommonAncestor(root->right, p, q);

        // If both of the above calls return Non-NULL, then one key
        // is present in once subtree and other is present in other,
        // So this node is the LCA
        if(left != NULL && right != NULL) {
            return root;
        }

        // Otherwise check if either left subtree or right subtree is LCA itself
        if(right != NULL) {
            return right;
        }

        if(left != NULL) {
            return left;
        }

        // else return NULL, that never happens as per given constraints
        return NULL;
    }

    // This solution fails if any of the nodes are not present in binary tree,
    // This can be easily fixed by passing two boolean variables to check if 
    // both the nodes are present. But since per the given constraints, 
    // both the nodes are always present
};

// TC - O(n)
// SC - O(n)