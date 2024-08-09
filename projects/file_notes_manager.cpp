// projects/file_notes_manager.cpp
#include <iostream>
#include <fstream>
int main() {
    std::ofstream out("notes.txt", std::ios::app);
    out << "New Note\n";
    out.close();
    return 0;
}
