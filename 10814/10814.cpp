#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cstdio>

using namespace std;

bool sortingOld(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second)
		return a.first < a.first;
	return a.second < b.second;
}

int main() {

	int N, order, old;
	string name;
	cin >> N;
	map<int, int> oldMap;
	map<int, string> nameMap;

	for (order = 0; order < N; order++) {
		scanf("&d &s", &old, &name);
		oldMap.insert(make_pair(order, old));
		nameMap.insert(make_pair(order, name));
	}

	sort(oldMap.begin(), oldMap.end(), sortingOld);

	for (auto i : oldMap) {
		auto t = nameMap.find(i.first);
		cout << i.second << " " << t->second << endl;
	}
	return 0;
}