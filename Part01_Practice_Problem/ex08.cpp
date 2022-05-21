#include <iostream>
#include <string>
using namespace std;

// 한 라인에 ';'으로 5개의 이름을 구분하여 입력받아, 
// 각 이름을 끊어내어 화면에 출력하고 가장 긴 이름을 판별하라.

int main() {

    string top_name;
    char name[100];
    int max =0;
    cout << "5명의 이름을 ','으로 구분하여 입력하세요 >> ";

    for (int i = 0; i < 5; i++) {
        cin.getline(name, ',');
        cout << i+1 << " : " << name << endl;

        if (max < strlen(name)) {
            max = strlen(name);
            top_name = name;
        }
    }

    cout << "가장 긴 이름은 >> " << name;
}