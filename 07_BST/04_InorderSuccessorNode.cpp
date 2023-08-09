pair<Node *, Node *> myFun(Node *root)
{
    if (root == NULL)
    {
        return {NULL, NULL};
    }
    pair<Node *, Node *> l = myFun(root->left);
    if (l.second != NULL)
    {
        l.second->next = root;
    }
    pair<Node *, Node *> r = myFun(root->right);
    root->next = r.first;

    pair<Node *, Node *> ans = {root, root};
    if (l.first != NULL)
    {
        ans.first = l.first;
    }
    if (r.second != NULL)
    {
        ans.second = r.second;
    }
    return ans;
}

void populateNext(Node *root)
{
    // code here
    myFun(root);
}

// https://practice.geeksforgeeks.org/problems/populate-inorder-successor-for-all-nodes/1