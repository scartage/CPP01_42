## Sobre la asignación en el stack vs. heap:

### Stack

La memoria se gestiona automáticamente, pero tiene un tamaño limitado. `randomChump` crea un zombi en el stack, adecuado para objetos de vida corta que no necesitan ser accesibles fuera del ámbito en el que fueron creados.

- **Ventajas**:
  - Gestión automática de la memoria.
  - Rápida asignación y liberación.
- **Desventajas**:
  - Espacio limitado.
  - Los objetos se destruyen automáticamente al salir del ámbito.

### Heap

Permite una mayor flexibilidad y asignación de grandes cantidades de memoria. Sin embargo, requiere que gestiones manualmente la memoria (creación y destrucción). `newZombie` crea un zombi en el heap, útil para objetos cuya vida debe extenderse más allá del ámbito de la función que los creó o cuando necesitas controlar explícitamente su ciclo de vida.

- **Ventajas**:
  - Capacidad para manejar grandes cantidades de datos.
  - Los objetos pueden vivir más allá del ámbito en el que fueron creados.
- **Desventajas**:
  - Requiere gestión manual de la memoria.
  - Asignación y liberación más lentas comparadas con el stack.

---
