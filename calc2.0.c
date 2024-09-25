#include <stdio.h>

int calc(int n1, int n2, char op);
int dnv();

int main() {
    int num1, num2;
    int resultado;
    char operador;
    
    printf("digite um numero: \n");
    scanf("%i", &num1);
    
    printf("digite o segundo numero: \n");
    scanf("%i", &num2);
    
    printf("escolha um operador matematico: + - * / \n");
    scanf(" %c", &operador);
    
    switch(operador) {
        case '+':
			resultado = calc(num1, num2, operador);
            printf("%i + %i = %i \n", num1, num2, resultado);
            dnv();
            break;
        case '-':
			resultado = calc(num1, num2, operador);
            printf("%i - %i = %i \n", num1, num2, resultado);
            dnv();
            break;
        case '*':
			resultado = calc(num1, num2, operador);
            printf("%i * %i = %i \n", num1, num2, resultado);
            dnv();
            break;    
        case '/':
			resultado = calc(num1, num2, operador);
            printf("%i / %i = %i \n", num1, num2, resultado);
            dnv();
            break;    
        default :
        	printf("Digite um operador matematico valido \n");
        	main();
        	break;
    }
    return 0;
}

int calc(int n1, int n2, char op) {
	int result;
	
	if(op == '+') {
		result = n1 + n2;
		return(result);
	} else if(op == '-') {
		result = n1 - n2;
		return(result);
	} else if(op == '*') {
		result = n1 * n2;
		return(result);
	} else if(op == '/') {
		result = n1 / n2;
		return(result);
	} 

	return 0;
}

int dnv() {
	char option;
	
	printf("Deseja fazer outro calculo? S, N // Y, N \n");
	scanf(" %c", &option);
	
	if (option == 's' || option == 'S' || option == 'y' || option == 'Y') {
		return main();
	}
	
	if (option == 'n' || option == 'N') {
		printf("Adeus!");
		return 0;
	}
}
