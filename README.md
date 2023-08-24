# Taller de Instrumentación - Laboratorio 2

## 6. Investigue diseños de amplificadores con ganancia programable.
El diseño de amplificadores de ganancia programable (AGP) se pueden dividir en 2 grandes categorias [1]:

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

El CMRR se calcula como la ganancia de modo diferencial dividida por la ganancia de modo común. Se mide en decibelios y se expresa como [2]: 

$$CMRR = 20\\log|\\frac{Ao}{Ac}| dB$$

En donde Ao es la ganancia de modo diferencial y Ac es la ganancia de modo común. Un valor típico para CMRR sería de 100 dB, lo que significa que si un amplificador operacional tuviera tanto señales deseadas (es decir, diferenciales) como de modo común en su entrada que fueran del mismo tamaño, la señal de modo común sería 100 dB más pequeña que la señal deseada en la salida.

### Rechazo de crosstalk entre dos canales

Crosstalk o diafonía es cualquier fenómeno por el cual una señal transmitida en un canal de un sistema de transmisión crea un efecto no deseado en otro canal. La diafonía suele producirse por un acoplamiento capacitivo, inductivo o conductivo no deseado de un canal a otro. Existe dos posible formas de medirlo [3]:

#### La diafonía cercana al extremo (NEXT)

La diafonía cercana al extremo (NEXT) es una medida de la capacidad de un cable para rechazar la diafonía, de modo que cuanto mayor sea el valor de NEXT, mayor será el rechazo de la diafonía en la conexión local. Se denomina extremo cercano porque la interferencia entre las dos señales en el cable se mide en el mismo extremo del cable que el transmisor interferente. El valor NEXT para un tipo de cable determinado se expresa generalmente en decibelios por pies o decibelios por 1000 pies y varía con la frecuencia de transmisión.

#### Power sum near-end crosstalk (PSNEXT)

Power sum near-end crosstalk (PSNEXT) es una medida de NEXT que incluye la suma de las contribuciones de diafonía de todos los pares adyacentes como una suma algebraica del NEXT de los tres pares de hilos que afectan al cuarto par en un cable de cuatro pares (por ejemplo, un cable de Categoría 6). El proceso de comprobación de PSNEXT consiste en medir todas las combinaciones de diafonía de par a par y, a continuación, sumar todos los valores de cada par. La especificación se desarrolló para abordar directamente el efecto de las transmisiones en múltiples pares adyacentes en el par que se está probando y es relevante para todo el hardware de conexión y los cables de comunicaciones asociados.


## Bibliografía

 [1] J. M. López-González, R. Pallas-Areny y P. J. Riu, “Amplificadores operacionales de ganancia programable”, Mundo Electrónico, abril 1989.
 
 [2] Electrositio, “Relación de rechazo en modo común (CMRR) y el amplificador operacional”, Electrositio, 2019, https://electrositio.com/relacion-de-rechazo-en-modo-comun-cmrr-y-el-amplificador-operacional/
 
 [3] Wikipedia, “Crosstalk”, Wikipedia, 2021, https://en.wikipedia.org/wiki/Crosstalk.