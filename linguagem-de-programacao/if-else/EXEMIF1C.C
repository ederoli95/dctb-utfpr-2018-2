/* Exemplo basico de if e else

   Esta solu��o � bem melhor, pois o teste � feito apenas uma vez.

   Caso o numero for impar o resto da divisao � 1.
   Na linguagem C qualquer n�mero diferente de zero � VERDADEIRO, ou seja,
   caso o n�mero seja �mpar, o if � atividado.                             */

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
  int numero;

  system("cls");
  printf("Digite o numero : ");
  scanf("%d",&numero);

  if (numero % 2)
    printf("\nO numero %d eh impar",numero);
  else
	printf("\nO numero %d eh par",numero);

  printf("\n\nDigite uma tecla para encerrar");
  getch();
  return 0;
}
