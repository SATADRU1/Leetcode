class Solution {
    
    int maxSum ;

    //function declaration
    int solve(TreeNode* root){

        //we always have to write base case
        if(root == NULL)
            return 0;

        int l = solve(root->left);
        int r = solve(root->right);

        int upore_peye_gechi = l+r+root->val;
        int jekono_ekta = max(l , r) + root->val;
        int sudhu_root = root->val;

        maxSum = max({maxSum, upore_peye_gechi, jekono_ekta, sudhu_root});

        return max(jekono_ekta,sudhu_root);
    }
public:
    int maxPathSum(TreeNode* root) {

        maxSum = INT_MIN;
        //reccursion calling 
        solve(root);

        return maxSum;
    }
};