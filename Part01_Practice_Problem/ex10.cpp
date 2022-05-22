#include <iostream>
#include <cstring>
using namespace std;

// 문자열을 하나 입력받고 문자열의 부분 문자열을 
// 다음과 같이 출력하는 프로그램을 작성하라.

int main() {
    char a[50];
    cout << "문자열 입력 >> ";
    cin.getline(a, 50);

    for (int i = 0; i < strlen(a); i++) {
        for (int j = 0; j <= i; j++) {
            cout << a[j];
        }
        cout << endl;
    }
}