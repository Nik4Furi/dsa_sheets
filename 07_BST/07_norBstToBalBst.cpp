// https://practice.geeksforgeeks.org/problems/normal-bst-to-balanced-bst/1

// Function to find inordered of a bst
void findInordeered(Node *root, vector<int> &inordered)
{
    // base case
    if (root == NULL)
        return;

    if (root->left)
        findInordeered(root->left, inordered);

    inordered.push_back(root->data);

    if (root->right)
        findInordeered(root->right, inordered);
}

// Function to build the bst
Node *inorderToBst(int start, int end, vector<int> inorder)
{

    // base case
    if (start > end)
        return NULL;

    int mid = start + (end - start) / 2;
    Node *root = new Node(inorder[mid]);

    root->left = inorderToBst(start, mid - 1, inorder);
    root->right = inorderToBst(mid + 1, end, inorder);

    return root;
}
// function should return root of the modified BST
Node *buildBalancedTree(Node *root)
{
    // Code here
    if (root == NULL)
        return NULL;

    if (root->left == NULL && root->right == NULL)
        return root;

    // 1. Find inorder of bst
    vector<int> inordered;

    findInordeered(root, inordered);

    // Call function to create bst
    return inorderToBst(0, inordered.size() - 1, inordered);
}