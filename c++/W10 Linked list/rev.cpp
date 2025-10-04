#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

class Node{
    public :
        int data;
        Node *next;
        Node()
        {
            this->next=NULL;
        }
        Node(int data)
        {
            this->data=data;
            this->next = NULL;

        }
};

void printLL(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int getLength(Node *head)
{
    int l=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
}

void insertR(Node *&head , int data)
{
    Node *newNode = new Node(data);
    if(head == NULL) {
        head = newNode;
        return;
    }
    Node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void reverseLL(Node *&head)
{ 
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head = prev;
}
Node *mid(Node* head)
{
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

Node *cycle(Node *head)
{
    Node *slow=head;
    Node *fast=head;
    int flag=0;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            flag=1;
            break;
        }
    }
    slow = head;
    if(flag==0) return NULL;
    while(slow!=fast)
    {
        slow = slow->next;
        fast = fast->next;   
    }
    return slow;

}

Node *merge(Node *&h1,Node *&h2)
{
    if(h1==NULL || h2==NULL)
    {
        return h1==NULL?h2:h1;
    }
    if(h2->data<=h1->data)
    {
        h2->next = merge(h1,h2->next);
        return h2;
    }
    else
    {
        h2->next = merge(h1->next,h2);
        return h1;
    }
}
int main(){
    // Node *head = new Node(1);
    // insertR(head, 2);
    // insertR(head, 3);
    // insertR(head, 4);
    // insertR(head, 5);
    // printLL(head);
    // reverseLL(head);
    // printLL(head);
    // Node *midNode = mid(head);
    // cout<<midNode->data<<endl;
    // Node *cycleNode = cycle(head);
    // cout<<cycleNode<<endl; // If there is no cycle, it will print 0

    Node *h1 = new Node(1);
    insertR(h1,2);
    insertR(h1,4);

    Node *h2 = new Node(1);
    insertR(h2,3);
    insertR(h2,5);

    Node *h3 = merge(h1,h2);
    printLL(h3);
    return 0;
}

   