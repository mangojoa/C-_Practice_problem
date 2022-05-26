#include <iostream>
#include <cstring>
using namespace std;

// 영문 텍스트를 입력받아 알파벳 히스토그램을 그리는 프로그램을 작성하라. 
// 대문자는 모두 소문자로 집계하며, 텍스트 입력의 끝은 ';' 문자로 한다.

int main() {
    
    int c1 = 0 , c2 = 0;
    char c[10000];

    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
    cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
    cin.getline(c, 10000, ';');

    for (int i = 0; i < strlen(c); i++) {
        if (isalpha(c[i]) != 0) {
            c[i] = tolower(c[i]);
            c1++;
        }
    }

    cout << "총 알파벳의 수 >> " << c1 << endl;

    for (char x = 'a'; x <= 'z'; x++) {
        for (int y = 0; y <= strlen(c); y++) {
            if (c[y] == x) c2++;
        }
        cout << x << " (" << c2 << ") " << ": ";
        for (int z = 0; z <= strlen(c); z++) {
            if (c[z] == x) cout << "*";
        }
        cout << endl;
        c2 = 0;
    }



}