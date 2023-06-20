// notes of the moledy followed by the duration.
// a 4 means a quarter note, 8 an eighteenth , 16 sixteenth, so on
// !!negative numbers are used to represent dotted notes,
// so -4 means a dotted quarter note, that is, a quarter plus an eighteenth!!
// This code uses PROGMEM to fit the melody to flash as it was to long to fit
// in SRAM. It may not work on other Arduino arquitectures other than AVR
const int melody7[] PROGMEM = {
  // Notas de la melodía seguidas de su duración.
  // Un 4 representa una negra, un 8 una corchea, un 16 una semicorchea, y así sucesivamente.
  // ¡Los números negativos se utilizan para representar notas punteadas,
  // por lo tanto, -4 representa una negra punteada, es decir, una negra más una corchea!

  // Melodía principal
  NOTE_E4, 8, NOTE_D4, 8, NOTE_C4, 8, NOTE_D4, 8, NOTE_E4, 4, NOTE_E4, 8, NOTE_D4, 8, NOTE_C4, 8, NOTE_D4, 8,
  NOTE_E4, 4, NOTE_E4, 8, NOTE_D4, 8, NOTE_C4, 8, NOTE_D4, 8, NOTE_E4, -4,

  NOTE_G4, 8, NOTE_F4, 8, NOTE_E4, 8, NOTE_F4, 8, NOTE_G4, 4, NOTE_G4, 8, NOTE_F4, 8, NOTE_E4, 8, NOTE_F4, 8,
  NOTE_G4, 4, NOTE_G4, 8, NOTE_F4, 8, NOTE_E4, 8, NOTE_F4, 8, NOTE_G4, -4,

  NOTE_E4, 8, NOTE_D4, 8, NOTE_C4, 8, NOTE_D4, 8, NOTE_E4, 4, NOTE_E4, 8, NOTE_D4, 8, NOTE_C4, 8, NOTE_D4, 8,
  NOTE_E4, 4, NOTE_E4, 8, NOTE_D4, 8, NOTE_C4, 8, NOTE_D4, 8, NOTE_E4, -4,

  // Parte aguda
  NOTE_G4, 8, NOTE_F4, 8, NOTE_E4, 8, NOTE_F4, 8, NOTE_G4, 4, NOTE_G4, 8, NOTE_F4, 8, NOTE_E4, 8, NOTE_F4, 8,
  NOTE_G4, 4, NOTE_G4, 8, NOTE_F4, 8, NOTE_E4, 8, NOTE_F4, 8, NOTE_G4, -4,

  NOTE_E4, 8, NOTE_D4, 8, NOTE_C4, 8, NOTE_D4, 8, NOTE_E4, 4, NOTE_E4, 8, NOTE_D4, 8, NOTE_C4, 8, NOTE_D4, 8,
  NOTE_E4, 4, NOTE_E4, 8, NOTE_D4, 8, NOTE_C4, 8, NOTE_D4, 8, NOTE_E4, -4,

  // Parte más aguda
  NOTE_E5, 8, NOTE_D5, 8, NOTE_C5, 8, NOTE_D5, 8, NOTE_E5, 4, NOTE_E5, 8, NOTE_D5, 8, NOTE_C5, 8, NOTE_D5, 8,
  NOTE_E5, 4, NOTE_E5, 8, NOTE_D5, 8, NOTE_C5, 8, NOTE_D5, 8, NOTE_E5, -4,

  NOTE_G4, 8, NOTE_F4, 8, NOTE_E4, 8, NOTE_F4, 8, NOTE_G4, 4, NOTE_G4, 8, NOTE_F4, 8, NOTE_E4, 8, NOTE_F4, 8,
  NOTE_G4, 4, NOTE_G4, 8, NOTE_F4, 8, NOTE_E4, 8, NOTE_F4, 8, NOTE_G4, -4
};

