#include <iostream>
using namespace std;

// cout과 << 연산자를 이용하여,
// 1에서 100까지 정수를 다음과 같이 한 줄에 10개씩 출력하라. 
// 각 정수는 탭으로 분리하여 출력하라.

int main() {
    for (int i = 1; i < 11; i++) {
        for (int j = 1; j < 11; j++){
            cout << i*j << '\t';

            if (j == 10) cout << endl;
        }
    }
}