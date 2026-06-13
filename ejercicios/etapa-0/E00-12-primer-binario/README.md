# E00-12: Tu Primer Binario C++23

**Video:** [DANPURIY — Tu Primer Binario C++23](https://youtube.com/@danpuriy)

**Objetivo:** Escribir, compilar y ejecutar tu primer programa en C++23 usando módulos.

---

## 🎯 Dominio Teórico

Respondé estas preguntas en `teorico/respuestas.md`:

1. ¿Qué diferencia hay entre `#include <iostream>` e `import std;`?
2. ¿Qué ventaja tiene `std::println` sobre `std::cout`?
3. ¿Qué es un módulo en C++23 y qué problema resuelve?
4. ¿Qué hace el preprocesador? ¿El módulo lo elimina?

---

## ⚔️ Dominio Práctico

Completá el código en `practico/src/main.cpp`. Tenés que lograr que compile y ejecute.

```bash
cd practico
cmake -B build -DCMAKE_CXX_STANDARD=23
cmake --build build
./build/primer_binario
```

**Salida esperada:**
```
¡Hola, DANPURIY!
Esto es C++23 con módulos
```

---

## 🏆 Dominio Total

Extendé el programa para que:
1. Pida tu nombre por consola
2. Te salude personalmente: `"Bienvenido, [tu nombre], al camino del ingeniero"`
3. Imprima el tamaño en bytes de un `int`, un `double` y un `char` en tu sistema

**Pista:** usá `sizeof()` y `std::println("{}", ...)`
