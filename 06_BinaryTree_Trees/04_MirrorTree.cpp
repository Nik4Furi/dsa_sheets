// Function to convert a binary tree into its mirror tree.
void mirror(Node *node)
{
    // code here

    // base case
    if (node == NULL || (node->left == NULL && node->right == NULL))
    {
        return;
    }

    // Recursively convert the left subtree to its mirror.
    mirror(node->left);

    // Recursively convert the right subtree to its mirror.
    mirror(node->right);

    // Swap the left and right child nodes to create the mirror tree.
    Node *temp = node->left;
    node->left = node->right;
    node->right = temp;
}

// https://practice.geeksforgeeks.org/problems/mirror-tree/1