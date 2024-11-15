#include<Adafruit_NeoPixel.h>
#ifdef _AVR_
#include<avr/power.h>
#endif
#define pin 4
#define count 20

Adafruit_NeoPixel strip(count,pin,NEO_GRB+ NEO_KHZ800);

void setup(){
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
  strip.begin();
  strip.show();
  Serial.begin(9600);
  knightRider(strip.Color(222,255,30),20,3);
  strip.clear();
  strip.show();
}

void loop() {
  // put your main code here, to run repeatedly:

}
void knightRider(uint32_t color,int wait,int barlength)
{int i,j;
for (i = 0; i <= strip.numPixels() - barlength; i++) {
    strip.clear();
     for (j = 0; j < barlength; j++) {
      uint8_t brightness = 255 - (j * (255 / barlength)); 
      uint32_t dimmedColor = dimColor(color, brightness); 
      strip.setPixelColor(i + j, dimmedColor);}    
      strip.show();
      delay(wait) ;}}
      uint32_t dimColor(uint32_t color, uint8_t brightness) {
  uint8_t r = (uint8_t)(color >> 16); 
  uint8_t g = (uint8_t)(color >> 8);  
  uint8_t b = (uint8_t)(color);      

  // Adjust brightness by scaling the RGB values
  r = (r * brightness) / 255;
  g = (g * brightness) / 255;
  b = (b * brightness) / 255;

  return strip.Color(r, g, b); }
       
