Punteros vs Referencias en C++

En C++, tanto los punteros como las referencias ofrecen maneras de interactuar con otros valores, permitiendo cambiar datos en diferentes partes de un programa. Aunque tienen propósitos similares, existen diferencias clave en su uso, sintaxis y capacidades.

**Punteros**

Los punteros son variables que almacenan la dirección de memoria de otro valor y pueden ser reasignados para apuntar a diferentes direcciones de memoria.

**Sintaxis**
Declaración: `Tipo* nombrePuntero;`
Asignación: `nombrePuntero = &variable;`
Acceso: `*nombrePuntero = nuevoValor;`

**Referencias**

Las referencias son alias para otra variable y, una vez inicializadas, no pueden ser cambiadas para referirse a otra variable.

**Sintaxis**
Declaración y asignación: `Tipo& nombreReferencia = variable;`
Acceso: `nombreReferencia = nuevoValor;`

**Características**
- No puede ser nullptr. Siempre debe referirse a un objeto.
- No puede ser reasignada para referirse a otra variable después de su inicialización.
- No tiene su propia dirección de memoria; es solo un alias para otra variable.

**Comparación y Uso**

- Inicialización: Las referencias deben ser inicializadas en su declaración, mientras que los punteros pueden ser declarados sin inicializar.
- Nullabilidad: Un puntero puede ser nullptr, pero una referencia siempre debe referirse a una variable existente.
- Reasignación: Un puntero puede ser reasignado para apuntar a otra variable; una referencia no puede cambiar a qué variable se refiere después de su inicialización.
- Aritmética: Los punteros permiten aritmética de punteros (e.g., `ptr++` para avanzar a la siguiente dirección de memoria), mientras que las referencias no.
- Sintaxis de acceso: Acceder al valor de un puntero requiere el uso del operador de indirección (`*ptr`), mientras que una referencia se usa igual que una variable normal.

**Elección entre punteros y referencias**

- Referencias: Útiles para pasar una variable a una función y modificar la variable original sin la posibilidad de reasignar la referencia.
- Punteros: Ideales para casos donde se necesita la capacidad de reasignar la referencia, trabajar con aritmética de punteros, o cuando se necesita que "no apuntar a nada" sea una opción válida (nullptr).
