#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

bool sorting(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

int main() {

	int N, x, y;
	vector<pair<int, int>> v;
	cin >> N;

	for (int i = 0; i < N; i++) {
		scanf("%d %d", &x, &y);
		cin.ignore();
		v.push_back(make_pair(x, y));
	}

	sort(v.begin(), v.end(), sorting);

	for (auto i : v)
		printf("%d %d\n", i.first, i.second);


	return 0;
}