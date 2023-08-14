// https://practice.geeksforgeeks.org/problems/postorder-traversal/1

//Function to return a list containing the postorder traversal of the tree.
void solve(Node* root,vector<int> &ans){
    //base case
    if(root == NULL) return;
    
    if(root->left) 
        solve(root->left,ans);
    if(root->right)
        solve(root->right,ans);
    ans.push_back(root->data);
}
vector <int> postOrder(Node* root)
{
  // Your code here
  //base case
  if(root == NULL) return {};
  
  if(root->left == NULL && root->right== NULL) return {root->data};
  
  vector<int> ans;
  
  solve(root,ans);
  
  return ans;
}

//----------------- Iterative----------------------------------------X

//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
  // Your code here
  if(root == NULL) return {};
  
  if(root->left ==  NULL && root->right== NULL) return {root->data};
  
  stack<Node*>st;
  st.push(root);
  
  stack<int> temp;
  
  vector<int> ans;
  
  while(!st.empty()){
      Node* curr = st.top();
      st.pop();
      temp.push(curr->data);
      
         
      if(curr->left)
        st.push(curr->left);
      
     if(curr->right)
        st.push(curr->right);
   
  }
  
  while(!temp.empty()){
      ans.push_back(temp.top());
      temp.pop();
  }
  
  return ans;
}