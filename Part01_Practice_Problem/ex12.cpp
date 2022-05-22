#include <iostream>
#include <string>
using namespace std;

/*
#include <stdio.h>
int sum(); // 함수 원형 선언

int main() {
    int n=0;
    printf("끝 수를 입력하세요>>");
    scanf("%d", &n);
    printf("1에서 %d까지의 합은 %d 입니다.\n", n, sum(1, n));
    return 0;
}

int sum(int a, int b) {
    int k, res =0;
    for(K=a; k<=b; k++) {
        res += k;
    }
    return res;
}
*/

int main() {
    int n, total_sum = 0;
    cout << "더할 값의 마지막을 입력하세요 >> ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << i << endl;
        total_sum += i;
        cout << total_sum << endl;
        if (i == 2) cout << i << endl;
    }

    cout << "1 부터 " << n << " 까지 의 합은 >> " << total_sum << endl;

    // 새롭게 추가된 부분을 한다고 해보자 
    /*
    
    int sum(int a, int b) {
        int k, res =0;
        for(K=a; k<=b; k++) {
            res += k;
        }
        return res;
    }
    
    */

   int sum(int x, int y) {
       int a, res = 0;
       for (a=x; a<=y; a++) {
           res += a;
       }
       return res;
   }
}