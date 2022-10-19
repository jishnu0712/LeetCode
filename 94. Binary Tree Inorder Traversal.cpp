/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <iostream>
#include <vector>
 
using namespace std;
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> arr;
        inorder(root, arr);
        return arr;        
    }
private:
    void inorder(TreeNode* root, vector<int>& arr) {
        if( !root ){
            return;
        }
        inorder(root->left, arr);
        arr.push_back(root->val);
        inorder(root->right, arr);        
    }
};