// projects/cli_task_manager.cpp
#include <iostream>
#include <vector>
#include <memory>
struct Task { std::string d; };
int main() {
    std::vector<std::unique_ptr<Task>> list;
    return 0;
}
