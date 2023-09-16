#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

int main() {

	int N, temp;
	cin >> N;
	vector<int> v;

	for (int i = 0; i < N; i++) {
		scanf("%d", &temp);
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	for (auto i : v)
		printf("%d\n", i);

	return 0;
}