// Day-19/sorting_arrays.cpp
#include <iostream>
void sort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int nums[4] = {4, 2, 1, 3};
    sort(nums, 4);
    return 0;
}
