#include <iostream>
using namespace std;
int main() {
    int k = 0;
    int key1;
    string code, key, new_code;
    cout << "輸入明文(英文):";
    cin >> code;
    cout << "輸入密鑰(英文小寫):";
    cin >> key;
    cout << "=================================> ";
    for (int i = 0; i < 16; i++) {
        while (i > k - 1) {
            i = i - k;
        }
        key1 = key[i] - 'a';
        if (code[i] + key1 > 'z') {
           new_code = code[i] - 26 + key1;
        }
        else if ((code[i] + key1 <= 'z') && (code[i] + key1 > 'a')) {
                new_code = code[i] + key1;
        }
        else if ((code[i] + key1 <= 'a') && (code[i] + key1 > 'Z')) {
                new_code = code[i] - 26 + key1;
        }
        else if ((code[i] + key1 <= 'Z') && (code[i] + key1 > 'A')) {
                new_code = code[i] + key1;
        }
        else if (code[i] == 0) {
                new_code = "";
        }
        else {
             new_code = code[i] + key1;
        }
        cout << new_code;
    }
}
