#ifndef MEDICO_H
#define MEDICO_H

#include <string>

class Medico {
private:
    std::string nombre;
    std::string id; // N�mero de identificaci�n
    std::string especialidad;
    bool disponible; // Indica si el m�dico est� disponible

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

    // M�todos para gestionar m�dicos
    void altaMedico();
    void bajaMedico();
    void asignarEspecialidad(const std::string& nuevaEspecialidad);
    void mostrarInformacion() const; // M�todo para mostrar la informaci�n del m�dico
};

#endif // MEDICO_H

