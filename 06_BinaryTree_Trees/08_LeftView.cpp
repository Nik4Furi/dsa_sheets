// https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1

// Function to return a list containing elements of left view of the binary tree.
void solve(Node *root, vector<int> &ans, int lvl)
{
    // base case
    if (root == NULL)
        return;

    if (lvl == ans.size())
        ans.push_back(root->data);

    solve(root->left, ans, lvl + 1);
    solve(root->right, ans, lvl + 1);
}
vector<int> leftView(Node *root)
{
    // Your code here
    if (root == NULL)
        return {};

    if (root->left == NULL && root->right == NULL)
        return {root->data};

    vector<int> ans;

    solve(root, ans, 0);

    return ans;
}
