#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node()
        {
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
void createTail(Node *&head ,Node *&tail)
{

    Node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    tail = temp;
}

int getLength(Node *head)
{
    int count=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}


void insertAtHead(Node *&head,Node* &tail, int data)
{
    Node *newNode = new Node(data);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
    if(tail == NULL) {
        tail = newNode; // If tail is NULL, set it to the new head
    }
}
void insertTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}


void insertAtPos(Node *&head , Node *&tail , int data , int pos)
{
    if(pos <=1 || head == NULL) {
        insertAtHead(head, tail, data);

        return;
    }
    int length = getLength(head);
    if(pos >= length+1) {
        insertTail(head, tail, data);

        return;
    }
    Node *newNode = new Node(data);
    Node *curr = head;
    Node *prev = NULL;
    while(pos!=1)
    {
        prev = curr;
        curr = curr->next;
        pos--;
    }
    prev->next = newNode;
    newNode->next = curr;
}

void deleteNode(Node *&head , Node *&tail, int pos)
{
    if(head == NULL) return;
    if(pos==1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        if(head == NULL) {
            tail = NULL;
        }
    }
    else if(pos == getLength(head))
    {
        Node *temp=head;
        while(temp->next->next != NULL) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        tail = temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        while(pos != 1)
        {
            
            prev = curr;
            curr = curr->next; 
            pos--; 
        }
        prev->next = curr->next;
        delete curr;
    }


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
Node *reverseRec(Node* prev,Node *curr)
{
    if(curr==NULL) return prev;
    Node *next=curr->next;
    curr->next=prev;
    return reverseRec(curr,next);
}

int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertTail(head, tail, 40);
    insertTail(head, tail, 50);
    insertTail(head, tail, 60);
    insertAtPos(head, tail, 25, 3);

    cout<<"Linked List: ";
    printLL(head);

    int length = getLength(head);
    cout<<"Length of Linked List: "<<length<<endl;

    
    deleteNode(head, tail, 1);
    cout<<"After deleting, Linked List: ";
    printLL(head);
    deleteNode(head, tail, 4);

    cout<<"After deleting, Linked List: ";
    printLL(head);

    Node *revHead = reverseRec(NULL, head);
    cout<<"Reversed Linked List: ";
    printLL(revHead);
     


    return 0;
}