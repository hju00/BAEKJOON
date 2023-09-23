#include <iostream>
#include <vector>

using namespace std;

vector<int> graph[2001];
bool visited[2001];
bool result = false;

void dfs(int start, int depth)
{
	// A, B, C, D, E �� ����� depth�� 4�� ��尡 �����ϸ� �����ȴ�.
	if (depth == 4) {
		result = true;
		return;
	}

	// start �� visited ǥ��
	visited[start] = true;

	// start �� ������ ������ search
	for (auto neighbor : graph[start]) {
		// �̿� ��尡 �湮���� ���� ��� && depth�� 4�� ��带 ã�� ����
		if (!visited[neighbor]) {
			// �ݺ�
			dfs(neighbor, depth + 1);
			// ���� ��ο��� ����� ã�� ���ϸ� ���� ���� �̵��ϰ�
			// ���� ��带 �ٽ� �湮�� �� �ֵ���
			visited[start] = false;
		}
	}

	

}

int main() {

	int N, M, a, b;
	cin >> N >> M;

	// �־��� �Է����� �׷��� ����
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