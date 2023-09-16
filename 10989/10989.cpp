#include <iostream>
#include <cstdio>

using namespace std;

int main() {

	int counting[10001] = { 0, };
	int temp;
	long unsigned int N;
	cin >> N;

	for (long unsigned int i = 0; i < N; i++) {
		scanf("%d", &temp);
		counting[temp]++;
	}

	for (int i = 1; i < 10001; i++) {
		if (counting[i] == 0)
			continue;
		for (int j = 0; j < counting[i]; j++)
			printf("%d\n", i);
	}
}