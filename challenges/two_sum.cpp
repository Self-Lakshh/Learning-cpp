// challenges/two_sum.cpp
#include <iostream>
#include <vector>
std::pair<int,int> two(std::vector<int> &v, int t) {
    for(int i=0; i<v.size(); i++) {
        for(int j=i+1; j<v.size(); j++) if(v[i]+v[j]==t) return {i, j};
    }
    return {-1, -1};
}
int main() { return 0; }
