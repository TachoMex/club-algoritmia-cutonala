# ¡Bienvenido al club de algoritmia del CUTonalá!

La intención de este repositorio es que se compartan los programas básicos de cada uno de los temas que se van resolviendo. ¡Animáte a contribuir!

## Estructura del repositorio
Este repositorio va a estar lleno de carpetas (módulos) que van a contener mas carpetas (temas) y dentro habrán programas de ejemplos (con la ayuda de todos).
Se debería ver mas o menos asi:
```
├── acm
│   └── 20180505
│       ├── a.cpp
│       ├── a.in
│       ├── b.cpp
│       ├── c.cpp
│       ├── c.in
│       ├── d.cpp
│       ├── g.cpp
│       ├── g.in
│       ├── h.cpp
│       ├── h.in
│       ├── i.cpp
│       ├── i.in
│       ├── j.cpp
│       └── j.in
├── conceptos-basicos
│   ├── README.md
│   └── leer-hasta-eof
│       ├── sumas.cpp
│       └── sumas.in
├── README.md
├── recusion-y-dp
│   ├── caminos.cpp
│   └── caminos.in
└── teoria-de-numeros
    ├── aritmetica-modular
    ├── criba-de-eratostenes
    └── teorema-fundamente-de-la-aritmetica
```

- Cada *módulo* contiene un archivo README.md (o debería) donde se hablan de se explica un poco sobre que trata.
- Más carpetas, con cada tema del módulo.
  + Dentro de cada tema, más carpetas para poner problemas de ejemplo.
    + Más archivos README.md quizá con breves explicaciones del ejemplo. Si el problema pertenece a varios temas podría hacerse referencia a la carpeta del otro tema.
    + Archivos de C/C++/Java/Python con las soluciones
    + Casos de prueba
  + Cada tema también tiene un README.
    + Dentro del readme una introducción al tema.
    + Explicaciones.
    + Enlaces a problemas relacionados con el tema.
    + Enlaces a tutoriales.

## ¿Cómo puedo contribuir?
- Crea un "fork" del repositorio a tu perfil
- Agrega cualquier material que creas conveniente:
  + ¿Tienes algún ejemplo que se revisó en alguna sesión y no está arriba? ¡Súbelo!
  + ¿Reescribiste un ejemplo en python o java? ¡Súbelo!
  + ¿Hace falta la explicación de alguno de los temas? ¡Escríbelo!
  + Cuéntanos en dónde prácticas. (Más abajo hay una lista de plataformas para estudiar).
  + Comparte tutoriales en línea.
  + Comparte problemas relacionados.

## ¿Qué cosas no se pueden subir?
Muy probablemente puedas compartir cualquier cosa en este repositorio, pero hay cosas que definitivamente no es buena idea compartir.
+ Piratería, supongo que no necesita explicación.
+ Ejecutables, por razones de seguridad y para evitar que crezca mucho el repo evitemos subir los ejecutables.
+ Soluciones a problemas enlazados. Se que cualquiera quisiera ver soluciones a los problemas, pero para evitar que la gente caiga en la tentación de subir nuestras soluciones a jueces en línea, está prohibido subir implementaciones, aunque, es posible subir tutoriales con la explicación del algoritmo.

### Etiquetas de los commits
Para tener un historial mucho mas limpio y que sea mas fácil ver que cosas hay de cada tema, hay que poner etiquetas al inicio de cada commit (también servirá para que quienes nunca han utilizado git se familiaricen un poco con el control de versiones mas real).

- [ACM:YYYY-MM-DD] Soluciones a concursos.
- [BK] Basic Knowledge, conceptos elementales para resolver un examen.
- [NT] Teoría de números.
- [DP] Recursión y programación dinámica.
- [DS] Estructuras de datos.
- [RMQ] Problemas de rangos.
- [GEO] Geometría.
