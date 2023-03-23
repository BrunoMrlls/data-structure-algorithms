#include <iostream>

using namespace std;

//https://www.spoj.com/problems/PRIME1/

bool isPrime(int &num);

int main(int argc, char *argv[]) {
	ios_base::sync_with_stdio(false);
	
	int t;
	cin >> t;

	if (t > 10 || t < 1) return 0;
	for (int i = 0; i < t; i++) {
		int m;
		int n;
		cin >> m >> n;
		for (int j = m; j <= n; j++) {
			if (isPrime(j)==true) {
				cout << j <<  "\n";
			}	
		}
		cout << "\n";
	}
}

bool isPrime(int &num) {
	for (int i = 2; i < num; i++){ 
		if (num % i == 0) {
			return 0;
		}
	}
	return num > 1;
}
