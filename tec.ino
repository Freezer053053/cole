#include "Definitions.h"
#include "Songs.h"
#include <LiquidCrystal.h>
#include "ejecucion.h"


void blnk() {
  lcd.noBlink();
  delay(1000);
  lcd.blink();
  delay(1000);
}

void loop() {


  botonState = digitalRead(boton);
  boton2State = digitalRead(boton2);
  boton3State = digitalRead(boton3);

  if (Serial.available()) {

    data = Serial.read();

    if (data == '9') {
      lcd.clear();
      lcd.print(menu);
    }

    if (data == '1') {
      Serial.println("Doom's Gate");
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Playing:");
      delay(3000);
      lcd.setCursor(0, 1);
      lcd.print("DOOM");
      delay(2000);
      DOOM();
      menu = 0;
      data = 0;
      setup();
    }

    if (data == '2') {
      Serial.println("Take on me");
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Playing:");
      delay(3000);
      lcd.setCursor(0, 1);
      lcd.print("Take on me");
      delay(2000);
      Take();
      menu = 0;
      data = 0;
      setup();
    }

    if (data == '3') {
      Serial.println("Canon in D");
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Playing:");
      delay(3000);
      lcd.setCursor(0, 1);
      lcd.print("Canon in D");
      delay(2000);
      C_in_D();
      menu = 0;
      data = 0;
      setup();
    }
  }

  if (data == '4') {
    Serial.println("Still Alive");
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Playing:");
    delay(3000);
    lcd.setCursor(0, 1);
    lcd.print("Still Alive");
    delay(2000);
    Still();
    menu = 0;
    data = 0;
    setup();
  }

  if (data == '5') {
    Serial.println("Fur Elise");
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Playing:");
    delay(3000);
    lcd.setCursor(0, 1);
    lcd.print("Fur Elise");
    delay(2000);
    fel();
    menu = 0;
    data = 0;
    setup();
  }

  if (data == '6') {
    Serial.println("Tetris");
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Playing:");
    delay(3000);
    lcd.setCursor(0, 1);
    lcd.print("Tetris");
    delay(2000);
    tetris();
    menu = 0;
    data = 0;
    setup();
  }

  //Serial.println(botonState);
  //delay(1000);

  if (botonState == HIGH) {
    delay(1000);
    menu = menu + 1;
    lcd.clear();
    //delay(500);
  }

  if (menu == 4) {
    //delay(250);
    lcd.clear();
    menu = 0;
    setup();
  }

  if (menu == 0) {
    lcd.clear();
    //delay(500);
    lcd.setCursor(0, 0);
    //delay(500);
    lcd.print("1-Doom");
    //delay(500);
    lcd.setCursor(0, 1);
    lcd.print("2-Take on me");
    lcd.setCursor(0, 0);
    menu = 1;
  }
  if (menu == 2) {
    //delay(500);
    lcd.setCursor(0, 0);
    //delay(500);
    lcd.print("3-Fur Elise");
    //  delay(500);
    lcd.setCursor(0, 1);
    lcd.print("4-Still Alive");
    lcd.setCursor(0, 0);
    menu = 2;
    //    delay(300);
  }
  if (menu == 3) {
    //delay(500);
    lcd.setCursor(0, 0);
    //delay(500);
    lcd.print("5-Canon in D");
    //delay(500);
    lcd.setCursor(0, 1);
    lcd.print("6-Tetris");
    lcd.setCursor(0, 0);
    menu = 3;
    //delay(300);
  }
  canciones();
}
