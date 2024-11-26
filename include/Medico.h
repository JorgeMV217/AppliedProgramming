#ifndef MEDICO_H
#define MEDICO_H

#include <string>

class Medico {
private:
    std::string nombre;
    std::string id; // Número de identificación
    std::string especialidad;
    bool disponible; // Indica si el médico está disponible

public:
    // Constructor
    Medico(const std::string& nombre, const std::string& id, const std::string& especialidad, bool disponible = true);

    // Getters
    std::string getNombre() const;
    std::string getId() const;
    std::string getEspecialidad() const;
    bool isDisponible() const;

    // Setters
    void setNombre(const std::string& nombre);
    void setId(const std::string& id);
    void setEspecialidad(const std::string& especialidad);
    void setDisponibilidad(bool disponibilidad);

    // Métodos para gestionar médicos
    void altaMedico();
    void bajaMedico();
    void asignarEspecialidad(const std::string& nuevaEspecialidad);
    void mostrarInformacion() const; // Método para mostrar la información del médico
};

#endif // MEDICO_H