const int noteDurations[] PROGMEM = {
  8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4,
  8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4,
  8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4,
  8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4,
  8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4,
  8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4
};
const int melody[] PROGMEM = {


  // At Doom's Gate (E1M1)
  // Score available at https://musescore.com/pieridot/doom


  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,  //1
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  -2,


  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,  //5
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  -2,


  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,  //9
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  -2,


  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,  //13
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_FS3,
  -16,
  NOTE_D3,
  -16,
  NOTE_B2,
  -16,
  NOTE_A3,
  -16,
  NOTE_FS3,
  -16,
  NOTE_B2,
  -16,
  NOTE_D3,
  -16,
  NOTE_FS3,
  -16,
  NOTE_A3,
  -16,
  NOTE_FS3,
  -16,
  NOTE_D3,
  -16,
  NOTE_B2,
  -16,


  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,  //17
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  -2,


  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,  //21
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B3,
  -16,
  NOTE_G3,
  -16,
  NOTE_E3,
  -16,
  NOTE_G3,
  -16,
  NOTE_B3,
  -16,
  NOTE_E4,
  -16,
  NOTE_G3,
  -16,
  NOTE_B3,
  -16,
  NOTE_E4,
  -16,
  NOTE_B3,
  -16,
  NOTE_G4,
  -16,
  NOTE_B4,
  -16,


  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_A3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_G3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,  //25
  NOTE_F3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_DS3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_E3,
  8,
  NOTE_F3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_A3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_G3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_F3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_DS3,
  -2,


  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_A3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_G3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,  //29
  NOTE_F3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_DS3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_E3,
  8,
  NOTE_F3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_A3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_G3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_A3,
  -16,
  NOTE_F3,
  -16,
  NOTE_D3,
  -16,
  NOTE_A3,
  -16,
  NOTE_F3,
  -16,
  NOTE_D3,
  -16,
  NOTE_C4,
  -16,
  NOTE_A3,
  -16,
  NOTE_F3,
  -16,
  NOTE_A3,
  -16,
  NOTE_F3,
  -16,
  NOTE_D3,
  -16,


  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,  //33
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  -2,


  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,  //37
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  -2,


  NOTE_CS3,
  8,
  NOTE_CS3,
  8,
  NOTE_CS4,
  8,
  NOTE_CS3,
  8,
  NOTE_CS3,
  8,
  NOTE_B3,
  8,
  NOTE_CS3,
  8,
  NOTE_CS3,
  8,  //41
  NOTE_A3,
  8,
  NOTE_CS3,
  8,
  NOTE_CS3,
  8,
  NOTE_G3,
  8,
  NOTE_CS3,
  8,
  NOTE_CS3,
  8,
  NOTE_GS3,
  8,
  NOTE_A3,
  8,
  NOTE_B2,
  8,
  NOTE_B2,
  8,
  NOTE_B3,
  8,
  NOTE_B2,
  8,
  NOTE_B2,
  8,
  NOTE_A3,
  8,
  NOTE_B2,
  8,
  NOTE_B2,
  8,
  NOTE_G3,
  8,
  NOTE_B2,
  8,
  NOTE_B2,
  8,
  NOTE_F3,
  -2,


  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,  //45
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B3,
  -16,
  NOTE_G3,
  -16,
  NOTE_E3,
  -16,
  NOTE_G3,
  -16,
  NOTE_B3,
  -16,
  NOTE_E4,
  -16,
  NOTE_G3,
  -16,
  NOTE_B3,
  -16,
  NOTE_E4,
  -16,
  NOTE_B3,
  -16,
  NOTE_G4,
  -16,
  NOTE_B4,
  -16,


  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,  //49
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  -2,


  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,  //53
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_FS3,
  -16,
  NOTE_DS3,
  -16,
  NOTE_B2,
  -16,
  NOTE_FS3,
  -16,
  NOTE_DS3,
  -16,
  NOTE_B2,
  -16,
  NOTE_G3,
  -16,
  NOTE_D3,
  -16,
  NOTE_B2,
  -16,
  NOTE_DS4,
  -16,
  NOTE_DS3,
  -16,
  NOTE_B2,
  -16,


  // -/-


  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,  //57
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  -2,


  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,  //61
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E4,
  -16,
  NOTE_B3,
  -16,
  NOTE_G3,
  -16,
  NOTE_G4,
  -16,
  NOTE_E4,
  -16,
  NOTE_G3,
  -16,
  NOTE_B3,
  -16,
  NOTE_D4,
  -16,
  NOTE_E4,
  -16,
  NOTE_G4,
  -16,
  NOTE_E4,
  -16,
  NOTE_G3,
  -16,


  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,  //65
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  -2,


  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_A3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_G3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,  //69
  NOTE_F3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_DS3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_E3,
  8,
  NOTE_F3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_A3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_G3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_A3,
  -16,
  NOTE_F3,
  -16,
  NOTE_D3,
  -16,
  NOTE_A3,
  -16,
  NOTE_F3,
  -16,
  NOTE_D3,
  -16,
  NOTE_C4,
  -16,
  NOTE_A3,
  -16,
  NOTE_F3,
  -16,
  NOTE_A3,
  -16,
  NOTE_F3,
  -16,
  NOTE_D3,
  -16,


  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,  //73
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  -2,


  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,  //77
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  -2,


  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,  //81
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  -2,


  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,  //73
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B3,
  -16,
  NOTE_G3,
  -16,
  NOTE_E3,
  -16,
  NOTE_B2,
  -16,
  NOTE_E3,
  -16,
  NOTE_G3,
  -16,
  NOTE_C4,
  -16,
  NOTE_B3,
  -16,
  NOTE_G3,
  -16,
  NOTE_B3,
  -16,
  NOTE_G3,
  -16,
  NOTE_E3,
  -16,
};


int melody2[] = {

  // Dart Vader theme (Imperial March) - Star wars
  // Score available at https://musescore.com/user/202909/scores/1141521
  // The tenor saxophone part was used

  NOTE_FS5,
  8,
  NOTE_FS5,
  8,
  NOTE_D5,
  8,
  NOTE_B4,
  8,
  REST,
  8,
  NOTE_B4,
  8,
  REST,
  8,
  NOTE_E5,
  8,
  REST,
  8,
  NOTE_E5,
  8,
  REST,
  8,
  NOTE_E5,
  8,
  NOTE_GS5,
  8,
  NOTE_GS5,
  8,
  NOTE_A5,
  8,
  NOTE_B5,
  8,
  NOTE_A5,
  8,
  NOTE_A5,
  8,
  NOTE_A5,
  8,
  NOTE_E5,
  8,
  REST,
  8,
  NOTE_D5,
  8,
  REST,
  8,
  NOTE_FS5,
  8,
  REST,
  8,
  NOTE_FS5,
  8,
  REST,
  8,
  NOTE_FS5,
  8,
  NOTE_E5,
  8,
  NOTE_E5,
  8,
  NOTE_FS5,
  8,
  NOTE_E5,
  8,
  NOTE_FS5,
  8,
  NOTE_FS5,
  8,
  NOTE_D5,
  8,
  NOTE_B4,
  8,
  REST,
  8,
  NOTE_B4,
  8,
  REST,
  8,
  NOTE_E5,
  8,

  REST,
  8,
  NOTE_E5,
  8,
  REST,
  8,
  NOTE_E5,
  8,
  NOTE_GS5,
  8,
  NOTE_GS5,
  8,
  NOTE_A5,
  8,
  NOTE_B5,
  8,
  NOTE_A5,
  8,
  NOTE_A5,
  8,
  NOTE_A5,
  8,
  NOTE_E5,
  8,
  REST,
  8,
  NOTE_D5,
  8,
  REST,
  8,
  NOTE_FS5,
  8,
  REST,
  8,
  NOTE_FS5,
  8,
  REST,
  8,
  NOTE_FS5,
  8,
  NOTE_E5,
  8,
  NOTE_E5,
  8,
  NOTE_FS5,
  8,
  NOTE_E5,
  8,
  NOTE_FS5,
  8,
  NOTE_FS5,
  8,
  NOTE_D5,
  8,
  NOTE_B4,
  8,
  REST,
  8,
  NOTE_B4,
  8,
  REST,
  8,
  NOTE_E5,
  8,
  REST,
  8,
  NOTE_E5,
  8,
  REST,
  8,
  NOTE_E5,
  8,
  NOTE_GS5,
  8,
  NOTE_GS5,
  8,
  NOTE_A5,
  8,
  NOTE_B5,
  8,

  NOTE_A5,
  8,
  NOTE_A5,
  8,
  NOTE_A5,
  8,
  NOTE_E5,
  8,
  REST,
  8,
  NOTE_D5,
  8,
  REST,
  8,
  NOTE_FS5,
  8,
  REST,
  8,
  NOTE_FS5,
  8,
  REST,
  8,
  NOTE_FS5,
  8,
  NOTE_E5,
  8,
  NOTE_E5,
  8,
  NOTE_FS5,
  8,
  NOTE_E5,
  8,

};

