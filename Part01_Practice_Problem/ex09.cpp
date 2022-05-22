#include <iostream>
#include <string>
using namespace std;

// 이름, 주소, 나이를 입력받아 다시 출력하는 프로그램을 작성하라. 
// 실행 예시는 다음과 같다. 

int main() {
    string name, address;
    int age;

    cout << "이름을 입력하세요 >> " << endl;
    getline(cin, name);

    cout << "주소를 입력하세요 >> " << endl;
    getline(cin, address);

    cout << "나이를 입력하세요 >> " << endl;
    cin >> age;

    cout << name << ',' << address << ',' << age << "세 입니다." << endl;


}