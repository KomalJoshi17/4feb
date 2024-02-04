#include <iostream>
#include <string>
using namespace std;

bool canConvert(const string& A, const string& B) {
    if (A.length() != B.length()) {
        return false;
    }

    int n = A.length();
    for (int K = 0; K < 26; ++K) {
        bool valid = true;
        for (int i = 0; i < n; ++i) {
            char shifted = (A[i] - 'a' + K) % 26 + 'a';
            if (shifted != B[i]) {
                valid = false;
                break;
            }
        }
        if (valid) {
            return true;
        }
    }
    return false;
}

int main() {
    string A, B;
    cin >> A >> B;

    if (canConvert(A, B)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}