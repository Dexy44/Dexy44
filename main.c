#include <stdio.h>
#include <stdlib.h>

int main()
{
     char Name [20];
     char Surname [20];
     char Middlename [2];
     int Birthdate [3];
     Birthdate [1];
     Birthdate [2];
     Birthdate [3];
     int month = 0;




     /*printf ( "Enter your Name :");
     scanf ("%s" , &Name);
     printf ("Your name is %s\n" , Name);*/



         do {
        printf ("Enter your month of birth");
        scanf ("%d" , &month);

        if (month 1< || month >12)
        printf ("Error date must be 1 to 12\n");

        }while  (month 1< || month >12);
       printf ("month of your birth %d\n" , month);























     /*printf ("Enter your Surname :");
     scanf ("%s" , &Surname);
     printf ("Your Surname is %s\n" , Surname);

     printf ("Enter your middle name :");
     scanf ("%s" , &Middlename);
     printf ("Your middle name is %s" , Middlename);*/















    return 0;
}
