#include <iostream>
using namespace std;

/* [22.06.12] main()의 실행결과가 다음과 같도록 tower class 를 작성하라
높이는 1미터
높이는 100미터
*/

class Tower {
    int high;
public:
    Tower() {high = 1;}
    Tower(int h) {high = h;}
    int getHeight() { return high; }
};

int main() {
    Tower testTower;
    Tower A_Tower(400);
    cout << "높이는 " << testTower.getHeight() << "미터" << endl;
    cout << "높이는 " << A_Tower.getHeight() << "미터" << endl;
}