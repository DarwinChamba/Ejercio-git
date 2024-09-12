#include <LiquidCrystal.h>

LiquidCrystal lcd (7,6,5,4,3,2);
byte smiley[8] = {
  0b00000,  // fila superior vacía
  0b01010,  // ojos
  0b01010,  // ojos
  0b00000,  // espacio entre ojos y boca
  0b00100, // fila inferior vacía
  0b00100,  // fila inferior vacía
  0b10001,  // extremos de la boca
  0b01110  // boca curva
  
};

byte x[8] = {
  0b00000,  // fila superior vacía
  0b10001,  // ojos
  0b01010,  // ojos
  0b00100,  // espacio entre ojos y boca
  0b01010, // fila inferior vacía
  0b10001,  // fila inferior vacía
  0b00000,  // extremos de la boca
  0b00000  // boca curva
  
};
byte sorpresa[8] = {
  0b00000,  // fila superior vacía
  0b01010,  // ojos
  0b01010,  // ojos
  0b00000,  // espacio entre ojos y boca
  0b00100,  // boca redonda
  0b00100,  // boca redonda
  0b00000,  // fila inferior vacía
  0b00000   // fila inferior vacía
};
byte musica[] = {0b00001,0b00011,0b00101,0b01001,0b01011,0b01011,0b11000,0b11000};
byte corazon[]={0b00000,0b01010,0b11111,0b11111,0b01110,0b00100,0b00000,0b000000};
byte campana[]={0b00100,0b01110,0b01110,0b01110,0b01110,0b11111,0b00000,0b00100};
byte corazonIzquierdo[]={0b00110,0b01111,0b11111,0b11111,0b01111,0b00111,0b00011,0b000001};
byte corazonDerecho[]={0b01100,0b11110,0b11111,0b11111,0b11110,0b11100,0b11000,0b10000};

void setup() {
 
lcd.begin(16,2);
}


void loop() {

  lcd.createChar(0, smiley);    // Crear la carita en el índice 0
lcd.createChar(1, sorpresa);  // Crear la carita sorpresa en el índice 1
lcd.createChar(2, campana);
lcd.createChar(3, x);
lcd.createChar(4, corazon);
lcd.createChar(5,corazonIzquierdo);
lcd.createChar(6,corazonDerecho);
//mostrar nombre
lcd.setCursor(4,0);
lcd.print("Android");
//lcd.scrollDisplayLeft();

//mostrar carita sorpresa
lcd.setCursor(2, 1);          // Posicionar en la segunda fila, columna 6
lcd.write(byte(1));           // Escribir la carita sorpresa (índice 1)
//mostrar campana
lcd.setCursor(4,1);
lcd.write(byte(2));

//mostrar x
lcd.setCursor(6,1);
lcd.write(byte(3));

//mostrar carita sonriente
lcd.setCursor(8, 1);          // Posicionar en la primera fila, columna 5
lcd.write(byte(0));           // Escribir la carita smiley (índice 0)

//mostrarCorazon
lcd.setCursor(10, 1);          // Posicionar en la primera fila, columna 5
lcd.write(byte(4));           // Escribir la carita smiley (índice 0)
  
//mostrar corazon izquierdo

lcd.setCursor(12, 1);          // Posicionar en la primera fila, columna 5
lcd.write(byte(5));           // Escribir la carita smiley (índice 0)

//mostrar corazon derecho
lcd.setCursor(13, 1);          // Posicionar en la primera fila, columna 5
lcd.write(byte(6));           // Escribir la carita smiley (índice 0) 

delay(1000);

  
}
void displayPantalla(){
  lcd.display();
delay(1000);
lcd.noDisplay();
delay(1000);
}
void scrollPantalla(){

}

