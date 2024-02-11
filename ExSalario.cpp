#include<iostream>
#include<stdio.h>


int main() {
    // Write C++ code here
    float salarioMinimo, salarioPessoa, qtdSalarioMinimo;
    
    printf("Informe o valor do salário mínimo em \n R$ :");
    scanf("%f, &salarioMinimo");
    
    printf("Informe o valor do salário recebido pela pessoa \n R$ ");
    scanf("%f, &salarioPessoa"); 
    
    qtdSalarioMinimo=(salarioPessoa/salarioMinimo);
    
    printf("Uma pessoa que recebe um salário de R$ %.2f reais recebe %.1f salários mínimos \n", salarioPessoa,qtdSalarioMinimo);

    return 0;
}