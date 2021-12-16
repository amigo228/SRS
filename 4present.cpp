#include <iostream>

using namespace std;

int main() {
	int mas[5];
	int min = 25000;
	for (int i = 0; i < 5; i++)
	{
		cin >> mas[i];
	}
	for (int i = 0; i < 5; i++)
	{
		if (mas[i] < min) {
			min = mas[i];
		}
	}
	cout << "min: " << min;
}
