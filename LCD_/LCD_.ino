
#include <LCD.h>
#include <LiquidCrystal_I2C.h>    // This is different than the Liquid Crystal library used without an I2C. If you have another LiquidCrystal library installed already, you'll need to delete that one from the Arduino files (or at least move it out of the libraries folder).
// This only needs to be done once per computer, not every time you use the LCD! Try compiling the sketch before you do anything. If it fails to compile, you probably need to follow the next steps.
// Search on your computer for the Arduino library files and if there is an existing LiquidCrystal library, delete the whole folder. (usually Documents > Arduino > libraries)
// Then go to https://drive.google.com/drive/folders/0B3UwXVmhnViweWUyMF9aZFFuQTg?usp=sharing and download the NewLiquidCrystal folder (the entire folder!).
// In Arduino, go to Sketch > Include library > Add .zip library. Find the NewLiquidCrystal folder in Downloads and add it.

#include <Wire.h>   // Another built-in library.
#define I2C_ADDR 0x3F   // Defining the I2C address for the LCD. The I2C is the piece on the back that makes the wiring simpler. It is a tiny computer and we need to tell Arduino how to communicate with it.
LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Telling Arduino how the LCD pins are set up with the I2C.

void setup()  // If I want to just write a message that stays on the screen permanently, I can add text in the setup part. 
              // If I want to show different text based on different inputs, I will need to put that in the loop part.
{
lcd.begin(16,2);  // Initialize the LCD. This is a 16x2 screen (16 spaces across and 2 rows).
lcd.home();   // Set the cursor to the home spot (the upper left corner)
lcd.print("Hi Qader!");   // Write "Hi there!" 
lcd.setCursor(0,1);   // Move the cursor to the far left side on the second row. The home spot would be (0,0).
lcd.print("Welcome!");    // Write "Way to go!"
}

void loop()   // I don't have any inputs or variables here, so there is nothing to put in the loop section. I am just leaving what I wrote there the whole time.
{

}

