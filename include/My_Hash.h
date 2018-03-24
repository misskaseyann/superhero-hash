//
// Created by Kasey Stowell on 3/20/18.
//

#ifndef HASHING_MY_HASH_H
#define HASHING_MY_HASH_H

#include "Superhero.h"

template <typename K, typename V>
class My_Hash {
    public:
        My_Hash(const K &key, const V &value) : key(key), value(value), next(NULL) {
        }
        
        bool insert(const )
    
    private:
        K key;
        V value;
        My_Hash *next;
};

#endif //HASHING_MY_HASH_H
