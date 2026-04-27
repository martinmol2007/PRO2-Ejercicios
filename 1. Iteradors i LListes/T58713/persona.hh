#ifndef PERSONA_HH
#define PERSONA_HH

#include <string>

class Persona {
    std::string dni_;
    std::string nom_;

 public:
    Persona(std::string dni, std::string nom) : dni_(dni), nom_(nom) {}

    /**
     * @brief Retorna el DNI de la persona
     *
     * @returns El DNI de la persona
     */
    std::string dni() const {
        return dni_;
    }

    /**
     * @brief Retorna el nom de la persona
     *
     * @returns El nom de la persona
     */
    std::string nom() const {
        return nom_;
    }
};

#endif  // PERSONA_HH
