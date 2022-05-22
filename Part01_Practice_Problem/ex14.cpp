#include <iostream>
#include <string>
using namespace std;

// 커피를 주문하는 간단한 C++ 프로그램을 작성해보자.
// 커피 종류는 "에스프레소", "아메리카노", "카푸치노"의 3가지이며 가격은 각각 2000원, 2300원, 2500원이다. 
// 하루에 20000원 이상 벌게 되면 카페를 닫는다. 실행 결과와 같이 작동하는 프로그램을 작성하라.

int main() {
    string a, b, c, menu;
    a = "에스프레소";
    b = "아메리카노";
    c = "카푸치노";

    int ap, bp, cp, total_benefit = 0, count = 0, sum = 0;
    ap = 2000;
    bp = 2300;
    cp = 2500;

    while (true) {
        
        cout << a << " : " << ap << ", " << b << " : " << bp << ", "
        << c << " : " << cp << " >> ";

        cin >> menu;
        cout << endl;

        cout << "몇 잔 드릴까요 손님? >> ";
        cin >> count;
        cout << endl;

        if (menu == "에스프레소") {
            sum = ap * count;
            total_benefit = sum;
            cout << total_benefit << "원 입니다, 맛있게 드세요 ~ ^^ " << endl;
        } else if (menu == "아메리카노") {
            sum = bp * count;
            total_benefit = sum;
            cout << total_benefit << "원 입니다, 맛있게 드세요 ~ ^^ " << endl;
        } else if (menu == "카푸치노") {
            sum = cp * count;
            total_benefit = sum;
            cout << total_benefit << "원 입니다, 맛있게 드세요 ~ ^^ " << endl;
        } else {
            cout << "Error!!" << endl;
        }

        if (total_benefit > 20000) {
            cout << "금일 총 판매액이 " << total_benefit << "을 달성하였기에 영업을 종료합니다." << endl;
            break;
        }
    }
}