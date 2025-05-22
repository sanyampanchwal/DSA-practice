// #include<stdio.h>
// #include<stdlib.h>

// typedef struct node{
//   int coeff;
//   int exp;
//   struct node* next;
// }poly;

// void insert(poly** head,int coeff,int exp)
// {
//   poly*newnode=(poly*)malloc(sizeof(poly));
//   newnode->coeff=coeff;
//   newnode->exp=exp;
//   newnode->next=NULL;
//   if(*head==NULL){
//     *head=newnode;
//     return; 
//   }
//   poly *temp=*head;
//   while(temp->next!=NULL)
//     temp=temp->next;
//   temp->next=newnode;
// }
// void display(poly*head)
// {
//   if(head==NULL)
//   {
//     printf("\nEmpty\n");
//     return;
//   }
//   poly*temp=head;
//   while(temp!=NULL)
//   {
//     printf("%dx^%d",temp->coeff,temp->exp);
//     if(temp->next!=NULL) printf(" + ");
//     temp=temp->next;
//   }
// }
// poly* addPoly(poly*p1,poly*p2)
// {
//   poly*p3=NULL;
//   while(p1!=NULL && p2!=NULL)
//   {
//     if(p1->exp==p2->exp)
//     {
//       insert(&p3,p1->coeff+p2->coeff,p1->exp);
//       p1=p1->next;
//       p2=p2->next;
//     }
//     else if(p1->exp>p2->exp)
//     {
//       insert(&p3,p1->coeff,p1->exp);
//       p1=p1->next;
//     }
//     else
//     {
//       insert(&p3,p2->coeff,p2->exp);
//       p2=p2->next;
//     }
//   }
//   while(p1!=NULL)
//   {
//     insert(&p3,p1->coeff,p1->exp);
//     p1=p1->next;
//   }
//   while(p2!=NULL)
//   {
//     insert(&p3,p2->coeff,p2->exp);
//     p2=p2->next;
//   }
//   return p3;
// }
// int main()
// {
//   poly*p1=NULL;
//   poly*p2=NULL;
//   poly*p3=NULL;
//   insert(&p1,9,7);
//   insert(&p1,3,2);
//   insert(&p1,2,1);
//   insert(&p1,1,0);
//   printf("\nDisplaying p1 : ");
//   display(p1);
  
//   insert(&p2,5,2);
//   insert(&p2,4,1);
//   insert(&p2,3,0);
//   printf("\nDisplaying p2 : ");
//   display(p2);

//   p3=addPoly(p1,p2);
//   printf("\nDisplaying result : ");
//   display(p3);
  
  
//   return 0;
// }
