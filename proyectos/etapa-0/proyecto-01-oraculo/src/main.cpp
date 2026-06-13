// Proyecto 1: El Oráculo
// Completá el código según la consigna en README.md

import std;

enum class Experiencia {
    Si,
    No,
    Invalida
};

[[nodiscard]] Experiencia evaluar_experiencia(std::string_view respuesta) {
    // Completá:
    // Si respuesta es "s" o "S" → Experiencia::Si
    // Si respuesta es "n" o "N" → Experiencia::No
    // Sino → Experiencia::Invalida
}

[[nodiscard]] std::string recomendar_video(int edad, Experiencia exp) {
    // Completá según las reglas del oráculo
}

int main() {
    std::println("=== EL ORÁCULO DE DANPURIY ===");
    std::println("Te ayudaré a encontrar tu primer video.\n");

    // 1. Pedir nombre
    // 2. Pedir edad
    // 3. Pedir experiencia
    // 4. Validar experiencia
    // 5. Mostrar recomendación

    return 0;
}
