#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

int main(int argc, char* argv[]) {
	
	Conta c("Bruno", "022-009-542-63","1233-2322");

	c.depositar(122222);
	cout << c.getNome() << endl;
	cout << c.getNumero() << endl;
	cout << c.getSaldo() << endl;

	return 0;
}
