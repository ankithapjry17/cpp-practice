#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m;  // position to insert elements

    for(int j = 0; j < n; j++) {
        nums1[i] = nums2[j];
        i++;
    }

    sort(nums1.begin(), nums1.end());
}

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;

    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    merge(nums1, m, nums2, n);

    cout << "Merged Array: ";
    for(int num : nums1) {
        cout << num << " ";
    }

    return 0;
}