# **ESTACIÓN METEREOLÓGICA: PLUVIÓMETRO**
Al principio, estuve investigando sobre qué pluviómetro utilizar en  relación calidad-precio, y acabé 
decantándome por un pluviómetro casero en el que para  que funcionase  necesitaba un imán de neodimio 
y un sensor, llamado KY-025, que detecta el campo magnético del imán, de tal modo que cuando s e halla
llenado un lado del balancín, este al volcarse y viceversa, el imán al ir  pegado en el  balancín,  se
mueva de izquierda a  derecha  continuamente y  así, cada uno  de ese vuelcos, sean detectados por el 
sensor y mediante un código recibir los vuelcos y los L/m2 de agua caída.

## *PROBLEMAS:*

Sin embargo, a la hora de ejecutarlo tuvo  varios. Uno de ellos  fue la  precisión, ya que al tratarse de
pluviómetro casero, no era muy exacto en la medición y tampoco volcaba muy bien. No obstante, el problema
más grave fue que el sensor no detecta  muy bien el imán, unas  veces se volvía como loco y detectaba un 
gran número de vuelcos cuando solo había  volcado una vez, y otras  todo lo contario, el balancín volcaba
muchas veces, pero el sensor no lo detectaba. 

## *SOLUCIÓN:*

Tras un tiempo investigando sobre ello,  encontré la solución, pero esta  era algo complicada,  pues exigía
el uso de resistencias  y  condensadores, por lo que resultó  muy  confuso.  Al final, dejé el pluviómetro 
casero y obté por utilizar el digital, ya que este era mcho más preciso y ya venía con el circuito montado 
en su interior,  por lo que no tuvo  que  romperme la cabeza para el circuito.  Además, otro punto a favor 
fue que en youtube había un vídeo explicando paso  a  paso cómo hacer funcionar  y  el código que utilizar 
([https://www.youtube.com/watch?v=hvD2rsqDduU&t=457s]). Sin embargo, volví a tener un problema  en  el que 
tardé bastante tiempo en descubrir cuál era y resulta que yo puse en arduino el pin 4  y  este  pin no  era
válido para que funcionase el código. Pero, más tarde dejé de utilizar la placa arduino para utilizar mejor
esp32 donde prácticamente todos los pines son válidos, a diferencia que en arduino.


![Pluviómetro digital](https://ae01.alicdn.com/kf/S961b98c729bb49d5842d45e386b752b5v/Medidor-de-lluvia-para-medir-accesorios-para-estaciones-meteorol-gicas-piezas-de-repuesto-tiles-0-3mm.jpeg)


## *BASE DE DATOS:*

Por otro lado, me creé una base de datos en 000web.host y no tuve ningún problema ya que en youtube hay un
vídeo que lo explica paso a  paso  ([https://www.youtube.com/watch?v=hvveBxxdx0Q&t=284s]).  Al fusionar mi
código con el código de envío de datos con wifi que ofrece en el vídeo tampoco tuve ningún problema, pues 
solo tuve que borrar la parte del dht e introducir mi código del pluviómetro.
### *PROBLEMAS:*
Sin embargo, tuve un problema con las librerías, pues visual code no las reconocía, y tras un rato probando
de todo, decidí borrar visual code y volverlo a instalar, y funcionó.  Ya a la hora de verificar  mi código
no salía ninguno error, entonces me dispuse a subirlo a la placa  para  que  enviase  los datos a la  base 
de  datos.  No obstante,  por alguna razón que desconozco,  mi placa esp32 no se conecta al wifi,  por  lo 
que me sale el error exit status 2, y todavía no sé cómo solucionarlo.

## *GITHUB:*

Lo primero que hice fue crearme un cuenta y un repositorio en github y posteriormente me descargué git para poder
trabajar con ello desde visual code y poder subir mis proyectos a mis repositorios,  no tuve ningún problema para
crearlo. Me creé dos repositorios privados, el primero de prueba donde subí un  index.html  desde donde empecé a 
hacer varios modificaciones con los commits y así familiarizarme y coger soltura con git.  Sin embargo,  al poner
el comando git add . me salía que tení que introducir mi email con  git config --global user.email ""  por lo que
introduje ese comando y, así como, siguiendo todas las indicaciones de un  vídeo  donde lo explica paso  a  paso 
([https://www.youtube.com/watch?v=L_lWQZNhN7w&t=940s]),  lo conseguí subir  sin ningún problema. Y una vez ya lo 
entendí todo  a  la perfección,  creé un segundo repositorio donde subí el código del pluviómetro junto con esta 
memoria.

Después de eso, me puse en contacto con Cristopher para pedirle su código de presión y temperatura para fusionarlo
con el mío.  A la hora de hacerlo no tuve ningún problema pues funcionó  a la perfección tras el primer intento y 
además, no había ninguna dificultad en ello.
