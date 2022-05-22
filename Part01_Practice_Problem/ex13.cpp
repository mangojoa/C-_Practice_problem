#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, c, d;
    a = "짜장";
    b = "짬뽕";
    c = "탕수육";
    d = "종료";

    int x, y, z, r, o, p;
    x = 1;
    y = 2;
    z = 3;
    r = 4;

    cout << "=========== XY중국집입니다. ===========" << endl;

    while (true)
    {
        cout << a << " : " << x << ", " << b << " : " << y 
        << ", " << c << " : " << z << ", " << d << " : " << r << " >> ";
        cin >> o;
        
        if (o == 1 || o == 2 || o == 3) {
            cout << " 몇 인분 주문 하시겠습니까? >> ";
            cin >> p;

            if (o == 1) {
                cout << "주문하신 짜장 " << p << "인분 나왔습니다." << endl;
            } else if (o == 2) {
                cout << "주문하신 짬뽕 " << p << "인분 나왔습니다." << endl;
            } else {
                cout << "주문하신 탕수육 " << p << "인분 나왔습니다." << endl;
            }
        } else if (o == 4){
            cout << "프로그렘을 종료합니다...." << endl;
            break;
        } else {
            cout << "손님 말이 되는 주문을 해주세요 ^^ " << endl; 
        }
    }
}