

class Solution {
public:
    TreeNode* bstFromPreorder(std::vector<int>& preorder) {
        int index = 0;
        return build(preorder, index, INT_MAX);
    }
    
private:
    TreeNode* build(const std::vector<int>& preorder, int& index, int bound) {
       
        if (index >= preorder.size() || preorder[index] > bound) {
            return nullptr;
        }
         int val = preorder[index++];
        TreeNode* root = new TreeNode(val);
        root->left = build(preorder, index, val);
        root->right = build(preorder, index, bound);
        return root;
    }
};