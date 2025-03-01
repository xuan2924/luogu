//#include<iostream>
//using namespace std;
//int main() {
//	int s, v;
//	cin >> s >> v;
//	int hour[24] = { 0 };
//
//	for (int i = 9; i <= 24; i++) {
//		hour[i - 9] = i;
//	}
//
//	for (int i = 1; i <= 8; i++)
//	{
//		hour[15 + i] = i;
//	}
//
//	
//	if (s % v == 0) {
//		int a = s % v / 60;
//		if(s%v%60+10<60)
//		cout << hour[22 - a] << ":" << 60-(s % v % 60+10);
//		else
//			cout << hour[22 - a-1] << ":" << 60-(s % v % 60 + 10-60);
//	}
//
//	else {
//		int a = s % v / 60;
//		if (s % v % 60 + 1 + 10 < 60)
//			cout << hour[22 - a] << ":" << 60-(s % v % 60 + 1+10);
//		else
//			cout << hour[22 - a - 1] << ":" << 60-s % v % 60 + 1 + 10 ;
//	}
//
//	return 0;
//}


#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int s, v;
    cin >> s >> v;

    // ������ʱ�䣨���ӣ�
    int total_time = (s + v - 1) / v + 10; // ����ȡ��

    // �����������ʱ��
    int latest_time = 8 * 60 - total_time;

    // ���ʱ��Ϊ��������ʾ��Ҫ��ǰһ�����
    if (latest_time < 0) {
        latest_time += 24 * 60;
    }

    // ����Сʱ�ͷ���
    int hour = latest_time / 60;
    int minute = latest_time % 60;

    // ����������ʽΪ HH:MM
    cout << setw(2) << setfill('0') << hour << ":"
        << setw(2) << setfill('0') << minute << endl;

    return 0;
}
