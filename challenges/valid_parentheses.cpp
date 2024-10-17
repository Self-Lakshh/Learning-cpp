// challenges/valid_parentheses.cpp
#include <iostream>
#include <stack>
bool check(std::string s) {
    std::stack<char> st;
    for(char c: s) {
        if (c=='(') st.push(c);
        else {
            if(st.empty()) return false;
            st.pop();
        }
    }
    return st.empty();
}
int main() { return 0; }
