#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    int correctPin=9999;
    int userPin;
    int count=0;
    int attempts;
    int accessGranted=0;
    int choice=0;
    char username[20]="Admin";



    while (accessGranted==0)
    {
        count=0;
    while(count<3)
    {
        printf("Please enter userpin\n",userPin);
        scanf("%d",&userPin);
        if (userPin<1000)
        {
            printf("PIN is too short.PIN MUST BE 4 DIGITS.\n");
             count=count+1;
             attempts=3-count;
             printf("Wrong PIN ,%d attempts remaining.\n",attempts);

        }

        else if (userPin>9999)
        {
             printf("PIN is too long.PIN must be 4 digits.\n");
            count=count+1;
             attempts=3-count;
           printf("Wrong PIN,%d attempts remaining.\n",attempts);

        }
        else if (userPin==9999){

            printf("Access Granted.\n");
         accessGranted=1;
            break;
        }
        else
        {
           count=count+1;
           attempts=3-count;
           printf("Wrong PIN, %d attempts remaining.\n",attempts);

        }
    }

    if (count==3)
    {
        printf("System locked!Wait for 5 seconds...\n");


    for(int i=5; i>=1;i--)
        {
            printf("%d...\n", i);
    Sleep(1000);


    }
    printf("You can try again now.\n");
    }
    }
    while (choice!=4){
         printf("SELECT an option  from the menu below.\n");
          printf("1.Open door\n");
    printf("2.Change username\n");
       printf("3.Change PIN\n");
         printf("4.Exit\n");
         scanf("%d",&choice);


    switch(choice){


    case 1:
        printf("Door is now OPEN\n");
        choice=4;
        break;
    case 2:

        printf("Current username: %s\n",username);
        printf("Enter new username:\t ");

        scanf("%s",username);
         printf("\nNew username:%s",username);
        break;
    case 3:

            printf("Current PIN: %d\n",userPin);
            printf("Enter New PIN: ");
            scanf("%d",&userPin);
            printf("Settings updated successfully!\n");
            printf("New PIN: %d",userPin);

            break;
    case 4:
        printf("Exit\n");
        break;
    default:
        printf("Invalid choice!\n");
        break;}
    }
return 0;


}
