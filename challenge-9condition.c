#include <stdio.h>
               
int main()
{
   int  a , b   ;
   
    
     printf("entrer premiere chiffre = ");
     scanf("%d",&a);
     printf("entrer deuxieme chiffre = ");
     scanf("%d",&b);
     if ( a > b )
     printf("premiere chiffre est MAX ");
     else 
     printf("deuxieme chiffre est MAX ");
    
      
     return 0;
}