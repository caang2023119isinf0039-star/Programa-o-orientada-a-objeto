int main(){

    int num[8];
    int maior, menor;
    int posi_maior, posi_menor;

    for(int i = 0; i < 8; i++)
    {
        std::cout << "Digite um número: ";
        std::cin >> num[i];

        if(i == 0) 
        {
            maior = menor = num[i];
            posi_maior = posi_menor = i;
        }
        else
        {
            if(num[i] > maior)
            {
                maior = num[i];
                posi_maior = i;
            }

            if(num[i] < menor)
            {
                menor = num[i];
                posi_menor = i;
            }
        }
    }

    std::cout << "\nMaior número: " << maior 
         << " na posição " << posi_maior << "\n";

    std::cout << "Menor número: " << menor
         << " na posição " << posi_menor << "\n";

    return 0;
}
