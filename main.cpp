#include <iostream>
#include <vector>
#include <sstream>

std::vector<int> reverse_list(std::vector<int>& lista) {
    int left = 0;
    int right = lista.size() - 1;

    while (left < right) {
        std::swap(lista[left], lista[right]);
        left += 1;
        right -= 1;
    }

    return lista;
}

int main() {
    std::cout << "Digite os elementos do vetor separados por espaço (Pressione Enter para finalizar a entrada): ";
    std::string input;
    std::getline(std::cin, input);

    std::vector<int> lista;
    std::istringstream iss(input);
    int element;
    while (iss >> element) {
        lista.push_back(element);
    }

    std::vector<int> reversed_lista = reverse_list(lista);

    std::cout << "Vetor invertido:" << std::endl;
    for (int i = 0; i < reversed_lista.size(); i++) {
        std::cout << reversed_lista[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
