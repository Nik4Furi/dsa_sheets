// Function to remove duplicates from unsorted linked list.
Node *removeDuplicates(Node *head)
{
    // your code goes here
    if (head == NULL || head->next == NULL)
        return head;

    Node *curr = head;
    Node *prev = head;

    set<int> st;
    st.insert(head->data);

    while (curr != NULL)
    {
        prev = curr;
        curr = curr->next;

        if (curr == NULL)
            break;

        if (st.count(curr->data))
        {
            prev->next = curr->next;
            curr = prev;
        }
        else
            st.insert(curr->data);
    }
    st.clear();

    return head;
}

// https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1