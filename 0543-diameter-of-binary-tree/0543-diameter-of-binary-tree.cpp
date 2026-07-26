class Solution {
public:
    
    int solve(TreeNode* root, int& result){

        // we alwasy have to write base case / corner case in reccursion calling
        if(root == NULL)
            return NULL;

        int left= solve(root->left , result);
        int right= solve(root->right , result);

        result = max(result , left+right);

        return max(left , right)+1;
    }

    int diameterOfBinaryTree(TreeNode* root) {

     //corner case
     if(root == NULL)
        return NULL;

    int result = 0;

    solve(root , result);

    return result;   
    }
};