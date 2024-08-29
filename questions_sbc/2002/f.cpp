#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    unordered_map<int, bool> map;
    int M, N, ticket, returnValue;

    while (1) {
        cin >> N;
        cin >> M;

        if (N == 0 && M == 0) {break;}

        returnValue = 0;
        map.clear();

        for (int i = 0; i < M; i++) {
            cin >> ticket;

            if (map.find(ticket) == map.end()) {
                map.insert(make_pair(ticket, 0));
            } else if (!map[ticket]) {
                returnValue++;
                map[ticket] = true;
            }
        }

        cout << returnValue << endl;
    }


    return 0;
};