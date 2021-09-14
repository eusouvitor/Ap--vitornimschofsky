#include <stdio.h>
#include <stdlib.h>

void main()
{


int n1, n2, total,pot=0,i=0;
        float total1;
        char op;

        printf("»»»»» BEM VINDO A CALCULADORA DO VITOR «««««\n\n");

        printf("Insira um valor: ");
        scanf("%d", &n1);
        printf("Insira outro valor: ");
        scanf("%d", &n2);

        do{
                printf("+ - soma\n");
                printf("* - mult\n");
                printf("- - sub\n");
                printf("/ - divi\n");
                printf("^ - potencia\n");
                printf("5 - sair\n");
                printf("Insira opcao desejada: ");
                fflush(stdin);
                scanf("%c", &op);

            switch(op){
                case '+':
                    total = n1 + n2;
                    printf("\n\nO resultado eh: %d\n\n", total);
                    break;
                case '*':
                    total = n1 * n2;
                    printf("\n\nO resultado eh: %d\n\n", total);
                    break;
                case '-':
                    total = n1 - n2;
                    printf("\n\nO resultado eh: %d\n\n", total);
                    break;
                case '/':
                    total1 = (float) n1 / n2;
                    printf("\n\nO resultado eh: %.2f\n\n", total1);
                    break;
                case '^':
                    for (i>0;i<n2;i++){
                    pot = n1*(n1*i);
                             }
                    printf("\n\nO resultado eh: %.2f\n\n", pot);
                case '5':
                    break;
                default:
                    printf("\n\nInsira um numero pedido.\n\n");
                    break;


            }

        }while (op != '5');
        printf("\n\n»»»»» OBRIGADO POR PARTICIPAR!!! «««««\n\n");
}
