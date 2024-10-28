#include <stdio.h>

// Função recursiva para calcular o n-ésimo termo da sequência de Fibonacci
int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    // Testar a função com diferentes valores
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n >= 0) {
        int resultado = fibonacci(n);
        printf("O %d-ésimo termo da sequência de Fibonacci é: %d\n", n, resultado);
    } else {
        printf("Por favor, digite um número inteiro positivo.\n");
    }

    return 0;
}
