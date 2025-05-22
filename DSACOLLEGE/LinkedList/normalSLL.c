// #include<stdio.h>
// #include<stdlib.h>

// typedef struct Node
// {
//   int data;
//   struct Node* next;
// }sll;
// sll *newNode=NULL,*head=NULL,*current=NULL,*tail=NULL;
// void insert(int n)
// {
//   newNode=(sll*)malloc(sizeof(sll));
//   newNode->data=n;
//   newNode->next=NULL;
//   if(head==NULL)
//   {
//     head=newNode;
//     tail=newNode;
//     return;
//   }
//   if(head->next==NULL)
//   {
//     tail=head;
//   }
//   tail->next=newNode;
//   tail=newNode;
// }
// void display()
// {
//   current=head;
//   while(current!=NULL)
//     {
//       printf("%d",current->data);
//       current=current->next;
//     }
//   printf("\n");
// }

// int main()
// {
//   insert(30);
//   insert(40);
//   insert(50);
//   insert(60);
//   display();

//   return 0;
// }