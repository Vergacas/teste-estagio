#include <iostream>
#include <string>

/**
 * Função para inverter uma string.
 * Recebe uma entrada do tipo string e retorna uma string inversa a entrada.
*/
std::string inverso(std::string entrada){
    std::string saida;
    
    for (int i = entrada.size(); i > 0; i--)
    {
        saida.push_back(entrada[i-1]);
    }
    
    return saida;
}

/**
 * Main solicita uma entrada, do tipo string, pelo console e imprime a string de entrada invertida.
*/
int main(int argc, char const *argv[])
{
    std::string entrada;
    std::cin >> entrada;
    
    std::cout << inverso(entrada) << std::endl;
    
    return 0;
}
