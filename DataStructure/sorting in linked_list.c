#include <stdio.h>
#include <stdlib.h>
typedef struct n{
        int x;
        struct n *next;
}node;


node * sorting(node*root,int number){

    if(root==NULL){ // first possibility is that root may be null
        node *root=(node*)malloc(sizeof(node));
        root->x=number;
        root->next=NULL;
        return root;
    }

    else if(number < root->x){ //second possibility is root->x may be small than our given number so We have to check this case

        node *temp=(node*)malloc(sizeof(node));
        temp->x=number;
        temp->next=root;
        root=temp;
        return root;


    }
    else{       // in the other possibility All number should be between other numbers or may be in the last node.

    node*iter;
    iter=root;
    node *temp=(node*)malloc(sizeof(node));
    temp->x=number;
    while(iter->next!=NULL && iter->next->x < number){

        iter=iter->next;
    }

    temp->next=iter->next;
    iter->next=temp;
    return root;
    }
    return root;
}
void printOut(node *root){   // for the print our values of nodes
    node *iter;
    iter=root;
    while(iter!=NULL){

        printf("%d\n",iter->x);
        iter=iter->next;

    }


}


int main()
{
    printf("Hello Guys :)\nIT IS CODED BY BORA CETIN \t Good Luck :) \n");
    node *root;
    root=NULL; //For trying my code first of all I gave Null to root pointer

    root=sorting(root,10);
    root=sorting(root,200);
    root=sorting(root,300);
    root=sorting(root,114);
    root=sorting(root,98);
    root=sorting(root,250);
    root=sorting(root,9);
    root=sorting(root,900);
    root=sorting(root,750);

    printOut(root);

    return 0;
}
