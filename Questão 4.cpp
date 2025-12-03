#include <iostream>


int main()
{
    //  Resposta da quarta e quinta
    int num[5];
    for(int i = 0; i< 5;i++)
    {
        std::cout << "Digite um número: ";
        std::cin >> num[i];
    }
    std::cout << "Os valores digitados foram: \n";
    for(int i = 0; i<5; i++)
    {
        std::cout << num[i] << "\n";
    }
