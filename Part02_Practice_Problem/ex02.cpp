/* 
[22.06.12] 날짜를 다루는 Date 클래스를 작성하고자 한다. 
Date를 이용하는 main()과 실행 결과는 다음과 같다. 
클래스 Date를 작성하여 아래 프로그램에 추가하라
*/

#include <iostream>
#include <string>
using namespace std;

class Date {
public:
    int year, month, day;
    Date(int y, int m, int d) {year = y, month = m, day = d;}
    Date(string text);
    void show() {cout << year << "년" << month << "월" << day << "일" << endl;}
    int getYear() {return year;}
    int getMonth() {return month;}
    int getDay() {return day;}
};

Date::Date(string text) {
    year = stoi(text.substr(0,4));
    month = stoi(text.substr(5,7));
    day = stoi(text.substr(7));
}

int main() {
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}