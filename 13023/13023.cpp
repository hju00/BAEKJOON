#include <iostream>
#include <vector>

using namespace std;

vector<int> graph[2001];
bool visited[2001];
bool result = false;

void dfs(int start, int depth)
{
	// A, B, C, D, E 의 관계는 depth가 4인 노드가 존재하면 성립된다.
	if (depth == 4) {
		result = true;
		return;
	}

	// start 는 visited 표시
	visited[start] = true;

	// start 의 인접한 노드부터 search
	for (auto neighbor : graph[start]) {
		// 이웃 노드가 방문하지 않은 노드 && depth가 4인 노드를 찾지 못함
		if (!visited[neighbor]) {
			// 반복
			dfs(neighbor, depth + 1);
			// 현재 경로에서 결과를 찾지 못하면 이전 노드로 이동하고
			// 현재 노드를 다시 방문할 수 있도록
			visited[start] = false;
		}
	}

	

}

int main() {

	int N, M, a, b;
	cin >> N >> M;

	// 주어진 입력으로 그래프 구성
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	for (int i = 0; i < N; i++) {
		dfs(i, 0);
		if (result)
			break;
	}

	cout << result << endl;

	return 0;
}