#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letters[]={'A','B','C','A','D','B','E'};
    int i;
    int j;
    int repeated;

    for(i=0;i<7;i++){
        repeated=0;
    for(j=0;j<7;j++){
    if(i!=j&&letters[i]==letters[j]){
        repeated=1;
        break;
    }



    }
    if(repeated==0){
        printf("%c ",letters[i]);
    }

    }



return 0;

}
