#include <stdio.h>
               
int main()
{
   char  c   ;
   int    A , Z   ;
    A = 65 ;
    Z = 90 ;
     printf("entrer un character = ");
     scanf("%c",&c);
     if ( c <= 90 && c >= 65 )
     printf("cette character est alphabet majuscule ");
     else 
     printf("cette character est non ");
    
      
     return 0;
}