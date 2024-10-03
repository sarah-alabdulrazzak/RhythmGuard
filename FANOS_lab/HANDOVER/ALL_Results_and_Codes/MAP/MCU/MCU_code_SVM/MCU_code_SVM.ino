#if defined(ARDUINO_SAMD_ZERO) && defined(SERIAL_PORT_USBVIRTUAL)
  // Required for Serial on Zero based boards
  #define Serial SERIAL_PORT_USBVIRTUAL
#endif
// code is changed to get SBP only .. later I need to add DBP, MAP which should affect the prediction functions & the returned values
const byte buffSize = 40;
char inputBuffer[buffSize];
const char startMarker = '<';
const char endMarker = '>';
byte bytesRecvd = 0;
boolean readInProgress = false;
boolean newDataFromPC = false;

char messageFromPC[buffSize] = {0};
float PTT = 0.0;
float PTTh = 0.0;
float PTTm = 0.0;
float HR = 0.0; 
float SBP = 0.0;
float DBP = 0.0;

unsigned long startMicros;
unsigned long totMicros;

unsigned long prevReplyToPCmillis = 0;
unsigned long replyToPCinterval = 1000;

//=============

void setup() {
  Serial.begin(115200);
    // tell the PC we are ready
  Serial.println("<Arduino is ready>");
}

//=============

void loop() {
  
  getDataFromPC();
  replyToPC();

}

//=============

void getDataFromPC() {

    // receive data from PC and save it into inputBuffer
    
  if(Serial.available() > 0) {

    char x = Serial.read();

      // the order of these IF clauses is significant
      
    if (x == endMarker) {
      readInProgress = false;
      newDataFromPC = true;
      inputBuffer[bytesRecvd] = 0;
      parseData();
    }
    
    if(readInProgress) {
      inputBuffer[bytesRecvd] = x;
      bytesRecvd ++;
      if (bytesRecvd == buffSize) {
        bytesRecvd = buffSize - 1;
      }
    }

    if (x == startMarker) { 
      bytesRecvd = 0; 
      readInProgress = true;
    }
  
  
  startMicros = micros();
  PredictSBP();
  //PredictDBP();
  totMicros = micros() - startMicros;
  
  }
}

//=============
 
void parseData() {

    // split the data into its parts
    
  char * strtokIndx; // this is used by strtok() as an index
    
  strtokIndx = strtok(inputBuffer, ","); // this continues where the previous call left off
  PTTh = atof(strtokIndx);     // convert this part to a float .. PTT

  strtokIndx = strtok(NULL, ","); 
  PTTm = atof(strtokIndx);     

  strtokIndx = strtok(NULL, ","); 
  PTT = atof(strtokIndx);     
  
  strtokIndx = strtok(NULL, ","); 
  HR = atof(strtokIndx);     // convert this part to a float .. HR

}

//=============
void PredictSBP() {
	SBP = ((((89.85790229572412) + ((PTTh) * (1.7695206999411308))) + ((PTTm) * (-1.2966408657670996))) + ((PTT) * (6.1761283672330025))) + ((HR) * (0.04543533205033455));
}




//=============
//void PredictDBP() {
//	DBP = ((63.9749462647779) + ((PTT) * (1.1892889960510198))) + ((HR) * (0.06736373919170303));
//}


//=============

void replyToPC() {

  if (newDataFromPC) {
    newDataFromPC = false;
    Serial.print("<");
    Serial.print(SBP);
    //Serial.print(",");
    //Serial.print(DBP);
	Serial.print(",");
    Serial.print(totMicros);
    Serial.println(">");
  }
}

//============
