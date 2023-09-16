#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 20000;

using namespace std;

bool maxLength(string a, string b) {
	if (a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}

int main() {

	int N;
	cin >> N;
	vector<string> v;	// v(N)���� ������ ũ�⸦ �ʱ�ȭ�ߴµ� ����, ������ ũ�⸦ ������������
	string temp;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end(), maxLength);

	v.resize(unique(v.begin(), v.end()) - v.begin());

	for (auto i : v)
		cout << i << endl;

	return 0;
}