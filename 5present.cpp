#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	cin>>s;
	for(int i = 0; i < (s.size()/2); ++i){
		int x = i + 1;
		if(s[i] != s[s.size()-x]){
			cout<<"Ne palindrom";
			exit(0);	
		}
	}
	cout<<"Palindrom";
	
	return 0;
}
