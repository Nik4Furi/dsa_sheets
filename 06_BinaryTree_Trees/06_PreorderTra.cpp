// Function to return a list containing the preorder traversal of the tree.
void solve(Node *root, vector<int> &ans)
{
    // base case
    if (root == NULL)
        return;

    ans.push_back(root->data);

    if (root->left)
        solve(root->left, ans);
    if (root->right)
        solve(root->right, ans);
}
vector<int> preorder(Node *root)
{
    // Your code here
    // base case
    if (root == NULL)
        return {};

    if (root->left == NULL && root->right == NULL)
        return {root->data};

    vector<int> ans;

    solve(root, ans);

    return ans;
}

// https://practice.geeksforgeeks.org/problems/preorder-traversal/1

//-------------------------- Iterative ---------------------------------X
// Function to return a list containing the preorder traversal of the tree.
vector<int> preorder(Node *root)
{
    // Your code here

    // base case
    if (root == NULL)
        return {};

    if (root->left == NULL && root->right == NULL)
        return {root->data};

    stack<Node *> st;
    vector<int> ans;
    st.push(root);

    while (!st.empty())
    {
        Node *curr = st.top();
        st.pop();

        ans.push_back(curr->data);

        if (curr->right)
        {
            st.push(curr->right);
        }
        if (curr->left)
        {
            st.push(curr->left);
        }
    }

    return ans;
}