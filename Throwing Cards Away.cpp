#include <iostream>
#include <queue>

using namespace std;

int main() {
	int size;
	
	while (true) {
		cin >> size;
		
		if (size == 0) break;
		
		queue<int> cards;
		vector<int> discartedCards;
		
		for (int i = 1; i <= size; i++) {
			cards.push(i);
		}
		
		while (cards.size() >= 2) {
			//First card
			discartedCards.push_back(cards.front());
			cards.pop();
			
			//Second card
			int ph = cards.front();
			cards.pop();
			cards.push(ph);
		}
		
		cout << "Discarded cards: ";
		for (int i = 0; i < (discartedCards.size() - 1); i++) {
			cout << discartedCards[i] << ", ";
		}
		cout << discartedCards.back() << endl;
		
		cout << "Remaining card: " << cards.front() << endl;
	}
}