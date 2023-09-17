#include <iostream>
#include <deque>

using namespace std;


int main() {

	int N;
	cin >> N;

	deque<int> card;
	for (int i = 1; i <= N; i++)
		card.push_back(i);

	while (1) {
		if (card.size() == 1)
			break;
		card.pop_front();
		if (card.size() == 1)
			break;
		card.push_back(card.front());
		card.pop_front();
	}

	cout << card.front() << endl;
}