#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a;
    printf("\nThis is a guessing game.\n");
    printf("I have choosen a number from 0 to 20 which you must guess\n\n");

   time_t t;
   srand((unsigned) time(&t));
   int randomnumber = rand()%21;
   /* the above code is used to generate random Numbers between 0 and 20*/
   for(int i = 5; i > 0; i--)
   {
       printf("You have %d tries left.\n", i); //intitalizing tries
       while(a != randomnumber)
       {
           printf("Enter the number: ");
           scanf("%d", &a);

           if(a != randomnumber && a > randomnumber)
           {
               printf("Sorry %d is greater, try again\n\n", a);
               break;
           }
           else if(a != randomnumber && a < randomnumber)
           {
               printf("Sorry %d is less, try again\n\n", a);
               break;
           }
           else if(a == randomnumber)
           {
               printf("\nCongratulations, you guessed it\n");
               return 0;
               
           }
    /* Breaks are used to break out of the loop, or the inner loop will keep repeating
    until random number is equal to guessed number*/
           
       }
     
   }
    printf("You have had five tries and failed. The number was %d\n\n",randomnumber);
}