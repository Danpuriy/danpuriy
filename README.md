# DANPURIY — El Camino del Ingeniero

**Dan** de Daniel. **Puriy** de *camino* en quechua.

DANPURIY es un canal documental de ingeniería en computación narrado desde Latinoamérica con estándares de élite. No enseñamos a programar — construimos mundos mentales.

> *No venimos a enseñar a codificar. Venimos a construir ingenieros que entienden por qué el universo computacional funciona como funciona.*

---

## 📹 El Canal

[YouTube → DANPURIY](https://youtube.com/@danpuriy)

Cada video sigue una estructura de 5 actos:
- **Gancho** — Romper lo que creías saber
- **Conflicto** — El villano conceptual
- **Búsqueda** — Entender por dentro
- **Evidencia** — Verlo con tus ojos
- **Revelación** — Nunca volver a ser el mismo

---

## 🗺️ Roadmap

| Etapa | Tema | Nivel |
|-------|------|-------|
| **0** | Fundamentos de Ingeniería (C++23) | Base MIT |
| **0.5** | Math for CS/AI | Puente matemático |
| **1** | C++ Core & Data Structures | Constructor de estructuras |
| **2** | Computer Systems (CMU Labs) | Ingeniero de sistemas |
| **3** | Software Engineering | Artesano profesional |
| **4** | Distributed Systems | Arquitecto de sistemas |
| **4.5** | ML Fundamentals | Intelligence Engineer |
| **5** | Especialización (ML/AI, Backend, Data, SRE) | Staff Engineer |
| **6** | Advanced Topics | Systems Architect |
| **7** | Leadership | Staff / Principal / Fellow |

---

## 📂 Estructura del Repo

```
danpuriy/
├── videos/          → Metadatos YAML de cada video del canal
│   └── etapa-0/
├── ejercicios/      → Práctica por etapa. 3 niveles de dominio
│   └── etapa-0/
│       ├── teorico/      ← Preguntas conceptuales
│       ├── practico/     ← Código con tests automáticos
│       └── solucion/     ← Referencia
├── proyectos/       → Código fuente de los proyectos integradores
├── challenges/      → Retos semanales (#DanpuriyChallenge)
├── docs/            → Guías, cheatsheets, material complementario
└── comunidad/       → FAQ, roadmap público, recursos
```

---

## 🎯 Cómo Usar Este Repo

1. **Mirá el video** del tema que te interesa
2. **Cloná el repo**: `git clone https://github.com/Danpuriy/danpuriy`
3. **Navegá a la carpeta** del video: `ejercicios/etapa-0/E00-12-primer-binario/`
4. **Completá el código** y corre los tests:
   ```bash
   cmake -B build && cmake --build build && ctest
   ```
5. **Subí tu solución** a tu propio fork y compartila en comunidad

---

## 🏆 Niveles de Dominio

Cada concepto tiene 3 niveles de dominio:

### 🎯 Domino Teórico
Entendés el concepto. Podés explicarlo con tus palabras.

*Verificación:* Respondé las preguntas en `ejercicios/[etapa]/[video]/teorico/`

### ⚔️ Domino Práctico
Podés aplicarlo en código real.

*Verificación:* Completá el código en `ejercicios/[etapa]/[video]/practico/` y que pasen los tests.

### 🏆 Dominio Total
Integraste el concepto en un proyecto real.

*Verificación:* Completá el proyecto integrador de la etapa en `proyectos/`

---

## 🤝 Comunidad

- [Discord](https://discord.gg/danpuriy) — interactuá con otros estudiantes
- [GitHub Discussions](https://github.com/Danpuriy/danpuriy/discussions) — preguntá y respondé
- [YouTube](https://youtube.com/@danpuriy) — los videos

---

## 📜 Licencia

MIT — hacé lo que quieras con el código.
El contenido educativo es de Danpuriy © 2026.

---

*Hecho en un garaje, con una pared blanca y muchas ganas.*
