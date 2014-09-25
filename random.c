/* Autor: Lucas Afonso Cazarote
 * Data: 25 de Setembro de 2014
 * 
 * Programa que gera uma sequência de números aleatórios dentro de um intervalo definido pelo usuário.
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	int i, limiteInferior, limiteSuperior, intervalo, offset, tmp, elementos;
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

	intervalo = limiteSuperior - limiteInferior;
	offset = limiteInferior;	

	for(i=0;i<elementos;i++)
	{		
		tmp = rand()%(intervalo + 1) + offset;
		printf("%d\n", tmp);
	}

	
	return 0;

}

//Agradeço ao menino moringa (Gabriel Saraiva) que me ajudou e apoiou em programação.
