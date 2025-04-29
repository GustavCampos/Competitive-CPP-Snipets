/*
beecrowd | 2654
Godofor

By Abner Samuel P. Palmeira, IFSULDEMINAS BR Brazil
Timelimit: 1 

After the death of Ares, the last godofor, the other gods decided to make a
contest to decide who will be new godofor. But creatures of various universes
had an interest in the place. Because there are so many candidates, is very
hard to the gods select one of them, so they decided to resort to you, the god
of programming, they want you to develop a program that decides who will be the 
new godofor based on the criteria defined by the gods.

Candidates will be evaluated based on three attributes, candidate's power level,
how many gods the candidate has already killed and how many times the candidate
has already died. The godofor must be the most powerful candidate, in the case of
a tie, it must be the candidate who killed more gods, if a tie occurs again, the
chosen one will be the candidate who died the least, if even the tie persists, the
godofor will be the candidate with the lowest name Lexicographically.

Input
he first line contains an integer N (1 ≤ N ≤ 100) representing how many creatures 
have signed up to try to be the new godofor. Each of the following N lines contains
a string S (1 ≤ |S| ≤ 100) representing the name of the creature, followed by three
integers P (1 ≤ P ≤ 100),K (1 ≤ K ≤ 100), M (1 ≤ M ≤ 100) representing respectively
the power of the cretature, how many gods he has already killed, and how many times
he has already died. The string is composed of uppercase and lowercase letters.

Output
Your program should show who will be the new godofor.
*/
#include <iostream>

using namespace std;

struct god {
    string name;
    int power, kills, deaths;

    bool operator>(god& other) {
        if (power > other.power) goto trueOpt;
        if (power < other.power) goto falseOpt;

        if (kills > other.kills) goto trueOpt;
        if (kills < other.kills) goto falseOpt;

        if (deaths < other.deaths) goto trueOpt;
        if (deaths > other.deaths) goto falseOpt;

        return (name < other.name);

        trueOpt:
        return true;

        falseOpt:
        return false;
    }
};

istream& operator>>(istream& in, god& g) {
    in >> g.name >> g.power >> g.kills >> g.deaths;
    return in;
}

int main() {
    ios_base::sync_with_stdio(false);

    int n;
    god curGod, bestGod;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> curGod;

        if (i == 0) {
            bestGod = curGod;
            continue;
        }

        if (curGod > bestGod) bestGod = curGod;
    }

    cout << bestGod.name << endl;
	return 0;
}