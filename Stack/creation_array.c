// Creation of Stack using array
#include <stdio.h>
#define MAX 5

int stack_arr[MAX];
int top=-1;
void push(int);
void pop();
int isFull(), isEmpty();

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    push(50);
    pop();
    for(int j=0;j<=top;j++){
        printf("%d\t ",stack_arr[j]);
    }
    printf("\nTop = %d",top);
    return 0;
}

void push(int x){
    /* if(top==MAX-1){
         printf("Stack is Overflow.");
         return;
       }
    */
    if(isFull()){
         printf("Stack is Overflow.");
         exit(1);
    }
    top++;
    stack_arr[top]=x;
    printf("Inserted item is %d.\n",stack_arr[top]);
}
void pop(){
    /* if(top==-1){
         printf("Stack is Underflow.");
         return;
       }
    */
    if(isEmpty()){
         printf("Stack is Underflow.");
         return ;
    }
    printf("Deleted item is %d.\n",stack_arr[top]);
    top--;
}
int isFull(){
   if(top==MAX-1)
    return 1;
   else
    return 0; 
}

int isEmpty(){
  if(top==-1)
    return 1;
  else
    return 0;    
}