#include <LiquidCrystal_I2C.h>

int lcdColumns = 16;
int lcdRows = 2;

LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);

void setup() {
  lcd.init(); // Initialize the LCD
  lcd.backlight(); // Turn on the LCD backlight
}

void loop() {
  lcd.setCursor(0, 0); // Set the cursor to the first column, first row
  lcd.print("AFib"); // Print message on the first row
  delay(1000); // Wait for 1 second

  lcd.clear(); // Clear the display
  delay(1000); // Wait for 1 second

  lcd.clear(); // Clear the display
}