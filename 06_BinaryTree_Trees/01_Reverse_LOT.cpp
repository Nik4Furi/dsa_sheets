vector<int> reverseLevelOrder(Node *root)
{
    // code here
    
    //base case
    if(root == NULL) return {};
    
    queue<Node*> q;
    vector<int> ans;
    q.push(root);
    
    while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        
        ans.push_back(curr->data);
        
        if(curr->right != NULL) q.push(curr->right);
        if(curr->left != NULL) q.push(curr->left);
    }
    
    reverse(ans.begin(),ans.end());
    
    return ans;
}

// https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1