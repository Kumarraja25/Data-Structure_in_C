// creation of linked list 

#include <stdio.h>
#include <malloc.h>
struct node{
    int info;
    struct node *link;
};
struct node *start=NULL;

int main(){
    struct node *new ,*present,*i;
    int t=11;
    printf("Remember terminating value is 0\n\n");
    while(t!=0){
        new=(struct node *)malloc(sizeof(struct node));
        printf("Enter the information : ");
        scanf("%d",&t);
        new->info=t;
        new->link=NULL;
        if(start==NULL){
            start=present=new;
        }
        else{
            present->link=new;
            present=new;
        }

    }

    // Traversial in linked list
    for(i=start;i->link!=NULL;i=i->link){
        printf("%d --> ",i->info);
    }
    printf("%d",i->info); 
    return 0;
}