#include "Keyboard.h"

void setup() {

  Keyboard.begin();
  delay(1000);
  
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F2);
  Keyboard.releaseAll();
  delay(500);
  
  Keyboard.print("printf Hello_World");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500);

  Keyboard.end();
  
}

// Fonction Inutile
void loop() {
  

}
