/* [22.07.01]
int 타입의 정수를 객체화한 Integer 클래스를 작성하라. 
Integer의 모든 멤버 함수를 자동 인라인으로 작성하라.

Integer 클래스를 활용하는 코드는 다음과 같다.

int main() {
    Integer n(30);
    cout << n.get() << ' '; // 30 출력 
    n.set(50);
    cout << n.get() << ' '; // 50 출력 
    
    Integer m("300");
    cout << m.get() << ' '; // 300 출력 
    cout << m.isEven(); // true(정수로 1) 출력 
}

클래스 만들기와 객체 개념 이해
<string> 헤더 파일의 stoi() 함수를 이용하면 편합니다.
*/

#include <iostream>
#include <string>
using namespace std;

class Integer {
private:
    int x;
public:
    Integer(int y) { x = y; }
    Integer(string s) { x = stoi(s); }
    int get() { return x; }
    int set(int y) { return x = y; }
    int isEven() { return true; }
};

int main() {
    Integer n(30);
    cout << n.get() << ' '; 
    n.set(50);
    cout << n.get() << ' '; 
    
    Integer m("300");
    cout << m.get() << ' '; 
    cout << m.isEven(); 
}