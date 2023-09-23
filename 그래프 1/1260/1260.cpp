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

	// 정점 번호가 작은 순서대로 방문하도록 정렬
	sort(graph[start].begin(), graph[start].end());

	for (auto i : graph[start]) {
		if (!visited_dfs[i]) {
			dfs(i);
			// visited_dfs[start] = false;
			// 삭제한 이유 : 방문한 정점을 다시 방문할 수 있는 경우를 처리하기 위함
			// 만약 남겨놓게 되면 한 번 방문한 정점을 다시 방문 불가
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
		// 정점 번호가 작은 순서대로 방문하도록 정렬
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