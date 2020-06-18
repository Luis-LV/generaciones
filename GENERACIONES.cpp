#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int opcion;
    

      while(opcion!=6){
            printf("\nBIENVENIDO A MI FAMILIA\n");
            printf("\n===Menu===");
            printf("\n Generaciones de mi familia");
            printf("\n 1.GENERACION 1: Bisabuelos");
            printf("\n 2.GENERACION 2: Abuelos");
            printf("\n 3.GENERACION 3: Padres y Tios");
            printf("\n 4.GENERACION 4: Hijos:");
            printf("\n 5.GENERACION 5: NIETOS");
            printf("\n 6.Salir");
            printf("\n SU OPCION: ");
            scanf("%d", &opcion );
            
              
              
              if(opcion==1){
                  printf("\nPATERNOS" );
                  printf("\nMIGUEL");
                  printf("\nCARIDAD\n");
                  printf("\nMATERNOS.");
                  printf("\nDANIEL");
                  printf("\nNATY\n");
              }  
                  if(opcion==2){
                    printf("\nPATERNOS" );
                    printf("\nMIGUEL");
                    printf("\nELVIRA\n");
                    printf("\nMATERNOS.");
                    printf("\nJUAN");
                    printf("\nSUSANA\n");
                  }
                  if(opcion==3){
                    printf("\nPADRES" );
                    printf("\nMANUEL");
                    printf("\nROCIO\n");
                    printf("\nTIOS.");
                    printf("\nJUAN");
                    printf("\nLETY");
                    printf("\nJUANA\n" );    
                  }
                  if(opcion==4){
                    printf("\nLUIS" );
                    printf("\nKARINA");
                    printf("\nLILIANA");
                    printf("\nDANIEL\n.");                  
                   }
                   if(opcion==5){
                       printf("\nFERNANDA");
                       printf("\nLEONARDO\n");
                       
                         
                   }
                   if(opcion==6){
                       printf("\nGRACIAS POR ENTRAR A CONOCER A MI FAMILIA.\n");
                         
                   }
      }

    return 0;
}
