 #include <stdio.h>
 #include <math.h>    
    int  main (){
         int b , a , c , delta ;
           float x1 , x2 , x3  ;
            printf("entrer a :");
            scanf("%d",&a);
            printf("entrer b :");
            scanf("%d",&b); 
            printf("entrer c :");
            scanf("%d",&c);
            delta = pow (b , 2)-4*a*c ;
            printf("delta = %d", delta);
             x1 = (-b + sqrt(delta))/(2*a) ;
             x2 = ( -b - sqrt(delta))/(2*a) ;
             x3 = -b/2*a;
             
            if (delta > 0){
                 printf(" \n x1=%.2f \n x2=%.2f",x1,x2);
                    
            }
                   
                  
            else if (delta == 0){
                printf("x3=%f",x3);
            }
                    
            else  {
                 printf(" \n n'accepte pas de solution");
            
            }
                   
            
             
            return 0;
    }