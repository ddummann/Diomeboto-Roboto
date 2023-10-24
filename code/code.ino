#include <Servo.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64 

// Pantalla

display.clearDisplay() – all pixels are off
display.drawPixel(x,y, color) – plot a pixel in the x,y coordinates
display.setTextSize(n) – set the font size, supports sizes from 1 to 8
display.setCursor(x,y) – set the coordinates to start writing text
display.print(“message”) – print the characters at location x,y
display.display() – call this method for the changes to make effect




// Servomotores

Servo leftServo;
Servo rightServo;
int pos = 0;

void girar(int inicio, int final, Servo theservo, int delayTime) {
  if (final > inicio) {
    girarDerecha(inicio, final, theservo, delayTime);
  } else {
    girarIzquierda(inicio, final, theservo, delayTime);
  }
}

void girarDerecha(int inicio, int fin, Servo myservoD, int delayTime) {
  for (int pos = inicio; pos < fin; pos += 1) {
    myservoD.write(pos);
    delay(delayTime);
  }
}

void girarIzquierda(int inicio, int fin, Servo myservoI, int delayTime) {
  for (int pos = inicio; pos > fin; pos -= 1) {
    myservoI.write(pos);
    delay(delayTime);
  }
}

void setup() {
  // put your setup code here, to run once:
  leftServo.attach(9);  // Asumiendo que tu servo izquierdo está en el pin 9
  rightServo.attach(10); // Asumiendo que tu servo derecho está en el pin 10
}

void loop() {
  // put your main code here, to run repeatedly:
  // Por ejemplo, puedes hacer algo como esto:
  //girar(0, 90, leftServo, 5); // Gira el servo izquierdo desde 0 a 180 grados
  //girar(90,0, leftServo, 5); // Gira el servo izquierdo desde 0 a 180 grados)


  //delay(3000); // Espera 3 segundo
  //girar(180, 0, rightServo, 15); // Gira el servo izquierdo de vuelta a 0 grados
  //leftServo.write(0);
  
  //rightServo.write(0);
  //delay(3000); // Espera 3 segundo

}
