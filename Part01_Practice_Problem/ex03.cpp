#include <iostream>
using namespace std;

// 키보드로부터 두 개의 정수를 읽어 큰 수를 화면에 출력하라.

int main() {
    int a, b;
    cout << "두 수를 입력하라 >> ";

    cin >> a;
    cin >> b;

    if (a<b) {
        cout << "큰 수 = " << b;
    } else {
        cout << "큰 수 = " << a;
    }
}