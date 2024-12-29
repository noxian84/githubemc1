#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int n, int s) {
    int left = 0, right = n-1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == s)
            return mid;

        if (arr[mid] < s)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int n, s;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> s;

    sort(arr, arr + n);

    int result = binarySearch(arr, n, s);

    if (result != -1) {
        cout << "Element Found" << endl;
    } else {
        cout << "Element Not Found" << endl;
    }

    return 0;
}
