#include <stdio.h>

int main()
{
   int  annee ;
      printf("choisir le nombre demmande : \n 1:annee à maois \n 2:annee à jours \n 3:annee à heures \n 4:annee à minute \n 5:annee à secondes:");
      scanf("%d",& annee);
       
      if (annee == 1)
      printf("anee= 12 moit ");
      else if (annee == 2 )
      printf("anee = 365 jours ");
      else if (annee == 3)
      printf("anee = 8760 heurs ");
      else if (annee == 4)
      printf("anee = 525600 minute");
      else if (annee == 5)
      printf("anee = 31 536 000 secodes");
      else
      printf("cette cifre existe pas");
      
     return 0;
}