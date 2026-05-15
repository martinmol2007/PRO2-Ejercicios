#ifndef PERSON_HH
#define PERSON_HH

#include <string>

class Person {
    int id_;
    std::string name_;

 public:
    Person(int id, std::string name) : id_(id), name_(name) {}

    /**
     * @brief Retorna el nom de la persona
     * @returns El nom de la persona
     */
    std::string name() const {
        return name_;
    }

    /**
     * @brief Retorna l'ID de la persona
     * @returns L'ID de la persona
     */
    int id() const {
        return id_;
    }

    /**
     * @brief Compara dues persones per ID
     *
     * Una persona és "menor" si té un ID més petit.
     *
     * @param other L'altra persona (la primera és el paràmetre implícit)
     * @returns `true` si la primera persona és "menor" que la segona, `false` en cas contrari.
     */
    bool is_less_than(const Person& other) const {
        return id_ < other.id_;
    }

    /**
     * @brief Compara dues persones per ID
     *
     * @param other L'altra persona (la primera és el paràmetre implícit)
     * @returns `true` si la primera té el mateix ID que la segona, `false` en cas contrari.
     */
    bool is_equal_to(const Person& other) const {
        return id_ == other.id_;
    }
};

#endif  // PERSON_HH