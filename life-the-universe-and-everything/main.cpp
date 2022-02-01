#include <iostream>
//https://www.spoj.com/problems/TEST/
using namespace std;

int main(int argc,char *argv[]) {
	int n;
	while(true) {
		cin >> n;
		if (n == 42) {
			break;
		}
		cout << n << endl;
	}
	return 0;
}
