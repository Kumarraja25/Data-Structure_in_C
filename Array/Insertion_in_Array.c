//1. Insert an element in an array in the following positions :

#include <stdio.h>
int main(){
    int array[10]={32,42,56,68,59,78,83,95,67};
    printf("list : ");
    for(int i=0;i<9;i++){
        printf("%d ",array[i]);
    }
    int n,pos,count=0,choice;
    printf("\nEnter the number to insert : ");
    scanf("%d",&n);
    printf("Enter the position as :\n1 -> for First position\n2 -> for Last position\n3 -> for anywhere in between\n");
    scanf("%d",&choice);
    for(count=0;array[count]!='\0';count++);
    switch(choice){
        case 1:
          for(int i=count;i>0;i--){
            array[i]=array[i-1];
          }
          array[0]=n;
          break;
        case 2:
          array[count]=n;
          break;
        case 3:
          printf("Enter the index to be inserted : ");
          scanf("%d",&pos);
          for(int i=count;i>=pos;i--){
            array[i]=array[i-1];
          }
          array[pos]=n;
          break;
        default :
          printf("Invalid choice.");
          return 0;
               
    }
    for(int i=0;i<10;i++){
        printf("%d ",array[i]);
    }

}