const int melody8[] PROGMEM = {

  // Fur Elise - Ludwig van Beethovem
  // Score available at https://musescore.com/user/28149610/scores/5281944

  //starts from 1 ending on 9
  NOTE_E5,
  16,
  NOTE_DS5,
  16,  //1
  NOTE_E5,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_B4,
  16,
  NOTE_D5,
  16,
  NOTE_C5,
  16,
  NOTE_A4,
  -8,
  NOTE_C4,
  16,
  NOTE_E4,
  16,
  NOTE_A4,
  16,
  NOTE_B4,
  -8,
  NOTE_E4,
  16,
  NOTE_GS4,
  16,
  NOTE_B4,
  16,
  NOTE_C5,
  8,
  REST,
  16,
  NOTE_E4,
  16,
  NOTE_E5,
  16,
  NOTE_DS5,
  16,

  NOTE_E5,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_B4,
  16,
  NOTE_D5,
  16,
  NOTE_C5,
  16,  //6
  NOTE_A4,
  -8,
  NOTE_C4,
  16,
  NOTE_E4,
  16,
  NOTE_A4,
  16,
  NOTE_B4,
  -8,
  NOTE_E4,
  16,
  NOTE_C5,
  16,
  NOTE_B4,
  16,
  NOTE_A4,
  4,
  REST,
  8,  //9 - 1st ending

  //repaets from 1 ending on 10
  NOTE_E5,
  16,
  NOTE_DS5,
  16,  //1
  NOTE_E5,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_B4,
  16,
  NOTE_D5,
  16,
  NOTE_C5,
  16,
  NOTE_A4,
  -8,
  NOTE_C4,
  16,
  NOTE_E4,
  16,
  NOTE_A4,
  16,
  NOTE_B4,
  -8,
  NOTE_E4,
  16,
  NOTE_GS4,
  16,
  NOTE_B4,
  16,
  NOTE_C5,
  8,
  REST,
  16,
  NOTE_E4,
  16,
  NOTE_E5,
  16,
  NOTE_DS5,
  16,

  NOTE_E5,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_B4,
  16,
  NOTE_D5,
  16,
  NOTE_C5,
  16,  //6
  NOTE_A4,
  -8,
  NOTE_C4,
  16,
  NOTE_E4,
  16,
  NOTE_A4,
  16,
  NOTE_B4,
  -8,
  NOTE_E4,
  16,
  NOTE_C5,
  16,
  NOTE_B4,
  16,
  NOTE_A4,
  8,
  REST,
  16,
  NOTE_B4,
  16,
  NOTE_C5,
  16,
  NOTE_D5,
  16,  //10 - 2nd ending
  //continues from 11
  NOTE_E5,
  -8,
  NOTE_G4,
  16,
  NOTE_F5,
  16,
  NOTE_E5,
  16,
  NOTE_D5,
  -8,
  NOTE_F4,
  16,
  NOTE_E5,
  16,
  NOTE_D5,
  16,  //12

  NOTE_C5,
  -8,
  NOTE_E4,
  16,
  NOTE_D5,
  16,
  NOTE_C5,
  16,  //13
  NOTE_B4,
  8,
  REST,
  16,
  NOTE_E4,
  16,
  NOTE_E5,
  16,
  REST,
  16,
  REST,
  16,
  NOTE_E5,
  16,
  NOTE_E6,
  16,
  REST,
  16,
  REST,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  REST,
  16,
  REST,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_B4,
  16,
  NOTE_D5,
  16,
  NOTE_C5,
  16,
  NOTE_A4,
  8,
  REST,
  16,
  NOTE_C4,
  16,
  NOTE_E4,
  16,
  NOTE_A4,
  16,

  NOTE_B4,
  8,
  REST,
  16,
  NOTE_E4,
  16,
  NOTE_GS4,
  16,
  NOTE_B4,
  16,  //19
  NOTE_C5,
  8,
  REST,
  16,
  NOTE_E4,
  16,
  NOTE_E5,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_B4,
  16,
  NOTE_D5,
  16,
  NOTE_C5,
  16,
  NOTE_A4,
  8,
  REST,
  16,
  NOTE_C4,
  16,
  NOTE_E4,
  16,
  NOTE_A4,
  16,
  NOTE_B4,
  8,
  REST,
  16,
  NOTE_E4,
  16,
  NOTE_C5,
  16,
  NOTE_B4,
  16,
  NOTE_A4,
  8,
  REST,
  16,
  NOTE_B4,
  16,
  NOTE_C5,
  16,
  NOTE_D5,
  16,  //24 (1st ending)

  //repeats from 11
  NOTE_E5,
  -8,
  NOTE_G4,
  16,
  NOTE_F5,
  16,
  NOTE_E5,
  16,
  NOTE_D5,
  -8,
  NOTE_F4,
  16,
  NOTE_E5,
  16,
  NOTE_D5,
  16,  //12

  NOTE_C5,
  -8,
  NOTE_E4,
  16,
  NOTE_D5,
  16,
  NOTE_C5,
  16,  //13
  NOTE_B4,
  8,
  REST,
  16,
  NOTE_E4,
  16,
  NOTE_E5,
  16,
  REST,
  16,
  REST,
  16,
  NOTE_E5,
  16,
  NOTE_E6,
  16,
  REST,
  16,
  REST,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  REST,
  16,
  REST,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_B4,
  16,
  NOTE_D5,
  16,
  NOTE_C5,
  16,
  NOTE_A4,
  8,
  REST,
  16,
  NOTE_C4,
  16,
  NOTE_E4,
  16,
  NOTE_A4,
  16,

  NOTE_B4,
  8,
  REST,
  16,
  NOTE_E4,
  16,
  NOTE_GS4,
  16,
  NOTE_B4,
  16,  //19
  NOTE_C5,
  8,
  REST,
  16,
  NOTE_E4,
  16,
  NOTE_E5,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_B4,
  16,
  NOTE_D5,
  16,
  NOTE_C5,
  16,
  NOTE_A4,
  8,
  REST,
  16,
  NOTE_C4,
  16,
  NOTE_E4,
  16,
  NOTE_A4,
  16,
  NOTE_B4,
  8,
  REST,
  16,
  NOTE_E4,
  16,
  NOTE_C5,
  16,
  NOTE_B4,
  16,
  NOTE_A4,
  8,
  REST,
  16,
  NOTE_C5,
  16,
  NOTE_C5,
  16,
  NOTE_C5,
  16,  //25 - 2nd ending

  //continues from 26
  NOTE_C5,
  4,
  NOTE_F5,
  -16,
  NOTE_E5,
  32,  //26
  NOTE_E5,
  8,
  NOTE_D5,
  8,
  NOTE_AS5,
  -16,
  NOTE_A5,
  32,
  NOTE_A5,
  16,
  NOTE_G5,
  16,
  NOTE_F5,
  16,
  NOTE_E5,
  16,
  NOTE_D5,
  16,
  NOTE_C5,
  16,
  NOTE_AS4,
  8,
  NOTE_A4,
  8,
  NOTE_A4,
  32,
  NOTE_G4,
  32,
  NOTE_A4,
  32,
  NOTE_B4,
  32,
  NOTE_C5,
  4,
  NOTE_D5,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  -8,
  NOTE_E5,
  16,
  NOTE_F5,
  16,
  NOTE_A4,
  16,
  NOTE_C5,
  4,
  NOTE_D5,
  -16,
  NOTE_B4,
  32,


  NOTE_C5,
  32,
  NOTE_G5,
  32,
  NOTE_G4,
  32,
  NOTE_G5,
  32,
  NOTE_A4,
  32,
  NOTE_G5,
  32,
  NOTE_B4,
  32,
  NOTE_G5,
  32,
  NOTE_C5,
  32,
  NOTE_G5,
  32,
  NOTE_D5,
  32,
  NOTE_G5,
  32,  //33
  NOTE_E5,
  32,
  NOTE_G5,
  32,
  NOTE_C6,
  32,
  NOTE_B5,
  32,
  NOTE_A5,
  32,
  NOTE_G5,
  32,
  NOTE_F5,
  32,
  NOTE_E5,
  32,
  NOTE_D5,
  32,
  NOTE_G5,
  32,
  NOTE_F5,
  32,
  NOTE_D5,
  32,
  NOTE_C5,
  32,
  NOTE_G5,
  32,
  NOTE_G4,
  32,
  NOTE_G5,
  32,
  NOTE_A4,
  32,
  NOTE_G5,
  32,
  NOTE_B4,
  32,
  NOTE_G5,
  32,
  NOTE_C5,
  32,
  NOTE_G5,
  32,
  NOTE_D5,
  32,
  NOTE_G5,
  32,

  NOTE_E5,
  32,
  NOTE_G5,
  32,
  NOTE_C6,
  32,
  NOTE_B5,
  32,
  NOTE_A5,
  32,
  NOTE_G5,
  32,
  NOTE_F5,
  32,
  NOTE_E5,
  32,
  NOTE_D5,
  32,
  NOTE_G5,
  32,
  NOTE_F5,
  32,
  NOTE_D5,
  32,  //36
  NOTE_E5,
  32,
  NOTE_F5,
  32,
  NOTE_E5,
  32,
  NOTE_DS5,
  32,
  NOTE_E5,
  32,
  NOTE_B4,
  32,
  NOTE_E5,
  32,
  NOTE_DS5,
  32,
  NOTE_E5,
  32,
  NOTE_B4,
  32,
  NOTE_E5,
  32,
  NOTE_DS5,
  32,
  NOTE_E5,
  -8,
  NOTE_B4,
  16,
  NOTE_E5,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  -8,
  NOTE_B4,
  16,
  NOTE_E5,
  16,
  REST,
  16,

  REST,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  REST,
  16,
  REST,
  16,
  NOTE_DS5,
  16,  //40
  NOTE_E5,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_B4,
  16,
  NOTE_D5,
  16,
  NOTE_C5,
  16,
  NOTE_A4,
  8,
  REST,
  16,
  NOTE_C4,
  16,
  NOTE_E4,
  16,
  NOTE_A4,
  16,
  NOTE_B4,
  8,
  REST,
  16,
  NOTE_E4,
  16,
  NOTE_GS4,
  16,
  NOTE_B4,
  16,
  NOTE_C5,
  8,
  REST,
  16,
  NOTE_E4,
  16,
  NOTE_E5,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_B4,
  16,
  NOTE_D5,
  16,
  NOTE_C5,
  16,

  NOTE_A4,
  8,
  REST,
  16,
  NOTE_C4,
  16,
  NOTE_E4,
  16,
  NOTE_A4,
  16,  //46
  NOTE_B4,
  8,
  REST,
  16,
  NOTE_E4,
  16,
  NOTE_C5,
  16,
  NOTE_B4,
  16,
  NOTE_A4,
  8,
  REST,
  16,
  NOTE_B4,
  16,
  NOTE_C5,
  16,
  NOTE_D5,
  16,
  NOTE_E5,
  -8,
  NOTE_G4,
  16,
  NOTE_F5,
  16,
  NOTE_E5,
  16,
  NOTE_D5,
  -8,
  NOTE_F4,
  16,
  NOTE_E5,
  16,
  NOTE_D5,
  16,
  NOTE_C5,
  -8,
  NOTE_E4,
  16,
  NOTE_D5,
  16,
  NOTE_C5,
  16,
  NOTE_B4,
  8,
  REST,
  16,
  NOTE_E4,
  16,
  NOTE_E5,
  16,
  REST,
  16,
  REST,
  16,
  NOTE_E5,
  16,
  NOTE_E6,
  16,
  REST,
  16,
  REST,
  16,
  NOTE_DS5,
  16,

  NOTE_E5,
  16,
  REST,
  16,
  REST,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_D5,
  16,  //54
  NOTE_E5,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_B4,
  16,
  NOTE_D5,
  16,
  NOTE_C5,
  16,
  NOTE_A4,
  8,
  REST,
  16,
  NOTE_C4,
  16,
  NOTE_E4,
  16,
  NOTE_A4,
  16,
  NOTE_B4,
  8,
  REST,
  16,
  NOTE_E4,
  16,
  NOTE_GS4,
  16,
  NOTE_B4,
  16,
  NOTE_C5,
  8,
  REST,
  16,
  NOTE_E4,
  16,
  NOTE_E5,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_B4,
  16,
  NOTE_D5,
  16,
  NOTE_C5,
  16,

  NOTE_A4,
  8,
  REST,
  16,
  NOTE_C4,
  16,
  NOTE_E4,
  16,
  NOTE_A4,
  16,  //60
  NOTE_B4,
  8,
  REST,
  16,
  NOTE_E4,
  16,
  NOTE_C5,
  16,
  NOTE_B4,
  16,
  NOTE_A4,
  8,
  REST,
  16,
  REST,
  16,
  REST,
  8,
  NOTE_CS5,
  -4,
  NOTE_D5,
  4,
  NOTE_E5,
  16,
  NOTE_F5,
  16,
  NOTE_F5,
  4,
  NOTE_F5,
  8,
  NOTE_E5,
  -4,
  NOTE_D5,
  4,
  NOTE_C5,
  16,
  NOTE_B4,
  16,
  NOTE_A4,
  4,
  NOTE_A4,
  8,
  NOTE_A4,
  8,
  NOTE_C5,
  8,
  NOTE_B4,
  8,
  NOTE_A4,
  -4,
  NOTE_CS5,
  -4,

  NOTE_D5,
  4,
  NOTE_E5,
  16,
  NOTE_F5,
  16,  //72
  NOTE_F5,
  4,
  NOTE_F5,
  8,
  NOTE_F5,
  -4,
  NOTE_DS5,
  4,
  NOTE_D5,
  16,
  NOTE_C5,
  16,
  NOTE_AS4,
  4,
  NOTE_A4,
  8,
  NOTE_GS4,
  4,
  NOTE_G4,
  8,
  NOTE_A4,
  -4,
  NOTE_B4,
  4,
  REST,
  8,
  NOTE_A3,
  -32,
  NOTE_C4,
  -32,
  NOTE_E4,
  -32,
  NOTE_A4,
  -32,
  NOTE_C5,
  -32,
  NOTE_E5,
  -32,
  NOTE_D5,
  -32,
  NOTE_C5,
  -32,
  NOTE_B4,
  -32,

  NOTE_A4,
  -32,
  NOTE_C5,
  -32,
  NOTE_E5,
  -32,
  NOTE_A5,
  -32,
  NOTE_C6,
  -32,
  NOTE_E6,
  -32,
  NOTE_D6,
  -32,
  NOTE_C6,
  -32,
  NOTE_B5,
  -32,  //80
  NOTE_A4,
  -32,
  NOTE_C5,
  -32,
  NOTE_E5,
  -32,
  NOTE_A5,
  -32,
  NOTE_C6,
  -32,
  NOTE_E6,
  -32,
  NOTE_D6,
  -32,
  NOTE_C6,
  -32,
  NOTE_B5,
  -32,
  NOTE_AS5,
  -32,
  NOTE_A5,
  -32,
  NOTE_GS5,
  -32,
  NOTE_G5,
  -32,
  NOTE_FS5,
  -32,
  NOTE_F5,
  -32,
  NOTE_E5,
  -32,
  NOTE_DS5,
  -32,
  NOTE_D5,
  -32,

  NOTE_CS5,
  -32,
  NOTE_C5,
  -32,
  NOTE_B4,
  -32,
  NOTE_AS4,
  -32,
  NOTE_A4,
  -32,
  NOTE_GS4,
  -32,
  NOTE_G4,
  -32,
  NOTE_FS4,
  -32,
  NOTE_F4,
  -32,  //84
  NOTE_E4,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_B4,
  16,
  NOTE_D5,
  16,
  NOTE_C5,
  16,
  NOTE_A4,
  -8,
  NOTE_C4,
  16,
  NOTE_E4,
  16,
  NOTE_A4,
  16,
  NOTE_B4,
  -8,
  NOTE_E4,
  16,
  NOTE_GS4,
  16,
  NOTE_B4,
  16,

  NOTE_C5,
  8,
  REST,
  16,
  NOTE_E4,
  16,
  NOTE_E5,
  16,
  NOTE_DS5,
  16,  //88
  NOTE_E5,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_B4,
  16,
  NOTE_D5,
  16,
  NOTE_C5,
  16,
  NOTE_A4,
  -8,
  NOTE_C4,
  16,
  NOTE_E4,
  16,
  NOTE_A4,
  16,
  NOTE_B4,
  -8,
  NOTE_E4,
  16,
  NOTE_C5,
  16,
  NOTE_B4,
  16,
  NOTE_A4,
  -8,
  REST,
  -8,
  REST,
  -8,
  NOTE_G4,
  16,
  NOTE_F5,
  16,
  NOTE_E5,
  16,
  NOTE_D5,
  4,
  REST,
  8,
  REST,
  -8,
  NOTE_E4,
  16,
  NOTE_D5,
  16,
  NOTE_C5,
  16,

  NOTE_B4,
  -8,
  NOTE_E4,
  16,
  NOTE_E5,
  8,  //96
  NOTE_E5,
  8,
  NOTE_E6,
  -8,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  REST,
  16,
  REST,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_B4,
  16,
  NOTE_D5,
  16,
  NOTE_C5,
  16,
  NOTE_A4,
  -8,
  NOTE_C4,
  16,
  NOTE_E4,
  16,
  NOTE_A4,
  16,
  NOTE_B4,
  -8,
  NOTE_E4,
  16,
  NOTE_GS4,
  16,
  NOTE_B4,
  16,

  NOTE_C5,
  8,
  REST,
  16,
  NOTE_E4,
  16,
  NOTE_E5,
  16,
  NOTE_DS5,
  16,  //102
  NOTE_E5,
  16,
  NOTE_DS5,
  16,
  NOTE_E5,
  16,
  NOTE_B4,
  16,
  NOTE_D5,
  16,
  NOTE_C5,
  16,
  NOTE_A4,
  -8,
  NOTE_C4,
  16,
  NOTE_E4,
  16,
  NOTE_A4,
  16,
  NOTE_B4,
  -8,
  NOTE_E4,
  16,
  NOTE_C5,
  16,
  NOTE_B4,
  16,
  NOTE_A4,
  -4,
};

