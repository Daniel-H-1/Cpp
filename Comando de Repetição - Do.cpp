#include <iostream>

int count;
int n;
int sum;

do {
    std::cout << "Insira um novo número: " << endl;
    std::cin >> n;

    sum += n;
    count++;
} while (n != 0);

float average = (float)sum/(float)(count-1);
std::cout << "A média da série é: " << average << endl;