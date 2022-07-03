#include <stdio.h>
#include <stdlib.h>
typedef struct n{
    struct n *next;
    int data;
}node;


node * push(node* root,int number){

    if(root==NULL){
        node *root=(node*)malloc(sizeof(node));
        root->next=NULL;
        root->data=number;
        return root;
    }
    node *iter=root;
    while(iter->next!=NULL){
        iter=iter->next;
    }
    node *temp=(node*)malloc(sizeof(node));
    iter->next=temp;
    temp->next=NULL;
    temp->data=number;

    return root;


}

int pop(node * root){

    if(root==NULL){
        printf("Linked List is already emply");
        return -1;
    }
    node *iter=root;
    while(iter-> next->next!=NULL){

        iter=iter->next;
    }
    node* temp=iter->next;
    int a=temp->data;
    iter->next=NULL;
    free(temp);
    iter->next=NULL;
    return a;


}

void bastir(node *r){
    node *iter=r;
    while(iter!=NULL){
        printf("%d",iter->data);
        iter=iter->next;
    }

}

main(){

    node *root=NULL;
    root=push(root,20);
    root=push(root,30);
    root=push(root,40);
    root=push(root,50);
    root=push(root,60);
    root=push(root,70);
   // bastir(root);
   pop(root);
   pop(root);
   printf("%d",pop(root));


return 0;
}
