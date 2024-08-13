#include <iostream>

int n1;
int n2;

int main () {
    std::cout << "Digite o primeiro número: ";
    std::cin >> n1;
    std::cout << "Digite o segundo número: ";
    std::cin >> n2;

    if (n1 == n2)
        cout << n1 " == " << n2 << std::endl;
    if (n1 != n2)
        cout << n1 << " != " << n2 << std::endl;
    if (n1 < n2)
        cout << n1 << " < " << n2 << std::endl;
    if (n1 > n2)
        cout << n1 << " > " << n2 << std::endl;

}