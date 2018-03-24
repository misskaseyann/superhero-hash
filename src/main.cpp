#include <iostream>
#include <fstream>
#include <string>

int main() {
    int collisions = 0;
    // creating instance of hashmap
    
    // loading the file
    std::string line;
    std::ifstream file ("/Users/kaseystowell/Documents/workspace/hashing/marvel-wikia-data.csv");
    if (file.is_open()) {
        while (getline(file,line)) {
            std::cout << line << std::endl;
        }
        file.close();
    }
    else {
        std::cout << "Unable to open file.";
    }
    // creating instance of hashmap
    // creating objects
    // track number of collisions
    // print number of collisions
    std::cout << "Collisions..." << std::endl;
    return 0;
}