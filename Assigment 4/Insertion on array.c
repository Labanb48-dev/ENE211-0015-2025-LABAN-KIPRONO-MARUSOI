#include <stdio.h>
#include <stdlib.h>
int insert(int numbers[], int n){
int newNumber=25;
int size;
for(int i=n-1;i>=2;i--){
   numbers[i+1]=numbers[i];

}
 numbers[2]=newNumber;
    size++;

return n+1;

}
int main()
{
    int size=5;
    int x[10]={10,20,20,40,50};
    size=insert(x,5);
    for(int i=0;i<size;i++){
    printf("%d ",x[i]);}
    return 0;
}
