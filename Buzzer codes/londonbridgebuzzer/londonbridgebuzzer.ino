#include "pitches.h"
int coffindance[] = {
  NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_E4, NOTE_E4,
  NOTE_D4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_G4, NOTE_G4,
  NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_E4, NOTE_E4,
  NOTE_E4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_C4
};

int noteDurations[] = {
  4, 4, 4, 4, 4, 2, 4,
  4, 4, 2, 4, 4, 2,
  4, 4, 4, 4, 4, 2, 4,
  4, 4, 2, 4, 4, 2
};

void setup() {
  for (int thisNote = 0; thisNote <= 26; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(1, coffindance[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1;
    delay(pauseBetweenNotes);
    noTone(1);
  }
}

void loop() {
  for (int thisNote = 0; thisNote <= 26; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(1, coffindance[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1;
    delay(pauseBetweenNotes);
    noTone(1);
  }
}



