#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {
	int mas[10];
	int temp;
	int max1=-100, max2=-100;
	srand(time(NULL));
	for(int i = 0; i < 10; ++i){
		mas[i] = rand() % 20 -10;
	}
	for(int i = 0; i < 10; ++i){
		cout<<mas[i]<<" ";
	}
	for(int i = 0; i < 10; ++i){
		if(mas[i]>max1){
			max1=mas[i];
			temp = i;
		}
	}
	mas[temp] = -10;
	for(int i = 0; i < 10; ++i){
		if(mas[i]>max2){
			max2=mas[i];
		
		}

	}

	cout<<endl<<"max1: "<<max1;
	cout<<endl<<"max2: "<<max2;
}
