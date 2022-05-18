#include <iostream>
#include <string>
using namespace std;

// 문자열을 두 개 입력받고 두 개의 문자열이 같은지 검사하는 프로그램을 작성하라. 
// 만일 같으면 "같습니다", 아니면 "같지 않습니다"를 출력하라.

int main() {
    string a, b;

    cout << "아무 말이나 해보세요 >> ";
    getline(cin, a);
    cout << endl;

    cout << "방금 한 말을 다시 해보세요 >> ";
    getline(cin, b);
    cout << endl;

    if (a == b) {
        cout << "이걸 기억하시네요 ?";
    } else {
        cout << "이게 정상입니다.";
    }

}