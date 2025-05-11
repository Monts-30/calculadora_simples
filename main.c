#include <stdio.h>

int main() {
    char operador;
    float num1, num2, resultado;

    printf("escreva um operador (+, -, *, /): ");
    scanf("%c", &operador);

    printf("digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, resultado);
            } else {
                printf("Erro! divisao por zero.\n");
            }
            break;
        default:
            printf("Erro! operador invalido.\n");
    }

    return 0;
}
