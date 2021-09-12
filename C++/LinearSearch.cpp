#include <iostream>
#include <string>

using namespace std;

int search(int arr[], int val) {
	int i;
	int n = sizeof(arr);
	for (i = 0; i < n; i++) {
		if (arr[i] == val) {
			return i;
	return -1;	
	};
}
