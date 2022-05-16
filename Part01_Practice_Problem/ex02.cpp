#include <iostream>
using namespace std;

// cout과 << 연산자를 이용하여 
// 다음과 같이 구구단을 출력하는 프로그램을 작성하라.

int main() {
    for (int a = 0; a < 11; a++) {
        for (int b = 0; b < 11; b++) {
            cout << a << " * " << b << " = " << a*b << '\t';

            if (b == 10) cout << endl;  
        }
    }
}