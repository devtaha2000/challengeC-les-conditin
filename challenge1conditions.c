#include <stdio.h>
 #include <stdlib.h>  
 #include <math.h>
   void main (){
        

         int  nombre ;
            
           printf("entrer un chifre :");
           scanf("%d",&nombre);
        
          

         if ( nombre % 2 == 0 ){
             printf("%dcette nombre est pair",nombre);
           }
         else {
             
             printf("%d cette nombre est impair",nombre); 
          } 
   }         