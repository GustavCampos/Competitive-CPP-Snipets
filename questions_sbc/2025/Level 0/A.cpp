#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    bool C, G;

    cin >> C;
    cin >> G;
    
    if (C == 1) {
        cout << "vivo e morto" << endl;
    } else if (G == 1) {
        cout << "vivo" << endl;
    } else {
        cout << "morto" << endl;
    }
}