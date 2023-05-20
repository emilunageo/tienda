# Tienda Online

## Contexto

Las tiendas en línea, se han vuelto cada vez más importantes en el mundo actual. Estas plataformas de comercio electrónico permiten a los usuarios realizar compras y transacciones comerciales a través de Internet, sin tener que visitar una tienda física.

La importancia de las tiendas en línea radica en varios aspectos. En primer lugar, brindan comodidad y conveniencia a los usuarios, ya que pueden realizar compras desde la comodidad de sus hogares o cualquier lugar con acceso a Internet. Esto elimina la necesidad de desplazarse físicamente a una tienda, ahorrando tiempo y esfuerzo.

Las tiendas en línea también atienden a las necesidades cambiantes de los usuarios. En un mundo cada vez más conectado, las personas buscan opciones de compra flexibles y personalizadas. Las tiendas en línea ofrecen una amplia variedad de productos y servicios, permitiendo a los usuarios comparar precios y encontrar productos especializados que pueden no estar disponibles fácilmente en tiendas físicas.

En resumen, las tiendas en línea desempeñan un papel importante en el panorama comercial actual, brindando comodidad, variedad y alcance global a los usuarios, al tiempo que enfrentan desafíos para proporcionar una experiencia de compra en línea eficiente y satisfactoria.


## Explicación

Con el contexto anterior he decido realizar un programa en c++ que atienda estas necesidades de modo que el programa crea una <b>Tienda</b> la cuál tiene un <b>Inventario</b> a esté inventario se le agregan <b>Productos</b> que puden ser de tipo <b>Electronico</b> o <b>Alimenticio</b>, estos a su vez pueden ser añadidos a un <b>Carrito</b> el cuál puede ser manipulado por por el <b>Cliente</b> de modo que el cliente puedo añadir productos al carrito, eliminarlos o realizar un pedido, el cliente también podría:
<ul>
    <li>Obtener una factura</li>
    <li>Ver su historial de compras</li>
</ul> 


## Limitaciones
<ol>
    <li>El programa estará limitado al registro de una sola tienda.</li>
    <li>Un cliente solo puede tener un carrito</li>
    <li> No existe un usuario que tenga el rol de admin que pueda ejecutar tareas cómo:
    - Agregar productos al inventario.
    - Eliminar productos del inventario.
    - Editar productos del inventario.
    Los datos de los productos tendrían que ser proporcionados en el programa.
    </li>
    <li>El programa está limitado a un solo inventario por tienda</li>
</ol> 


## Consideraciones
El programa solo corre en la consola y está hecho con c++ standard por lo que corre en todos los sistemas operativos:

<ol>
    <li>Compilar con: "g++ Tienda.h Inventario.h Producto.h ProductoElectronico.h ProductoRopa.h Cliente.h Carrito.h main.cpp"
    </li>
    <li>Correr en linux: "/a.out"</li>
    <li>Correr en windows: "a.exe"</li>
</ol>

## Instrucciones para ejecución
- Se indicarán en un futuro