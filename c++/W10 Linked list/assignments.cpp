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

//1
Node* linkdelete(Node* head, int n, int m) {
        // code here
        Node *curr=head;
        if(!head) return head;
        
        while(curr)
        {
            for(int i=0 ; i<m-1 &&curr ; i++)
            {
                curr=curr->next;
            }
            if(!curr) break;
            Node *temp = curr->next;
            for(int i=0;i<n && temp;i++)
            {
                Node *ts = temp;
                temp=temp->next;
                delete ts;
            }
            curr->next=temp;
            curr=curr->next;
        }
        return head;
}
//2
ListNode* mergeTwoLists(ListNode* h1, ListNode* h2) {
        if(!h1 || !h2) return h1?h1:h2;
        if(h1->val<=h2->val)
        {
            h1->next=mergeTwoLists(h1->next,h2);
            return h1;
        }
        else{
            h2->next=mergeTwoLists(h1,h2->next);
            return h2;
        }
}

//3
int getLen(SinglyLinkedListNode* head)
{
    int len=0;
    SinglyLinkedListNode* temp = head;
    while(temp->next){
        len++;
        temp=temp->next;
    }
    return len;
}

/*
 * Complete the 'getNode' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER positionFromTail
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    int llen = getLen(llist);
    int i = llen - positionFromTail;
    SinglyLinkedListNode *temp=llist;
    while(i!=0)
    {
        i--;
        temp=temp->next;
    }
    return temp->data;
}



// 4
//hashmap
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode* ,int>hashh;
        ListNode* t1=headA;
        ListNode* t2=headB;
        while(t1 || t2)
        {
            if(t1)
            {
                if(hashh[t1]==1) return t1;
                hashh[t1]++;
                t1=t1->next;
            }
            if(t2)
            {
                if(hashh[t2]==1) return t2;
                hashh[t2]++;
                t2=t2->next;
            }
        }
        return NULL;
    }

// 4 by 2 ptr
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //step 1: to find length of both LL

        int lenA =0 , lenB =0;

        ListNode* temp = headA;
      
        while(temp != NULL)
        {
            lenA++;
            temp = temp->next;
        }
        temp = headB;
         while(temp != NULL)
        {
            lenB++;
            temp = temp->next;
        }

        //step 2: diff..

        int diff = abs(lenA - lenB);

        //step 3: compare both LL..

        if(lenA > lenB)
        {
            //it means ll ist is greater in length
            while(diff--)
            {
                headA = headA->next;
            }

        }
        else
        {
            while(diff--)
            {
                headB = headB->next;
            }

        }
      //step 4: here we r at same position, so simply move forward one step and compare if they r equal or not..

      while(headA != NULL && headB != NULL)
      {
         if(headA == headB)
         {
            return headA;
         }

         //step 5: just move ahead one step at a time..
         headA = headA->next;
         headB = headB->next;
      }
    //step 6: if we are here, it means no intersection occurs..
    return NULL;
    }

//5 merge sort LL
ListNode* merge(ListNode* &h1 ,ListNode* &h2)
    {
        if(!h1 || !h2) return h1?h1:h2;
        ListNode *result=NULL;
        if(h1->val<=h2->val) 
        {
            result=h1;
            result->next=merge(h1->next,h2);
        }
        else{
            result = h2;
            result->next=merge(h1,h2->next);
        }
        return result;
    }
    ListNode* midLL(ListNode* head)
    {
        if(!head->next)return head;
        ListNode *s=head;
        ListNode *f=head->next;
        while(f && f->next)
        {
            s=s->next;
            f=f->next->next;
        }
        return s;
    }
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *mid = midLL(head);
        ListNode *right=mid->next;
        mid->next=NULL;
        ListNode* left=sortList(head);
        right=sortList(right);
        return merge(left,right);
    }

//6 flattening a ll
/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution {
  public:
    Node *merge(Node*a ,Node*b)
    {
        if(!a)return b;
        if(!b)return a;
        Node *ans =0;
        if(a->data < b->data)
        {
            ans=a;
            a->bottom = merge(a->bottom,b);
        }
        else{
            ans=b;
            b->bottom=merge(a,b->bottom);
        }
        return ans;
    }
    Node *flatten(Node *root) {
        // code here
        if(!root) return 0;
        return merge(root,flatten(root->next));
    }
};

//7 Clone LL with random ptr
// Node *helperOld(Node *head,unordered_map<Node*,Node*>&mp)
    // {
    //     if(head==0)return 0;
    //     Node *newHead=new Node(head->val);
    //     mp[head]=newHead;
    //     newHead->next=Oldhelper(head->next,mp);
    //     if(head->random)
    //         newHead->random=mp[head->random];
    //     return newHead;
    // }
    Node* copyRandomList(Node* head) {
        //unordered_map<Node*,Node*>mp;
        //return helperOld(head,mp);

        if(!head)return 0;
        //1 : Clone A -> A'
        Node *it=head;
        while(it)
        {
            Node *clone=new Node(it->val);
            clone->next=it->next;
            it->next=clone;
            it=it->next->next;
        }
        //2 : Assign randoms to A'
        it =head;
        while(it)
        {
            it->next->random=it->random?it->random->next:NULL;
            it=it->next->next;
        }

        //Step 3: Detach
        it = head;
        Node *newHead=it->next;
        while(it)
        {
            Node *clonedNode=it->next;
            it->next = it->next->next;
            if(clonedNode->next)
            {
                clonedNode->next=clonedNode->next->next;
            }
            it=it->next;
        }

    return newHead;
    }


//8 rotate list
int getLen(ListNode* head)
    {
        int len=0;
        while(head)
        {
            len++;
            head=head->next;
        }
        return len;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)return 0;

        int len=getLen(head);
        int actualK=k%len;
        if(actualK==0) return head;

        int newLastNodePos = len-actualK-1;
        ListNode *lastNode = head;
        for(int i=0;i<newLastNodePos;i++) lastNode=lastNode->next;
        ListNode *newHead=lastNode->next;
        lastNode->next=NULL;
        ListNode *it=newHead;
        while(it->next) it=it->next;
        it->next=head;

        return newHead;
    }

// min max b/w critical pts 
vector<int> nodesBetweenCriticalPoints(ListNode* head) {
    if (!head || !head->next || !head->next->next) return {-1,-1};

    int first = -1, prev = -1; 
    int idx = 1;  // current index
    int minDist = INT_MAX, maxDist = -1;

    ListNode* prevNode = head;
    ListNode* curr = head->next;

    while (curr->next) {
        idx++;
        if ((curr->val > prevNode->val && curr->val > curr->next->val) ||
            (curr->val < prevNode->val && curr->val < curr->next->val)) 
        {
            if (first == -1) {
                first = idx;
            } else {
                minDist = min(minDist, idx - prev);
                maxDist = idx - first;
            }
            prev = idx;
        }
        prevNode = curr;
        curr = curr->next;
    }

    if (maxDist == -1) return {-1,-1};
    return {minDist, maxDist};
}

//11 2181. Merge Nodes in Between Zeros
ListNode* mergeNodes(ListNode* head) {
    ListNode* curr = head->next;  // skip first 0
    ListNode* write = head;       // position to write merged sums
    int sum = 0;
    while (curr) {
        if (curr->val == 0) {
            // finish a block, store sum in next node
            write = write->next;
            write->val = sum;
            sum = 0;
        } else {
            sum += curr->val;
        }
        curr = curr->next;
    }
    // cut off everything after last merged node
    write->next = nullptr;
    return head->next; // skip dummy 0
}

// not assignment but - separate odds and evens :
ListNode* oddEvenpersonalQues(ListNode* head) {
    if (!head || !head->next) return head;

    ListNode *odd = nullptr, *even = nullptr;
    ListNode *oddHead = nullptr, *evenHead = nullptr;
    ListNode *it = head;
    while (it) {
        if (it->val % 2 == 1) {  // odd
            if (!odd) {
                odd = it;
                oddHead = it;
            } else {
                odd->next = it;
                odd = odd->next;
            }
        } else {  // even
            if (!even) {
                even = it;
                evenHead = it;
            } else {
                even->next = it;
                even = even->next;
            }
        }
        it = it->next;
    }
    // terminate both lists
    if (odd) odd->next = nullptr;
    if (even) even->next = nullptr;
    // combine
    if (oddHead) {
        odd->next = evenHead;
        return oddHead;   // odds first
    } else {
        return evenHead;  // no odds, only evens
    }
}


//12  328. Odd Even Linked List
ListNode* oddEvenList(ListNode* head) {
         if (!head || !head->next) return head;

    ListNode* odd = head;             // first odd node
    ListNode* even = head->next;      // first even node
    ListNode* evenHead = even;        // save start of even list

    while (even && even->next) {
        odd->next = even->next;   // link odd to next odd
        odd = odd->next;          // move odd forward
        even->next = odd->next;   // link even to next even
        even = even->next;        // move even forward
    }
    odd->next = evenHead; // connect end of odd list to start of even list
    return head;
    }


// 13 2816. Double a Number Represented as a Linked List
void solve(ListNode *head,int &carry)
    {
        if(!head)return;
        solve(head->next,carry);
        int prod=head->val*2 + carry;
        head->val = prod%10;
        carry=prod/10;
    }
    ListNode* doubleIt(ListNode* head) {
        int carry=0;
        solve(head,carry);
        if(carry!=0)
        {
            ListNode *carryNode =new ListNode(carry);
            carryNode->next=head;
            head=carryNode;
        }
        return head;
    }


// 14  1721. Swapping Nodes in a Linked List
int Len(ListNode*head)
    {
        int len=0;
        while(head)
        {
            head=head->next;
            len++;
        }
        return len;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        //case 1
        if(!head || !head->next) return head;
        int lenn = Len(head);
        int lpos=k,rpos=lenn-k+1;
        if(lpos>rpos)swap(lpos,rpos);

        //case 2
        if(lpos==rpos)return head;

        //case 3
        if(lenn==2)
        {
            ListNode* nextN= head->next;
            nextN->next=head;
            head->next=NULL;
            head=nextN;
            return head;
        }

        ListNode *ln=head;
        ListNode *rp=head;
        for(int i=0 ; i<rpos-2 ;i++) rp=rp->next;
        ListNode *rn=rp->next;
        //case 4 k=1 or N
        if(lpos==1)
        {
            rn->next=ln->next;
            rp->next=ln;
            ln->next=NULL;
            head=rn;
            return head;
        }
        //case 5 adjacent ln and rn
        ListNode *lp=head;
        for(int i=0;i<lpos-2;i++) lp=lp->next;
        ln=lp->next;
        ListNode*rsave=rn->next;
        if(lpos+1 == rpos)
        {
            lp->next=rn;
            rn->next=rp;
            rp->next=rsave;
            return head;
        }

        lp->next =rn;
        rn->next=ln->next;
        rp->next=ln;
        ln->next=rsave;
        return head;
    }


//15 1171. Remove Zero Sum Consecutive Nodes from Linked List
void sanitizeMap(ListNode *curr,unordered_map<int , ListNode*>&mp , int csum)
    {
        int temp=csum;
        while(true)
        {
            temp+=curr->val;
            if(temp==csum) return;
            mp.erase(temp);
            curr=curr->next;
        }
    }
    ListNode* removeZeroSumSublists(ListNode* head) {
        if(!head || (!head->next && head->val ==0)) return 0;
        int csum = 0;
        unordered_map<int ,ListNode*>mp;
        auto it=head;
        while(it)
        {
            csum += it->val;
            if(csum==0)
            {
                head=it->next;
                mp.clear();
            }
            else if(mp.find(csum) != mp.end())
            {
                sanitizeMap(mp[csum]->next,mp,csum);
                mp[csum]->next=it->next;
            }
            else mp[csum]=it;
            it=it->next;
        }
        return head;
    }