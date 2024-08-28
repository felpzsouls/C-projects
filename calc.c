#include <stdio.h>

int main() {
    int num1, num2, calc;
    char operador;
    
    printf("digite um número: ");
    scanf("%i", &num1);
    
    printf("digite o segundo numero: ");
    scanf("%i", &num2);
    
    printf("escolha um operador matematico: ");
    scanf(" %c", &operador);
    
    switch(operador) {
        case '+':
            calc = num1 + num2;
            printf("%i + %i = %i", num1, num2, calc);
            break;
        case '-':
            calc = num1 - num2;
            printf("%i - %i = %i", num1, num2, calc);
            break;
        case '*':
            calc = num1 * num2;
            printf("%i * %i = %i", num1, num2, calc);
            break;
        case '/':
            calc = num1 / num2;
            printf("%i / %i = %i", num1, num2, calc);
            break;
    }
    return 0;
}
