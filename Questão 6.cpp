int main(){

    int num[8];
    int numero = num[0];
    int posi_maior;
    for(int i = 0; i <8; i++)
    {
        
        std::cout << "Digite um número: \n";
        std::cin >> num[i];

        if(i == 0)
        {
            numero = num[i];
        }if(num[i] > numero)
        {
            numero = num[i];
        }
        

    }
    std::cout << "Esse número é o maior:  " << numero << "\n";
}
