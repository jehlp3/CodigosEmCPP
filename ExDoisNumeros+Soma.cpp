#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float num1, num2, soma;
    printf ("Digite um número: ");
    scanf("%f", &num1);
    printf("Digite outro número:");
    scanf("%f", &num2);
    soma = num1 + num2;
    printf("A soma dos números é igual à :%f", soma);
    return 0;

//p trazer número real, utilizar vírgula ao invés de ponto!

}