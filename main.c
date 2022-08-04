#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A ,B;
    char op;
    printf(" veillez donnez la valeur de A: ");
    scanf(" %d",&A);
    printf("veuillez Saisir l'operateur :");
    scanf(" %c",&op);
    printf("veuillez saisir la valeur de B:");
    scanf(" %d",&B);
    switch ( op ){
          case '+': printf ("A+B=%d",A+B);
                 break ;
          case '-': printf ("A-B=%d",A-B);
                 break ;
          case '*':printf ("A*B=%d",A*B);
                 break ;
          case '/':if(B!=0)
                     printf("A/B=%d",A/B);
                else
                     printf("la division par 0 est impossible");
                break ;
          case 'Q': printf("le programme est quitte ");
               break;
          default :printf("l'operateur est incorrect !");
          break

}
return 0;
}
