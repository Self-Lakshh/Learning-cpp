// projects/pointer_exercises.cpp
#include <iostream>
void scale(int *arr, int size) {
    for(int i=0; i<size; i++) *(arr+i) *= 2;
}
int main() {
    int arr[] = {1, 2, 3};
    scale(arr, 3);
    return 0;
}
