//#include<iostream>
//using namespace std;
//int main() {
//	int x, n,sum=0;
//	cin >> x >> n;
//
//	/*int week = (x + n) / 7;
//	int day = 7 - x;
//
//	if (day >= 2)
//		cout << week * 250 * 5 + day * 250 * (5 - x);
//	else
//		cout << week * 250 * 5;*/
//
//
//	/*上面这种方法不行，因为如果x是5，但是n是2，那这个时候week就是1，
//		所以不可能成立；*/
//
//	for (int i = 0; i < n; i++) {
//		if (x == 6) {
//			sum += 0;
//		}
//		else if (x == 7) {
//			x = 0;
//		}
//		else
//			sum += 250;
//		x++;
//	}
//
//	cout << sum;
//
//
//	return 0;
//}