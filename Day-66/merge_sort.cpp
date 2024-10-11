// Day-66/merge_sort.cpp
#include <iostream>
void merge(int arr[], int l, int m, int r) {}
void sort(int arr[], int l, int r) {
    if(l >= r) return;
    int m = l + (r-l)/2;
    sort(arr, l, m);
    sort(arr, m+1, r);
    merge(arr, l, m, r);
}
int main() { return 0; }
