#include <iostream>

int n1;
int contador = 0;
int amount = 0;

int main() {
    
    while (contador < 10) {
        std::cout << "Digite o primeiro número (" << contador << ")" << std::endl;
        std::cin >> n1;

        if (n1 < 5) {
            amount++;
        }
        contador++;
}
}