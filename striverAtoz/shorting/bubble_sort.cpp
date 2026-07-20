#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& nums) {
    int n = nums.size();

    for (int i = n - 1; i >= 1; i--) {
        bool swapped = false;

        for (int j = 0; j < i; j++) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    bubbleSort(nums);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}