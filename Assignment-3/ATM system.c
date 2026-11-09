#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//constants
#define MAX_ATTEMPTS 3

//Global variables
double balance=5000.00;
//function prototypes
int login(void);
void displayMenu(void);
void checkBalance(void);
void deposit(void);
void withdraw(void);

//main funtion
int main(void){
int choice;
    if(login()==1){
displayMenu();}



else{
    printf("Access denied.Program terminated.\n");
}

return 0;
}


//function definitions

int login()
{
    char correctUsername[]="Laban";
    char correctPin[]="1234";
    char enteredUsername[20];
    char enteredPin[10];
    int attempts=0;

  while(attempts<MAX_ATTEMPTS)
  {
    printf("Please enter Username: \n");
    scanf("%s",enteredUsername);
    printf("Please enter PIN: \n");
    scanf("%s",enteredPin);


    if(strcmp(enteredUsername,correctUsername)==0 && strcmp(enteredPin,correctPin)==0)
       {
           return 1;
       }
      else{
         attempts++;
         printf("Incorrect username or PIN.Please try again.\n");
         printf("Attempts remaining:%d\n",MAX_ATTEMPTS-attempts);
      }
  }
  printf("Account locked.Too many failed attempts.\n");
    return 0;

}


void displayMenu(void)


{
    int choice;


    do{
    printf("\n--------Display Menu--------\n");
        printf("\t\n1.Check balance\n2.Deposit\n3.Withdraw\n4.Exit\n");
        scanf("%d",&choice);
  switch(choice)
{
case 1:
    checkBalance();
    break;
case 2:
    deposit();
    break;
case 3:
    withdraw();
    break;
case 4:
    printf("Thank you for using our ATM.\n");
    break;
default:
    printf("Invalid choice.Please try again.\n");
}
}while(choice!=4);
}

void checkBalance(void){
printf("Your current balance is:%.2f\n",balance);

}

void deposit(void){
   double amount;
   printf("Enter amount to deposit:kSH \n");
   scanf("%lf",&amount);

   if (amount>0){

    //add money to balance
    balance=balance+amount;
    printf("Deposit succesful!\n");
    printf("New balance:kSH%.2f \n", balance);
   }
   else{
    printf("\tInvalid deposit amount!\n");
   }

}

void withdraw(void){
double amount;
printf("Enter amount to withdraw:kSH ");
scanf("%lf",&amount);
if(amount<=0){
   printf("Invalid withdrawal amount!\n");
   }
else if(amount>balance){
    printf("Insufficient funds!\n");
}
else{
   balance=balance-amount;
   printf("Withdrawal successful.\n");
   printf("Remaining balance:kSH %.2f\n",balance);
}
}






