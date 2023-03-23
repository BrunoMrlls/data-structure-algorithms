#include <iostream>
using namespace std;int main(int argc,char *argv[]){int n;cin>>n;for(int h=1;h<=n;h++){string w;cin>>w;bool p=1;int s=w.length();for(int i=0;i<s;i++){if(w[i]!=w[s-1-i]){p=0;break;}}cout<<h<<(p?" \"YES\"":" \"NO\"")<<endl;}}
