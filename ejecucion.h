int tempo = 225;
int buzzer = 10;
void playMelody() {//still alive
  for (int i = 0; i < sizeof(melody7) / sizeof(melody7[0]); i++) {
    int noteDuration = pgm_read_word_near(noteDurations + i);
    int note = pgm_read_word_near(melody7 + i);

    if (note > 0) {
      tone(10, note, noteDuration);
    } else {
      delay(noteDuration);
    }

    // Pausa entre notas
    delay(noteDuration * 1.30);
    noTone(10);
  }
}
void tetris() {
  int notes = sizeof(melody9) / sizeof(melody9[0]) / 2;

  // this calculates the duration of a whole note in ms (60s/tempo)*4 beats
  int wholenote = (60000 * 4) / tempo;

  int divider = 0, noteDuration = 0;

  // iterate over the notes of the melody.
  // Remember, the array is twice the number of notes (notes + durations)
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {

    // calculates the duration of each note
    divider = melody9[thisNote + 1];
    if (divider > 0) {
      // regular note, just proceed
      noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5;  // increases the duration in half for dotted notes
    }

    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(buzzer, melody9[thisNote], noteDuration * 0.9);

    // Wait for the specief duration before playing the next note.
    delay(noteDuration);

    // stop the waveform generation before the next note.
    noTone(buzzer);
  }
}

void fel() {

  int tempo = 80;
  // sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
  // there are two values per note (pitch and duration), so for each note there are four bytes
  int notes = sizeof(melody8) / sizeof(melody8[0]) / 2;

  // this calculates the duration of a whole note in ms
  int wholenote = (60000 * 4) / tempo;

  int divider = 0, noteDuration = 0;
  // iterate over the notes of the melody.
  // Remember, the array is twice the number of notes (notes + durations)
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {

    // calculates the duration of each note
    divider = pgm_read_word_near(melody8 + thisNote + 1);
    if (divider > 0) {
      // regular note, just proceed
      noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5;  // increases the duration in half for dotted notes
    }

    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(buzzer, pgm_read_word_near(melody8 + thisNote), noteDuration * 0.9);

    // Wait for the specief duration before playing the next note.
    delay(noteDuration);

    // stop the waveform generation before the next note.
    noTone(buzzer);
  }
}

// sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
// there are two values per note (pitch and duration), so for each note there are four bytes
int notes = sizeof(melody) / sizeof(melody[0]) / 2;


// this calculates the duration of a whole note in ms
int wholenote = (60000 * 4) / tempo;


int divider = 0, noteDuration = 0;



LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


int boton = 7;
int boton2 = 6;
int boton3 = 8;

/////////////////////
int boton3State = 0;
int boton2State = 0;
int botonState = 0;



int menu = 0;

int data = 0;

void C_in_D() {
  tempo = 100;
  notes = sizeof(melody3) / sizeof(melody3[0]) / 2;
  wholenote = (60000 * 4) / tempo;
  divider = 0, noteDuration = 0;


  // iterate over the notes of the melody.
  // Remember, the array is twice the number of notes (notes + durations)
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {


    // calculates the duration of each note
    divider = melody3[thisNote + 1];
    if (divider > 0) {
      // regular note, just proceed
      noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5;  // increases the duration in half for dotted notes
    }


    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(buzzer, melody3[thisNote], noteDuration * 0.9);


    // Wait for the specief duration before playing the next note.
    delay(noteDuration);


    // stop the waveform generation before the next note.
    noTone(buzzer);
  }
}


void Take() {
  tempo = 120;
  notes = sizeof(melody2) / sizeof(melody2[0]) / 2;
  wholenote = (60000 * 4) / tempo;
  divider = 0, noteDuration = 0;


  // iterate over the notes of the melody.
  // Remember, the array is twice the number of notes (notes + durations)
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {


    // calculates the duration of each note
    divider = melody2[thisNote + 1];
    if (divider > 0) {
      // regular note, just proceed
      noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5;  // increases the duration in half for dotted notes
    }


    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(buzzer, melody2[thisNote], noteDuration * 0.9);


    // Wait for the specief duration before playing the next note.
    delay(noteDuration);

    // stop the waveform generation before the next note.
    noTone(buzzer);
  }
}



void Still() {
  
  double duration = 1;
  for (int i = 0; duration > 0.0; i += 2) {
    int note = song[i];
    duration = song[i + 1];

    int noteDuration = (1600.0 * (duration / 4));
    tone(buzzer, note, noteDuration);

    int pauseBetweenNotes = noteDuration * 1.3;
    delay(pauseBetweenNotes);
    noTone(buzzer);
  }
}

void DOOM() {
  
  int  tempo = 225;
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {
    divider = pgm_read_word_near(melody + thisNote + 1);
    if (divider > 0) {
      noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5;
    }


    tone(buzzer, pgm_read_word_near(melody + thisNote), noteDuration * 0.9);


    delay(noteDuration);


    noTone(buzzer);
  }
}
void canciones() {


  if (boton2State == HIGH && menu == 1) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Playing:");
    delay(3000);
    lcd.setCursor(0, 1);
    lcd.print("DOOM");
    delay(2000);
    DOOM();
    menu = 0;
    setup();
  }


  if (boton3State == HIGH && menu == 1) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Playing:");
    delay(3000);
    lcd.setCursor(0, 1);
    lcd.print("Take on me");
    delay(2000);
    Take();
    menu = 0;
    setup();
  }
  if (boton2State == HIGH && menu == 2) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Playing:");
    delay(3000);
    lcd.setCursor(0, 1);
    lcd.print("Fur Elise");
    delay(2000);
    fel();
    menu = 0;
    setup();
  }


  if (boton3State == HIGH && menu == 2) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Playing:");
    delay(3000);
    lcd.setCursor(0, 1);
    lcd.print("Still Alive");
    delay(2000);
    Still();
    menu = 0;
    setup();
  }
  if (boton2State == HIGH && menu == 3) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Playing:");
    delay(3000);
    lcd.setCursor(0, 1);
    lcd.print("Canon in D");
    delay(2000);
    C_in_D();
    menu = 0;
    setup();
  }


  if (boton3State == HIGH && menu == 3) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Playing:");
    delay(3000);
    lcd.setCursor(0, 1);
    lcd.print("Tetris");
    delay(2000);
    tetris();
    menu = 0;
    setup();
  }
}
/*
  SerialEvent occurs whenever a new data comes in the hardware serial RX. This
  routine is run between each time loop() runs, so using delay inside loop can
  delay response. Multiple bytes of data may be available.
*/


void setup() {
  Serial.begin(9600);
  pinMode(boton, INPUT);
  pinMode(boton2, INPUT);
  pinMode(boton3, INPUT);


  lcd.begin(16, 2);
  Serial.println("Creditos:");
  Serial.println("Álex Fdez");
  Serial.println("");
  Serial.println("Selecciona la musica:");
  Serial.println("1-Doom's Gate");
  Serial.println("2-Take on me");
  Serial.println("3-Canon in D");
  Serial.println("4-Still Alive");
  Serial.println("5-Für Elise");
  Serial.println("6-Tetris");

  lcd.print("Seleccionar");
  lcd.setCursor(0, 1);
  lcd.print("Musica");
  delay(2000);
}