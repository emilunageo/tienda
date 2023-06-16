```yaml
Nombre: Emiliano Luna George. 
Matrícula: A01710584. 
Proyecto: Tienda online
```

# Sistema de Tienda Online 
El programa es un simulador de una tienda online que permite a los clientes ver productos en el catálogo, agregar productos a un carrito de compras y realizar el pago por los productos seleccionados.

## Características

- El programa utiliza clases y herencia para modelar los diferentes tipos de productos que se pueden vender en la tienda.
- Hay dos clases principales: la clase "Producto" que es abstracta y define los atributos y métodos comunes a todos los productos, y las clases "ProductoElectronico" y "ProductoRopa" que heredan de la clase "Producto" y especifican atributos adicionales y métodos específicos para cada tipo de producto.
- El programa utiliza un arreglo de punteros a objetos de tipo "Producto" para almacenar el catálogo de productos disponibles en la tienda.
- El catálogo se crea en el constructor de la clase "Catalogo" y se inicializa con una lista predefinida de productos.
- El programa muestra un menú al cliente que le permite ver el catálogo, agregar productos al carrito de compras y realizar el pago.
- El costo total de los productos seleccionados se calcula y se muestra al cliente antes de confirmar el pago.
- El programa maneja posibles errores al ingresar opciones inválidas en el menú.

## Posibles problemas y/o limitaciones

- La lista de productos disponibles se crea cada vez que se ejecuta el programa.
- No hay manejo de errores en la entrada del usuario al ingresar el ID de un producto. Si se ingresa un ID inválido, simplemente se muestra un mensaje de error y se solicita nuevamente la entrada.
- No hay una funcionalidad de autenticación de usuarios, por lo que cualquier persona puede acceder al catálogo y realizar compras.
- El programa asume que solo hay 11 productos en el catálogo y utiliza un arreglo fijo de tamaño 11. Si se agregan o eliminan productos, será necesario ajustar el tamaño del arreglo manualmente.
- No se implementa una funcionalidad de envío real de los productos, solo se muestra un mensaje indicando que los productos llegarán en 3 días hábiles.
- No se manejan situaciones de stock insuficiente de productos ni se actualizan las cantidades disponibles al realizar una compra.
- No se implementa una interfaz gráfica, todo el programa se ejecuta en la consola con interacción a través de la entrada y salida estándar.

## Requisitos previos

Para compilar y ejecutar el código, se requiere un compilador de C++ (Se recomienda usar terminal)

## Descarga y ejecución en Windows y Linux

1. Descarga el código fuente de la biblioteca virtual en un archivo con extensión `.cpp` o copia el código en un nuevo archivo con extensión `.cpp` en tu sistema.

2. Abre una terminal o línea de comandos.

3. Navega hasta el directorio donde se encuentra el archivo `.cpp` de la tienda en línea

4. Compila el código usando el siguiente comando en la terminal:

   ```bash
   g++ main.cpp
   ```

   Este comando asume que tienes instalado un compilador de C++ compatible.

5. Una vez compilado correctamente, ejecuta el programa con el siguiente comando:

   - En Windows:

     ```bash
     ./a.exe
     ```

   - En Mac y Linux:

     ```bash
     ./a.out
     ```

El programa iniciara en el menú principal y ya podrías empezar a interactuar con la tienda.

## Cambios importantes
1. Se cambio el UML: https://github.com/emilunageo/tienda/blob/main/UML.pdf
para la revalidación de la competencia SICT0301A (Genero un diagrama de clases UML correcto y y explico su relación con el problema de forma clara)

2. Hice la implemetación de clases abstractas en la clase Producto en el archivo Producto.h de la línea 20 a la 47 del mismo archivo https://github.com/emilunageo/tienda/blob/main/Producto.h. 
La competencia a recuperrar es: SICT0303A (Se implementa de manera correcta el concepto de Clases Abstractas)

3. Se hizo caso a las anotaciones anteriores y dividí las clases en headers (archivos .h) lo que me permtio tener un entorno de desarrollo más legible y eficiente. De igual manera documente con cada commit cada avance que realizaba por consiguiente con esté hecho busco recuperar la competencia: Usa herramientas de control de versiones (SICT0303A)

4. Cambios con respecto al último avance el avance 4, sustituí la clase Inventario por la clase Catalogo clase en donde se crean todos los productos.

5. De igual forma se implento una forma inicial o muy sencilla de interación con los usuarios en la cuál cada usuario puede añadir producto del catalogo que sean de su interés y pagar el precio que es calculado en catalogo.

6. Finalmente se incorporo documentación necesaria para tener mayor entendimiento del codigo por lo que busco cumplir con la competencia Incluye documentación útil en el repositorio del proyecto (SICT0303A)