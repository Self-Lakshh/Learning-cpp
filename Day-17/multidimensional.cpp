// Day-17/multidimensional.cpp
#include <iostream>
int main() {
    int mat[2][2] = {{1, 2}, {3, 4}};
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
