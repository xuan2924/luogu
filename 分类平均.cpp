//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	int n, k;
//	cin >> n >> k;
//
//	int sum1 = 0, count1 = 0;
//	int sum2 = 0, count2 = 0;
//
//	for (int i = 1; i <= n; i++) {
//		if (i % k == 0) {
//			sum1 += i;
//			count1++;
//		}
//		else {
//			sum2 += i;
//			count2++;
//		}
//	}
//
//	if (count1 > 0) {
//		cout << fixed << setprecision(1) << (double)sum1 / count1 << " ";
//	} else {
//		cout << "0.0 ";
//	}
//
//	if (count2 > 0) {
//		cout << fixed << setprecision(1) << (double)sum2 / count2 << endl;
//	} else {
//		cout << "0.0" << endl;
//	}
//
//	return 0;
//}