/* [22.06.27]
문제 5번을 참고하여 생성자를 이용하여 짝수 홀수를 선택할 수 있도록 
SelectableRandom 클래스를 작성하고 
짝수 10개, 홀수 10개를 랜덤하게 발생시키는 프로그램을 작성하라.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class SelectableRandom {
private: 
    int a;
public: 
    SelectableRandom(int b);
    int next();
    int nextInRange(int x, int y);
};

SelectableRandom::SelectableRandom(int b) {
    b = a;
    srand((unsigned)time(0));
}

int SelectableRandom::next() {
    int r_num = rand();
    if(a%2 == 0){ // 짝수 return 
        if(r_num%2 == 0) 
            return r_num;
        else 
            return --r_num;
    }
    else {
        if(r_num%2 == 0) // 홀수 return 
            return ++r_num;
        else
            return r_num;
    }
}

int SelectableRandom::nextInRange(int x, int y) {
    int r_num = rand()%(y-x+1) + x;
    if(a%2 == 0) { // 짝수 return
        if(r_num%2 == 0) 
            return r_num;
        else 
            return ++r_num;
    }
    else { // 홀수 return 
        if(r_num%2 == 0) 
            return ++r_num;
        else 
            return r_num;
    }
}

int main() {
    SelectableRandom r1(0); // 짝수 랜덤 정수 발생
    cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개--" << endl;
    for(int i=0; i<10; i++) {
        int n = r1.next(); 
        cout << n << ' ';
    } 
    
    SelectableRandom r2(1); // 홀수 랜덤 정수 발생
    cout << endl << endl << "-- 2에서 " << "9 까지의 랜덤 홀수  정수 10 개 --" << endl;
    for(int i=0; i<10; i++) {
        int n = r2.nextInRange(2,9);
        cout << n << ' ';
    }
    cout << endl;
}
