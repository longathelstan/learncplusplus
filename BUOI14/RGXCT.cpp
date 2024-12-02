#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string result = "";  // To store the result

    // Initially, the previous character is none, so we can take the first one
    char last = '\0';

    for (int i = 0; i < s.size(); i++) {
        // If it's the first character or different from the last one, add it to the result
        if (s[i] != last) {
            result += s[i];
            last = s[i];  // Update the last added character
        }
    }

    // Output the final result
    cout << result;

    return 0;
}
