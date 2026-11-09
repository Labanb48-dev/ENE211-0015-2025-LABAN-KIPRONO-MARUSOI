#include <stdio.h>
#include <stdlib.h>

int main()
{
const double pi=3.142;
double radius;
double diameter;
double area;
double circumference;
int choice;
printf("Please enter radius\n");
//present user with options
scanf("%lf",&radius);
printf("\nWhat would you like to calculate?\n");
printf("1.Area\n");
printf("2.Circumference\n");
scanf("%d",&choice);

if(choice==1){area=pi*radius*radius;
printf("The area is\n %lf\n",area);
}
else if(choice==2){diameter=2*radius;
circumference=pi*diameter;
printf("The circumference is\n %lf",circumference);
}
else{
printf("\nInvalid choice!Please enter 1 or 2\n");
}
return 0;
}
