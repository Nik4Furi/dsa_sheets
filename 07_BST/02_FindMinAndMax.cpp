//Function to find minimum value from bst
int minValue(Node* root) {
    // Code here
    
    if(root == NULL) return -1;
   
    if(root->left == NULL) return root->data;
    
    minValue(root->left);
    
    
}

// https://practice.geeksforgeeks.org/problems/minimum-element-in-bst/1