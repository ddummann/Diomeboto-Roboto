#include <Servo.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 32 
#define OLED_RESET 4 
#define SCREEN_ADDRESS 0x3C

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET); 

#define LOGO_WIDTH 128
#define LOGO_HEIGHT 32

// Pantalla
// FOTO DIOMEDES, 128x64px
const unsigned char PROGMEM logo []  = {


	
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0xc0, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0xc0, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0xc0, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0xe0, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0xe0, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xf0, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x07, 0x80, 0x00, 0x78, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xf8, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x7c, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x03, 0xe0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x3e, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x07, 0xc0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x1f, 0xc3, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x3f, 0x80, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x07, 0xff, 0xf0, 0x00, 0x00, 0x03, 0x00, 0x1f, 0xfe, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0xff, 0x80, 0x0c, 0x00, 0x07, 0x80, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x0f, 0x8f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x9f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf9, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};


void drawBitmap(int16_t x, int16_t y, uint8_t *bitmap, int16_t w, int16_t h, int16_t color);



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

  Serial.begin(9600);

    // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }

  // Show initial display buffer contents on the screen --
  // the library initializes this with an Adafruit splash screen.
  display.display();
  display.clearDisplay();
  display.drawBitmap((display.width()-LOGO_WIDTH)/2, ((display.height()-LOGO_HEIGHT)/2)+7, logo, LOGO_WIDTH, LOGO_HEIGHT, SSD1306_WHITE);

  display.display();
}

void loop() {
  // put your main code here, to run repeatedly:
  // Por ejemplo, puedes hacer algo como esto:
  //girar(0, 90, leftServo, 5); // Gira el servo izquierdo desde 0 a 180 grados
  //girar(90,0, leftServo, 5); // Gira el servo izquierdo desde 0 a 180 grados)

  display.clearDisplay();
  //delay(3000); // Espera 3 segundo
  //girar(180, 0, rightServo, 15); // Gira el servo izquierdo de vuelta a 0 grados
  //leftServo.write(0);
  
  //rightServo.write(0);
  //delay(3000); // Espera 3 segundo

}
