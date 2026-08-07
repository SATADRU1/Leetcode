class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        unordered_map<int, vector<int>>adj; // for tree traversal
        unordered_map<int, int>child_to_parent;


        for(int i=0;i<n;i++){

            int left = leftChild[i];
            int right = rightChild[i];


            if(left != -1){
                adj[i].push_back(left);
            if(child_to_parent.find(left) != child_to_parent.end()) //mane jodi child_to_parent age the theke left present thake tahole 
                return false ; //return false

                child_to_parent[left] = i ;
            }
            


            if(right != -1){
                adj[i].push_back(right);
            if(child_to_parent.find(right) != child_to_parent.end()) //mane jodi child_to_parent age the theke left present thake tahole 
                return false ; //return false

                child_to_parent[right] = i ;
            }
           
        }

        int root = -1;
        for(int i =0;i<n;i++){
            if( child_to_parent.find(i) ==  child_to_parent.end()){
                if(root != -1)
                    return false;
                root = i;
            }
        }
        if(root == -1)
            return false;

        //bfs function 
        int count = 1;
        queue<int>que;
        vector<bool>visited(n, false);
        vector<int>result;
        que.push(root);

        while(!que.empty()){
            int node = que.front();
            que.pop();

            for(int &child : adj[node]){
                if(!visited[child]){
                    que.push(child);
                    visited[child] = true;
                    count++;
                }
            }
        }

        return count == n;
    }
};