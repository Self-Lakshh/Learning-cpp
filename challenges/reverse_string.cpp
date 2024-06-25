// challenges/reverse_string.cpp
#include <iostream>
#include <string>
void rev(std::string &s) {
    int n = s.size();
    for(int i=0; i<n/2; i++) {
        std::swap(s[i], s[n-i-1]);
    }
}
int main() {
    std::string s = "hello";
    rev(s);
    std::cout << "Reversed: " << s << "\n";
    return 0;
}
