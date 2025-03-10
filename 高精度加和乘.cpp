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

/*这倒简单的题居然会涉及高深的算法知识！*/
//#include<iostream>
//#include<cstring>
//using namespace std;
//int n, a[90], b[90], c[90], f[90], d = 0, len_a, len_b = 1, len_c = 1, len_ans, m = 1;
//string s;
//int main() {
//    cin >> n;
//    b[0] = 1; //初始化
//    for (int i = 1; i <= n; i++) { //计算i的阶乘，已经算好了i-1的阶乘
//        len_a = 0; //i的长度
//        int p = i;
//        while (p > 0) { //把i存进a数组
//            a[len_a++] = p % 10;
//            p /= 10;
//        }
//        for (int j = 0; j < len_a; j++) //计算a*b（i*（i-1）的阶乘），即i的阶乘，看不懂的网上查，我也不知道为什么
//            for (int k = 0; k <= len_b; k++)
//                c[j + k] += a[j] * b[k];
//        for (int j = 0; j < len_c; j++) //需要进位的就进位
//            if (c[j] > 9) c[j + 1] += c[j] / 10, c[j] %= 10;
//        if (c[len_c]) len_c++; //看最高位要不要进位
//        len_ans = len_b, len_b = len_c, m = max(m, len_c); //把len_b赋值给len_ans，修改len_b的值，m为i阶乘的长度，看有没有进位
//        for (int k = len_c - 1; k >= 0; k--) b[k] = c[k]; //把c存进b数组，即存进i的阶乘，下次循环b为i-1的阶乘
//        len_c = len_a + len_ans;
//        memset(c, 0, sizeof(c)); //清零c数组，准备计算下个阶乘
//        for (int j = 0; j < m; j++) { //高精加，直接套模板
//            f[j] += b[j];
//            if (f[j] > 9) f[j + 1] += f[j] / 10, f[j] %= 10; //进位，注意不要写成f[j+1]++，f[j]-=10;就因为这里wa了一个点
//        }
//    }
//    while (!f[m] && m > 0) m--; //去掉首导零
//    for (int i = m; i >= 0; i--) cout << f[i]; //倒序输出
//    return 0; //圆满结束
//}
//
/*高精度算法：有时有的数会太大，甚至超过了long long的范围(2 
63
 ?1≈9×10 
18
 )，此时需要用字符串(string型或char型数组)来存储数字，运算时需要特殊的算法进行运算，称为高精度算法。高精度算法本质上是模拟数字的运算。

对于本题来说，

S= 
i=1
∑
n
?
 i!
需要的高精度算法可以分解为加法，乘法(用到加法)，阶乘(用到乘法)，阶乘求和(用到阶乘与加法)。具体如下(↓)。*/


//现在先写一个高精度模板
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

// 大整数乘较小数
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