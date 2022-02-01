#include <iostream>
//https://www.spoj.com/problems/PALINCOD/
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	cin>>n;
	for (int h=1;h<=n;h++) {
		string word;
		cin >> word;
		bool p=1;
		int size=word.length();
		for (int i=0;i<size;i++) {
			if (word[i]!=word[size-1-i]) {
				p=0;
				break;
			}			
		}
		cout<<h<<(p?" \"YES\"":" \"NO\"")<<endl;
	}
}
