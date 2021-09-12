#include <iostream>
#include <string>

using namespace std;

int search(int arr[], int val) {
    int i;
    int n = sizeof(arr);
    for (i==0; i<n; i++) {
        if (arr[i] == val) {
            return i;
        }
        return -1;
    }

}

int main() {
    int x[] = {2, 4, 7, 3, 1, 8};
    int y = 7;
    search(x, y);
}