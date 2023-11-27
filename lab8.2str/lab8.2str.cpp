#include <iostream>
#include <string>
#include<Windows.h>
using namespace std;
// Функція, яка повертає кількість слів, що починаються з букви "b"
int countWordsStartingWithB(const string& str) {
    int count = 0;
    size_t pos = 0;

    while ((pos = str.find_first_not_of(' ', pos)) != string::npos) {
        size_t wordEnd = str.find_first_of(' ', pos);
        string word = str.substr(pos, wordEnd - pos);

        if (!word.empty() && word[0] == 'b') {
            ++count;
        }

        pos = wordEnd;
    }

    return count;
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    string input;
    cout << "Введіть рядок: " << endl;
    getline(cin, input);

    int wordsStartingWithB = countWordsStartingWithB(input);

    cout << "Кількість слів які починаються з 'b': " << wordsStartingWithB << endl;

    return 0;
}
