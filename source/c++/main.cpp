#include <iostream>


const unsigned long long primeSize = 100000000; //‘f”‚Ì”
unsigned long long prime[primeSize] = { 0 };  //‘f”‚ª“ü‚é”z—ñ


bool Prime(unsigned long long length, unsigned long long c);
void PrintPrime(const unsigned long long* prime);

int main() {
	for (unsigned long long length = 0, c = 0;length < primeSize; c++) {
		if (Prime(length, c)) {
			prime[length] = c;
			length++;
			std::cout << c << "    ";
		}
	}
	PrintPrime(prime);
}


bool Prime(unsigned long long length, unsigned long long c) {
	if (c <= 1) {
		return false;

	}
	else if (c == 2) {
		return true;
	}
	else for (unsigned long long n = 0;n < length;n++) {
		if ((c % prime[n]) == 0) {
			return false;
		}
	}
	return true;
}

void PrintPrime(const unsigned long long* prime) {
	for (unsigned long long i = 0;i < primeSize;i++) {
		std::cout << prime[i] << "  ";
	}
}