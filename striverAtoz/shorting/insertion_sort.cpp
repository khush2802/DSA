#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        int j = i;

        while (j > 0 && nums[j] < nums[j - 1]) {
            swap(nums[j], nums[j - 1]);
            j--;
        }
    }
}

int main() {
    int n;
    cout << "Enter the input: ";
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> nums[i];
    }

    insertionSort(nums);

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}