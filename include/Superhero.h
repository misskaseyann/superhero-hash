//
// Created by Kasey Stowell on 3/20/18.
//

#ifndef HASHING_SUPERHERO_H
#define HASHING_SUPERHERO_H

#include <string>

class Superhero {
    public:
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
        int get_page_id();
        
        /**
         * @return name
         */
        std::string get_name();
        
        /**
         * @return url slug
         */
        std::string get_urlslug();
        
        /**
         * @return id
         */
        std::string get_id();
        
        /**
         * @return alignment
         */
        std::string get_alignment();
        
        /**
         * @return eye color
         */
        char get_eye_color();
        
        /**
         * @return hair color
         */
        char get_hair_color();
        
        /**
         * @return sex
         */
        char get_sex();
        
        /**
         * @return gsm
         */
        std::string get_gsm();
        
        /**
         * @return alive
         */
        bool get_alive();
        
        /**
         * @return appearances
         */
        int get_appearances();
        
        /**
         * @return first appearance
         */
        std::string get_first_appearance();
        
        /**
         * @return year
         */
        int get_year();
        
        int getPage_id() const;
        
        const std::string &getName() const;
        
        const std::string &getUrlslug() const;
        
        const std::string &getId() const;
        
        const std::string &getAlignment() const;
        
        char getEye_color() const;
        
        char getHair_color() const;
        
        char getSex() const;
        
        const std::string &getGsm() const;
        
        bool isAlive() const;
        
        int getAppearances() const;
        
        const std::string &getFirst_appearance() const;
        
        int getYear() const;
    
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