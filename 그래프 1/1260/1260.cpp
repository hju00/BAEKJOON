#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> graph[1001];
bool visited_dfs[1001];
bool visited_bfs[1001];

void dfs(int start) {
	visited_dfs[start] = true;
	cout << start << " ";

	// ���� ��ȣ�� ���� ������� �湮�ϵ��� ����
	sort(graph[start].begin(), graph[start].end());

	for (auto i : graph[start]) {
		if (!visited_dfs[i]) {
			dfs(i);
			// visited_dfs[start] = false;
			// ������ ���� : �湮�� ������ �ٽ� �湮�� �� �ִ� ��츦 ó���ϱ� ����
			// ���� ���ܳ��� �Ǹ� �� �� �湮�� ������ �ٽ� �湮 �Ұ�
		}
	}
}

void bfs(int start) {
	queue<int> frontier;
	frontier.push(start);
	visited_bfs[start] = true;

	while (!frontier.empty()) {
		int x = frontier.front();
		frontier.pop();

		cout << x << " ";
		// ���� ��ȣ�� ���� ������� �湮�ϵ��� ����
		sort(graph[start].begin(), graph[start].end());

		for (auto i : graph[x]) {
			if (!visited_bfs[i]) {
				frontier.push(i);
				visited_bfs[i] = true;
			}
		}
	}
}

int main() {
	
	int N, M, V;
	cin >> N >> M >> V;
	
	int a, b;
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	dfs(V);
	cout << "\n";
	bfs(V);

	return 0;
}