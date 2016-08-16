/*
Talos Electronics
Rafael Lozano Rolón 
9/Septiembre/2015 
*/

#include <Keypad.h>
const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
 {'1','2','3','A'},
 {'4','5','6','B'},
 {'7','8','9','C'},
 {'*','0','#','D'}
};
byte rowPins[ROWS] = {9,8,7,6}; //Filas(pines del 9 al 6)
byte colPins[COLS] = {5,4,3,2}; //Columnas (pines del 5 al)
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
int led = 10;

void setup(){
Serial.begin (9600);
pinMode(led, OUTPUT);
}

void loop()
{
  char key = keypad.getKey();

  switch (key)
  {
  case '0'://Cuando key "0" es oprimida...          
  Serial.println("Oprimiste el boton 0");//El monitor serial escribe "Oprimiste el boton 0"
  break;
  
  case '1'://Cuando key "1" es oprimida...          
  Serial.println("Oprimiste el boton 1");//El monitor serial escribe "Oprimiste el boton 1"
  break;

  case '2'://Cuando key "2" es oprimida...          
  Serial.println("Oprimiste el boton 2");//El monitor serial escribe "Oprimiste el boton 2"
  break;

  case '3'://Cuando key "3" es oprimida...          
  Serial.println("Oprimiste el boton 3");//El monitor serial escribe "Oprimiste el boton 3"
  break;

  case '4'://Cuando key "4" es oprimida...          
  Serial.println("Oprimiste el boton 4");//El monitor serial escribe "Oprimiste el boton 4"
  break;

  case '5'://Cuando key "5" es oprimida...          
  Serial.println("Oprimiste el boton 5");//El monitor serial escribe "Oprimiste el boton 5"
  break;

  case '6'://Cuando key "6" es oprimida...          
  Serial.println("Oprimiste el boton 6");//El monitor serial escribe "Oprimiste el boton 6"
  break;
  
  case '7'://Cuando key "7" es oprimida...          
  Serial.println("Oprimiste el boton 7");//El monitor serial escribe "Oprimiste el boton 7"
  break;
  
  case '8'://Cuando key "8" es oprimida...          
  Serial.println("Oprimiste el boton 8");//El monitor serial escribe "Oprimiste el boton 8"
  break;
  
  case '9'://Cuando key "9" es oprimida...          
  Serial.println("Oprimiste el boton 9");//El monitor serial escribe "Oprimiste el boton 9"
  break;
  
  case 'A'://Cuando key "A" es oprimida...          
  Serial.println("Oprimiste el boton A");//El monitor serial escribe "Oprimiste el boton A"
  digitalWrite(led, HIGH);//El led se enciende
  break;
  
  case 'B'://Cuando key "B" es oprimida...          
  Serial.println("Oprimiste el boton B");//El monitor serial escribe "Oprimiste el boton B"
  digitalWrite(led, LOW);//El led se enciende
  break;
  
  case 'C'://Cuando key "C" es oprimida...          
  Serial.println("Oprimiste el boton C");//El monitor serial escribe "Oprimiste el boton C"
  digitalWrite(led, HIGH);//El led se enciende
  break;
  case 'D'://Cuando key "D" es oprimida...          
  Serial.println("Oprimiste el boton D");//El monitor serial escribe "Oprimiste el boton D"
  digitalWrite(led, LOW);//El led se enciende
  break;
  }
}


