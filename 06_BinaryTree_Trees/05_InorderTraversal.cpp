// https://practice.geeksforgeeks.org/problems/inorder-traversal/1

//------------------------------------- Recursive ----------------------------------X
// Function to write inorder
void solve(Node *root, vector<int> &ans)
{
    // base case
    if (root == NULL)
        return;

    if (root->left != NULL)
        solve(root->left, ans);

    ans.push_back(root->data);

    if (root->right != NULL)
        solve(root->right, ans);
}
// Function to return a list containing the inorder traversal of the tree.
vector<int> inOrder(Node *root)
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

//-------------------------------------- Iterative ------------------------------X
// Function to return a list containing the inorder traversal of the tree.
vector<int> inOrder(Node *root)
{
    // Your code here

    // base case
    if (root == NULL)
        return {};

    if (root->left == NULL && root->right == NULL)
        return {root->data};

    stack<Node *> st;

    // Node* curr = root;

    vector<int> ans;

    while (root || !st.empty())
    {

        if (root != NULL)
        {
            st.push(root);
            root = root->left;
        }

        else
        {
            root = st.top();
            st.pop();
            ans.push_back(root->data);

            root = root->right;
        }
    }

    return ans;
}