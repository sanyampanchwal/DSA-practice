#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node *prev;
        Node()
        {
            this->next=NULL;
            this->prev=NULL;
        }
        Node(int data)
        {
            this->data=data;
            this->next=NULL;
            this->prev=NULL;
        }
        ~Node(){
            cout << "Destructor called for :" << this->data << endl;
        }
};
 void printLL(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int findLength(Node *head){
    int len=0;
    Node *temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void insertL(Node *&head, Node*&tail , int data)
{
    Node *newNode = new Node(data);
    if(head ==NULL)
    {
        head=newNode;
        tail =newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
     
}
void insertR(Node *&head, Node *&tail , int data)
{
    Node *temp = new Node(data);
    if(head==NULL)
    {
        head=temp;
        tail=temp;
        return;
    }
    tail ->next =temp;
    temp->prev=tail;
    tail=temp;
}

void insertPos(Node *&head, Node *&tail , int pos, int data)
{
    if(pos<=1)
    {
        insertL(head,tail,data);
        return;
    }
    int length = findLength(head);
    if(pos >= length+1) {
        insertR(head, tail, data);
        return;
    }
    Node *newNode = new Node(data);
    Node *prev =NULL;
    Node *curr = head;
    while(pos!=1)
    {
        pos--;
        prev=curr;
        curr=curr->next;
    }
    prev->next=newNode;
    newNode->next=prev;
    curr->prev=newNode;
    newNode->next=curr;


}
void deleteNode(Node *&head, Node*&tail, int pos)
{
    if(head ==NULL)
    {
        cout<<"Linked list is empty ,cant delete"<<endl;
        return;
    }
    if(head==tail)
    {
        Node *temp = head;
        delete temp;
        head=NULL;
        tail=NULL;
        return;
    }

    if(pos == 1)
    {
        Node *temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
    }
    else if(pos == findLength(head))
    {
        Node *temp = tail;
        tail=tail->prev;
        tail->next=NULL;
        temp->prev=NULL;
        delete temp;
    }
    else{
        Node *curr=head;
        Node *prev=NULL;
        while(pos!=1)
        {
            prev=curr;
            curr=curr->next;
            pos--;
        }
        Node *next = curr->next;
        prev->next=next;
        curr->prev=NULL;
        next->prev=prev;
        curr->next=NULL;
        delete curr;
    }
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    insertR(head, tail, 10);
    insertR(head, tail, 20);
    insertR(head, tail, 30);
    insertR(head, tail, 40);
    insertL(head,tail,5);
    insertPos(head, tail, 3, 15);
    printLL(head);
    deleteNode(head,tail,3);
    printLL(head);
    deleteNode(head,tail,1);
    printLL(head);
    deleteNode(head,tail,findLength(head));
    printLL(head);

return 0;
}