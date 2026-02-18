#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int array[10], pares[10], impares[10];
	int cp, ci;
	cp = 0, ci = 0;
	
	for (int i = 0; i < 10; i++) {
		printf("Digite um numero: ");
		scanf("%d", &array[i]);
		
		if (array[i] % 2 == 0) {
			pares[cp] = array[i];
			cp++;
		}
		else {
			impares[ci] = array[i];
			ci++;
		}
	}
	
	system("cls");
	
	printf("Numeros digitados: ");
	for (int i = 0; i < 10; i++){
		printf("%d ", array[i]);
	}
	
	printf("\n");
	printf("Pares: ");
	for (int i = 0; i < cp; i++){
		printf("%d ", pares[i]);
	}
	
	printf("\n");
	printf("Impares: ");
	for (int i = 0; i < ci; i++){
		printf("%d ", impares[i]);
	}
	
	return 0;
}

