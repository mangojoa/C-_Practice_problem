#include <iostream>
#include <string>
using namespace std;

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