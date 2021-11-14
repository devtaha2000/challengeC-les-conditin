#include <stdio.h>

int main()
{
   int  a ; 
     printf("entrer un nomber entier = ");
     scanf("%d",&a);
     if (a < 0)
     printf ("cette nombre est negative");
     else if (a > 0)
     printf("cette nomber est positive");
     else 
     printf ("cette nomber est nul ");
   
      
     return 0;
}