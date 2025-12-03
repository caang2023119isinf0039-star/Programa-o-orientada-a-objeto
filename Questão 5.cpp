#include <iostream>


int main()
{
    //  Resposta da quarta e quinta
    int num[5];
    int soma = 0;
    for(int i = 0; i< 5;i++)
    {
        std::cout << "Digite um número: ";
        std::cin >> num[i];
        soma += num[i];
    }
    float media = soma / 5.0;

    std::cout << "A soma total dos números é: " << soma << "\n";
    std::cout << "A média é: " << media << "\n";
