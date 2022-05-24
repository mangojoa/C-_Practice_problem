#include <iostream>
#include <cstring>
using namespace std;

// 덧셈(+), 뺄셈(-), 곱셈(*), 나눗셈(/), 나머지(%)의 정수 5칙 연산을 할 수 있는 프로그램을 작성하라. 
// 식은 다음과 같은 형식으로 입력된다. 정수와 연산자는 하나의 빈칸으로 분리된다.

int main() {
    int n1, n2;
    char Cal;

    while (true) {
        cout << "?";
        cin >> n1 >> Cal >> n2;
        switch (Cal)
        {
        case '+':
            cout << n1 << ' ' << Cal << ' ' << n2 << " = " << n1+n2 << endl;
            break;
        case '-':
            cout << n1 << ' ' << Cal << ' ' << n2 << " = " << n1-n2 << endl;
            break;
        case '*':
            cout << n1 << ' ' << Cal << ' ' << n2 << " = " << n1*n2 << endl;    
            break;
        case '/':
            cout << n1 << ' ' << Cal << ' ' << n2 << " = " << n1/n2 << endl;
            break;
        case '%':
            cout << n1 << ' ' << Cal << ' ' << n2 << " = " << n1%n2 << endl;
            break;
        
        default:
            cout << "잘못 입력하셨습니다.";
            break;
        }
    }
}