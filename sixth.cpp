#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    int maxLength = 0;
    int currentLength = 0;

    for (char c : S) {
        if (c == 'A') {
            currentLength = 1;
        } else if (c == 'Z') {
            currentLength++;
            maxLength = max(maxLength, currentLength);
        } else {
            currentLength++;
        }
    }

    cout << maxLength << endl;

    return 0;
}