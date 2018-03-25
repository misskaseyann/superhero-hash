# Hash 1
Number Collisions: 14076
```c++
// comes from notes in class.
        size_t hash1(const std::string x) const {
            unsigned int hashVal = 0;
            for (char i : x) {
                hashVal += i;
            }
            return hashVal %= 17011;
        }
```
# Hash 2
Number Collisions: 5923
```c++
// modified from sdbm alg http://www.cse.yorku.ca/~oz/hash.html
        size_t hash2(const std::string x) const {
            unsigned int hashVal = 0;
            for (char i : x) {
                hashVal = i + (hashVal << 6) + (hashVal << 16) - hashVal;
            }
            return hashVal %= 17011;
        }
```
# Hash 3
Number Collisions: 5803
```c++
// modified from https://www.daniweb.com/programming/software-development/threads/231987/string-hash-function
        size_t hash3(const std::string x) const {
            unsigned int hashVal = 0;
            for (char i : x) {
                hashVal ^= (hashVal << 5) + (hashVal >> 2) + i;
            }
            return hashVal %= 17011;
        }
```
