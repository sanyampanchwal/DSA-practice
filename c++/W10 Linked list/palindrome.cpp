#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

class Node {
    public:
        int data;
        Node *next;
        Node(){
            this->next=NULL;
        }
        Node(int data)
        {
            this->data=data;
            this->next=NULL;
        }
        ~Node(){
            cout << "Destructor called for :" << this->data << endl;
        }

};

void insertR(Node *&head,int data)
{
    Node *temp = new Node(data);
    if(head == NULL)
    {
        head=temp;
        return;
    }
    Node *curr =head;
    while(curr->next!=NULL) curr=curr->next;
    curr->next=temp;

}
int len(Node *&head)
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
Node *mid(Node *&head)
{
    Node *slow= head;
    Node *fast= head;
    while(fast!=NULL && fast->next!=NULL )
    {
        slow = slow->next;
        fast=fast->next->next;
    }
    return slow;
}
Node *reverseLL(Node *&head)
{
    Node *prev =NULL;
    Node *curr= head;
    Node *next=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
bool isPalindrome(Node *&head)
{
    if(head == NULL || head->next==NULL) return true;
    Node *midnode = mid(head); //2nd half
    Node *temp=head;  //1st half
    while(temp->next!=midnode) temp=temp->next;
    temp->next = NULL;
    Node *reversed = reverseLL(midnode);
    Node *head1=head;
    Node *head2=reversed;
    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data != head2->data) return false;
        head1=head1->next;
        head2=head2->next;
    }
    return true;

}
int main()
{
    Node *head = NULL;
    insertR(head,1);
    insertR(head,2);
    insertR(head,3);
    // insertR(head,9);
    // insertR(head,1);  
    insertR(head,3);
    insertR(head,2);
    insertR(head,1);
    bool ans = isPalindrome(head);
    if(ans) cout<<"Palindrome"<<endl;
    else cout<<"Not Palindrome"<<endl;

    return 0;
}