int melody9[] = {

  //Based on the arrangement at https://www.flutetunes.com/tunes.php?id=192

  NOTE_E5,
  4,
  NOTE_B4,
  8,
  NOTE_C5,
  8,
  NOTE_D5,
  4,
  NOTE_C5,
  8,
  NOTE_B4,
  8,
  NOTE_A4,
  4,
  NOTE_A4,
  8,
  NOTE_C5,
  8,
  NOTE_E5,
  4,
  NOTE_D5,
  8,
  NOTE_C5,
  8,
  NOTE_B4,
  -4,
  NOTE_C5,
  8,
  NOTE_D5,
  4,
  NOTE_E5,
  4,
  NOTE_C5,
  4,
  NOTE_A4,
  4,
  NOTE_A4,
  8,
  NOTE_A4,
  4,
  NOTE_B4,
  8,
  NOTE_C5,
  8,

  NOTE_D5,
  -4,
  NOTE_F5,
  8,
  NOTE_A5,
  4,
  NOTE_G5,
  8,
  NOTE_F5,
  8,
  NOTE_E5,
  -4,
  NOTE_C5,
  8,
  NOTE_E5,
  4,
  NOTE_D5,
  8,
  NOTE_C5,
  8,
  NOTE_B4,
  4,
  NOTE_B4,
  8,
  NOTE_C5,
  8,
  NOTE_D5,
  4,
  NOTE_E5,
  4,
  NOTE_C5,
  4,
  NOTE_A4,
  4,
  NOTE_A4,
  4,
  REST,
  4,

  NOTE_E5,
  4,
  NOTE_B4,
  8,
  NOTE_C5,
  8,
  NOTE_D5,
  4,
  NOTE_C5,
  8,
  NOTE_B4,
  8,
  NOTE_A4,
  4,
  NOTE_A4,
  8,
  NOTE_C5,
  8,
  NOTE_E5,
  4,
  NOTE_D5,
  8,
  NOTE_C5,
  8,
  NOTE_B4,
  -4,
  NOTE_C5,
  8,
  NOTE_D5,
  4,
  NOTE_E5,
  4,
  NOTE_C5,
  4,
  NOTE_A4,
  4,
  NOTE_A4,
  8,
  NOTE_A4,
  4,
  NOTE_B4,
  8,
  NOTE_C5,
  8,

  NOTE_D5,
  -4,
  NOTE_F5,
  8,
  NOTE_A5,
  4,
  NOTE_G5,
  8,
  NOTE_F5,
  8,
  NOTE_E5,
  -4,
  NOTE_C5,
  8,
  NOTE_E5,
  4,
  NOTE_D5,
  8,
  NOTE_C5,
  8,
  NOTE_B4,
  4,
  NOTE_B4,
  8,
  NOTE_C5,
  8,
  NOTE_D5,
  4,
  NOTE_E5,
  4,
  NOTE_C5,
  4,
  NOTE_A4,
  4,
  NOTE_A4,
  4,
  REST,
  4,


  NOTE_E5,
  2,
  NOTE_C5,
  2,
  NOTE_D5,
  2,
  NOTE_B4,
  2,
  NOTE_C5,
  2,
  NOTE_A4,
  2,
  NOTE_GS4,
  2,
  NOTE_B4,
  4,
  REST,
  8,
  NOTE_E5,
  2,
  NOTE_C5,
  2,
  NOTE_D5,
  2,
  NOTE_B4,
  2,
  NOTE_C5,
  4,
  NOTE_E5,
  4,
  NOTE_A5,
  2,
  NOTE_GS5,
  2,

};
int melody3[] = {


  // Cannon in D - Pachelbel
  // Score available at https://musescore.com/user/4710311/scores/1975521
  // C F
  NOTE_FS4,
  2,
  NOTE_E4,
  2,
  NOTE_D4,
  2,
  NOTE_CS4,
  2,
  NOTE_B3,
  2,
  NOTE_A3,
  2,
  NOTE_B3,
  2,
  NOTE_CS4,
  2,
  NOTE_FS4,
  2,
  NOTE_E4,
  2,
  NOTE_D4,
  2,
  NOTE_CS4,
  2,
  NOTE_B3,
  2,
  NOTE_A3,
  2,
  NOTE_B3,
  2,
  NOTE_CS4,
  2,
  NOTE_D4,
  2,
  NOTE_CS4,
  2,
  NOTE_B3,
  2,
  NOTE_A3,
  2,
  NOTE_G3,
  2,
  NOTE_FS3,
  2,
  NOTE_G3,
  2,
  NOTE_A3,
  2,


  NOTE_D4,
  4,
  NOTE_FS4,
  8,
  NOTE_G4,
  8,
  NOTE_A4,
  4,
  NOTE_FS4,
  8,
  NOTE_G4,
  8,
  NOTE_A4,
  4,
  NOTE_B3,
  8,
  NOTE_CS4,
  8,
  NOTE_D4,
  8,
  NOTE_E4,
  8,
  NOTE_FS4,
  8,
  NOTE_G4,
  8,
  NOTE_FS4,
  4,
  NOTE_D4,
  8,
  NOTE_E4,
  8,
  NOTE_FS4,
  4,
  NOTE_FS3,
  8,
  NOTE_G3,
  8,
  NOTE_A3,
  8,
  NOTE_G3,
  8,
  NOTE_FS3,
  8,
  NOTE_G3,
  8,
  NOTE_A3,
  2,
  NOTE_G3,
  4,
  NOTE_B3,
  8,
  NOTE_A3,
  8,
  NOTE_G3,
  4,
  NOTE_FS3,
  8,
  NOTE_E3,
  8,
  NOTE_FS3,
  4,
  NOTE_D3,
  8,
  NOTE_E3,
  8,
  NOTE_FS3,
  8,
  NOTE_G3,
  8,
  NOTE_A3,
  8,
  NOTE_B3,
  8,


  NOTE_G3,
  4,
  NOTE_B3,
  8,
  NOTE_A3,
  8,
  NOTE_B3,
  4,
  NOTE_CS4,
  8,
  NOTE_D4,
  8,
  NOTE_A3,
  8,
  NOTE_B3,
  8,
  NOTE_CS4,
  8,
  NOTE_D4,
  8,
  NOTE_E4,
  8,
  NOTE_FS4,
  8,
  NOTE_G4,
  8,
  NOTE_A4,
  2,
  NOTE_A4,
  4,
  NOTE_FS4,
  8,
  NOTE_G4,
  8,
  NOTE_A4,
  4,
  NOTE_FS4,
  8,
  NOTE_G4,
  8,
  NOTE_A4,
  8,
  NOTE_A3,
  8,
  NOTE_B3,
  8,
  NOTE_CS4,
  8,
  NOTE_D4,
  8,
  NOTE_E4,
  8,
  NOTE_FS4,
  8,
  NOTE_G4,
  8,
  NOTE_FS4,
  4,
  NOTE_D4,
  8,
  NOTE_E4,
  8,
  NOTE_FS4,
  8,
  NOTE_CS4,
  8,
  NOTE_A3,
  8,
  NOTE_A3,
  8,


  NOTE_CS4,
  4,
  NOTE_B3,
  4,
  NOTE_D4,
  8,
  NOTE_CS4,
  8,
  NOTE_B3,
  4,
  NOTE_A3,
  8,
  NOTE_G3,
  8,
  NOTE_A3,
  4,
  NOTE_D3,
  8,
  NOTE_E3,
  8,
  NOTE_FS3,
  8,
  NOTE_G3,
  8,
  NOTE_A3,
  8,
  NOTE_B3,
  4,
  NOTE_G3,
  4,
  NOTE_B3,
  8,
  NOTE_A3,
  8,
  NOTE_B3,
  4,
  NOTE_CS4,
  8,
  NOTE_D4,
  8,
  NOTE_A3,
  8,
  NOTE_B3,
  8,
  NOTE_CS4,
  8,
  NOTE_D4,
  8,
  NOTE_E4,
  8,
  NOTE_FS4,
  8,
  NOTE_G4,
  8,
  NOTE_A4,
  2,


};


