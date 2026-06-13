# Proyecto 1: El Oráculo

**Etapa 0 — Fundamentos de Ingeniería (C++23)**

---

## Objetivo

Construir un sistema de decisiones determinista que evalúe múltiples condiciones y devuelva una respuesta basada en reglas lógicas. Como un oráculo antiguo, pero en código.

## Conceptos que integra

- Control de flujo (`if/else`, `switch`)
- `enum class` para estados discretos
- `[[nodiscard]]` para funciones que no deben ignorarse
- `std::println` y entrada por consola
- CMake moderno
- Git con commits atómicos

## Consigna

El programa debe:
1. Preguntar al usuario: nombre, edad, y si tiene experiencia previa en programación (s/n)
2. Evaluar las respuestas con una máquina de estados
3. Devolver una recomendación de qué video de la Etapa 0 debería ver primero

**Reglas del oráculo:**
- Si tiene experiencia previa: recomendar empezar desde E00-07
- Si es menor de 16 años y no tiene experiencia: recomendar E00-01 (despacio)
- Si tiene entre 16 y 25 sin experiencia: recomendar E00-01 (ritmo normal)
- Si es mayor de 25 sin experiencia: recomendar E00-01 pero con énfasis en "nunca es tarde"
- Si responde cualquier cosa que no sea "s" o "n" en experiencia: mostrar error y pedir de nuevo

## Cómo validar

```bash
cd proyectos/etapa-0/proyecto-01-oraculo
cmake -B build
cmake --build build
./build/oraculo
```

## Entrega

1. Hacé un fork del repo
2. Completá `src/main.cpp`
3. Asegurate de que compile con `-Wall -Wextra -Werror`
4. Hacé commit y push a tu fork
5. Compartí el link en Discord #proyectos
