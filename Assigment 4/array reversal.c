#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letters[]={'A','B','C','D','E'};
    int n=5;
    for(int i=n;i>0;i--){

        printf("%c",letters[i-1]);
    }
    return 0;
}
