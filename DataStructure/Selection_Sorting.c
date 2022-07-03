#include <stdio.h>
#include <stdlib.h>

int * selectionSorting(int array[],int arraySize){

    for(int i=0;i<arraySize;i++){

        for(int j=i;j<(arraySize);j++){

            if(array[i]>array[j]){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
               // number=array[j];


            }

        }


    }

    return array;



}



int main()
{
    int array[]={1,22,0,77,9,888,11,999,454};
    selectionSorting(array,9);
    for(int in=0;in<9;in++){
        printf("%d\n",array[in]);
    }



    return 0;
}
