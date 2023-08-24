# Taller de Instrumentación - Laboratorio 2

## 1. ¿Cuales son los tipos de sensores de temperatura más populares? ¿Cuáles son sus ventajas y desventajas en función de los requisitos del diseño? 
1. Termopares/termocuplas: son los más utilizados, económicos, de fácil instalación, robustos, sensibles, aunque tienen una respuesta lenta y son menos precisos.
1. Termorresistencias o RTD: inmunidad al ruido eléctrico, buena resolución, precisos, estables y amplio rango de temperaturas pero caros. 
1. Termistores: económicos, la resistencia a la temperatura varía dependiendo de la misma, respuesta rápida, temperatura limitada. 
1. Sensores infrarrojos: se adaptan a materiales inaccesibles o en movimiento, es compatible con otros instrumentos, son precisos, de respuesta rápida, económicos.

![sensores](https://github.com/AndreyMZ20/Taller_Instru_Lab2/blob/main/Img/sensores.png)

## 2.	¿Cuales son los tipos de termocuplas? ¿Cuales son sus rangos de temperatura y tensión? 

Algunos de los tipos y sus respectivos datos se muestran en la siguiente tabla (IEC 60584-1): 

|Tipo|Temperatura<br>(°C)|Tensión<br>(mV)|
| -- |   -------- |  -----------  |
|B   |  0 a 1820  |   0 a 13.820  |
|C   |  0 a 2316  |  0 a 37.079   |
|E   | -270 a 1000|-9.835 a 76.373|
|J   | -210 a 1200|-8.095 a 69.555|
|K   | -270 a 1370|-6.458 a 54.819|
|N   | -270 a 1300|-4.345 a 47.513|
|R   |-50 a 1768.1|-0.226 a 21.089|
|S   |-50 a 1768.1|-0.236 a 18.682|
|T   | -270 a 400 |-6.258 a 20.872|

## 3.	¿Qué es una señal balanceada y una no balanceada? ¿Qué aplicación tiene el uso de señales balanceadas?

En una señal balanceada por un cable viaja la misma señal 2 veces (de ida y vuelta) y en una de ellas cambiada de polaridad. Entonces, un cable balanceado tiene dos minicables para la señal y una malla para atenuar los ruidos externos. Este conjunto es de tres conductores. <br>
Una señal no balanceada es una señal eléctrica que se transmite a través de un solo conductor, con el conductor de tierra como referencia.
<br>Ejemplo de un cable con señal balanceada (derecha) y una no balanceada (izquierda):

![cablesByNB](https://github.com/AndreyMZ20/Taller_Instru_Lab2/blob/main/Img/cablesByNB.png)

#### Aplicación de la señal balanceada

El cable simétrico (o balanceado) se inventó para resolver un problema fundamental en la transmisión sonora:  la interferencia externa (por ejemplo la interferencia eléctrica) presente en el exterior del cable. Eliminar la interferencia desde la raíz es físicamente imposible, por lo tanto hay que buscar una alternativa para solucionarlo: duplicar la señal antes de que esta sea transmitida a través del cable, y enviarlo por dos vías independientes. Una de las dos señales viene con la polaridad invertida.
Al llegar al final del cable, las dos señales en cuestión no se pueden acoplar y mezclar ya que se anulan entre sí a causa de la polaridad invertida de uno de los dos. En este punto, la fase de una de las dos se recupera y se mezcla con la original. El ruido de fondo o interferencia se captura a través de ambas señales. Cuando el efecto se invierte de nuevo el ruido se cancela.[1]

![senalBalanceada](https://github.com/AndreyMZ20/Taller_Instru_Lab2/blob/main/Img/senalBalanceada.png)

## 4. ¿Qué es el aislamiento eléctrico entre dos tierras? ¿En los diseños electrónicos que ventajas tiene el aislamiento entre señales?
Por definición, el aislamiento se refiere a la introducción deliberada de una separación no conductora, la cual puede ser tanto física como eléctrica, o incluso ambas al mismo tiempo. Un aislador eléctrico (también conocido como aislador o desconector) es un dispositivo que separa los dos circuitos, proporcionando una barrera mediante un interruptor mecánico. Esta barrera evita que voltajes peligrosos pasen a través del circuito eléctrico en caso de una falla eléctrica o un fallo en el sistema [5]. En muchas ocasiones, los diseñadores, sin tener conocimiento de las importantes diferencias de potencial de tierra entre ubicaciones remotas de buses, ya sea confían en la tierra local como un camino confiable de retorno de señal o conectan directamente las tierras remotas entre sí, lo que crea bucles de tierra ruidosos. En ambos casos, la integridad de la señal de transmisión se ve comprometida [6]. Para solventar este tipo de problemática es posible aislar las tierras, los sistemas de aislamiento eléctrico previenen la transferencia de corriente continua no deseada y corriente alterna no deseada entre dos partes de un circuito [5]. Un ejemplo de aislamiento eléctrico se observa a continuación.

![aislamiento](https://github.com/AndreyMZ20/Taller_Instru_Lab2/blob/main/Img/aislamiento.png)

Algunas ventajas del aislamiento en los diseños eléctronicas se listan a continuación [5]:
1. Para proporcionar aislamiento galvánico (bloquea el flujo eléctrico al comunicarse sin un camino de conducción directa entre los dos circuitos aislados).
1. Para prevenir bucles de tierra.
1. Para proteger en caso de cambios de nivel de voltaje.
1. Para proteger el equipo eléctrico de sobretensiones y descargas.
1. Para proteger los circuitos eléctricos del ruido transitorio.

## 6. Investigue diseños de amplificadores con ganancia programable.
El diseño de amplificadores de ganancia programable (AGP) se pueden dividir en 2 grandes categorias [2]:

### Amplificadores de Instrumentación 

En esta categoria estan aquellos amplificadores de instrumentación que incorporan internamente algunas resistencias y en los que la variación de la ganancia se consigue añadiendo resistencias externas de valores adecuados. Algunos modelos son el AD625, AD521, AMP-01, etc. En la siguiente figura se muestra el diseño haciendo uso de este subgrupo de AGP.

![Diseño AGP 1](https://github.com/AndreyMZ20/Taller_Instru_Lab2/blob/main/Img/Ampli1.png)

Además exiten los amplificadores de instrumentación que incorporan todas las resistencias y en lo que la variación de ganancia se consigue haciendo cortocircuito entre determinados terminales del dispositivo accesibles externamente. Algunos modelos son el AD624, AD612 o el AD614. En la siguiente figura se muestra el diseño de este tipo de AGP, en la cual vienen ganancias seleccionables.

![Diseño AGP 1](https://github.com/AndreyMZ20/Taller_Instru_Lab2/blob/main/Img/Ampli2.png)

### Dispositivos

En esta categoria corresponden a diseños en que es necesario más de un dispositivo para conformar el AGP, se pueden dividir en dos. El primero son aquellos dispositivos en los que la variación de ganancia se consigue modificando una tension analógica como lo puede ser el integrado LC403 mostrado en la siguiente figura.

![Diseño AGP 1](https://github.com/AndreyMZ20/Taller_Instru_Lab2/blob/main/Img/Ampli3.png)

También es posible diseñar un AGP mediante dispositivos que incorporan un conjunto de resistencias y interruptores analógicos, en los que la variación de ganancia se consigue aplicando un código digital a la entrada de seleccion de ganancia. Usualmente se utiliza un amplificador de instrumentación como el mostrado en la siguiente figura.

![Diseño AGP 1](https://github.com/AndreyMZ20/Taller_Instru_Lab2/blob/main/Img/Ampli4.png)

## 7. Investigue como se mide el rechazo de modo común para una señal diferencial, y el rechazo de crosstalk entre dos canales.

### Rechazo de modo común 
La relación de rechazo de modo común (CMRR) es una medida de la capacidad de un amplificador diferencial para rechazar señales que son comunes a ambas entradas. Las señales deseadas deben aparecer en una sola entrada o con polaridad opuesta en ambas entradas. Estas señales deseadas se amplifican y aparecen en las salidas.

El CMRR se calcula como la ganancia de modo diferencial dividida por la ganancia de modo común. Se mide en decibelios y se expresa como [3]: 

$$CMRR = 20\\log|\\frac{Ao}{Ac}| dB$$

En donde Ao es la ganancia de modo diferencial y Ac es la ganancia de modo común. Un valor típico para CMRR sería de 100 dB, lo que significa que si un amplificador operacional tuviera tanto señales deseadas (es decir, diferenciales) como de modo común en su entrada que fueran del mismo tamaño, la señal de modo común sería 100 dB más pequeña que la señal deseada en la salida.

### Rechazo de crosstalk entre dos canales

Crosstalk o diafonía es cualquier fenómeno por el cual una señal transmitida en un canal de un sistema de transmisión crea un efecto no deseado en otro canal. La diafonía suele producirse por un acoplamiento capacitivo, inductivo o conductivo no deseado de un canal a otro. Existe dos posible formas de medirlo [4]:

#### La diafonía cercana al extremo (NEXT)

La diafonía cercana al extremo (NEXT) es una medida de la capacidad de un cable para rechazar la diafonía, de modo que cuanto mayor sea el valor de NEXT, mayor será el rechazo de la diafonía en la conexión local. Se denomina extremo cercano porque la interferencia entre las dos señales en el cable se mide en el mismo extremo del cable que el transmisor interferente. El valor NEXT para un tipo de cable determinado se expresa generalmente en decibelios por pies o decibelios por 1000 pies y varía con la frecuencia de transmisión.

#### Power sum near-end crosstalk (PSNEXT)

Power sum near-end crosstalk (PSNEXT) es una medida de NEXT que incluye la suma de las contribuciones de diafonía de todos los pares adyacentes como una suma algebraica del NEXT de los tres pares de hilos que afectan al cuarto par en un cable de cuatro pares (por ejemplo, un cable de Categoría 6). El proceso de comprobación de PSNEXT consiste en medir todas las combinaciones de diafonía de par a par y, a continuación, sumar todos los valores de cada par. La especificación se desarrolló para abordar directamente el efecto de las transmisiones en múltiples pares adyacentes en el par que se está probando y es relevante para todo el hardware de conexión y los cables de comunicaciones asociados.


## Bibliografía
 [1] Juanma. (2021, Aug 24). Cable balanceado y no balanceado: ¿En qué se diferencian? – t.blog. t.blog. https://www.thomann.de/blog/es/cable-balanceado-y-no-balanceado-en-que-se-diferencian/
 
 [2] J. M. López-González, R. Pallas-Areny y P. J. Riu, “Amplificadores operacionales de ganancia programable”, Mundo Electrónico, abril 1989.
 
 [3] Electrositio, “Relación de rechazo en modo común (CMRR) y el amplificador operacional”, Electrositio, 2019, https://electrositio.com/relacion-de-rechazo-en-modo-comun-cmrr-y-el-amplificador-operacional/
 
 [4] Wikipedia, “Crosstalk”, Wikipedia, 2021, https://en.wikipedia.org/wiki/Crosstalk.
 
 [5]
