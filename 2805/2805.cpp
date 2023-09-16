#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int tree_count, need_length, temp;
	cin >> tree_count >> need_length;
	
	vector<int> tree;

	for (int i = 0; i < tree_count; i++) {
		cin >> temp;
		tree.push_back(temp);
	}

	sort(tree.rbegin(), tree.rend());
	int result;
	int cut_tree = 0;
	int cutting = 1, index = 0;

	for (result = 1; cut_tree >= need_length; result++) {

		cut_tree += cutting;
		while (1) {
			if (tree[index] - result <= tree[index + 1]) {
				index++;
				cutting++;
			}
			else
				break;
		}

	}

	cout << tree[0] - result << endl;

	return 0;
}