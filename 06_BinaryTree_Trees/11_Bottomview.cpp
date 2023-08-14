
vector<int> bottomView(Node *root)
{
    // Your Code Here
    vector<int> ans;
    queue<pair<Node *, int>> q; // node and line in queue
    map<int, int> mpp;          // line and node in map
    q.push({root, 0});
    while (!q.empty())
    {
        pair<Node *, int> temp = q.front();
        q.pop();
        Node *node = temp.first;
        int hd = temp.second;

        mpp[hd] = node->data;
        if (node->left)
        {
            q.push({node->left, hd - 1});
        }
        if (node->right)
        {
            q.push({node->right, hd + 1});
        }
    }
    for (auto it : mpp)
    {
        ans.push_back(it.second);
    }
    return ans;
}

// https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1