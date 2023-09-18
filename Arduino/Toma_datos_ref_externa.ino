const int CH1_o = A0; // Ajusta esto a tu segundo pin analógico
const int CH2_o = A1; // Ajusta esto a tu cuarto pin analógico

void setup() {
  analogReference(EXTERNAL); // Utiliza una referencia de voltaje externa
  Serial.begin(9600); // Inicia la comunicación serial
}

void loop() {
  int r_CH1_o = analogRead(CH1_o); // Lee el valor del segundo pin analógico
  int r_CH2_o = analogRead(CH2_o); // Lee el valor del cuarto pin analógico
  
  float v_CH1_o = r_CH1_o * (5.0 / 1023.0); // Convierte el segundo valor a voltaje
  float v_CH2_o = r_CH2_o * (5.0 / 1023.0); // Convierte el cuarto valor a voltaje
  
  //Aplicar la funcion

  int select = 7;
  float CH1, CH2;

  switch (select) {
    case 1:
      CH1 = ((v_CH1_o-0.007)-1.9478)/0.0253;
      CH2 = ((v_CH2_o-0.0148)-2.1224)/0.0281;
      break;

    case 2: 
      CH1 = (v_CH1_o-1.9466)/0.0509;
      CH2 = ((v_CH2_o-0.01)-2.1123)/0.0572;
      break;

    case 3: 
      CH1 = ((v_CH1_o-0.0266)-1.9462)/0.2566;
      CH2 = ((v_CH2_o-0.03)-2.1244)/0.2852;
      break;

    case 4: 
      CH1 = ((v_CH1_o)-1.9488)/0.516;
      CH2 = ((v_CH2_o-0.0197)-2.1238)/0.5716;
      break;
    
    case 5: 
      CH1 = (v_CH1_o-1.9436)/2.902;
      CH2 = ((v_CH2_o)-2.1222)/3.196;
      break;

    case 6: 
      CH1 = (v_CH1_o-1.919)/37.58;
      CH2 = ((v_CH2_o)-2.0792)/34.82;
      break;

    case 7: //termocuplas
      CH1 = ((v_CH1_o)-1.9431)/17.998;
      CH2 = ((v_CH2_o+0.016)-2.1419)/16.087;
      break;
  }
  Serial.print("CH1(vesc): "); // Imprime el voltaje con 4 dígitos decimales
  Serial.print(v_CH1_o, 4); // Imprime el voltaje con 4 dígitos decimales
  Serial.print("\t");
  Serial.print("CH1(adc): "); // Imprime el voltaje con 4 dígitos decimales
  Serial.print(CH1, 5);
  Serial.print("\t");
  Serial.print("CH2(vesc): "); // Imprime el voltaje con 4 dígitos decimales
  Serial.print(v_CH2_o, 4);
  Serial.print("\t"); 
  Serial.print("CH2(adc): "); // Imprime el voltaje con 4 dígitos decimales
  Serial.println(CH2, 5);

  delay(500); // Espera 0.5 segundos
}
