#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    char s[256];

    cout << "Введите строку: ";
    cin.getline(s, 256);

    int len = strlen(s);

    string words[128];
    int count[128];
    int n = 0;
    string word;

    for (int i = 0; i <= len; i++) {
        if ((s[i] != '.') && (s[i] != ' ')) {
            word += s[i];
        } else {
            if (word != "") {
                int k;
                for (k = 0; k < n; ++k) {
                    if (words[k] == word) {
                        count[k]++;
                        break;
                    }
                }
                if (k == n) {
                    words[n] = word;
                    count[n] = 1;
                    ++n;
                }
                word = "";
            }
        }
    }

    cout << "Слова, встречающиеся ровно один раз:\n";
    for (int k = 0; k < n; ++k) {
        if (count[k] == 1) {
            cout << words[k] << '\n';
        }
    }
    return 0;
}
