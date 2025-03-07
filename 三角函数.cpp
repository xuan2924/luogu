//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int gcd(int a, int b) {
//	while (b != 0) {
//		int temp = b;
//		b = a % b;
//		a = temp;
//	}
//
//	return a;
//}
//
//
//int main() {
//	int arr[3];
//	for (int i = 0; i < 3; i++)
//		cin >> arr[i];
//	
//	sort(arr, arr + 3);
//
//	int result = gcd(arr[2], arr[0]);
//
//	arr[0] /= result;
//	arr[2] /= result;
//
//	cout << arr[0] << '/' << arr[2];
//
//	return 0;
//	
//	
//}