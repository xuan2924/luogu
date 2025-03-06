//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main() {
//	struct lesson {
//		int classTime;
//		int day;
//	};
//	 lesson arr[7];
//	 int count = 1;
//	 for (int i = 0; i < 7; i++) {
//		 
//		 arr[i].day = count;
//		 count++;
//	 }
//
//	for (int i = 0; i < 7; i++) {
//		int a, b;
//		cin >> a >> b;
//		arr[i].classTime = a + b-8;
//	}
//
//	for (int i = 0; i < 7; i++) {
//		for (int j = 0; j < 7 - i - 1; j++) {
//			if (arr[j].classTime > arr[j + 1].classTime) {
//				lesson temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//
//	if (arr[6].classTime <= 0) {
//		cout << '0';
//	}
//	
//	else {
//		for (int i = 0; i < 6; i++) {
//			if (arr[i].classTime == arr[6].classTime && arr[i].day < arr[6].day) {
//				lesson temp = arr[i];
//				arr[i] = arr[6];
//				arr[6] = temp;
//			}
//		}
//		cout << arr[6].day;
//	}
//
//
//	for (int i = 0; i < 7; i++)
//		cout << arr[i].day;
//	return 0;
//	
//
//}