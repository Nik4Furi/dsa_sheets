// https://practice.geeksforgeeks.org/problems/binary-tree-to-bst/1

// 1. INorder of tree
void inorder(vector<int> &ans, Node *root)
{
    // base case
    if (root == NULL)
        return;

    if (root->left)
        inorder(ans, root->left);
    ans.push_back(root->data);

    if (root->right)
        inorder(ans, root->right);
}
// 2. Placing ele in root
void placeEle(Node *root, vector<int> ans, int &index)
{
    // base case
    if (root == NULL)
        return;

    // if(index == ans.size()) return;

    if (root->left)
        placeEle(root->left, ans, index);

    root->data = ans[index++];

    if (root->right)
        placeEle(root->right, ans, index);
}

// Return the root of the generated BST
Node *binaryTreeToBST(Node *root)
{
    // Your code goes here

    // base case
    if (root == NULL)
        return NULL;

    // 1. Find inorder of bt
    vector<int> ans;
    inorder(ans, root);

    // 2. sort the inorder
    sort(ans.begin(), ans.end());

    // 3. now start to place the inorder ele in bt
    int index = 0;
    placeEle(root, ans, index);

    return root;
}