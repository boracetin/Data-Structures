#include <stdio.h>
#include <stdlib.h>
typedef struct n{

    int x;
    struct n *next;

}node;
/*
void least_adding(node*root,int sayi){    // for putting a node at the last
    node *temp=(node*)malloc(sizeof(node));
    temp->x=sayi;
    node *iter;
    iter=root;
    while(iter->next!=root){
        iter=iter->next;
    }
    temp->next=root;
    iter->next=temp;


}

*/

node * sorting(node * r,int number){    // first possibility root could be null

    if(r==NULL){

        node *r=(node*)malloc(sizeof(node));
        r->x=number;
        r->next=r;

        return r;
    }


    else if(r->x > number){ // second possibility is number which is created could be smaller than our initial value
        node *temp=(node*)malloc(sizeof(node));
        temp->x=number;
        temp->next=r;
        node *iter=r;
      while(iter->next != r){
            iter=iter->next;
        }
        iter->next=temp;
        r=temp;
        return r;
    }
  else{    // our new value can be between nodes or after the last node.
        node *temp=(node*)malloc(sizeof(node));
        temp->x=number;
        node *iter=r;
        while(iter->next!=r && temp->x > iter->next->x){
                iter=iter->next;
                }
        temp->next=iter->next;
        iter->next=temp;
    }
return r;
}

void printOut(node *r){ //to print our values
        node *iter=r;
        printf("%d",iter->x);
        iter=iter->next;
        while(iter!=r){
            printf("\n%d",iter->x);
            iter=iter->next;
        }
}

int main()
{

    node * root=NULL;
    root=sorting(root,50);
    root=sorting(root,10);
    root=sorting(root,60);
    root=sorting(root,300);
    root=sorting(root,30);
    root=sorting(root,70);
    root=sorting(root,45);
    root=sorting(root,1);
    root=sorting(root,3444);
    printOut(root);

    return 0;
}
