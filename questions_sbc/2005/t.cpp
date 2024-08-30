// TODO: Nao está correto!!!!!!!!!

#include <iostream>

using namespace std;

int main() {
    int inputs, result;
    bool prev, cur;

    while (1) {
        cin >> inputs;
        
        if (inputs == 0) {break;}
        result = 0;
        prev = 1;

        for (int i = 0; i < inputs; i++) {
            cin >> cur;

            if (!(cur + prev)) {
                result++;
                prev = 1;
            } else {
                prev = cur;
            }
        }

        cout << result << endl;
    }

    return 0;
};