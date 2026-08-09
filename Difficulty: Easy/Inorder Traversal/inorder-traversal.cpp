/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    
    void dfs(Node* root, vector<int> &result){
        if(root==nullptr)
            return;
        dfs(root->left, result); //left
        result.push_back(root->data); //root er value        preOrder(left, root, right)
        dfs(root->right, result); // right 
        
    }
    
    vector<int> inOrder(Node* root) {
        // code here
        vector<int>result;
        dfs(root, result);
        return result;
    }
};