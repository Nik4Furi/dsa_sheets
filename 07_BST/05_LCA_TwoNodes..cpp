// function to find lowest common ancestor in b/w two nodes
Node *solve(Node *root, int mini, int maxi)
{
    // base case
    if (root->data == mini || root->data == maxi || (root->data > mini && root->data < maxi))
        return root;

    if (root->data > mini)
        return solve(root->left, mini, maxi);
    return solve(root->right, mini, maxi);
}
Node *LCA(Node *root, int n1, int n2)
{
    // code here
    int mini, maxi;

    if (n1 > n2)
        mini = n2, maxi = n1;
    else
        maxi = n2, mini = n1;

    return solve(root, mini, maxi);
}

// https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1