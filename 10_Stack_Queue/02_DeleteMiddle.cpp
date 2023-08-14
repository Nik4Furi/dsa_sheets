// function to delete middle
void solve(stack<int> &s, int &n, int &cnt)
{

    // base case
    if (n / 2 == cnt)
    {
        s.pop();
        return;
    }

    int num = s.top();
    s.pop();

    cnt++;

    solve(s, n, cnt);

    s.push(num);
}
// Function to delete middle element of a stack.
void deleteMid(stack<int> &s, int sizeOfStack)
{
    // code here..
    int cnt = 0;

    solve(s, sizeOfStack, cnt);
}

// https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1