#include <iostream>


int main(){

    int numeros[10];
    int x;
    int posicao = -1; 

    
    for (int i = 0; i < 10; i++) {
        std::cout << "Digite o número " << i + 1 << ": ";
        std::cin >> numeros[i];
    }

    
    std::cout << "\nDigite o número X que deseja procurar: ";
    std::cin >> x;

    
    for (int i = 0; i < 10; i++) {
        if (numeros[i] == x) {
            posicao = i;  
            break;        
        }
    }

    
    if (posicao == -1) {
        std::cout << "\nO número " << x << " NAO está no vetor.\n";
    } else {
        std::cout << "\nO número " << x << " está no vetor.\n";
        std::cout << "Ele aparece pela primeira vez na posição: " << posicao << "\n";
    }

    return 0;
}
