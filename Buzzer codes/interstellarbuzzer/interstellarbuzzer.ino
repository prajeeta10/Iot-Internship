#include "pitches.h"
int coffindance[] = {
  NOTE_A4, NOTE_E5, NOTE_A4, NOTE_E5,0,
  NOTE_B4, NOTE_E5, NOTE_B5, NOTE_E5,0, 
  NOTE_C4, NOTE_E5, NOTE_C5, NOTE_E5,0, 
  NOTE_D4, NOTE_E5, NOTE_D4, NOTE_E5, NOTE_A4,

};

int noteDurations[] = {
  4,4,4,4,4,
  4,4,4,4,4,
  4,4,4,4,4,
  4,4,4,4,4
  
};

void setup() {
  for (int thisNote = 0; thisNote <= 16; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(1, coffindance[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1;
    delay(pauseBetweenNotes);
    noTone(1);
  }
}

void loop() {
  for (int thisNote = 0; thisNote <= 16; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(1, coffindance[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1;
    delay(pauseBetweenNotes);
    noTone(1);
  }
}



