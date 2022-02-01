#pragma once
#include <string>


class Conta {

	private:
		std::string numero;
		std::string cpf;
		std::string nome;
		float saldo;

	public:
		Conta(std::string numero, std::string cpf, std::string nome):
			numero(numero)
			, cpf(cpf)
			, nome(nome)
			, saldo(0){}
		void sacar(float valor);		
		void depositar(float valor);
		float getSaldo();

		void setNumero(std::string n);
		std::string getNumero();

		void setCpf(std::string c);
		std::string getCpf();

		void setNome(std::string n);
		std::string getNome();
};
