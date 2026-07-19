#include <SPI.h> 
#include <SD.h> 
const int chipSelect = 4; 
const int s1 = 2; 
const int s2 = 3; 
const int s3 = 5; 
const int s4 = 6; 
const int s5 = 7; 
const int s6 = 8; 
void setup() { 
Serial.begin(9600); 
if (!SD.begin(chipSelect)) { 
Serial.println("SD card initialization failed."); 
return; 
} 
Serial.println("SD card initialization done."); 
pinMode(s1, OUTPUT); 
pinMode(s2, OUTPUT); 
pinMode(s3, OUTPUT); 
pinMode(s4, OUTPUT); 
pinMode(s5, OUTPUT); 
pinMode(s6, OUTPUT); 
} 
 
void loop() { 
  File file = SD.open("tests.txt"); 
   
  if (file) { 
    while (file.available()) { 
      char letter = file.read(); 
      displayBraille(letter); 
      delay(490); 
      resetSolenoids(); 
      delay(490); 
    } 
    file.close(); 
  } else { 
    Serial.println("Error opening file."); 
  } 
} 
 
void displayBraille(char letter) { 
  switch (letter) { 
    case 'a': 
    case 'A': 
      digitalWrite(s1, LOW); 
      digitalWrite(s2, HIGH); 
      digitalWrite(s3, HIGH); 
      digitalWrite(s4, HIGH); 
      digitalWrite(s5, HIGH); 
      digitalWrite(s6, HIGH); 
      break; 
       
    case 'b': 
    case 'B': 
      digitalWrite(s1, LOW); 
      digitalWrite(s2, LOW); 
      digitalWrite(s3, HIGH); 
      digitalWrite(s4, HIGH); 
      digitalWrite(s5, HIGH); 
      digitalWrite(s6, HIGH); 
      break; 
       
    case 'c': 
    case 'C': 
      digitalWrite(s1, LOW); 
      digitalWrite(s2, HIGH); 
      digitalWrite(s3, HIGH); 
      digitalWrite(s4, LOW); 
      digitalWrite(s5, HIGH); 
      digitalWrite(s6, HIGH); 
      break; 
       
    case 'd': 
    case 'D': 
      digitalWrite(s1, LOW); 
      digitalWrite(s2, HIGH); 
      digitalWrite(s3, HIGH); 
      digitalWrite(s4, LOW); 
      digitalWrite(s5, LOW); 
      digitalWrite(s6, HIGH); 
      break; 
 
    case 'e': 
    case 'E': 
      digitalWrite(s1, LOW); 
      digitalWrite(s2, HIGH); 
      digitalWrite(s3, HIGH); 
      digitalWrite(s4, HIGH); 
      digitalWrite(s5, LOW); 
      digitalWrite(s6, HIGH); 
      break; 
 
    case 'f': 
    case 'F': 
      digitalWrite(s1, LOW); 
      digitalWrite(s2, LOW); 
      digitalWrite(s3, HIGH); 
      digitalWrite(s4, LOW); 
      digitalWrite(s5, HIGH); 
      digitalWrite(s6, HIGH); 
      break; 
 
    case 'g': 
    case 'G': 
      digitalWrite(s1, LOW); 
      digitalWrite(s2, LOW); 
      digitalWrite(s3, HIGH); 
      digitalWrite(s4, LOW); 
      digitalWrite(s5, LOW); 
      digitalWrite(s6, HIGH); 
      break; 
       
    case 'h': 
    case 'H': 
      digitalWrite(s1, LOW); 
      digitalWrite(s2, LOW); 
      digitalWrite(s3, HIGH); 
      digitalWrite(s4, HIGH); 
      digitalWrite(s5, LOW); 
      digitalWrite(s6, HIGH); 
      break; 
 
    case 'i': 
    case 'I': 
      digitalWrite(s1, HIGH); 
      digitalWrite(s2, LOW); 
      digitalWrite(s3, HIGH); 
      digitalWrite(s4, LOW); 
      digitalWrite(s5, HIGH); 
      digitalWrite(s6, HIGH); 
      break; 
 
    case 'j': 
    case 'J': 
      digitalWrite(s1, HIGH); 
      digitalWrite(s2, LOW); 
      digitalWrite(s3, HIGH); 
      digitalWrite(s4, LOW); 
      digitalWrite(s5, LOW); 
      digitalWrite(s6, HIGH); 
      break; 
 
    case 'k': 
    case 'K': 
      digitalWrite(s1, LOW); 
      digitalWrite(s2, HIGH); 
      digitalWrite(s3, LOW); 
      digitalWrite(s4, HIGH); 
      digitalWrite(s5, HIGH); 
      digitalWrite(s6, HIGH); 
      break; 
       
    case 'l': 
    case 'L': 
      digitalWrite(s1, LOW); 
      digitalWrite(s2, LOW); 
      digitalWrite(s3, LOW); 
      digitalWrite(s4, HIGH); 
      digitalWrite(s5, HIGH); 
      digitalWrite(s6, HIGH); 
      break; 
 
    case 'm': 
    case 'M': 
      digitalWrite(s1, LOW); 
      digitalWrite(s2, HIGH); 
      digitalWrite(s3, LOW); 
      digitalWrite(s4, LOW); 
      digitalWrite(s5, HIGH); 
      digitalWrite(s6, HIGH); 
      break; 
       
    case 'n': 
    case 'N': 
      digitalWrite(s1, LOW); 
      digitalWrite(s2, HIGH); 
      digitalWrite(s3, LOW); 
      digitalWrite(s4, LOW); 
      digitalWrite(s5, LOW); 
      digitalWrite(s6, HIGH); 
      break; 
 
    case 'o': 
    case 'O': 
      digitalWrite(s1, LOW); 
      digitalWrite(s2, HIGH); 
      digitalWrite(s3, LOW); 
      digitalWrite(s4, HIGH); 
      digitalWrite(s5, LOW); 
      digitalWrite(s6, HIGH); 
      break; 
 
    case 'p': 
    case 'P': 
      digitalWrite(s1, LOW); 
      digitalWrite(s2, LOW); 
      digitalWrite(s3, LOW); 
      digitalWrite(s4, LOW); 
      digitalWrite(s5, HIGH); 
      digitalWrite(s6, HIGH); 
      break; 
 
    case 'q': 
    case 'Q': 
      digitalWrite(s1, LOW); 
      digitalWrite(s2, LOW); 
      digitalWrite(s3, LOW); 
      digitalWrite(s4, LOW); 
      digitalWrite(s5, LOW); 
      digitalWrite(s6, HIGH); 
      break; 
       
    case 'r': 
    case 'R': 
      digitalWrite(s1, LOW); 
      digitalWrite(s2, LOW); 
      digitalWrite(s3, LOW); 
      digitalWrite(s4, HIGH); 
      digitalWrite(s5, LOW); 
      digitalWrite(s6, HIGH); 
      break; 
       
    case 's': 
    case 'S': 
      digitalWrite(s1, HIGH); 
      digitalWrite(s2, LOW); 
      digitalWrite(s3, LOW); 
      digitalWrite(s4, LOW); 
      digitalWrite(s5, HIGH); 
      digitalWrite(s6, HIGH); 
      break; 
 
    case 't': 
    case 'T': 
      digitalWrite(s1, HIGH); 
      digitalWrite(s2, LOW); 
      digitalWrite(s3, LOW); 
      digitalWrite(s4, LOW); 
      digitalWrite(s5, LOW); 
      digitalWrite(s6, HIGH); 
      break; 
       
    case 'u': 
    case 'U': 
      digitalWrite(s1, LOW); 
      digitalWrite(s2, HIGH); 
      digitalWrite(s3, LOW); 
      digitalWrite(s4, HIGH); 
      digitalWrite(s5, HIGH); 
      digitalWrite(s6, LOW); 
      break; 
 
 
    case 'v': 
    case 'V': 
      digitalWrite(s1, LOW); 
      digitalWrite(s2, LOW); 
      digitalWrite(s3, LOW); 
      digitalWrite(s4, HIGH); 
      digitalWrite(s5, HIGH); 
      digitalWrite(s6, LOW); 
      break; 
       
    case 'w': 
    case 'W': 
      digitalWrite(s1, HIGH); 
      digitalWrite(s2, LOW); 
      digitalWrite(s3, HIGH); 
      digitalWrite(s4, LOW); 
      digitalWrite(s5, LOW); 
      digitalWrite(s6, LOW); 
      break; 
    case 'x': 
    case 'X': 
      digitalWrite(s1, LOW); 
      digitalWrite(s2, HIGH); 
      digitalWrite(s3, LOW); 
      digitalWrite(s4, LOW); 
      digitalWrite(s5, HIGH); 
      digitalWrite(s6, LOW); 
      break; 

    case 'y': 
    case 'Y': 
      digitalWrite(s1, LOW); 
      digitalWrite(s2, HIGH); 
      digitalWrite(s3, LOW); 
      digitalWrite(s4, LOW); 
      digitalWrite(s5, LOW); 
      digitalWrite(s6, LOW); 
      break; 
 
    case 'z': 
    case 'Z': 
      digitalWrite(s1, LOW); 
      digitalWrite(s2, HIGH); 
      digitalWrite(s3, LOW); 
      digitalWrite(s4, HIGH); 
      digitalWrite(s5, LOW); 
      digitalWrite(s6, LOW); 
      break; 
 
 
    case ',': 
      digitalWrite(s1, HIGH); 
      digitalWrite(s2, LOW); 
      digitalWrite(s3, HIGH); 
      digitalWrite(s4, HIGH); 
      digitalWrite(s5, LOW); 
      digitalWrite(s6, LOW); 
      break; 
 

    case ' ': 
      digitalWrite(s1, HIGH); 
      digitalWrite(s2, HIGH); 
      digitalWrite(s3, HIGH); 
      digitalWrite(s4, HIGH); 
      digitalWrite(s5, HIGH); 
      digitalWrite(s6, HIGH); 
      break; 
 
    case '.': 
      digitalWrite(s1, HIGH); 
      digitalWrite(s2, LOW); 
      digitalWrite(s3, HIGH); 
      digitalWrite(s4, HIGH); 
      digitalWrite(s5, HIGH); 
      digitalWrite(s6, HIGH); 
      break; 
 
    case '#': 
      digitalWrite(s1, HIGH); 
      digitalWrite(s2, HIGH); 
      digitalWrite(s3, LOW); 
      digitalWrite(s4, LOW); 
      digitalWrite(s5, LOW); 
      digitalWrite(s6, LOW); 
      break;
 
    case '0': 
      digitalWrite(s1, HIGH); 
      digitalWrite(s2, HIGH); 
      digitalWrite(s3, LOW); 
      digitalWrite(s4, HIGH); 
      digitalWrite(s5, LOW); 
      digitalWrite(s6, LOW); 
      break; 

    case '1': 
      digitalWrite(s1, HIGH); 
      digitalWrite(s2, LOW); 
      digitalWrite(s3, HIGH); 
      digitalWrite(s4, HIGH); 
      digitalWrite(s5, HIGH); 
      digitalWrite(s6, HIGH); 
      break;
 
   case '2': 
      digitalWrite(s1, HIGH); 
      digitalWrite(s2, LOW); 
      digitalWrite(s3, LOW); 
      digitalWrite(s4, HIGH); 
      digitalWrite(s5, HIGH); 
      digitalWrite(s6, HIGH); 
      break; 

   case '3': 
      digitalWrite(s1, HIGH); 
      digitalWrite(s2, LOW); 
      digitalWrite(s3, HIGH); 
      digitalWrite(s4, HIGH); 
      digitalWrite(s5, LOW); 
      digitalWrite(s6, HIGH); 
      break; 

   case '4': 
      digitalWrite(s1, HIGH); 
      digitalWrite(s2, LOW); 
      digitalWrite(s3, HIGH); 
      digitalWrite(s4, HIGH); 
      digitalWrite(s5, LOW); 
      digitalWrite(s6, LOW); 
      break;
 
  case '5': 
      digitalWrite(s1, HIGH); 
      digitalWrite(s2, LOW); 
      digitalWrite(s3, HIGH); 
      digitalWrite(s4, HIGH); 
      digitalWrite(s5, HIGH); 
      digitalWrite(s6, LOW); 
      break;
 
  case '6': 
      digitalWrite(s1, HIGH); 
      digitalWrite(s2, LOW); 
      digitalWrite(s3, LOW); 
      digitalWrite(s4, HIGH); 
      digitalWrite(s5, LOW); 
      digitalWrite(s6, HIGH); 
      break; 

  case '7': 
      digitalWrite(s1, HIGH); 
      digitalWrite(s2, LOW); 
      digitalWrite(s3, LOW); 
      digitalWrite(s4, HIGH); 
      digitalWrite(s5, LOW); 
      digitalWrite(s6, LOW); 
      break; 

  case '8': 
      digitalWrite(s1, HIGH); 
      digitalWrite(s2, LOW); 
      digitalWrite(s3, LOW); 
      digitalWrite(s4, HIGH); 
      digitalWrite(s5, HIGH); 
      digitalWrite(s6, LOW); 
      break;
 
  case '9': 
      digitalWrite(s1, HIGH); 
      digitalWrite(s2, HIGH); 
      digitalWrite(s3, LOW); 
      digitalWrite(s4, HIGH); 
      digitalWrite(s5, LOW); 
      digitalWrite(s6, HIGH); 
      break; 
 
    default: 
      break; 
  } 
} 
 
void resetSolenoids() { 
  digitalWrite(s1, HIGH); 
  digitalWrite(s2, HIGH); 
  digitalWrite(s3, HIGH); 
  digitalWrite(s4, HIGH); 
  digitalWrite(s5, HIGH); 
  digitalWrite(s6, HIGH); 
}