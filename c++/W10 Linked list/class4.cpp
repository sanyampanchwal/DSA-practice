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

Node *cycle(Node *&head)
{
    Node *slow = head;
    Node *fast = head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            break;
        }
    }
    if(fast==NULL || fast->next==NULL) return NULL;
    slow = head;
    while(slow!=fast)
    {
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}
void removeLoop(Node *&head)
{
    Node *slow = head;
    Node *fast = head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            break;
        }
    }
    if(fast==NULL || fast->next==NULL) return;
    slow = head;
    while(slow!=fast)
    {
        slow=slow->next;
        fast=fast->next;
    }
    //removal of looop
    Node *temp=slow;
    while(temp->next!=slow)
    {
        temp=temp->next;
    }
    temp->next=NULL;
}

// add 1
void reverse(Node *&head)
{
    Node *prev=NULL;
    Node *curr=head;
    Node *next=NULL;
    while(curr!=NULL)
    {
        next = curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}
void add1(Node *&head)
{
    reverse(head);
    Node *temp=head;
    int carry=1;
    while(temp!=NULL &&carry>0)
    {
        int sum=temp->data +carry;
        int digit=sum%10;
        carry=sum/10;
        // cout<<"c :"<<carry<<endl; 
        temp->data=digit;
        if(temp->next==NULL && carry>0)
        {
            Node *newNode = new Node(carry);
            temp->next=newNode;
            newNode->next=NULL;
            break;
        }
        temp=temp->next;
    }
    reverse(head);
}

Node* addTwoNumbers(Node* l1, Node* l2) {
    Node* t1 = l1;
    Node* t2 = l2;
    Node* result = new Node(0);  // dummy head
    Node* curr = result;
    int carry = 0;

    while (t1 || t2 || carry > 0) {
        int sum = carry;
        if (t1) {
            sum += t1->data;
            t1 = t1->next;
        }
        if (t2) {
            sum += t2->data;
            t2 = t2->next;
        }

        int num = sum % 10;
        carry = sum / 10;

        curr->next = new Node(num);
        curr = curr->next;
    }

    return result->next; // skip dummy
}

// Reverse k node 
// Helper to compute length of list
int len(Node* head) {
    int cnt = 0;
    while (head) {
        cnt++;
        head = head->next;
    }
    return cnt;
}

Node* reverseKGroup(Node* head, int k) {
    if (head == NULL || head->next == NULL) return head;
    if (len(head) < k) return head;

    int pos = 0;
    Node* prev = NULL;
    Node* curr = head;
    Node* next = curr->next;

    // Reverse k nodes
    while (pos < k) {
        pos++;
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    // Recurse for the remaining list
    if (next) {
        Node* recAns = reverseKGroup(next, k);
        head->next = recAns;
    }

    return prev; // new head
}

// Remove duplicate 
Node* deleteDuplicates(Node* head) {
        if(!head || !head->next) return head;
        Node *temp  = head;
  
        while(temp->next !=NULL)
        {
            if(temp->data == temp->next->data)
            {
                Node* dup = temp ->next;
                temp->next=temp->next->next;
                delete dup;
            }
            else
            temp = temp->next;
        }
        return head;
    }
int main(){
    Node *head = new Node(9);
    insertR(head, 9);
    insertR(head, 9);
    insertR(head, 9);
    insertR(head, 9);
    printLL(head);
    //loop
    // head->next->next->next->next->next=head->next->next; //cycle at 3
    // Node *cycleNode = cycle(head);
    // if(cycleNode!=NULL) cout<<"Cycle at "<<cycleNode->data<<endl;
    // else cout<<"No cycle"<<endl;

    add1(head);
    printLL(head);

    return 0;
}