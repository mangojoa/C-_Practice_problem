#include <iostream>
using namespace std;

// 소수점을 가지는 5개의 실수를 입력 받아 제일 큰 수를 화면에 출력하라.

int main() {
    double d[5] = {0}, max = 0;
    
    for (int a = 0; a < 5; a++) {
        cin >> d[a];

        d[a] > max? max = d[a]:max;
    }
    cout << "제일 큰 수 = " << max;
}