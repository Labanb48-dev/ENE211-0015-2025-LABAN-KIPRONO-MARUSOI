#include <stdio.h>
#include <stdlib.h>

 void sortArray( int numbers[],int n){
     int temp;
     for(int i=0;i<9;i++){
        for(int j=0;j<9-i;j++){



 if(numbers[j]>numbers[j+1]){
   temp=numbers[j];
   numbers[j]=numbers[j+1];
   numbers[j+1]=temp;
}
}
}

}

int main()
{
    int numbers[]={2,8,9,7,6,10,3,5,4,1};


    sortArray(numbers,10);
    printf("Ascending order: \n");
    for(int i=0;i<10;i++){
        printf("%d ",numbers[i]);
    }
    return 0;
}
