Node *reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *curr = head;
    Node *prev = NULL;
    Node *forw = NULL;
    while (curr != NULL)
    {
        forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
    }
    return prev;
}

public:
Node *addOne(Node *head)
{
    Node *rev = reverse(head);
    Node *temp = rev;
    int carry = 1;
    while (temp != NULL)
    {
        int c = temp->data;
        temp->data = (c + carry) % 10;
        carry = (c + carry) / 10;
        temp = temp->next;
    }
    Node *fi = reverse(rev);
    if (carry == 1)
    {
        Node *first = new Node(1);
        first->next = fi;
        return first;
    }
    return fi;
}

// https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1