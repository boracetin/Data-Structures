#include <stdio.h>
#include <stdlib.h>
typedef struct n{   //linked List
    int x;
    struct n *next;
}node;

void boxAdd(node *r,int numberOfElement){   // to add box or boxes

    for(int i=0;i<numberOfElement;i++){
            r->next=(node*)malloc(sizeof(node));
            r=r->next;
            r->next=NULL;
    }
    printf("\nextra %d box/boxes added.\n",numberOfElement-1);
}

void valueAdd(node *r,int *p){      //to add values of nodes
    int i=0;
    while(r->next!=NULL){
        r->x=p[i];
        r=r->next;
        i++;
    }
}

void values(node *iter){        //to print values of node of variables
    int i=1;
    while(iter->next!=NULL){
        printf("%dst box value is %d\n",i,iter->x);
        iter=iter->next;
        i++;
    }
    printf("Good Luck :)");
}

int main()
{
    printf("CODED BY BORA CETIN :)\n");
    int numberOfElement;
    printf("\nhow many boxes will you add?\n(there is only a box!!)\n:");
    scanf("%d",&numberOfElement);
    int *list=(int*)malloc(sizeof(int)*(numberOfElement+1));
    for(int i=0;i<numberOfElement+1;i++){
        printf("%dst element is:",i+1);
        scanf("%d",(list+i));
    }
    node *root=(node*)malloc(sizeof(node));
    node *iter;

    iter=root;

    boxAdd(iter,numberOfElement+1);
    iter=root;
    valueAdd(iter,list);
    iter=root;
    values(iter);
    return 0;
}
