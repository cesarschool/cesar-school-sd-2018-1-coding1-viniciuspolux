#include <stdio.h>
/**
 * Implemente a função FizzBizz conforme definida abaixo. A mesma deve receber dois números inteiros não negativos (start e end) e imprimir a partir de start (incluído) até end (excluído) seguindo a mesma lógica do FizzBuzz.
 * 
 * Função: void fizzBizz(int start, int end)
 * Input: inteiros (start < end) determinando os números de início e fim da contagem.
 * Output: utilize a função printf da biblioteca stdio.h e escreva um número ou palavra por linha (\n):
 * 
 */
void fizzBizz(int start, int end)
{
    int x, y, z;
    printf("Primeiro múltiplo a ser substituído: ");
    scanf("%d", &x);
    printf("\nSegundo múltiplo a ser substituído: ");
    scanf("%d", &y);
    printf("\nA contagem deve ser feita até o número: ");
    scanf("%d", &z);
    
    int i = 1;
    while(i<=z)
    {
        if (i%x==0 && i%y==0)
            printf("FizzBuzz\n");
        else if (i%x==0)
            printf("Fizz\n");
        else if (i%y==0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
        i++;
    }
    return 0;

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: FizzBizz ###\n");
    
    fizzBizz(1, 6);
    fizzBizz(1, 16);
    fizzBizz(1, 100);
    
    return 0;
}
