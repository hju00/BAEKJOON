#include <iostream>
#include <cstring>

using namespace std;

class Stack {

private:
	int TOP;
	int stack_array[10001];

public:
	Stack() {
		TOP = -1;
	}
	
	void push(int x) {
		this->TOP++;
		stack_array[this->TOP] = x;
	}

	int pop() {
		if (this->TOP < 0)
			return -1;
		int temp = stack_array[this->TOP];
		this->TOP--;
		return temp;
	}

	int size() {
		return this->TOP + 1;
	}

	int empty() {
		if (this->TOP < 0)
			return 1;
		else
			return 0;
	}

	int top() {
		if (this->TOP < 0)
			return -1;
		return stack_array[this->TOP];
	}

};

int main() {
	
	int count, push_variable;
	cin >> count;
	string oper;
	Stack myStack = Stack();

	for (int i = 0; i < count; i++) {

		cin >> oper;
		
		if (oper.compare("push") == 0) {
			cin >> push_variable;
			myStack.push(push_variable);
		}
		else if (oper.compare("pop") == 0) {
			cout << myStack.pop() << endl;
		}
		else if (oper.compare("size") == 0) {
			cout << myStack.size() << endl;
		}
		else if (oper.compare("empty") == 0) {
			cout << myStack.empty() << endl;
		}
		else if (oper.compare("top") == 0) {
			cout << myStack.top() << endl;
		}

	}

	return 0;
}