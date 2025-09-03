//TC=O(n) each node is visited only once
//SC: in skewed tree-> O(1) best case
//   : in balanced BT->O(n/2) worst case
int maxDepth(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    //level order traversal
    queue<TreeNode*> q;
    q.push(root);

    int level=0;
    while(!q.empty()){
        int size=q.size();
        while(size){
            TreeNode* node=q.front();
            q.pop();
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        level++;
    }
    return level;
}