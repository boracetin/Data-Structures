#include <stdio.h>
#include <stdlib.h>

typedef struct n{

        int x;
        struct n *next;


}node;

int main()
{
    printf("HELLO EVERYONE \n IN THE THIS EXAMPLE I CODED THAT HOW TO INSERT A NODE BETWEEN NODES IN LINKED LIST\CODED BY BORA CETIN ");
    node *root;
    node *iter;
    node *temp;
    root=(node*)malloc(sizeof(node));
    iter=root;
    root->x=10;
    for(int i=0;i<5;i++){
        iter->next=(node*)malloc(sizeof(node));
        iter=iter->next;
        iter->next=NULL;
    }
    iter=root; //NOW ITER POINTER SHOWS ROOT

    iter=iter->next;

    temp=(node*)malloc(sizeof(node));   //WE HAVE TO USE ONE MORE POINTER TO POINT OUR NEW NODE BECAUSE WE CAN LOST IT IF WE DO NOT SHOW A POINTER

    temp->next=iter->next;  //FIRST OF ALL WE HAVE TO CONNECT OUR NEW POINTER WITH ITERS NEXT POINTER
    iter->next=temp;    //AN AFTER THAT WE CAN CONNECT ITERS NEXT WITH TEMP. NOW EVERYTHING IS OKEY.
    return 0;
}
