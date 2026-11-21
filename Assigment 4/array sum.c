#include <stdio.h>
#include <stdlib.h>
int sumArray(int numbers[],int n){
    int sum=0;
   for(int i=0;i<n;i++){
    sum=sum+numbers[i];
   }
   return sum;
}



int main()
{

    int total;
    int x[]={10,20,30,40,50};
    total=sumArray(x,5);
    printf("Thes sum of the array is %d",total);

}
