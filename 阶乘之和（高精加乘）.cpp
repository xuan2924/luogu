#include<iostream>
#include<vector>

using namespace std;

vector<int>add(const vector<int>& a, const vector<int>& b) {
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

void print(const vector<int>& a) {
    for (int i = a.size() - 1; i >= 0; i--)
        cout << a[i];
}

//vector<int>mutiply(const vector<int>& a, const vector<int>& b) {
//    vector<int>result(a.size() + b.size(), 0);
//    for (int i = 0; i < a.size(); i++) {
//        for (int j = 0; j < b.size(); j++) {
//            result[i + j] += a[i] * b[j];
//            result[i + j + 1] += result[i + j] / 10;
//            result[i + j] %= 10;
//        }
//    }
//
//    while (result.size() > 1 && result.back() == 0)
//        result.pop_back();
//
//    return result;
//}
vector<int> multiply(const vector<int>& a, int b) {
    vector<int> result;
    int carry = 0;
    for (int i = 0; i < a.size() || carry; i++) {
        int temp = carry;
        if (i < a.size()) {
            temp += a[i] * b;
        }
        result.push_back(temp % 10);
        carry = temp / 10;
    }
    while (result.size() > 1 && result.back() == 0) {
        result.pop_back();
    }
    return result;
}
 
int main() {
    int n;
    cin >> n;

    vector<int>sum = { 0 };
    vector<int>fac = { 1 };

    for (int i = 1; i <= n; i++) {
        fac = multiply(fac, i);
        sum = add(sum, fac);
    }

    print(sum);
    return 0;
}