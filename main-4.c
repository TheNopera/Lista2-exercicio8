#include <stdio.h>

int main() {
    int numCarrosVendidos;
    float valorVendas, salarioFixo, valorPorCarro, salarioFinal;

    printf("Digite o número de carros vendidos: ");
    scanf("%d", &numCarrosVendidos);

    printf("Digite o valor total das vendas: R$ ");
    scanf("%f", &valorVendas);

    printf("Digite o salário fixo do vendedor: R$ ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor recebido por carro vendido: R$ ");
    scanf("%f", &valorPorCarro);

    salarioFinal = salarioFixo + (numCarrosVendidos * valorPorCarro) + (0.05 * valorVendas);

    printf("O salário final do vendedor é de: R$ %.2f\n", salarioFinal);

    return 0;
}