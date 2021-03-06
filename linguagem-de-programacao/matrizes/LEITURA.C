/* Biblioteca criada pelo programador com fun��es usadas para entrada de dados */

#include<conio.h>
#include<stdio.h>
#include<string.h>

/* Para o programa, e pede uma tecla para continuar ao usuario */

char pararPrograma(){
     printf("\n\nDigite qualquer tecla para continuar...");
     fflush(stdin);
     return getche();
}

/* Faz a leitura de um numero inteiro int. Validando a entrada.
   Definindo o intervalo aceito de numeros. Nesta vers�o desta fun��o
   pode-se passar o texto que ser� apresentado para o usu�rio durante
   a leitura.

   O vetor de char � passado para um par�metro que espera uma vari�vel constante.
   Para isto o primeiro par�metro da fun��o foi declarado como sendo const.

   Isto evita que apare�a a seguinte mensagem durante a compila��o

        warning: deprecated conversion from string constant to 'char*'

   Esta mensagem indica que est� convertendo-se uma constante texto para um
   ponteiro de caracteres char, o que permite que o par�metro recebido possa ser
   alterado. E caso alguma altera��o seja feita nele ocorrer� um ERRO fatal no
   programa.

   Colocando-se const na declara��o evita-se que isto ocorra. N�o � mais
   poss�vel alterar o conte�do passado para o par�metro dentro da fun��o.

   Outra op��o seria desabilitar a gera��o da mensagem de warning atrav�s da
   diretiva de compila��o #pragma em vez de colocar const na declara��o do par�metro.
   Com a diretiva #pragma bastaria colocar esta linha no in�cio do arquivo fonte.

       #pragma GCC diagnostic ignored "-Wwrite-strings"

   Isto n�o evita que o erro ocorra, s� faz com que o compilador n�o mostre mais
   esta mensagem de alerta. Esta solu��o deve ser evitada!
*/

int lerInt(const char texto[], int minimo, int maximo){
   int num, teste;

   printf("%s",texto);

   fflush(stdin);
   teste = scanf("%d",&num);
   while(!teste || num < minimo || num > maximo){
     if (teste == 0){
        printf("\n\aNao foi digitado um numero inteiro valido!");
     }else{
        printf("\n\aO numero deve ser de %d ate %d!",minimo,maximo);
     }
     printf("\n\n%s",texto);
     fflush(stdin);
     teste = scanf("%d",&num);
   }

   return num;
}

/* Faz a leitura de um texto, limitando a entrada do usu�rio */

void lerTexto(char vetor[], int quantidade){
    int posUltimoCaracterLido;

    fflush(stdin);
    fgets(vetor,quantidade,stdin);

    //para retirar o enter no final da leitura do fgets
    posUltimoCaracterLido = strlen(vetor)-1;
	if (vetor[posUltimoCaracterLido] == '\n'){
	   vetor[posUltimoCaracterLido] = '\x0';
	}
}
