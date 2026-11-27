// Pin Definitions
const int RU_led1 = A0;  // Pin connected to LED A0  (Right,Left Up 1,4 Red) (Back 1 Red)
const int RU_led2 = A1;  // Pin connected to LED A2  (Right,Left Up 3 Yellow) (Back 4 Yellow) (Front Down Yellow)

const int RD_led1 = A2;  // Pin connected to LED A0  (Right,Left Down 1,4 Red) (Back 2 Red) (Front Down Red)
const int RD_led2 = A3;  // Pin connected to LED A2  (Right,Left Up 3 Yellow) (Back 3 Yellow)

const int FU_led1_2 = A4;   // Pin connected to LED A4 (Front Up 1,2 Blue)
const int FU_led3_4 = A5;   // Pin connected to LED A5 (Front Up 3,4 Red )

const int Red_blink_led = 2;   // Pin connected to LED 6  (Right,Left Up 2 Red)
const int Blue_blink_led = 3;   // Pin connected to LED 6  (Right,Left Up 2 Blue)

//const int ledPin = A5;  //Seted for resolve the error


void setup() {
  Serial.begin(9600);
  // Set all LED pins as output
  pinMode(RU_led1, OUTPUT);
  pinMode(RU_led2, OUTPUT);

  pinMode(RD_led1, OUTPUT);
  pinMode(RD_led2, OUTPUT);

  pinMode(FU_led1_2, OUTPUT);
  pinMode(FU_led3_4, OUTPUT);

  pinMode(Red_blink_led, OUTPUT);
  pinMode(Blue_blink_led, OUTPUT);


}



void loop(){

     digitalWrite(RU_led1, HIGH);
    digitalWrite(RU_led2, HIGH);
    digitalWrite(FU_led3_4, HIGH);
     delay(300);
    digitalWrite(RU_led1, LOW);
    digitalWrite(RU_led2, LOW);
    digitalWrite(FU_led3_4, LOW);
     delay(5);


    digitalWrite(RD_led1, HIGH);
    digitalWrite(RD_led2, HIGH);
    digitalWrite(FU_led1_2, HIGH);
    delay(300);
    digitalWrite(RD_led1, LOW);
    digitalWrite(RD_led2, LOW);
    digitalWrite(FU_led1_2, LOW);
     delay(5);

     digitalWrite(Red_blink_led, HIGH);
     digitalWrite(Blue_blink_led, HIGH);
     delay(30);
     digitalWrite(Red_blink_led, LOW);
     digitalWrite(Blue_blink_led, LOW);
     delay(5);

}


/*
void New() {

Blink();
Hedlight();


    digitalWrite(RU_led1, HIGH);
    digitalWrite(RU_led2, HIGH);
     delay(20);
    digitalWrite(RU_led1, LOW);
    digitalWrite(RU_led2, LOW);
     delay(50);


    digitalWrite(RD_led1, HIGH);
    digitalWrite(RD_led2, HIGH);
    delay(20);
    digitalWrite(RD_led1, LOW);
    digitalWrite(RD_led2, LOW);
     delay(50);

 }


void Hedlight(){

     digitalWrite(FU_led1_2, HIGH);
     delay(20);
     digitalWrite(FU_led1_2, LOW);
     delay(50);

     digitalWrite(FU_led3_4, HIGH);
     delay(20);
     digitalWrite(FU_led3_4, LOW);
     delay(50);

}


void Blink(){

     digitalWrite(Red_blink_led, HIGH);
     digitalWrite(Blue_blink_led, HIGH);
     delay(30);
     digitalWrite(Red_blink_led, LOW);
     digitalWrite(Blue_blink_led, LOW);
     delay(50);


}


void times() {
  // Blink the LED 7 times
  for (int i = 0; i < 7; i++) {
    digitalWrite(ledPin, HIGH);
    delay(500);  // LED ON for 500 ms

    digitalWrite(ledPin, LOW);
    delay(500);  // LED OFF for 500 ms
  }

  // Stop for 2 seconds
  delay(2000);
}

*/