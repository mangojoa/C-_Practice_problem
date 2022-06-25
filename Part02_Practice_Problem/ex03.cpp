/*
[22.06.25]
은행에서 사용하는 프로그램을 작성하기 위해, 은행 계좌 하나를 표현하는 클래스 Account가 필요하다.
계좌 정보는 계좌의 주인, 계좌 번호, 잔액을 나타내는 3 멤버 변수로 이루어진다.
main() 함수의 실행과 결과가 다음과 같도록 Account 클래스를 작성하라.
*/

#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    string accountOwner;
    int accountNumber;
    int accountMoney;
public:
    Account(string x, int y, int z);
    void deposit(int a);
    string getOwner();
    int withdraw(int a);
    int inquiry();
};

Account::Account(string x, int y, int z) {
    accountOwner = x;
    accountNumber = y;
    accountMoney = z;
}

string Account::getOwner() {
    return accountOwner;
}

void Account::deposit(int a) {
    accountMoney += a;
}

int Account::withdraw(int a) {
    accountMoney -= a;
    return a;
}

int Account::inquiry() {
    return accountMoney;
}

int main() {
    Account a("Mangojoa", 1, 100000); 
    a.deposit(50000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
    int money = a.withdraw(20000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}