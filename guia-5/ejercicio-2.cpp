#include <iostream>

int main() {
	int num = 0, cant = 0, cantPos = 0;
	double prom = 0;

	std::cout << "Ingrese la cantidad de valores: ";
	std::cin >> cant;

	for (int i = 0; i < cant; i++) {
		std::cout << "Ingrese numero: ";
		std::cin >> num;

		if (num >= 0) {
			prom += num;
			cantPos++;
		}
	}

	prom /= cantPos;

	std::cout << "El promedio es: " << prom << std::endl;

	return 0;
}
