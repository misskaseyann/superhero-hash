//
// Created by Kasey Stowell on 3/24/18.
//

#ifndef HASHING_MY_HASHNODE_H
#define HASHING_MY_HASHNODE_H

#include <cstdlib>

//
// Taken from https://medium.com/@aozturk/simple-hash-map-hash-table-implementation-in-c-931965904250
//

template<typename K, typename V>

class My_HashNode {
    public:
        My_HashNode(const K &key, const V &value) : key(key), value(value), next(NULL) {
        }
        
        K getKey() const {
            return key;
        }
        
        V getValue() const {
            return value;
        }
        
        void setValue(V value) {
            My_HashNode::value = value;
        }
        
        My_HashNode *getNext() const {
            return next;
        }
        
        void setNext(My_HashNode *next) {
            My_HashNode::next = next;
        }
        
    private:
        K key;
        V value;
        My_HashNode *next;
};

#endif //HASHING_MY_HASHNODE_H
