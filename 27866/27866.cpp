#include <iostream>
#include <string>

using namespace std;

int main() {

	int N;
	string s;
	cin >> s;
	cin >> N;

	cout << s.at(N - 1) << endl;

	return 0;
}