#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	cin >> s;
	int count = 1;
	int sum = 0;
	for (int i = 0; i < s.length() - 1; i++) {
		if (s[i] != '-') {
			sum += (s[i] - '0') * count;
			count++;
		}
	}

	if (sum % 11 == (int)(s[s.length() - 1] - '0') || (sum % 11 == 10 && s[s.length() - 1] == 'X'))
		cout << "Right";
	else
	{
		for (int i = 0; i < s.length() - 1; i++) {
			cout << s[i];
		}
		if (sum % 11 == 10) {
			cout << 'X';
		}
		else {
			cout << sum % 11;
		}
	}
	return 0;
}






