/*retorne el primo mas cercano al decimo termino de la serie fibonacci*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int fibonacci (int n)
{
	int a=0;
	int b=1;
	int c=a+b;
	for (n>0; n>2; n--){
		a=b;
		b=c;
		c=a+b;
	}
	return c;
}

int primo (int n)     
{
	int d;
	int c=0;
	for (d=2; n>=d; d++){
		if ((n%d)==0)
		c++;
	}
	return c;
}

int evaluar ()
{
	int a=(fibonacci (10));
	int n=0;
	while (n == 0){
	if ((primo (a))==1)
	n=a;
	else 
	a++;
    }
    return n;
}

int main ()
{
	printf ("El primo mas cerca a fibonacci 10 es : ");
	printf ("%d", fibonacci (6) );
	getch ();
}
