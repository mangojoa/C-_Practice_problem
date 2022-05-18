#include <iostream>
using namespace std;

// <Enter> 키가 입력될 때까지 문자들을 읽고, 
// 입력된 문자 'x'의 개수를 화면에 출력하라.

int main() {
    char a[100];
    int cnt = 0;

    cout << "문자열 100개를 임의로 입력해봐 ~ >> ";

    cin.getline(a, 100);

    for (int i = 0; i <= sizeof(a); i++) {
        if (a[i] == 'x') cnt++;
    }

    cout << "문자열 안의 'x'의 갯수는 ? " << cnt << endl;

}