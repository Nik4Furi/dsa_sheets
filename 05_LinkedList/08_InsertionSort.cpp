   Node *newh=NULL;
    Node *newt=NULL;
    if(head1==NULL && head2==NULL)return NULL;
    else if(head1!=NULL && head2==NULL)return head1;
    else if(head1==NULL && head2!=NULL)return head2;
    else{
        Node *temp1=head1;
        Node *temp2=head2;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->data<temp2->data){
                temp1=temp1->next;
            }
            else if(temp1->data>temp2->data){
                temp2=temp2->next;
            }
            else{
                if(newh==NULL){
                    newh=newt=new Node(temp1->data);
                }
                else{
                    newt->next=new Node(temp1->data);
                    newt=newt->next;
                }
                temp1=temp1->next;
                temp2=temp2->next;
            }
        }
        return newh;
    }

    // https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1