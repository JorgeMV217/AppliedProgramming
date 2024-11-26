#ifndef CITA_H
#define CITA_H

#include <string>
#include "Paciente.h"
#include "Medico.h"

class Cita {
private:
    Paciente paciente; // Paciente asociado a la cita
    Medico medico;     // Médico asociado a la cita
    std::string fecha; // Fecha de la cita
    std::string urgencia; // Nivel de urgencia de la cita
    bool estado; // true si está activa, false si está cancelada

public:
    // Constructor
    Cita(const Paciente& paciente, const Medico& medico, const std::string& fecha, const std::string& urgencia, bool estado = true);

    // Getters
    Paciente getPaciente() const;
    Medico getMedico() const;
    std::string getFecha() const;
    std::string getUrgencia() const;
    bool isEstado() const;

    // Setters
    void setPaciente(const Paciente& paciente);
    void setMedico(const Medico& medico);
    void setFecha(const std::string& fecha);
    void setUrgencia(const std::string& urgencia);
    void setEstado(bool estado);

    // Métodos para gestionar citas
    void asignarCita();
    void cancelarCita();
    void modificarCita(const std::string& nuevaFecha, const std::string& nuevaUrgencia);
    void mostrarInformacion() const; // Método para mostrar la información de la cita
};

#endif // CITA_H
