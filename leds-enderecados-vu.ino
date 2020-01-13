#include <Adafruit_NeoPixel.h>

#define PIN 6

#define NUMLEDS 18

Adafruit_NeoPixel leds = Adafruit_NeoPixel(NUMLEDS,PIN,NEO_GRB+NEO_KHZ800);

void setup(){
  Serial.begin(115200);
  
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);

  leds.begin();
  leds.setBrightness(100);
}
void loop(){
  int intensi = analogRead(A0);
  int set = analogRead(A1);
  Serial.print(intensi);
  Serial.print("  ");
  Serial.println(set);


  clear();

   if (intensi > set + 10){
     led(0,0,255,0);
   }
   if (intensi > set + 15){
     led(1,0,255,0);
   }
   if (intensi > set + 20){
     led(2,0,255,0);
   }
   if (intensi > set + 25){
     led(3,50,255,0);
   }
   if (intensi > set + 30){
     led(4,100,255,0);
   }
   if (intensi > set + 35){
     led(5,120,255,0);
   }
   if (intensi > set + 40){
     led(6,180,255,0);
   }
   if (intensi > set + 45){
     led(7,200,200,0);
   }
   if (intensi > set + 50){
     led(8,200,150,0);
   }
   if (intensi > set + 55){
     led(9,255,120,0);
   }
   if (intensi > set + 60){
     led(10,255,100,0);
   }
   if (intensi > set + 65){
     led(11,255,80,0);
   }
   if (intensi > set + 70){
     led(12,255,50,0);
   }
   if (intensi > set + 75){
     led(13,255,0,0);
   }
   if (intensi > set + 80){
     led(14,255,0,0);
   }
   if (intensi > set + 85){
     led(15,255,0,0);
   }
   if (intensi > set + 90){
     led(16,255,0,0);
   }
   if (intensi > set + 100){
     led(17,255,0,0);
    }

}

void led(byte nled,byte r, byte g, byte b){
      leds.setPixelColor(nled, leds.Color(r, g, b));
      leds.show();
      delay(1);
}

void clear(){
  for(byte x = 0; x < NUMLEDS; x++){
    leds.setPixelColor(x, leds.Color(0, 0, 0));
  }
}
