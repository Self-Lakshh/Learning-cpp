// projects/cli_backend_simulation.cpp
#include <iostream>
#include <memory>
class Session { public: std::string user; };
int main() {
    std::unique_ptr<Session> s = std::make_unique<Session>();
    return 0;
}
