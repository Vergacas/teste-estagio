#include <iostream>
#include <cmath>

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

int main(int argc, char const *argv[])
{
    int en = 0;
    std::cin >> en;
    if (fibonnaci(en))
    {
        std::cout << "Está na sequencia de Fibonnaci!" << std::endl;
    }else{
        std::cout << "nâo está na sequencia de Fibonnaci!" << std::endl;
    }    
  
}
