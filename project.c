#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    printf("welcome to my game try to guess my favoriute number")

    srand(time(NULL));
    double number=rand()%10001+0;
    double guessnumber;
    printf("so tell me ur first guess")
    scanf("%lf",&guessnumber);

 while (guessnumber!=number)
 {
   
   if (guessnumber<number)
   {
    printf("smaller\n");
   }
   else if (guessnumber>number)
   {
    printf("bigger\n");
   }
    printf("AHA You were wrong try another time");

   scanf("%lf",&guessnumber);
  
 }
 
 if (guessnumber==number)
 {
    printf("yourwin");
 }
 
}