#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;

	int min;
	cin >> min;
	

	for (int i = 0; i < n - 1; i++) {
		int a;
		cin >> a;
		if (a < min)
			min = a;
	}

	cout << min;

	return 0;

}