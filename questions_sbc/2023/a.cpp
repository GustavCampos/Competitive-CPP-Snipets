#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int nToys, height, toyMinH;
    int canGo = 0;

    cin >> nToys;
    cin >> height;

    for (int i = 0; i < nToys; i++) {
        cin >> toyMinH;
        
        if (height >= toyMinH) {
            canGo++;
        }
    }

    cout << canGo;

    return 1;
}