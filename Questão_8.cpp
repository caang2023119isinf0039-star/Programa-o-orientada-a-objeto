#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomes[6];
    string buscado;
    bool encontrado = false;

    
    for(int i = 0; i < 6; i++) {
        cout << "Digite o nome " << i + 1 << ": ";
        cin >> nomes[i]; 
    }

    
    cout << "\nDigite um nome para buscar: ";
    cin >> buscado;

   
    for(int i = 0; i < 6; i++) {
        if(nomes[i] == buscado) {
            encontrado = true;
            break;
        }
    }

    
    if(encontrado) {
        cout << "\nO nome \"" << buscado << "\" existe no vetor!\n";
    } else {
        cout << "\nO nome \"" << buscado << "\" NAO foi encontrado.\n";
    }

    return 0;
}
