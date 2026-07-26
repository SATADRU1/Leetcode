class Solution {
public:
    int maxDepth(TreeNode* root) {
        // corner case
        if(root == nullptr)
            return 0;

        //queue declaration 
        queue<TreeNode*>myQueue;
        myQueue.push(root);
        int numOfLevel = 0;

        //jodi queue null na hoy then node count at queue should be = queue size ar num of level increase hobe 
        while(!myQueue.empty()){
            int nodeCountAtLevel = myQueue.size();
            numOfLevel++;

            //jokhon node count at level > 0 hobe tokhon queue the node dequeue korte hobe 
            while(nodeCountAtLevel > 0){
                TreeNode *currNode = myQueue.front();
                myQueue.pop();

                //add left child if exist 
                if(currNode->left != nullptr)
                    myQueue.push(currNode->left);
                //add right child if exixt
                if(currNode->right != nullptr){
                    myQueue.push(currNode->right);
                }
                nodeCountAtLevel--;
            }
        }    
        return numOfLevel;   
    }
};