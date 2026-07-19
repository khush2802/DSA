#include <bits/stdc++.h>

using namespace std;

void selectionSort(vector<int>& nums) {

    int n = nums.size();

    for (int i = 0; i < n - 1; i++) {

        int minIdx = i;

        for (int j = i + 1; j < n; j++) {

            if (nums[j] < nums[minIdx]) {
                minIdx = j;
            }

        }

        swap(nums[i], nums[minIdx]);
    }
}

int main() {

    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of array:\n";

    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    selectionSort(arr);

    cout << "\nSorted Array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}