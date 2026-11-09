#include <stdio.h>
#include <stdlib.h>

int main()
{
   int registrationNumber;
   char name[50];
   int marks;
   int choice=1;
   char grade;
   char comment[20];
   char status[20];

while (choice==1){


    printf("\n---STUDENT INFORMATION---\n");
    printf("Registration: ");
    scanf("%d",&registrationNumber);
    printf("Name: ");
    scanf("%s",name);
    printf("Marks: ");
    scanf("%d",&marks);
    if (marks < 40){
        sprintf(status,"FAILED");
    }
    else{
        sprintf(status,"PASSED");
    }
    if(marks>=70&&marks<=100){
    grade='A';
    }
    else if (marks>=60&&marks<=69){
    grade='B';
    }
    else if (marks>=50&&marks<=59){
        grade='C';
    }
    else if (marks>=40&&marks<=49){
        grade='D';

    }
    else {
        grade='F';
    }
        switch(grade){
   case 'A':
    sprintf(comment,"Exellent");
    break;
   case 'B':
    sprintf(comment,"Very Good");
    break;
   case 'C':
    sprintf(comment,"Good");
    break;
   case 'D':
    sprintf(comment,"Pass");
    break;
   case 'F':
    sprintf(comment,"Failed");
    break;
        }

        printf("\n\n\n---STUDENT RESULTS---");
  printf("\nRegistration Number:%d \n",registrationNumber);
  printf("Name:%s\n",name);
  printf("Marks: %d\n",marks);
  printf("Status:%s\n",status);
  printf("Grade:%c\n",grade);
  printf("Comment:%s\n",comment);
  printf("Do you want to enter another student?(1=Yes,0=No): ");
  scanf("%d", &choice);



}
return 0;
}
