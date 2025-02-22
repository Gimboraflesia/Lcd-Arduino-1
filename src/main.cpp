#include <Arduino.h>

#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Teks 1 - 5
// Mendeklarasikan dan menginilisasi sebuah variabel
// bernama teks 1 yang bertipe string
// dengan nilai awal "selamat pagi"
String teks1 = "Selamat datang";

String teks2 = "Simulasi LCD";
String teks3 = "BQ Islamic Shcool";
String teks4 = "Arduino Uno";
String teks5 = "Gimbo Raflesia";
String teks6 = "Kelas 8B";

void setup() {
  // Inisilisasi LCD
  lcd.init();

  // Menyalakan lampu belakang
  lcd.backlight();
}

void loop() {
  //Teks 1
  lcd.setCursor(0, 0);
  lcd.print(teks1);

  //Teks 2
  lcd.setCursor(0, 1);
  lcd.print(teks2);

// Menunda eksekusi program selama 2000 milidetik atau 2 detik
delay(2000);

// Menghapus seluruh tampilan pada layar LCD
lcd.clear();

// Membuat Teks 3 bergeser ke kiri
for (int i = teks3.length() - 1; i >= 0; i--) {
  lcd.setCursor(0, 0);
  lcd.print(teks3.substring(i));
  delay(250);
}

delay(2000);

// Membuat teks 4 muncul satu persatu
for (int i = 0; i < teks4.length() ; i++) {
  lcd.setCursor(0,1);
  lcd.print(teks4.substring(0, i + 1));
  delay(250);
}

delay(3000);

lcd.clear();

// teks 5 
lcd.setCursor(0, 0);
lcd.print(teks5);

// teks 6
lcd.setCursor(0, 1);
lcd.print(teks6);

delay(2000);

lcd.clear();

}