# Arduino-y-motores-DC-
En este Git se muestra un código en c para la configuración de un Arduino para que avance, retroceda, gire a la izquierda o a la derecha dependiendo cual botón aprete.
Además hay un PDF con la vista esquematica donde se puede observar la dispocision de los componentes y las conecciones de estos.(Schematic_view.PDF)

Link del Tinkercad:
https://www.tinkercad.com/things/bG5oAlkyUb8-brilliant-sango-duup/editel?returnTo=%2Fdashboard

Por ultimo hay un jpg con la simulación en Tinkercad, donde se utilizarón dos motores DC, un arduino, 4 botones, 4 resistencias y un proto board, en la simulación se le dio poder a los motores con un voltaje de 5 volts proveniente del Arduino UNO a travez del H-Bridge, los inputs1, 2, 3 y 4 se asignaron a los pines 2, 5, 9 y 8 respectivamente, para luego conectar los outputs del H-Bridge a los motores DC, por ultimo los bonotes utilizaron una resistencia de 1 KΩ y fueron asignados a los siguientes pines, para doblar a la izquierda al pin 12, para avanzar al pin 11, para atras al pin 7 y para doblar a la derecha el pin 6.
