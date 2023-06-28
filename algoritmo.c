#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int opcao;
    double delta, x1, x2, a, b, c;
    double temp, opcaoEscala, conversao;
    int num, calc;
    int numPrimo, div, contador;
    int qtd;
    int i;

    do {
        system("pause");
        system("cls");
        printf("Aluno: Valdemiro de Barros Neto\nTurma: 0101N\n");
        printf("--------------Menu--------------\n");
        printf("1- Equacao do Segundo Grau\n");
        printf("2- Conversor de Temperatura\n");
        printf("3- Tabuada\n");
        printf("4- Numeros primos\n");
        printf("5- Sequencia de Fibonacci\n");
        printf("6- Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
            	system("cls");
                printf("Digite o valor de a:");
                scanf("%lf", &a);
                printf("Digite o valor de b:");
                scanf("%lf", &b);
                printf("Digite o valor de c:");
                scanf("%lf", &c);

                delta = (b * b) - (4 * a * c);
                if (delta < 0) {
                    printf("Impossivel calcular.\n");
                } else {
                    x1 = (sqrt(delta) + b) / (2 * a);
                    x2 = (sqrt(delta) - b) / (2 * a);

                    printf("Resultado: ");
                    printf("X1= %.2lf e X2= %.2lf\n", x1, x2);
                }
                break;

            case 2:
            	system("cls");
                printf("Escolha uma opcao:\n1- Celsius\n2- Fahrenheit\n");
                scanf("%lf", &opcaoEscala);

                if (opcaoEscala == 1) {
                    printf("Digite a temperatura em Celsius: ");
                    scanf("%lf", &temp);
                    conversao = temp * 1.8 + 32;
                    printf("Voce forneceu %.2lf Celsius, que equivale a %.2lf Fahrenheit.\n", temp, conversao);
                } else if (opcaoEscala == 2) {
                    printf("Digite a temperatura em Fahrenheit: ");
                    scanf("%lf", &temp);
                    conversao = (temp - 32) / 1.8;
                    printf("Voce forneceu %.2lf Fahrenheit, que equivale a %.2lf Celsius.\n", temp, conversao);
                } else {
                    printf("Opcao invalida, tente novamente.\n");
                }
                break;

            case 3:
            	system("cls");
                printf("Insira o numero que deseja consultar a tabuada: ");
                scanf("%d", &num);

                for (i = 0; i <= 10; i++) {
                    calc = num * i;
                    printf("%d X %d = %d\n", num, i, calc);
                }
                break;

            case 4:
            	system("cls");
                printf("Insira o numero desejado: ");
                scanf("%d", &numPrimo);

                if (numPrimo <= 1) {
                    printf("Numeros menores ou iguais a um nao sao primos.\n");
                } else {
                    for (i = 2; i <= numPrimo / 2; i++) {
			            if (numPrimo % i == 0) {
			                contador++;
			                break;
			            }
			        }
			
			        if (contador == 0) {
			            printf("Eh primo!");
			        } else {
			            printf("Nao eh primo!");
			        }
			    }

                break;

            case 5:
            	system("cls");
                printf("Insira quantos numeros da sequencia de Fibonacci voce quer imprimir: ");
                scanf("%d", &qtd);

                for (i = 1; i <= qtd; i++) {
                    printf("%d ", fibonacci(i));
                }
                printf("\n");
                break;

            case 6:
                printf("Encerrando o programa! Ate mais!\n");
                break;

            default:
                printf("Opcao invalida, tente novamente.\n");
                break;
        }
    } while (opcao != 6);

    return 0;
}


