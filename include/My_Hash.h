//
// Created by Kasey Stowell on 3/20/18.
//

#ifndef HASHING_MY_HASH_H
#define HASHING_MY_HASH_H

template <typename K, typename V, typename  F = KeyHash<K>>
class My_Hash {
    public:
        My_Hash() {
                table = new My_HashNode<K, V> *[TABLE_SIZE]
        }
    
    private:
        My_HashNode<K, V> **table;
};

#endif //HASHING_MY_HASH_H
