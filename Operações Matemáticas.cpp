#include <iostream>

int n1;
int n2;

int main() {
    std:: cout << "Digite o primeiro número: ";
    std:: cin >> n1;
    std::cout << "Digite o segundo número: ";
    std::cin >> n2;

    int sum = n1 + n2;
    int sub = n1 - n2;
    int mul = n1 * n2;
    int div = n1 / n2;
    float fdiv = (float)n1 / (float)n2;
    int res = n1 % n2;
}
