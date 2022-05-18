#include <iostream>
#include <string>
using namespace std;

// 다음과 같이 "yes"가 입력될 때까지 종료하지 않는 프로그램을 작성하라. 
// 사용자로부터의 입력은 cin.getline() 함수를 사용하라.

int main() {
    string a; 

    while (true) {
        cout << "종료를 원한다면 '나는 빡빡이다'를 입력해 !! >> ";
        getline(cin, a);

        if (a == "나는 빡빡이다") {
            cout << endl;
            cout << "이걸 치네 ㅋㅋ";
            break;
        }
    }
}