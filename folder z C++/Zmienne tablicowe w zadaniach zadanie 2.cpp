#include <iostream>
#include <vector>

int main() {
    std::vector<int> liczby;

    std::cout << "Wprowadz 5 liczb: " << std::endl;
    for (int i = 0; i < 5; i++) {
        int liczba;
        std::cin >> liczba;
        liczby.push_back(liczba);
    }

    std::cout << "W odwrotnej kolejnosci: ";
    for (int i = liczby.size() - 1; i >= 0; i--) {
        std::cout << liczby[i] << ", ";
    }

    return 0;
}