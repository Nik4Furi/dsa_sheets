// https://practice.geeksforgeeks.org/problems/44bb5287b98797782162ffe3d2201621f6343a4b/1

int findFirstNode(Node *head)
{
    // your code here

    // 1. Find loop
    if (head == NULL || head->next == NULL)
        return -1;

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            break;
    }

    if (slow != fast)
        return -1;

    Node *temp = head;

    while (temp != slow)
    {
        temp = temp->next;
        slow = slow->next;
    }
    return temp->data;
}