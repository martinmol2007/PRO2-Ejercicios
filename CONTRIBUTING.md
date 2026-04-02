# Contributing

Este proyecto contiene soluciones organizadas por problema.

---

## Estructura del repositorio

Cada problema debe estar dentro de una carpeta con el **mismo nombre que su identificador**.

Ejemplo:

```
X23067/
├── main.cc
├── Makefile      (si el problema lo incluye)
├── sample.inp    (si el problema lo incluye)
├── sample.cor    (si el problema lo incluye)
└── otros archivos necesarios (si los hay)
```

### Reglas:

* El nombre de la carpeta debe coincidir exactamente con el código del problema (ej: `X23067`)
* Un problema y sus archivos por carpeta

---

## Cómo contribuir

1. Haz un fork del repositorio
2. Crea una nueva rama:

   ```
   git checkout -b rama/nombre-problema
   ```
3. Añade tu solución siguiendo la estructura indicada
4. Haz commit:

   ```
   git commit -m "mensaje: añade solución X23067"
   ```
5. Haz push:

   ```
   git push origin rama/nombre-problema
   ```
6. Abre un Pull Request en GitHub y describe brevemente los cambios realizados

---

## Requisitos de las soluciones

* El código debe compilar correctamente
* Debe pasar los juegos de prueba públicos y privados
* Si no pasa todos los tests, indicarlo claramente (por ejemplo, en el mensaje de commit o en el PR)

---

## Samples (normalmente ya los incluye el Jutge)

Formato:

* `sample.inp` → entrada
* `sample.cor` → salida esperada

---

## Convenciones

* Lenguaje: **C++**
* Intentar que se entienda el código
