// https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1

// Function to return the diameter of a Binary Tree.
int ans = 0;
// Function to find height with modification
int height(Node *root)
{
    // base case
    if (root == NULL)
        return 0;

    // Recursive call
    int left = height(root->left);
    int right = height(root->right);

    ans = max(ans, 1 + left + right);

    return 1 + max(left, right);
}
int diameter(Node *root)
{
    // Your code here
    int he = height(root);

    return ans;
}