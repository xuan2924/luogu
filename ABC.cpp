//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main() {
//	int arr[3] = {0};
//	for (int i = 0; i < 3; i++)
//		cin >> arr[i];
//
//	sort(arr, arr + 3);
//
//	char arr1[3];
//
//	for (int i = 0; i < 3; i++) {
//		cin >> arr1[i];
//		if (arr1[i] == 'A')
//			arr1[i] = '0';
//		else if (arr1[i] == 'B')
//			arr1[i] = '1';
//		else if (arr1[i] == 'C')
//			arr1[i] = '2';		
//	}
//
//	for (int i = 0; i < 3; i++) {
//		int a = arr1[i] - '0';
//		cout << arr[a] << ' ';
//	}
//
//	return 0;
//
//
//}
//
////大佬的解法
////#include<iostream>
////using namespace std;
////int a, b, c, i, x, y, z, sum;
////char ch;
////int main()
////{
////	cin >> x >> y >> z;
////	sum = x + y + z;
////	a = min(min(x, y), z);
////	c = max(max(x, y), z);
////	b = sum - a - c;
////	for (i = 1; i <= 3; i++)
////	{
////		cin >> ch;
////		if (ch == 'A') cout << a << ' ';
////		if (ch == 'B') cout << b << ' ';
////		if (ch == 'C') cout << c << ' ';
////	}
////	return 0;
////}
//// 
//// 
////极简主义！
////#include<iostream>
////#include<algorithm>
////using namespace std;
////int a[3];
////char A, B, C;
////int main()
////{
////	cin >> a[0] >> a[1] >> a[2];
////	cin >> A >> B >> C;
////	sort(a, a + 3);//懒懒_(:з」∠)_排序法
////	cout << a[A - 'A'] << " " << a[B - 'A'] << " " << a[C - 'A'];//字母是大写，减去‘A’后得到0（A）,1（B）,2（C）。
////	return 0;
////}