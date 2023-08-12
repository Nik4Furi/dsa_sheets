// https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1

class Solution
{
public:
    Node *reverse(Node *head)
    {
        Node *curr = head;
        Node *prev = NULL;
        Node *next = NULL;
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    // Function to add two numbers represented by linked list.
    struct Node *addTwoLists(struct Node *first, struct Node *second)
    {
        // code here
        first = reverse(first);
        second = reverse(second);

        struct Node *dummyHead = new struct Node(0);
        struct Node *tail = dummyHead;

        int carry = 0;

        while (first != NULL || second != NULL || carry != 0)
        {
            int sum = 0;
            if (first != NULL)
            {
                sum += first->data;
                first = first->next;
            }
            if (second != NULL)
            {
                sum += second->data;
                second = second->next;
            }

            sum += carry;
            carry = sum / 10;
            int digit = sum % 10;

            struct Node *newNode = new struct Node(digit);
            tail->next = newNode;
            tail = tail->next;
        }

        struct Node *result = dummyHead->next;
        delete (dummyHead);
        result = reverse(result);
    }
};