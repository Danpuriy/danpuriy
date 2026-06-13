# Proyectos — Etapa 0: Fundamentos de Ingeniería (C++23)

Cada proyecto integra múltiples conceptos de la etapa.
Completalos en orden para construir sobre lo aprendido.

---

## Lista de Proyectos

| # | Proyecto | Conceptos que integra | Dificultad |
|---|----------|----------------------|------------|
| 1 | **El Oráculo** | Control de flujo, CMake, Git, Clean Code | 🟢 Fácil |
| 2 | **Motor de Análisis de Datos** | Loops, Arrays, Algoritmos Elementales | 🟢 Fácil |
| 3 | **Evaluador de Expresiones** | Funciones, Recursión, string_view, span | 🟡 Medio |
| 4 | **Simulador de Eventos Físicos** | Punteros, Memoria, Structs, Archivos, GDB | 🟠 Difícil |
| 5 | **Mini-Compilador de Números** | IEEE 754, Casting, Shifts, Bitwise | 🟠 Difícil |
| 6 | **Performance Benchmark Suite** | Cache, perf, strace, Makefiles | 🔴 Experto |

---

## Cómo funcionan

1. Cada proyecto tiene su propia carpeta con:
   - `README.md` — consigna completa
   - `src/` — código base incompleto
   - `tests/` — tests que validan la solución
   - `solucion/` — solución de referencia (para consultar después de intentarlo)

2. Para hacer un proyecto:
   ```bash
   git clone https://github.com/Danpuriy/danpuriy
   cd proyectos/etapa-0/proyecto-01-oraculo
   code .
   ```

3. Para validar:
   ```bash
   cmake -B build && cmake --build build && ctest
   ```

4. Cuando pasen todos los tests, subí tu solución a tu fork y compartila en Discord. 🏆
