#include <iostream>
#include <string>

std::string inverso(std::string entrada){
    std::string saida;
    
    for (int i = entrada.size(); i > 0; i--)
    {
        saida.push_back(entrada[i-1]);
    }
    
    return saida;
}

int main(int argc, char const *argv[])
{
    std::string entrada;
    std::cin >> entrada;
    
    std::cout << inverso(entrada) << std::endl;
    
    return 0;
}
