#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>
#include <vector>

class Paciente {
private:
    std::string nombre;
    std::string id; // N�mero de identificaci�n
    std::string fechaIngreso;
    std::string historialClinico;

public:
    // Constructor
    Paciente(const std::string& nombre, const std::string& id, const std::string& fechaIngreso);

    // Getters
    std::string getNombre() const;
    std::string getId() const;
    std::string getFechaIngreso() const;
    std::string getHistorialClinico() const;

    // Setters
    void setNombre(const std::string& nombre);
    void setId(const std::string& id);
    void setFechaIngreso(const std::string& fechaIngreso);
    void setHistorialClinico(const std::string& historial);

    // M�todos para gestionar pacientes
    void altaPaciente();
    void bajaPaciente();
    void modificarDatos(const std::string& nuevoNombre, const std::string& nuevoId, const std::string& nuevaFechaIngreso);
    void registrarHistorial(const std::string& nuevoHistorial);
    void mostrarInformacion() const; // M�todo para mostrar la informaci�n del paciente
};

#endif // PACIENTE_H