//
// Created by Kasey Stowell on 3/24/18.
//

#ifndef HASHING_HASHNODE_H
#define HASHING_HASHNODE_H

#include "Superhero.h"

class HashNode {
    public:
        HashNode(Superhero k, int v) {
            this->k = k;
            this->v = v;
        }
        
        Superhero getKey() {
            return k;
        }
        
        int getValue() {
            return v;
        }
        
    private:
        Superhero k;
        int v;
};

#endif //HASHING_HASHNODE_H
