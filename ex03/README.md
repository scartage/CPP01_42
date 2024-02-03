# Resumen del Ejercicio de C++

Este ejercicio nos ha llevado a través de importantes conceptos de la programación en C++, incluyendo la creación de clases, y el uso de referencias y punteros. Aquí un resumen de los aspectos clave aprendidos:

## Creación de Clases

- **Definición de Clases**: Hemos creado clases para representar armas (`Weapon`) y humanos (`HumanA` y `HumanB`), utilizando miembros privados para los datos y miembros públicos para las funciones.

- **Constructores**: Aprendimos cómo inicializar objetos mediante constructores, tanto por defecto como con parámetros.

- **Destructor**: Se definió un destructor vacío en cada clase, aunque en este caso no fue estrictamente necesario, ya que no hay gestión manual de recursos.

## Uso de Referencias

- **HumanA con Referencia**: `HumanA` utiliza una referencia a `Weapon` para garantizar que siempre esté armado. La referencia se inicializa en el constructor y no puede ser reasignada, lo que asegura que `HumanA` siempre tenga un arma.

## Uso de Punteros

- **HumanB con Puntero**: `HumanB` utiliza un puntero a `Weapon`, permitiendo que `HumanB` pueda o no estar armado inicialmente. El puntero permite cambiar el arma o tener un `nullptr` para representar la ausencia de un arma.

## Inicialización a `nullptr` en C++98

- Se demostró cómo inicializar punteros a `nullptr` (usando `NULL` o `0` en C++98) para representar un estado inicial sin arma.

## Diferencias Clave

- **Referencias vs. Punteros**: A través de `HumanA` y `HumanB`, aprendimos la diferencia práctica entre usar referencias (siempre asociadas a un objeto) y punteros (que pueden ser reasignados o apuntar a `nullptr`).

## Conclusión

Este ejercicio no solo reforzó la comprensión de la sintaxis y características de C++, sino que también ofreció una valiosa práctica en el diseño orientado a objetos, mostrando cómo diferentes enfoques (referencias vs. punteros) se adecuan a diferentes necesidades de diseño.
