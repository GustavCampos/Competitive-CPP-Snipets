#include <iostream>

using namespace std;

struct LinkedNode {
	int data;
	LinkedNode* next;
	
	LinkedNode(int value=0) : data(value), next(nullptr) {};
};

void addNode(LinkedNode* first, int valueToAdd) {
	if (first->next == nullptr) {
		first->next = new LinkedNode(valueToAdd);
	} else {
		addNode(first->next, valueToAdd);
	}
}

void printLinkedList(LinkedNode* first) {
	cout << first->data << " -> ";
	
	if (first->next != nullptr) {
		printLinkedList(first->next);
	}
	
}

int main() {
	ios_base::sync_with_stdio(false);
	
	int testCases, baseAdresses, keysNumber, key, value;
	
	cin >> testCases;
	
	for (int i = 0; i < testCases; i++) {
		if (i != 0) cout << endl;
		
		cin >> baseAdresses;
		cin >> keysNumber;
		
		LinkedNode arr[baseAdresses];
		
		for (int ii = 0; ii < keysNumber; ii++) {
			cin >> value;
			
			key = value % baseAdresses;
			
			if (arr[key].data == 0) {
				arr[key] = LinkedNode(value);
			} else {
				addNode(&arr[key], value);
			}
		}
		
		for (int j = 0; j < baseAdresses; j++) {
			cout << j << " -> ";
			
			if (arr[j].data != 0) printLinkedList(&arr[j]);
			
			cout << "\\" << endl;
		}
	}
	
	return 0;
}