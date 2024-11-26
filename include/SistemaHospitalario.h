#ifndef SISTEMA_HOSPITALARIO_H
#define SISTEMA_HOSPITALARIO_H

#include <vector>
#include <string>
#include "Paciente.h"
#include "Medico.h"
#include "Cita.h"

class SistemaHospitalario {
private:
    std::vector<Paciente> pacientes;  // Lista de pacientes
    std::vector<Medico> medicos;      // Lista de m�dicos
    std::vector<Cita> citas;          // Lista de citas

public:
    // M�todos para gestionar pacientes
    void gestionarPacientes();
    void altaPaciente(const Paciente& paciente);
    void bajaPaciente(const std::string& id);
    void modificarPaciente(const std::string& id);
    Paciente buscarPaciente(const std::string& criterio);

    // M�todos para gestionar m�dicos
    void gestionarMedicos();
    void altaMedico(const Medico& medico);
    void bajaMedico(const std::string& id);
    void asignarEspecialidad(const std::string& id, const std::string& especialidad);
    Medico buscarMedico(const std::string& criterio);

    // M�todos para gestionar citas
    void gestionarCitas();
    void asignarCita(const Cita& cita);
    void cancelarCita(const std::string& id);
    void modificarCita(const std::string& id);
    std::vector<Cita> listarCitasPorFecha(const std::string& fecha);

    // M�todos para generar reportes
    void generarReportes();
    void reportarPacientesAtendidos(const std::string& fechaInicio, const std::string& fechaFin);
    void reportarCitasPendientes(const std::string& medicoId);
    void reportarPacientesConEnfermedadesCronicas();

    // M�todos para manejar archivos
    void manejarArchivos();
    void guardarDatos();
    void cargarDatos();
};

#endif // SISTEMA_HOSPITALARIO_H
