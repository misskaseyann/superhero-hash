//
// Created by Kasey Stowell on 3/24/18.
//

#ifndef HASHING_HASHNODE_H
#define HASHING_HASHNODE_H

class HashNode {
    public:
        HashNode(int k, int v) {
            this->k = k;
            this->v = v;
        }
        
        int getKey() {
            return k;
        }
        
        int getValue() {
            return v;
        }
        
    private:
        int k;
        int v;
};

#endif //HASHING_HASHNODE_H
