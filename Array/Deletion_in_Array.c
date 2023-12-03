// Delete an element from an array for the above similar cases :

#include <stdio.h>
int main(){
    int array[10]={32,42,56,68,59,78,83,95,67,25};
    int choice,pos;
    for(int i=0;i<10;i++){
        printf("%d ",array[i]);
    }
    printf("\n\n1 -> from First position\n2 -> from Last position\n3 -> from any postion\n\nEnter the choice as :");
    scanf("%d",&choice);
    switch(choice){
        case 1:
          for(int i=1;i<10;i++){
            array[i-1]=array[i];
          }
          break;
        case 2:
          break;
        case 3:
          printf("Enter the position of element to be deleted : ");
          scanf("%d",&pos);
          for(int i=pos;i<10;i++){
            array[i]=array[i+1];
          }
          break;
        default :
          printf("Invalid choice.");
          return 0;
               
    }
    for(int i=0;i<9;i++){
        printf("%d ",array[i]);
    }

}
