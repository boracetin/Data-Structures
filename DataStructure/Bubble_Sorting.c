#include <stdio.h>
#include <stdlib.h>

int * bubbleSorting (int array[]){

    if(array==NULL){
        printf("Array is empty :D");
        return -1;

    }

    for(int i=0;i<8;i++){

            for(int j=0;j<7;j++){
                if(array[j]>array[j+1]){
                    int temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;

                }

            }


    }
    return array;
}



int main()
{

    int array[]={1,22,35,4,555,7,0,455,};
    bubbleSorting(array);
    for(int in=0;in<8;in++){

        printf("%d\n",array[in]);




    }


    return 0;
}
