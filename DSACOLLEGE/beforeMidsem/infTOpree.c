// #include<stdio.h>
// #include<ctype.h>
// #include<string.h>
// #define MAX 100

// typedef struct{
// int top;
// char items[MAX];
// }stack1;

// void init(stack1 *s)
// {
//   s->top=-1;
// }
// int isEmpty(stack1*s){
//   return s->top==-1;
// }
// int isFull(stack1*s)
// {
//   return s->top==MAX-1;
// }
// void push1(stack1*s , char x)
// {
//   if(isFull(s)){
//     printf("Overflow\n");
//     return;
//   }
//   s->items[++s->top]=x;
// }
// char pop1(stack1*s)
// {
//   if(isEmpty(s)){
//     printf("Underflow\n");
//     return '\0';
//   }
//   return s->items[s->top--];
// }
// char isOp(char x)
// {
//   return (x=='+' || x=='-' || x=='*' || x=='/');
// }
// int priority(char x){
//   if(x=='+'||x=='-') return 1;
//   if(x=='*'||x=='/') return 2;
//   return 0;
// }
// char peek1(stack1*s){
//   if(isEmpty(s)) return '\0';
//   return s->items[s->top];
// }
// void inftopost(char*infix,char*postfix){
//   stack1 s;
//   init(&s);
//   int k=0;
//   for(int i=0;i<strlen(infix);i++)
//   {
//     char c=infix[i];
//     if(isalpha(infix[i]))
//       postfix[k++]=c;
//     else{
//       if(c=='(') push1(&s,c);
//       else if(c==')')
//       {
//         while(!isEmpty(&s) && s.items[s.top]!='('){
//           postfix[k++]=pop1(&s);
//         }
//         pop1(&s);
//       }
//       else{
//         while(!isEmpty(&s) && priority(peek1(&s))>=priority(c))
//           {
//             postfix[k++]=pop1(&s);
//           }
//           push1(&s,c);
//       }
//     }
//   }
//   while(!isEmpty(&s))
//    postfix[k++]=pop1(&s);
//   postfix[k]='\0';
// }


// typedef struct{
//   char items[MAX][MAX];
//   int top;
// }stack;

// void inits(stack *s){
//   s->top=-1;
// }
// int isE(stack*s){
//   return s->top==-1;
// }
// int isF(stack*s){
//   return s->top==MAX-1;
// }
// void push(stack*s,char*x){
//   if(s->top==MAX-1){
//     printf("Overflow\n");
//     return;
//   }
//   strcpy(s->items[++s->top],x);
// }

// char *pop(stack*s){
//   if(s->top==-1)
//   {
//     printf("Underflow\n");
//     return NULL;
//   }
//   return s->items[s->top--];
// }

// void posttopre(char*postfix,char*prefix){
//   stack s;
//   inits(&s);
//   for(int i=0;i<strlen(postfix);i++){
//     char ch=postfix[i];
//     if(!isOp(ch)){
//       char op[2]={ch,'\0'};
//       push(&s, op);
//     }
//     else{
//       char pop1[MAX] ,pop2[MAX],bund[MAX];
//       strcpy(pop1,pop(&s));
//       strcpy(pop2,pop(&s));
//       sprintf(bund,"%c%s%s",ch,pop2,pop1);
//       push(&s,bund);
//     }
//   }
//   strcpy(prefix,pop(&s));
// }
// int main(){
//   char infix[MAX],postfix[MAX],prefix[MAX];
//   printf("Enter infix expression: ");
//   scanf("%s",infix);
//   inftopost(infix,postfix);
//   printf("Postfix expression: %s\n",postfix);
//   posttopre(postfix,prefix);
//   printf("Prefix expression: %s\n",prefix);
//   return 0;
// }

  