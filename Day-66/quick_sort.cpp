// Day-66/quick_sort.cpp
#include <iostream>
int partition(int arr[], int l, int h) {
    int p = arr[h];
    int i = l - 1;
    for(int j=l; j<h; j++) {
        if(arr[j]<p) std::swap(arr[++i], arr[j]);
    }
    std::swap(arr[i+1], arr[h]);
    return i+1;
}
void qsort(int arr[], int l, int h) {
    if(l<h) {
        int p = partition(arr, l, h);
        qsort(arr, l, p-1);
        qsort(arr, p+1, h);
    }
}
int main() { return 0; }
