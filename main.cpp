#include <cstdio>
#include <conio.h>
using namespace std;
int main()

{
	
char a;
double numer1;
int numer, numer2;
while (true) {

    printf( "MOZLIWE OPERACJE:  %s \n" , "Nacisnij odpowiedni przycisk");
    printf( "1.System 16stkowy:  \n");
    printf( "2.Liczby zmiennoprzecinowe:\n" );
    printf( "3.Liczba z zerami wiadocymi:  \n");
    printf( "4.Wyjsce \n");
    printf("\n\n Wybierz operacje: ");
    
    a = getch();
    switch(a)
    {
    	case '1':
    		printf("\n Podaj a:" );
    		scanf("%d", &numer);
    		printf("%x \n\n\n\n", numer);
    		break;
    	case '2':
    		printf("\n Podaj a: ");
    		scanf("%lf", &numer1);
		     printf("%4.2f \n\n\n\n", numer1);
			 break;
		case '3':
		      printf("\n Podaj a:");
		      scanf("%d", &numer2);
			  printf(" %08d \n\n\n\n", numer2);	
    		break;
    	case '4':
		return 0;	
    	break;
    
   }
	}
}
