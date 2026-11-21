#include <stdio.h>
#include <stdlib.h>

void findMaxMin(int numbers[],int n){
int i;
int max=numbers[0];
int min=numbers[0];
for(i=0;i<n;i++){
   if(numbers[i]<min){
      min=numbers[i];}

   if(numbers[i]>max){
    max=numbers[i];

   }
}
  printf("The Maximum is:%d \n",max);
  printf("The Minimum is:%d \n",min);

return;


}

int main()
{
  int numbers[]={23,45,68,18,5,89};
  findMaxMin(numbers,6);
  return 0;
}