int melody4[] = {
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,  //1
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  -2,
};

double song[] = {

  // First line
  REST, 2.0, NOTE_G3, 0.5, NOTE_FS3, 0.5, NOTE_E3, 0.5, NOTE_E3, 0.5,
  NOTE_FS3, 2.0, REST, 2.0,

  REST, 1.5, NOTE_A2, 0.5,
  NOTE_G3, 0.5, NOTE_FS3, 0.5, NOTE_E3, 0.5, NOTE_E3, 1.0,

  NOTE_FS3, 1.5,
  NOTE_D3, 1.0, NOTE_E3, 0.5, NOTE_A2, 2.5,

  REST, 1.5, NOTE_A2, 0.5,

  // Second line
  NOTE_E3, 1.0, NOTE_FS3, 0.5, NOTE_G3, 1.5, NOTE_E3, 0.5, NOTE_CS3, 1.0,
  NOTE_D3, 1.5, NOTE_E3, 1.0, NOTE_A2, 0.5, NOTE_A2, 1.0,
  NOTE_FS3, 1.5, REST, 2.0,

  REST, 2.0, NOTE_G3, 0.5, NOTE_FS3, 0.5, NOTE_E3, 0.5, NOTE_E3, 0.5,
  NOTE_FS3, 2.0, REST, 2.0,

  // Third line
  REST, 1.0, REST, 0.5, NOTE_A2, 0.5, NOTE_G3, 0.5, NOTE_FS3, 0.5, NOTE_E3, 0.5, NOTE_E3, 1.5,
  NOTE_FS3, 0.5, NOTE_D3, 1.5, NOTE_E3, 0.5, NOTE_A2, 2.5,
  REST, 2.0,

  NOTE_E3, 1.0, NOTE_FS3, 0.5, NOTE_G3, 1.5, NOTE_E3, 0.5, NOTE_CS3, 1.5,
  NOTE_D3, 0.5, NOTE_E3, 1.0, NOTE_A2, 0.5, NOTE_D3, 0.5, NOTE_E3, 0.5,

  // Fourth line
  NOTE_F3, 0.5, NOTE_E3, 0.5, NOTE_D3, 0.5, NOTE_C3, 0.5, REST, 1.0, NOTE_A2, 0.5, NOTE_AS2, 0.5,
  NOTE_C3, 1.0, NOTE_F3, 1.0, NOTE_E3, 0.5, NOTE_D3, 0.5, NOTE_D3, 0.5, NOTE_C3, 0.5,
  NOTE_D3, 0.5, NOTE_C3, 0.5, NOTE_C3, 1.0, NOTE_C3, 1.0, NOTE_A2, 0.5, NOTE_AS2, 0.5,
  NOTE_C3, 1.0, NOTE_F3, 1.0, NOTE_G3, 0.5, NOTE_F3, 0.5, NOTE_E3, 0.5, NOTE_D3, 0.5,
  NOTE_D3, 0.5, NOTE_E3, 0.5, NOTE_F3, 1.0, NOTE_F3, 1.0, NOTE_G3, 0.5, NOTE_A3, 0.5,

  // Fifth line
  NOTE_AS3, 0.5, NOTE_AS3, 0.5, NOTE_A3, 1.0, NOTE_G3, 1.0, NOTE_F3, 0.5, NOTE_G3, 0.5,
  NOTE_A3, 0.5, NOTE_A3, 0.5, NOTE_G3, 1.0, NOTE_F3, 1.0, NOTE_D3, 0.5, NOTE_C3, 0.5,
  NOTE_D3, 0.5, NOTE_F3, 0.5, NOTE_F3, 0.5, NOTE_E3, 1.0, NOTE_E3, 0.5, NOTE_FS3, 0.5, NOTE_FS3, 1.5,



  // and belive me...
  REST, 2.0, NOTE_A3, 0.5, NOTE_A3, 0.5,
  NOTE_B3, 0.5, NOTE_A3, 0.5, NOTE_FS3, 0.5, NOTE_D3, 1.0, NOTE_E3, 0.5, NOTE_FS3, 0.5, NOTE_FS3, 1.5,
  REST, 1.5, NOTE_A3, 0.5, NOTE_A3, 0.5, NOTE_A3, 0.5,


  // science and im still...
  NOTE_B3, 0.5, NOTE_A3, 0.5, NOTE_FS3, 0.5, NOTE_D3, 1.0, NOTE_E3, 0.5, NOTE_FS3, 0.5, NOTE_FS3, 1.5,

  REST, 1.5, NOTE_A3, 0.5, NOTE_A3, 0.5, NOTE_A3, 0.5,
  NOTE_B3, 0.5, NOTE_A3, 0.5, NOTE_FS3, 0.5, NOTE_D3, 1.0, NOTE_E3, 0.5, NOTE_FS3, 0.5, NOTE_FS3, 1.5,

  REST, 2.0, NOTE_A3, 0.5, NOTE_A3, 0.5,
  NOTE_B3, 0.5, NOTE_A3, 0.5, NOTE_FS3, 0.5, NOTE_D3, 1.0, NOTE_E3, 0.5, NOTE_FS3, 0.5, NOTE_FS3, 1.5,

  REST, 1.5, NOTE_A3, 0.5, NOTE_A3, 0.5, NOTE_A3, 0.5,
  NOTE_B3, 0.5, NOTE_A3, 0.5, NOTE_FS3, 0.5, NOTE_D3, 1.0, NOTE_E3, 0.5, NOTE_FS3, 0.5, NOTE_FS3, 1.5,

  REST, 1.5, NOTE_A3, 0.5, NOTE_A3, 0.5, NOTE_A3, 0.5,
  NOTE_B3, 0.5, NOTE_A3, 0.5, NOTE_FS3, 0.5, NOTE_D3, 1.0, NOTE_E3, 0.5, NOTE_FS3, 0.5, NOTE_FS3, 1.5,

  // still alive... still alive...
  REST, 1.5, NOTE_G3, 0.5, NOTE_A3, 0.5, NOTE_A3, 1.5,
  REST, 1.5, NOTE_G3, 0.5, NOTE_FS3, 0.5, NOTE_FS3, 1.5,

  // End of song
  0.0, 0.0
};
