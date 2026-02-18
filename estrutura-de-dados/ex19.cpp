#include <stdio.h>

int pesquisarValor(int num, int array[10], int tamanhoAtual) {
	for (int i = 0; i < tamanhoAtual; i++) {
		if (array[i] == num) {
			return 1;
		}
	}
	
	return 0;
}

int main() {
	
	int array[10];
	int num;
	int i = 0;
	
	while (i < 10) {
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		int valorExiste = pesquisarValor(num, array, i);
		
		if (valorExiste) {
			printf("O valor digitado ja foi escolhido. Tente novamente. \n");
			continue;
		}
		else {
			array[i] = num;
			i++;
		}
	}

	printf("\n");
	printf("Os numeros digitados foram: \n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
	return 0;
}
