// challenges/palindrome.cpp
#include <iostream>
bool pal(std::string s) {
    int i=0, j=s.size()-1;
    while(i<j) {
        if(s[i++] != s[j--]) return false;
    }
    return true;
}
int main() { return 0; }
