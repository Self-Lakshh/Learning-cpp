// Day-65/selection_insertion_sort.cpp
#include <iostream>
void sel(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int m = i;
        for(int j=i+1; j<n; j++) if(arr[j] < arr[m]) m = j;
        std::swap(arr[i], arr[m]);
    }
}
int main() { return 0; }
