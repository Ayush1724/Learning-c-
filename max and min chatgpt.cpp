#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 121, 41, 4, 54, 5, 6, 457,1,635, 4599, 325, 14779, 2556, 99999,122};
    int s = sizeof(arr) / sizeof(arr[0]);

    // Find max value
    int max = arr[0];
    for (int i = 1; i < s; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Max :- " << max << endl;

    // Find min value
    int min = arr[0];
    for (int i = 1; i < s; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Min :- " << min << endl;

    return 0;
}
