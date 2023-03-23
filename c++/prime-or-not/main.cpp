#include <iostream>

//https://www.spoj.com/problems/PON/
using namespace std;

bool isPrime(int &n);
int main(int argc, char *argv[]) {
	int t;
	cin >> t;

	for (int i = 0; i <= t || t == 500; i++) {
		int n;
		cin >> n;
		if (n == 2 || isPrime(n) == true)
			cout << "YES";
		else
			cout << "NO";
		cout << "\n";
	}
}

bool isPrime(int &n) {
	if (n == 2 || n == 3)
        	return true;

	if (n <= 1 || n % 2 == 0 || n % 3 == 0)
		return false;

	for (int i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0)
		    return false;
	}
	return true;
}
