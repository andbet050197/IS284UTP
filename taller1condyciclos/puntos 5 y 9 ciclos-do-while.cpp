#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 
int contar1 (int x, int a)
{
    do{
       if ((a%10)==4)
       printf ("\n%d", a); 
       a++;            
    } while (x>a);
    return 0;
}  

int contar2 (int x, int a)
{
    do{
       if ((a%10)==6)
       printf ("\n%d", a); 
       a++;            
    } while (x>a);
    return 0;
}                 
 
 int opciones (void)
{
     printf ("   M E N U     P R I N C I P A L   \n\n\n" );
     printf ("5.  Leer dos n�meros y mostrar todos los n�meros terminados en 4 comprendidos entre ellos.             \n");
     printf ("9.  Mostrar en pantalla todos los n�meros terminados en 6 comprendidos entre 25 y 205.              \n");
     printf ("0.  Salir   \n");
}
 
int main (void)
{
    int opc=-1, x=0, a=0;
    do {
        system ("cls"); 
         
        opciones ();                             // se utiliza la librer�a stdlib.h, sirve para limpiar la pantalla
        printf ("Ingrese la opci�n seleccionada:  "); // usa la libreria stdio.h 
        scanf ("%d",&opc);                                   // usa la libreria stdio.h 
        switch (opc) {
        case 5: 
                 printf ("\n Ingrese el primer n�mero :  "); // usa la libreria stdio.h 
                 scanf ("%d",&x);                                   // usa la libreria stdio.h 
                 printf ("\n Ingrese el primer n�mero :  "); // usa la libreria stdio.h 
                 scanf ("%d",&a);  
                 printf ("Los numeros terminados en 4 entre %d y %d son : \n", x, a);                                 // usa la libreria stdio.h 
                 if (a>x)
                 contar1 (a, x);
                 else
                 contar1 (x, a); 
                 getch ();                                        // usa la librer�a conio.h 
                 break;                      
        case 9: 
                 x=205;
                 a=25;                                    // usa la libreria stdio.h 
                 printf ("Los numeros terminados en 6 entre %d y %d son : \n", a, x);
                 contar2 (x, a);              
                 getch ();                                          // usa la librer�a conio.h 
                 break;     
        case 0: 
               //  getch();
                 break;      
 
        }
    } while (opc != 0);
     
    printf ("Gracias por utilizar nuestro sistemas, Adios  "); // usa la libreria stdio.h 
     
    getch();                                           // usa la librer�a conio.h
}    
