#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n; 
    float total = 0;
    float colapsed = 0;

    string s, t;

    cin >> n;
    cin >> s;
    cin >> t;

    for (int i = 0; i < n; i++) {
        if (s[i] == '*') {
            total++;

            if (t[i] != '*') {
                colapsed++;
            }
        }
    }

    cout << fixed << setprecision(2) << (colapsed / total) << endl;
}