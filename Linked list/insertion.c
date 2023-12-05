 // insertion in linked list...
 
#include <stdio.h>
#include <malloc.h>
struct node{
    int info;
    struct node *link;
};
struct node *start=NULL;
int main(){
    struct node *n ,*present,*i,*new;
    int t=11;
    printf("Remember terminating value is 0\n\n");
    while(t!=0){
        n=(struct node *)malloc(sizeof(struct node));
        printf("Enter the information : ");
        scanf("%d",&t);
        n->info=t;
        n->link=NULL;
        if(start==NULL){
            start=present=n;
        }
        else{
            present->link=n;
            present=n;
        }

    }
    printf("Before Insertion : \n");
    for(i=start;i->link!=NULL;i=i->link){
        printf("%d --> ",i->info);
    }
    printf("%d",i->info);
    
    //Insertion....
    struct node *ptr;
    int new_info,loc_info;
    new=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the info to insert :");
    scanf("%d",&new_info);
    new->info=new_info;
    new->link=NULL;
    int choice;
    printf("Type : \n1 - to insert at begining.\n2 - to insert at end.\n3 - to insert anywhere.\n\n");
    printf("Enter the choice : ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            new->link=start;
            start=new;
            break;
        case 2:
            for(ptr=start;ptr->link!=NULL;ptr=ptr->link){}
            ptr->link=new;
            break;
        case 3:
            printf("Enter the info of node after which new node to be inserted: ");
            scanf("%d",&loc_info);
            for(ptr=start;ptr->info!=loc_info;ptr=ptr->link){}
            new->link=ptr->link;
            ptr->link=new;
            break;
        default:
            printf("Invalid input");
            return 0;
    }
    printf("After Insertion : \n");
    for(ptr=start;ptr->link!=NULL;ptr=ptr->link){
        printf("%d --> ",ptr->info);
    }
    printf("%d",ptr->info);

    


}