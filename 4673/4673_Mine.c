#include <stdio.h>

int arr[10001];

void delete(int arr[], int value);

int main() {

	arr[10000] = 0;
	int i = 0;

	for (i = 0; i < 10000; i++) {
		arr[i] = i + 1;
	}

	int a = 0, b = 0, c = 0, d = 0;
	int value;

	for (d = 0; d < 10; d++) {
		for (c = 0; c < 10; c++) { 
			for (b = 0; b < 10; b++) {
				for (a = 0; a < 10; a++) {
					value = 2 * a + 11 * b + 101 * c + 1001 * d;
					if (value <= 10000) delete(&arr, value);
				}
			}  
		}
	}

	i = 0;

	while (arr[i] != 0) {
		printf("%d\n", arr[i]);
		i++;
	}


	return 0;
}

void delete(int arr[], int value) {
	
	int i;

	for (i = 0; i < 10000; i++) {
		if (*(arr + i) == value)	break;
	}

	while (i < 10001) {
		*(arr + i) = *(arr + i + 1);
		i++;
	}

}