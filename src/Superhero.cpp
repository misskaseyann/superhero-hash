//
// Created by Kasey Stowell on 3/20/18.
//

#include <string>
#include "../include/Superhero.h"

/**
 * Empty constructor.
 */
Superhero::Superhero() {
    // empty
}

/**
 * Constructor for Superhero.
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
Superhero::Superhero(int page_id,
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
                     int year) {
    Superhero::page_id = page_id;
    Superhero::name = std::move(name);
    Superhero::urlslug = std::move(urlslug);
    Superhero::id = std::move(id);
    Superhero::alignment = std::move(alignment);
    Superhero::eye_color = eye_color;
    Superhero::hair_color = hair_color;
    Superhero::sex = sex;
    Superhero::gsm = std::move(gsm);
    Superhero::alive = alive;
    Superhero::appearances = appearances;
    Superhero::first_appearance = std::move(first_appearance);
    Superhero::year = year;
}

/**
 * @return page id
 */
int Superhero::getPage_id() const {
    return page_id;
}

/**
 * @return name
 */
const std::string &Superhero::getName() const {
    return name;
}

/**
 * @return url slug
 */
const std::string &Superhero::getUrlslug() const {
    return urlslug;
}

/**
 * @return id
 */
const std::string &Superhero::getId() const {
    return id;
}

/**
 * @return alignment
 */
const std::string &Superhero::getAlignment() const {
    return alignment;
}

/**
 * @return eye color
 */
char Superhero::getEye_color() const {
    return eye_color;
}

/**
 * @return hair color
 */
char Superhero::getHair_color() const {
    return hair_color;
}

/**
 * @return sex
 */
char Superhero::getSex() const {
    return sex;
}

/**
 * @return gsm
 */
const std::string &Superhero::getGsm() const {
    return gsm;
}

/**
 * @return alive
 */
bool Superhero::isAlive() const {
    return alive;
}

/**
 * @return appearances
 */
int Superhero::getAppearances() const {
    return appearances;
}

/**
 * @return first appearance
 */
const std::string &Superhero::getFirst_appearance() const {
    return first_appearance;
}

/**
 * @return year
 */
int Superhero::getYear() const {
    return year;
}

/**
 * @param page_id
 */
void Superhero::setPage_id(int page_id) {
    Superhero::page_id = page_id;
}

/**
 * @param name
 */
void Superhero::setName(const std::string &name) {
    Superhero::name = name;
}

/**
 * @param urlslug
 */
void Superhero::setUrlslug(const std::string &urlslug) {
    Superhero::urlslug = urlslug;
}

/**
 * @param id
 */
void Superhero::setId(const std::string &id) {
    Superhero::id = id;
}

/**
 * @param alignment
 */
void Superhero::setAlignment(const std::string &alignment) {
    Superhero::alignment = alignment;
}

/**
 * @param eye_color
 */
void Superhero::setEye_color(char eye_color) {
    Superhero::eye_color = eye_color;
}

/**
 * @param hair_color
 */
void Superhero::setHair_color(char hair_color) {
    Superhero::hair_color = hair_color;
}

/**
 * @param sex
 */
void Superhero::setSex(char sex) {
    Superhero::sex = sex;
}

/**
 * @param gsm
 */
void Superhero::setGsm(const std::string &gsm) {
    Superhero::gsm = gsm;
}

/**
 * @param alive
 */
void Superhero::setAlive(bool alive) {
    Superhero::alive = alive;
}

/**
 * @param appearances
 */
void Superhero::setAppearances(int appearances) {
    Superhero::appearances = appearances;
}

/**
 * @param first_appearance
 */
void Superhero::setFirst_appearance(const std::string &first_appearance) {
    Superhero::first_appearance = first_appearance;
}

/**
 * @param year
 */
void Superhero::setYear(int year) {
    Superhero::year = year;
}

std::ostream &operator<<(std::ostream &os, const Superhero &superhero) {
    os << "page_id: " << superhero.page_id << " name: " << superhero.name << " urlslug: " << superhero.urlslug
       << " id: " << superhero.id << " alignment: " << superhero.alignment << " eye_color: " << superhero.eye_color
       << " hair_color: " << superhero.hair_color << " sex: " << superhero.sex << " gsm: " << superhero.gsm
       << " alive: " << superhero.alive << " appearances: " << superhero.appearances << " first_appearance: "
       << superhero.first_appearance << " year: " << superhero.year;
    return os;
}
