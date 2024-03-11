#include <iostream>
#include <cmath>

/**
 * função para conferir se a entrada, o valor recebido, faz parte da sequencia de Fibonnaci.
 * A entrada da função é um inteiro.
 * A saida é um booleano:
 *      True: se a entrada faz parte da sequencia de Fibonnaci.
 *      False: se a entrada não faz parte da sequencia de Fibonnaci.
 * 
*/
bool fibonnaci(int entrada) {
    int fib_ant = 1;
    int fib = 1;
    bool saida = false;
    while (fib <= entrada)
    {
        if (fib == entrada)
        {
            saida = true;
        }
        int aux = fib;
        fib += fib_ant;
        fib_ant = aux;
    }

    return saida;
    
}

/**
 * Classe main, classe pricipal do pragrama.
 * Soliciata um inteiro como entrada e imprime se a entrada faz parte da sequecia de Fibonnaci ou não;
*/
int main(int argc, char const *argv[])
{
    int en = 0;
    std::cout << "Número para teste: ";
    std::cin >> en;
    if (fibonnaci(en))
    {
        std::cout << "Está na sequencia de Fibonnaci!" << std::endl;
    }else{
        std::cout << "nâo está na sequencia de Fibonnaci!" << std::endl;
    }    
  
}
