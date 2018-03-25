#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "../include/Superhero.h"
#include "../include/My_Hash.h"

int main() {
    // track number of collisions
    int collisions = 0;
    // creating instance of hashmap
    My_Hash hash = My_Hash();
    // loading the file
    std::string line;
    std::ifstream file ("/Users/kaseystowell/Documents/workspace/hashing/marvel-wikia-data.csv");
    if (file.is_open()) {
        while (getline(file,line)) {
            // Help with string delimiter from:
            // https://stackoverflow.com/questions/11719538/how-to-use-stringstream-to-separate-comma-separated-strings
            std::istringstream ss(line);
            std::string token;
            int x = 0;
            Superhero sh = Superhero();
            // creating objects
            while(std::getline(ss, token, ',')) {
                switch(x) {
                    case 0:
                        if (token.empty()) {
                            sh.setPage_id(0);
                        }
                        else {
                            sh.setPage_id(std::stoi(token));
                        }
                        x++;
                        break;
                    case 1:
                        sh.setName(token);
                        x++;
                        break;
                    case 2:
                        sh.setUrlslug(token);
                        x++;
                        break;
                    case 3:
                        sh.setId(token);
                        x++;
                        break;
                    case 4:
                        sh.setAlignment(token);
                        x++;
                        break;
                    case 5:
                        if (token.empty()) {
                            sh.setEye_color(' ');
                        }
                        else {
                            sh.setEye_color(token[0]);
                        }
                        x++;
                        break;
                    case 6:
                        if (token.empty()) {
                            sh.setHair_color(' ');
                        }
                        else {
                            sh.setHair_color(token[0]);
                        }
                        x++;
                        break;
                    case 7:
                        if (token.empty()) {
                            sh.setSex(' ');
                        }
                        else {
                            sh.setSex(token[0]);
                        }
                        x++;
                        break;
                    case 8:
                        sh.setGsm(token);
                        x++;
                        break;
                    case 9:
                        sh.setAlive(token[0] == 'L');
                        x++;
                        break;
                    case 10:
                        if (token.empty()) {
                            sh.setAppearances(0);
                        }
                        else {
                            sh.setAppearances(std::stoi(token));
                        }
                        x++;
                        break;
                    case 11:
                        sh.setFirst_appearance(token);
                        x++;
                        break;
                    case 12:
                        if (token.empty()) {
                            sh.setYear(0);
                        }
                        else {
                            sh.setYear(std::stoi(token));
                        }
                        x++;
                        break;
                    default:
                        // nothing
                        std::cout << "nothing";
                }
                if (x > 11) {
                    x = 0;
                   if (hash.insert(sh)) {
                       collisions ++;
                   }
                   
                }
            }
        }
        file.close();
    }
    else {
        std::cout << "Unable to open file.";
    }
    
    // print number of collisions
    std::cout << "Number Collisions: " << collisions << std::endl;
    //Superhero s = hash.get("Silhouette (Hand) (Earth-616)");
    std::cout << s << std::endl;
    return 0;
}