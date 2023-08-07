// https://practice.geeksforgeeks.org/problems/check-for-bst/

// Function is check a bst inorder
bool solve(Node *root, int low, int high)
{

    // base case
    if (root == NULL)
        return 1;

    if (root->data <= low || root->data >= high)
        return 0;

    bool left = solve(root->left, low, root->data);
    bool right = solve(root->right, root->data, high);

    return left && right;
}

// Function to check whether a Binary Tree is BST or not.
bool isBST(Node *root)
{
    // Your code here
    return solve(root, INT_MIN, INT_MAX);
}