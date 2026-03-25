#include <stdio.h>
#include <string.h>

int busca_sequencial(int x, int n, int a[]) {
	int i = 0;
	while (i < n && a[i] != x)
		i++;
	return (i == n) ? -1 : i;
}

int main() {
    int a[] = {5, 8, 12, 20, 7};
    int n = 5; 
    int valor;
	
	
	printf("Digite o numero a ser procurado: ");
	scanf("%d", &valor);
	
    int resultado = busca_sequencial(valor, n, a);

    if (resultado != -1)
        printf("O valor %d foi encontrado na posicao %d.\n", valor, resultado + 1);
    else
        printf("O valor %d nao foi encontrado.\n", valor);

    return 0;
}
