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
class Solution {
public:
     
     int calculateDiameter(TreeNode* node,int & maxDiameter){
        if(node==NULL)return 0;
        int leftHight=calculateDiameter(node->left,maxDiameter);
        int rightHight=calculateDiameter(node->right,maxDiameter);
        maxDiameter=max( maxDiameter, leftHight+rightHight);
        return 1+max(leftHight,rightHight);
        


     }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDiameter=0;
        calculateDiameter(root,maxDiameter);
        return maxDiameter;
        
    }
};