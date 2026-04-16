#include <iostream>
#include <clocale>
#include <cstdio>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, opcao;

    std::printf("--- CALCULADORA ---\n");
    
    std::printf("Digite o primeiro número: ");
    std::scanf("%d", &n1);

    std::printf("Digite o segundo número: ");
    std::scanf("%d", &n2);

    std::printf("\nO que você deseja fazer?\n");
    std::printf("1 - Somar\n");
    std::printf("2 - Subtrair\n");
    std::printf("3 - Multiplicar\n");
    std::printf("4 - Dividir\n");
    std::printf("Sua opção: ");
    
    std::scanf("%d", &opcao); 

    if (opcao == 1) {
        std::printf("Resultado da Soma: %d\n", n1 + n2);
    } 
    else if (opcao == 2) {
        std::printf("Resultado da Subtração: %d\n", n1 - n2);
    } 
    else if (opcao == 3) {
        std::printf("Resultado da Multiplicação: %d\n", n1 * n2);
    } 
    else if (opcao == 4) {
        if (n2 != 0) {
            std::printf("Resultado da Divisão: %d\n", n1 / n2);
        } else {
            std::printf("Erro: Divisão por zero!\n");
        }
    } 
    else {
        std::printf("Opção inválida!\n");
    }

    return 0;
}