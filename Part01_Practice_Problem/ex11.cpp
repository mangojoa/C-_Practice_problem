/* C 프로그램을 C++ 프로그램으로 수정하여 실행하라.

#include <stdio.h>
int main() {
    int k, n=0;
    int sum=0;
    printf("끝 수를 입력하세요>>");
    scanf("%d", &n);
    for(k=1; k<=n; k++) {
        sum+=k;
    }
    printf("1에서 %d까지의 합은 %d 입니다. \n", n, sum);
    return 0;
}

*/

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "더할 값의 마지막을 입력하세요 >> ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << i << endl;
        sum += i;
        cout << sum << endl;
        if (i == 2) cout << i << endl;
    }

    cout << "1 부터 " << n << " 까지 의 합은 >> " << sum;

}