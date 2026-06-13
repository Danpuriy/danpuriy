// Proyecto 1: El Oráculo — Solución de Referencia

import std;

enum class Experiencia {
    Si,
    No,
    Invalida
};

[[nodiscard]] Experiencia evaluar_experiencia(std::string_view respuesta) {
    if (respuesta == "s" || respuesta == "S") return Experiencia::Si;
    if (respuesta == "n" || respuesta == "N") return Experiencia::No;
    return Experiencia::Invalida;
}

[[nodiscard]] std::string recomendar_video(int edad, Experiencia exp) {
    if (exp == Experiencia::Si) {
        return "E00-07: Diagnóstico Forense (tenés base, arrancá directo)";
    }

    if (edad < 16) {
        return "E00-01: El Sueño de Turing (sin prisa, paso a paso)";
    } else if (edad <= 25) {
        return "E00-01: El Sueño de Turing (ritmo normal)";
    } else {
        return "E00-01: El Sueño de Turing (nunca es tarde para arrancar)";
    }
}

int main() {
    std::println("=== EL ORÁCULO DE DANPURIY ===");
    std::println("Te ayudaré a encontrar tu primer video.\n");

    std::print("¿Cómo te llamás? ");
    std::string nombre;
    std::getline(std::cin, nombre);

    std::print("¿Cuántos años tenés? ");
    int edad{};
    std::cin >> edad;
    std::cin.ignore(); // limpiar el buffer

    std::print("¿Tenés experiencia programando? (s/n): ");
    std::string exp_str;
    std::getline(std::cin, exp_str);

    Experiencia exp = evaluar_experiencia(exp_str);
    while (exp == Experiencia::Invalida) {
        std::println("Error: respondé 's' o 'n'.");
        std::print("¿Tenés experiencia programando? (s/n): ");
        std::getline(std::cin, exp_str);
        exp = evaluar_experiencia(exp_str);
    }

    std::println("\n{}, según el Oráculo, deberías empezar con:", nombre);
    std::println("  → {}", recomendar_video(edad, exp));

    return 0;
}
