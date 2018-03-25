//
// Created by Kasey Stowell on 3/20/18.
//

#ifndef HASHING_MY_HASH_H
#define HASHING_MY_HASH_H

#include <list>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <iostream>
#include <deque>
#include "Superhero.h"

class My_Hash {
    public:
        explicit My_Hash(int size = 17011) : currsize{0} {
            lists.resize(17011);
        };
        
        bool insert(const Superhero & s) {
            std::cout << hash1(s.getName()) << std::endl;
            auto & whichList = lists[hash1(s.getName())];
            whichList.push_front(s);
            std::cout<<whichList.size()<<std::endl;
            return whichList.size() > 1;
        }
        
        Superhero &get(const std::string name) const {
            // get the value of string name by using hash func
            Superhero s;
            auto & whichList = lists[hash1(name)];
            for (auto const& i : whichList) {
                if (i.getName() == name) {
                    s = i;
                }
            }
            return s;
        }
    
    private:
        std::vector<std::list<Superhero>> lists;
        int currsize;
        
        size_t hash1(const std::string x) const {
            unsigned int hashVal = 0;
            for (char i : x) {
                hashVal += i;
            }
            hashVal %= 17011;
            return hashVal;
        }
};

#endif //HASHING_MY_HASH_H
