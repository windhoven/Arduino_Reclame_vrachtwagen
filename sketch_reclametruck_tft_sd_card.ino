#include <SPI.h>
#include <SD.h>
#include <TFT_bgr.h>

#define SD_CS    4  // Chip select line for SD card
#define TFT_CS  10  // Chip select line for TFT display
#define TFT_DC   9  // Data/command line for TFT
#define TFT_RST  8  // Reset line for TFT (or connect to +5V)

TFT tft = TFT(TFT_CS, TFT_DC, TFT_RST);
PImage logo;

void setup(void) {
  // initialize the GLCD and show a message
  // asking the user to open the serial line
  tft.initR(INITR_GREENTAB);  // Initialize a ST7735 chip, black tab
  
  tft.begin();
  tft.background(255, 255, 255);

  tft.stroke(0, 0, 255);
  tft.println();
  tft.println(F("Loading"));
  tft.stroke(0, 0, 0);

  // initialize the serial port: it will be used to
  // print some diagnostic info  
  Serial.begin(9600);
  while (!Serial) {
    // wait for serial port to connect. Needed for native USB port only
  }

  // clear the GLCD screen before starting
  tft.background(255, 255, 255);

  // try to access the SD card. If that fails (e.g.
  // no card present), the setup process will stop.
  Serial.print(F("Initializing SD card..."));

/********************* Add these Two Lines **********************/
pinMode(10, OUTPUT); // change this to 53 on a mega  // don't follow this!!
digitalWrite(10, HIGH); // Add this line
/***************************************************************/
  
  while (!SD.begin(SD_CS)) {
    Serial.println(F("failed!"));
    drawSDcardNotFound();    
  }
  Serial.println(F("OK!"));

  // initialize and clear the GLCD screen
  tft.begin();
  tft.setRotation(3); /*rotation value 0 sets the display to a portrait (tall) mode, with the USB jack at the top right.
                        Rotation value 2 is also a portrait mode, with the USB jack at the bottom left. 
                        Rotation 1 is landscape (wide) mode, with the USB jack at the bottom right.
                        rotation 3 is also landscape, but with the USB jack at the top left.*/
  tft.background(255, 255, 255);

}

void drawSDcardNotFound() {
  char* txt = "SD Card failed";
  tft.background(255, 0, 0);

  tft.stroke(255,255,255);
  tft.setTextSize(1);
  tft.text(txt, 0, 0);
  
  delay(1000);

  tft.background(255,255, 255);

  tft.stroke(255,0,0);
  tft.setTextSize(1);
  tft.text(txt, 0, 0);
  delay(1000);
}

void FileNotFound() {
  char* txt = "Loading file failed";
  tft.background(0, 0, 0);

  tft.stroke(255,255,255);
  tft.setTextSize(1);
  tft.text(txt, 0, 0);

  delay(1000);

  tft.background(255,255, 255);

  tft.stroke(0,0,0);
  tft.setTextSize(1);
  tft.text(txt, 0, 0);
  
  delay(1000);
}

void loop() {

  File dir=SD.open("/");
  dir.rewindDirectory();
    
  while(true) {
    
     File entry =  dir.openNextFile();
     if (! entry) {
       // no more files
       //Serial.println("**nomorefiles**");
       break;
     }
     // Print the 8.3 name
     Serial.print(entry.name());
     // Recurse for directories, otherwise print the file size
     if (entry.isDirectory()) {
       Serial.println("/");
     } 
   else{
       // files have sizes, directories do not       
       //Serial.println(entry.size(), DEC);
     logo = tft.loadImage(entry.name());
     if (logo.isValid()) {
        // draw the image to the screen
      tft.image(logo, 0, 0);
      logo.close();
      delay(5000);
     }
     }
     entry.close();
   }
   dir.close();
  /*
  bmpDraw("image_1.bmp", 0, 0);
  delay(5000);
  bmpDraw("image_2.bmp", 0, 0);
  delay(5000);
  bmpDraw("image_3.bmp", 0, 0);
  delay(5000);
  */
}

// This function opens a Windows Bitmap (BMP) file and
// displays it at the given coordinates.  It's sped up
// by reading many pixels worth of data at a time
// (rather than pixel by pixel).  Increasing the buffer
// size takes more of the Arduino's precious RAM but
// makes loading a little faster.  20 pixels seems a
// good balance.

#define BUFFPIXEL 20
