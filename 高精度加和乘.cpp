//#include<iostream>
//using namespace std;
//
//
//int main() {
//	int sum = 0;
//	int n;
//	cin >> n;
//	int fac = 1;
//	for (int i = 1; i <= n; i++) {
//		fac *= i;
//		sum += fac;
//	}
//
//
//	cout << sum;
//
//	return 0;
//	
//}

/*�⵹�򵥵����Ȼ���漰������㷨֪ʶ��*/
//#include<iostream>
//#include<cstring>
//using namespace std;
//int n, a[90], b[90], c[90], f[90], d = 0, len_a, len_b = 1, len_c = 1, len_ans, m = 1;
//string s;
//int main() {
//    cin >> n;
//    b[0] = 1; //��ʼ��
//    for (int i = 1; i <= n; i++) { //����i�Ľ׳ˣ��Ѿ������i-1�Ľ׳�
//        len_a = 0; //i�ĳ���
//        int p = i;
//        while (p > 0) { //��i���a����
//            a[len_a++] = p % 10;
//            p /= 10;
//        }
//        for (int j = 0; j < len_a; j++) //����a*b��i*��i-1���Ľ׳ˣ�����i�Ľ׳ˣ������������ϲ飬��Ҳ��֪��Ϊʲô
//            for (int k = 0; k <= len_b; k++)
//                c[j + k] += a[j] * b[k];
//        for (int j = 0; j < len_c; j++) //��Ҫ��λ�ľͽ�λ
//            if (c[j] > 9) c[j + 1] += c[j] / 10, c[j] %= 10;
//        if (c[len_c]) len_c++; //�����λҪ��Ҫ��λ
//        len_ans = len_b, len_b = len_c, m = max(m, len_c); //��len_b��ֵ��len_ans���޸�len_b��ֵ��mΪi�׳˵ĳ��ȣ�����û�н�λ
//        for (int k = len_c - 1; k >= 0; k--) b[k] = c[k]; //��c���b���飬�����i�Ľ׳ˣ��´�ѭ��bΪi-1�Ľ׳�
//        len_c = len_a + len_ans;
//        memset(c, 0, sizeof(c)); //����c���飬׼�������¸��׳�
//        for (int j = 0; j < m; j++) { //�߾��ӣ�ֱ����ģ��
//            f[j] += b[j];
//            if (f[j] > 9) f[j + 1] += f[j] / 10, f[j] %= 10; //��λ��ע�ⲻҪд��f[j+1]++��f[j]-=10;����Ϊ����wa��һ����
//        }
//    }
//    while (!f[m] && m > 0) m--; //ȥ���׵���
//    for (int i = m; i >= 0; i--) cout << f[i]; //�������
//    return 0; //Բ������
//}
//
/*�߾����㷨����ʱ�е�����̫������������long long�ķ�Χ(2 
63
 ?1��9��10 
18
 )����ʱ��Ҫ���ַ���(string�ͻ�char������)���洢���֣�����ʱ��Ҫ������㷨�������㣬��Ϊ�߾����㷨���߾����㷨��������ģ�����ֵ����㡣

���ڱ�����˵��

S= 
i=1
��
n
?
 i!
��Ҫ�ĸ߾����㷨���Էֽ�Ϊ�ӷ����˷�(�õ��ӷ�)���׳�(�õ��˷�)���׳����(�õ��׳���ӷ�)����������(��)��*/


//������дһ���߾���ģ��
/*#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int>add(vector<int>& a, vector<int>& b) {
    vector<int>result;
    int carry = 0;
    int i = 0, j = 0;
    while (i < a.size() || j < b.size() || carry) {
        int x = (i < a.size() ? a[i++] : 0);
        int y = (j < b.size() ? b[j++] : 0);
        int temp = x + y + carry;
        result.push_back(temp % 10);
        carry = temp / 10;
    }
    return result;
}

void print(const vector<int>& num) {
    for (int i = num.size() - 1; i >= 0; i--)
        cout << num[i];
}


int main() {
    string num1, num2;
    cin >> num1 >> num2;

    vector<int>a, b;

    for (int i = num1.size() - 1; i >= 0; i--)
        a.push_back(num1[i] - '0');

    for (int i = num2.size() - 1; i >= 0; i--)
        b.push_back(num2[i] - '0');

    vector<int>sum = add(a, b);
    print(sum);

    return 0;
}*/

// �������˽�С��
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//vector<int>mutiply(const vector<int>& a, int b) {
//    vector<int>result;
//    int carry = 0;
//    for (int i = 0; i< a.size()||carry; i++) {
//        long long temp=carry;
//        if(i<a.size())
//        temp = (long long)a[i] * b;
//        result.push_back(temp % 10);
//        carry = temp / 10;
//    }
//
//    while (result.size() > 0 && result.back() == 0)
//        result.pop_back();
//}
//
//void print(const vector<int>& num) {
//    for (int i = num.size() - 1; i >= 0; i++)
//        cout << num[i];
//}
//
//int main() {
//    string a;
//    int b;
//    cin >> a >> b;
//
//    vector<int> num;
//
//    for (int i = a.size() - 1; i >= 0; i--)
//        num.push_back(a[i] - '0');
//
//    vector<int>product = mutiply(num,b);
//    print(num);
//
//    return 0;
//
//}
//
//
//vector<int>mutiply1(const vector<int>& a, const vector<int>& b) {
//    vector<int>result(a.size() + b.size(), 0);
//    for (int i = 0; i < a.size(); i++) {
//        for (int j = 0; j < b.size(); j++) {
//            result[i + j] += a[i] * b[j];
//            result[i + j + 1] += result[i + j] / 10;
//            result[i + j] &= 10;
//        }
//    }
//
//   
//    
//}