//
// Created by Kasey Stowell on 3/20/18.
//

#ifndef HASHING_SUPERHERO_H
#define HASHING_SUPERHERO_H

#include <string>
#include <ostream>

class Superhero {
    public:
        /**
         * Basic constructor.
         */
        Superhero();
        
        /**
         * General constructor for the class.
         *
         * @param page_id
         * @param name
         * @param urlslug
         * @param id
         * @param alignment
         * @param eye_color
         * @param hair_color
         * @param sex
         * @param gsm
         * @param alive
         * @param appearances
         * @param first_appearance
         * @param year
         */
        Superhero(int page_id,
                  std::string name,
                  std::string urlslug,
                  std::string id,
                  std::string alignment,
                  char eye_color,
                  char hair_color,
                  char sex,
                  std::string gsm,
                  bool alive,
                  int appearances,
                  std::string first_appearance,
                  int year);
        
        /**
         * @return page id
         */
        int getPage_id() const;
        
        /**
         * @return name
         */
        const std::string &getName() const;
        
        /**
         * @return url slug
         */
        const std::string &getUrlslug() const;
        
        /**
         * @return get id
         */
        const std::string &getId() const;
        
        /**
         * @return alignment
         */
        const std::string &getAlignment() const;
        
        /**
         * @return eye color
         */
        char getEye_color() const;
        
        /**
         * @return hair color
         */
        char getHair_color() const;
        
        /**
         * @return sex
         */
        char getSex() const;
        
        /**
         * @return gsm
         */
        const std::string &getGsm() const;
        
        /**
         * @return alive
         */
        bool isAlive() const;
        
        /**
         * @return appearance
         */
        int getAppearances() const;
        
        /**
         * @return first appearance
         */
        const std::string &getFirst_appearance() const;
        
        /**
         * @return year
         */
        int getYear() const;
        
        void setPage_id(int page_id);
        
        void setName(const std::string &name);
        
        void setUrlslug(const std::string &urlslug);
        
        void setId(const std::string &id);
        
        void setAlignment(const std::string &alignment);
        
        void setEye_color(char eye_color);
        
        void setHair_color(char hair_color);
        
        void setSex(char sex);
        
        void setGsm(const std::string &gsm);
        
        void setAlive(bool alive);
        
        void setAppearances(int appearances);
        
        void setFirst_appearance(const std::string &first_appearance);
        
        void setYear(int year);
        
        friend std::ostream &operator<<(std::ostream &os, const Superhero &superhero);
    
    private:
        int page_id;
        std::string name;
        std::string urlslug;
        std::string id;
        std::string alignment;
        char eye_color;
        char hair_color;
        char sex;
        std::string gsm;
        bool alive;
        int appearances;
        std::string first_appearance;
        int year;
};

#endif //HASHING_SUPERHERO_H