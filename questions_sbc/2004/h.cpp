#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int games, result;
    long long int mary, john;

    while (1) {
        cin >> games;
        if (games == 0) {break;}

        mary = 0;
        john = 0;

        for (int i = 0; i < games; i++) {
            cin >> result;

            if (result == 0) {
                mary++;
            }
            else {
                john++;
            }
        }
        
        cout << "Mary won " << mary << " times and John won " << john << " times" << endl;
    };


    return 0;
}