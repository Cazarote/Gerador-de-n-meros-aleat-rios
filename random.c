/* Autor: Lucas Afonso Cazarote
 * Data: 25 de Setembro de 2014
 * 
 * que gera uma sequência de números aleatórios dentro de um intervalo definido pelo usuário.
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CYAN "\033[46;30;1m"
#define NORMAL "\033[0m"
#define BRANCO "\033[47;30;1m"


int main()
{
	int linha, coluna, limiteInferior, limiteSuperior, intervalo, offset, tmp, elementos, colunas, linhas;

/* variável offset é o salto que ele vai dar de 0 até o limite inferior	
Exemplo: limite inferior 200, limite superior 320, 320 - 200 = 120 elementos
(x%121)+200 [x % (intervalo + 1) + offset]*/

	srand(time(NULL));


	printf("Digite o limite inferior do intervalo: ");
	scanf("%d",&limiteInferior);

	printf("Digite o limite superior do intervalo: ");
	scanf ("%d",&limiteSuperior);

	printf("Digite o numero de elementos a serem gerados: ");
	scanf("%d",&elementos);

	printf("Digite a quantidade de colunas desejadas: ");
	scanf("%d",&colunas);

	intervalo = limiteSuperior - limiteInferior;
	offset = limiteInferior;
	
	linhas = elementos/colunas;

	printf("Os numeros gerados são:\n");

	for(linha=0;linha<linhas;linha++)
	{	
	
		if(linha%2 == 0)
		{
			printf("%s", CYAN);
		}

		else
		{
			printf("%s",BRANCO);
		}

		for(coluna=0;coluna<colunas;coluna++)
		{

			tmp = rand()%(intervalo + 1) + offset;
			printf(" %8d ", tmp);
		}

		printf("%s\n", NORMAL);
	}
	
	return 0;

}

//Agradeço ao Gabriel Saraiva que está me ensinando e dando apoio para programar.
