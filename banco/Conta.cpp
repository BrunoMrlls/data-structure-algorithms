#include "Conta.hpp"
#include <iostream>


void Conta::sacar(float valor) {
	saldo -= valor;
}

void Conta::depositar(float valor) {
	saldo += valor;
}

float Conta::getSaldo() {
	return saldo;
}

void Conta::setNumero(std::string n) {
	numero = n;
}

std::string Conta::getNumero() {
	return numero;
}

void Conta::setCpf(std::string c) {
	cpf = c;
}

std::string Conta::getCpf() {
	return cpf;
}
void Conta::setNome(std::string n) {
	nome = n;
}

std::string Conta::getNome() {
	return nome;
}
