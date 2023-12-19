# Presentación

Soy Gabriel Abellán, estudiante de segundo de bachillerato del instituto **IES Juan Antonio Castro**. Este archivo es una presentación de mi trabajo.

En la asignatura de Tecnología e Ingeniería II estamos realizando un trabajo práctico que consiste en, entre toda la clase, realizar una estación meteorológica. En mi caso, mi trabajo es medir la cantidad de rayos ultravioleta, que se dividen en varios tipos, rayos **uva, uvb y uvc**.

Los **rayos uva** se caracterizan por tener una onda más larga, lo que hace que alcancen una totalidad de la superficie terrestre, penetran la segunda capa de la piel, contribuyen a diversos daños producidos por el sol, causan las arrugas y el envejecimiento prematuro y son capaces de penetrar tanto las nubes como las ventanas de vidrio.

Los **rayos uvb** se caracterizan por afectar a la primera capa de la piel, ser causantes de la mayoría de quemaduras producidas por el sol, pueden generar cáncer de piel y puede llegar a quemar la piel sin protección muy rápidamente.

Los **rayos uvc** son prácticamente imperceptibles para nosotros ya que son absorbidos en su totalidad por la atmósfera, además, se suele encontrar en artefactos hechos por seres humanos como los utilizados en el campo de la medicina para eliminar gérmenes o ayudar a cicatrizar heridas.

# Proceso

El proceso de nuestro trabajo comienza con la búsqueda de un sensor óptimo para realizar la medición adecuada. Tras investigar durante unos días encontramos uno muy bueno en relación calidad-precio, el **ML8511**, que pudo prestarnos nuestro profesor para realizar esta actividad. Tras esto, mi compañero y yo nos dispusimos a buscar información sobre la medición de los rayos ultravioleta e hicimos el código basándonos en varios que encontramos por internet. Cuando ya conseguimos que el sensor diese unas lecturas correctas, ambos nos separamos y nos dispusimos a realizar cada uno el trabajo por su parte. La primera parte era crear una base de datos mediante **MyAdminPhP** usando el webhosting gratuito 000webhost. Cuando ya tenía la base de datos funcionando correctamente empecé a crear una página web donde se mostrarían los datos en una tabla, además de añadir una pequeña presentación, imágenes del proceso y un enlace a mi repositorio de Github.

# Dificultades

Durante todo el proceso de este trabajo nos fuimos encontrando con numerosos problemas que pudimos ir resolviendo mediante avanzábamos. El primer problema que encontramos fue que el código no funcionaba correctamente, por lo que estuvimos varios días investigando y ayudándonos de numerosos códigos hasta finalmente conseguir la solución y arreglarlo. El siguiente problema fue el de la medición, ya que la medición de los **rayos ultravioleta** se da en **intensidad UV**, mientras que el sensor simplemente nos daba una medida que no estaba relacionada proporcionalmente. Otra vez estuvimos buscando solución a esto durante varios días sin encontrar ninguna solución hasta que encontramos un video de alguien que tenía los mismos problemas que nosotros y que utilizamos para dar correctamente las mediciones basándonos en su código y soluciones para realizar nosotros una tabla que estuviese relacionada con nuestros valores. 
| Valor analógico | Índice UV |
|--:|--|
| <50   | 0    |
| <227  | 1    |
| <318  | 2    |
| <408  | 3    |
| <503  | 4    |
| <606  | 5    |
| <696  | 6    |
| <795  | 7    |
| <881  | 8    |
| <976  | 9    |
| <1079 | 10   |
| <1170 | >=11 |

Tras esto, el código y las lecturas ya funcionaban correctamente. El siguiente paso fue la base de datos, donde no hubieron problemas significantes. Durante la creación de la página web no hubo problemas significativos que no se pudiesen solucionar con una simple búsqueda. Finalmente, el Git si que trajo distintos problemas. Primeramente, siguiendo los pasos de los tutoriales que utilizaba no conseguía hacer nada, ya que todo resultaba en errores que, al buscar las posibles soluciones en internet, acababan en más fallos aún. La solución que finalmente acabé encontrando fue simplemente crear una nueva carpeta y hacerlo todo desde ahí y, al menos hasta el momento, no ha vuelto a haber ningún problema. El último fallo que me he encontrado ha sido que al subir los datos a mi repositorio de Github muchas veces daban distintos errores que, afortunadamente, he conseguido solucionar buscando en la propia página de Github de errores frecuentes.