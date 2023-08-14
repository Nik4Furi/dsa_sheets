// https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1

// Function to return a list containing elements of right view of the binary tree.
void solve(Node *root, vector<int> &ans, int lvl)
{
    // base case
    if (root == NULL)
        return;

    if (lvl == ans.size())
        ans.push_back(root->data);

    solve(root->right, ans, lvl + 1);
    solve(root->left, ans, lvl + 1);
}

// Function to return list containing elements of right view of binary tree.
vector<int> rightView(Node *root)
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