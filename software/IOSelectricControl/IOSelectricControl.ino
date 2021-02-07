/*
  IOSelectricControl

  STM32duino.com  Generic STMF103C Series  / STM32F103C8 20 k RAM 64 k flash ST-link

*/
#define CC_NUL 0
#define CC_R5  1 << 0
#define CC_R2  1 << 1
#define CC_R1  1 << 2
#define CC_R2A 1 << 3
#define CC_T1  1 << 4
#define CC_CK  1 << 5
#define CC_T2  1 << 6
#define CC_UC  1 << 7
#define CC_INDEX 1 << 8
#define CC_CR 1 << 9
#define CC_BSP 1 << 10
#define CC_SP  1 << 11
#define CC_TAB 1 << 12

int asciiToCorrespondanceCode [] = {
  CC_NUL,  // NUL
  CC_NUL,  // SOH
  CC_NUL,  // STX
  CC_NUL,  // ETX
  CC_NUL,  // EOT
  CC_NUL,  // ENQ
  CC_NUL,  // ACK
  CC_NUL,  // BEL
  CC_BSP,  // BS
  CC_TAB,  // TAB
  CC_INDEX,// LF
  CC_NUL,  // VT
  CC_NUL,  // FF
  CC_CR,   // CR
  CC_NUL,  // SO
  CC_NUL,  // SI
  CC_NUL,  // DLE
  CC_NUL,  // DC1
  CC_NUL,  // DC2
  CC_NUL,  // DC3
  CC_NUL,  // DC4
  CC_NUL,  // NAK
  CC_NUL,  // SYN
  CC_NUL,  // ETB
  CC_NUL,  // CAN
  CC_NUL,  // EM
  CC_NUL,  // SUB
  CC_NUL,  // ESC
  CC_NUL,  // FS
  CC_NUL,  // GS
  CC_NUL,  // RS
  CC_NUL,  // US
  CC_SP,   // SPACE
  CC_CK | CC_T1 | CC_R2A | CC_R1 | CC_R5, // !
  CC_UC | CC_T1 | CC_R2A | CC_R1,         // "
  CC_UC | CC_T2 | CC_T1  | CC_R2A | CC_R2 | CC_R5, // #
  CC_UC | CC_T2 | CC_CK  | CC_T1  | CC_R1 | CC_R5, // $
  CC_UC | CC_T2 | CC_CK  | CC_T1  | CC_R2A | CC_R1 | CC_R2, // %
  CC_UC | CC_T2 | CC_T1  | CC_R2A  | CC_R1 | CC_R5, // &
  CC_UC | CC_T2 | CC_CK | CC_T1 | CC_R2A | CC_R1 | CC_R2 | CC_R5, // '
  CC_UC | CC_T2 | CC_CK | CC_T1, // (
  CC_UC | CC_T2 | CC_T1 | CC_R1, // )
  CC_UC | CC_T2 | CC_CK | CC_T1 | CC_R2A | CC_R5, // *
  CC_UC | CC_CK | CC_R2A | CC_R2, // +
  CC_UC | CC_CK | CC_R2A | CC_R5, // ,
  CC_CK, // -
  CC_UC | CC_T1 | CC_R2A | CC_R2, // .
  CC_CK | CC_R1 | CC_R5, //  /
  CC_T2 | CC_T1 | CC_R1, // 0
  CC_T2 | CC_CK | CC_T1 | CC_R2A | CC_R1 | CC_R2 | CC_R5, // 1
  CC_T2 | CC_CK | CC_T1 | CC_R2A | CC_R2, // 2
  CC_T2 | CC_T1 | CC_R2A | CC_R2 | CC_R5, // 3
  CC_T2 | CC_CK | CC_T1 | CC_R1 | CC_R5, // 4
  CC_T2 | CC_CK | CC_T1 | CC_R2A | CC_R1, // 5
  CC_T2 | CC_T1 | CC_R2A, // 6
  CC_T2 | CC_T1 | CC_R2A | CC_R1 | CC_R5, // 7
  CC_T2 | CC_CK | CC_T1 | CC_R2A | CC_R5, // 8
  CC_T2 | CC_CK | CC_T1, // 9
  CC_UC | CC_R2A | CC_R1 | CC_R5, // :
  CC_R2A | CC_R1 | CC_R5, // ;
  CC_SP, // < - NA 
  CC_CK | CC_R2A | CC_R2,// = 
  CC_SP, // > - NA
  CC_UC | CC_CK | CC_R1 | CC_R5, // ?
  CC_UC | CC_T2 | CC_CK | CC_T1 | CC_R2A | CC_R2, // @
  CC_UC | CC_T1 | CC_R2A | CC_R5, // A
  CC_UC | CC_T2, // B
  CC_UC | CC_T2 | CC_R2A | CC_R5, // C
  CC_UC | CC_T2 | CC_CK | CC_R2A | CC_R1 | CC_R5, // D
  CC_UC | CC_T2 | CC_R2A | CC_R1, // E
  CC_UC | CC_R2A | CC_R2 | CC_R5, // F
  CC_UC | CC_CK | CC_R2A | CC_R1 | CC_R2 | CC_R5, // G
  CC_UC | CC_T2 | CC_CK | CC_R1, // H
  CC_UC | CC_CK | CC_T1 | CC_R2A, // I
  CC_UC | CC_R2A | CC_R1 | CC_R2, // J
  CC_UC | CC_T2 | CC_CK | CC_R2A,  // K
  CC_UC | CC_T2 | CC_R1 | CC_R5,// L
  CC_UC | CC_T1 | CC_R2A | CC_R1 | CC_R2 | CC_R5, // M
  CC_UC | CC_T2 | CC_R2A | CC_R2, // N
  CC_UC | CC_T1 | CC_R1 | CC_R5,// O
  CC_UC | CC_CK | CC_R2A | CC_R1, // P
  CC_UC | CC_R2A,  // Q
  CC_UC | CC_CK | CC_T1 | CC_R2A | CC_R1 | CC_R5, // R
  CC_UC | CC_CK | CC_T1 | CC_R1, // S
  CC_UC | CC_T2 | CC_CK | CC_R2A | CC_R1 | CC_R2, // T
  CC_UC | CC_T2 | CC_CK | CC_R2A | CC_R2 | CC_R5, // U
  CC_UC | CC_CK | CC_T1 | CC_R2A | CC_R2 | CC_R5, // V
  CC_UC | CC_T1, // W
  CC_UC | CC_T2 | CC_R2A | CC_R1 | CC_R2 | CC_R5, // X
  CC_UC | CC_R1, // Y
  CC_UC | CC_T2 | CC_T1 | CC_R2A | CC_R1 | CC_R2, // Z
  CC_UC | CC_T2 | CC_CK | CC_T1 | CC_R2A | CC_R1 | CC_R2 | CC_R5, // [ 
  CC_SP, // \ - NA
  CC_T2 | CC_CK | CC_T1 | CC_R2A | CC_R1 | CC_R2 | CC_R5,// ]
  CC_SP, // ^ -NA
  CC_UC | CC_CK, // _
  CC_SP, // ` -NA
  CC_T1 | CC_R2A | CC_R5, // a
  CC_T2, // b
  CC_T2 | CC_R2A | CC_R5, // c
  CC_T2 | CC_CK | CC_R2A | CC_R1 | CC_R5, // d
  CC_T2 | CC_R2A | CC_R1, // e
  CC_R2A | CC_R2 | CC_R5, // f
  CC_CK | CC_R2A | CC_R1 | CC_R2 | CC_R5, // g
  CC_T2 | CC_CK | CC_R1, // h
  CC_CK | CC_T1 | CC_R2A, // i
  CC_R2A | CC_R1 | CC_R2, // j
  CC_T2 | CC_CK | CC_R2A,  // k
  CC_T2 | CC_R1 | CC_R5,// l
  CC_T1 | CC_R2A | CC_R1 | CC_R2 | CC_R5, // m
  CC_T2 | CC_R2A | CC_R2, // n
  CC_T1 | CC_R1 | CC_R5,// o
  CC_CK | CC_R2A | CC_R1, // p
  CC_R2A,  // q
  CC_CK | CC_T1 | CC_R2A | CC_R1 | CC_R5, // r
  CC_CK | CC_T1 | CC_R1, // s
  CC_T2 | CC_CK | CC_R2A | CC_R1 | CC_R2, // t
  CC_T2 | CC_CK | CC_R2A | CC_R2 | CC_R5, // u
  CC_CK | CC_T1 | CC_R2A | CC_R2 | CC_R5, // v
  CC_T1, // w
  CC_T2 | CC_R2A | CC_R1 | CC_R2 | CC_R5, // x
  CC_R1, // y
  CC_T2 | CC_T1 | CC_R2A | CC_R1 | CC_R2, // z
  CC_SP, // { - NA
  CC_SP, // | - NA
  CC_SP, // } - NA
  CC_SP, // ~ - NA
  CC_NUL// DEL - NA 
  };

#define SHIFT_UC 1
#define SHIFT_LC 0
#define FDBCK_NC PE2
#define FDBCK_NO PE3
#define TAB_ILCK_NO PE4
#define SOL_KBD_LOCK PE5
#define SOL_TAB PE6
#define SOL_R5 PC0
#define SOL_R2 PC1
#define SOL_R1 PC2
#define SOL_R2A PC3
#define TAB_NO PA0
#define SP_NO PA1
#define BSP_NO PA2
#define CR_NO PA3
#define INDEX_NO PA4
#define UC_NO PA5
#define LC_NO PA6
#define C1_NC PA7
#define SOL_T1 PC4
#define SOL_CK PC5
#define SOL_SP PE7
#define SOL_BSP PE8
#define SOL_CR PE9
#define SOL_INDEX PE10
#define SOL_UC PE11
#define SOL_LC PE12
#define SOL_RED PE13
#define SOL_BLACK PE14
#define EOL_NC PE15
#define MODE_LC_NC PE1
#define TAB_ILCK_NC PE0
#define ODD_PARITY_NO PD7
#define T2_NO PD6
#define CK_NO PD5
#define T1_NO PD4
#define R2A_NO PD3
#define R1_NO PD2
#define R2_NO PD1
#define R5_NO PD0
#define C1_NO PC12
#define KBD_NC PC10
#define KBD_NO PC11
#define RIBBON_NO PC9
#define MODE_UC_NO PC8
#define EOL_NO PC7
#define SOL_T2 PC6

int shiftState; 



// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(FDBCK_NC, INPUT_PULLDOWN); 
  pinMode(FDBCK_NO, INPUT_PULLDOWN); 
  pinMode(TAB_ILCK_NO, INPUT_PULLDOWN);
  digitalWrite(SOL_KBD_LOCK, LOW);
  pinMode(SOL_KBD_LOCK, OUTPUT);
  digitalWrite(SOL_TAB, LOW);
  pinMode(SOL_TAB, OUTPUT); 
  digitalWrite(SOL_R5, LOW);
  pinMode(SOL_R5, OUTPUT); 
  digitalWrite(SOL_R2, LOW);
  pinMode(SOL_R2, OUTPUT);
  digitalWrite(SOL_R1, LOW); 
  pinMode(SOL_R1, OUTPUT);
  digitalWrite(SOL_R2A, LOW);
  pinMode(SOL_R2A, OUTPUT);
  pinMode(TAB_NO, INPUT_PULLDOWN);
  pinMode(SP_NO, INPUT_PULLDOWN);
  pinMode(BSP_NO, INPUT_PULLDOWN);  
  pinMode(CR_NO, INPUT_PULLDOWN);  
  pinMode(INDEX_NO, INPUT_PULLDOWN); 
  pinMode(UC_NO, INPUT_PULLDOWN); 
  pinMode(LC_NO, INPUT_PULLDOWN);
  pinMode(C1_NC, INPUT_PULLDOWN);
  digitalWrite(SOL_T1, LOW);
  pinMode(SOL_T1, OUTPUT);
  digitalWrite(SOL_CK, LOW);
  pinMode(SOL_CK, OUTPUT);
  digitalWrite(SOL_SP, LOW);
  pinMode(SOL_SP, OUTPUT);  
  digitalWrite(SOL_BSP, LOW);
  pinMode(SOL_BSP, OUTPUT);  
  digitalWrite(SOL_CR, LOW);
  pinMode(SOL_CR, OUTPUT); 
  digitalWrite(SOL_INDEX, LOW);
  pinMode(SOL_INDEX, OUTPUT);
  digitalWrite(SOL_UC, LOW);
  pinMode(SOL_UC, OUTPUT);  
  digitalWrite(SOL_LC, LOW);
  pinMode(SOL_LC, OUTPUT);  
  digitalWrite(SOL_RED, LOW);
  pinMode(SOL_RED, OUTPUT); 
  digitalWrite(SOL_BLACK, LOW);
  pinMode(SOL_BLACK, OUTPUT); 
  pinMode(EOL_NC, INPUT_PULLDOWN);
  pinMode(MODE_LC_NC, INPUT_PULLDOWN);
  pinMode(TAB_ILCK_NC, INPUT_PULLDOWN);  
  pinMode(ODD_PARITY_NO, INPUT_PULLDOWN);  
  pinMode(T2_NO, INPUT_PULLDOWN); 
  pinMode(CK_NO, INPUT_PULLDOWN); 
  pinMode(T1_NO, INPUT_PULLDOWN);
  pinMode(R2A_NO, INPUT_PULLDOWN);
  pinMode(R1_NO, INPUT_PULLDOWN); 
  pinMode(R2_NO, INPUT_PULLDOWN); 
  pinMode(R5_NO, INPUT_PULLDOWN);
  pinMode(C1_NO, INPUT_PULLDOWN);
  pinMode(KBD_NO, INPUT_PULLDOWN);
  digitalWrite(KBD_NO, LOW);
  pinMode(KBD_NC, INPUT_PULLDOWN); 
  digitalWrite(KBD_NC, LOW);
  pinMode(RIBBON_NO, INPUT_PULLDOWN);
  digitalWrite(RIBBON_NO, LOW); 
  pinMode(MODE_UC_NO, INPUT_PULLDOWN);
  digitalWrite(MODE_UC_NO, LOW);
  pinMode(EOL_NO, INPUT_PULLDOWN);
  digitalWrite(EOL_NO, LOW);
  digitalWrite(SOL_T2, LOW);
  pinMode(SOL_T2, OUTPUT);
  Serial.begin(9600);
  Serial.write("SELECTRIC> ");
}

/*
 * M PB6  SPACE
 * P PB7  CR
 * T PB8  SHIFT LOWER CASE
 * R PB5  INDEX
 * S PB4  SHIFT UPPER CASE
 */









bool energizeSelectionSolenoids (int val) {
  bool ret = false;
  if (val & CC_T2) { 
    digitalWrite (SOL_T2, HIGH);
    ret = true;
  } 
  if (val & CC_CK) { 
    digitalWrite (SOL_CK, HIGH);
    ret = true;
  } 
  if (val & CC_T1) { 
    digitalWrite (SOL_T1, HIGH);
    ret = true;
  } 
  if (val & CC_R2A) { 
    digitalWrite (SOL_R2A, HIGH);
    ret = true;
  } 
  if (val & CC_R1) { 
    digitalWrite (SOL_R1, HIGH);
    ret = true;
  } 
  if (val & CC_R2) { 
    digitalWrite (SOL_R2, HIGH);
    ret = true;
  } 
  if (val & CC_R5) { 
    digitalWrite (SOL_R5, HIGH);
    ret = true;
  } 
  return ret;
}

void deEnergizeAllSolenoids() {
    digitalWrite (SOL_T2, LOW);
    digitalWrite (SOL_CK, LOW);
    digitalWrite (SOL_T1, LOW);
    digitalWrite (SOL_R2A, LOW);
    digitalWrite (SOL_R1, LOW);
    digitalWrite (SOL_R2, LOW);
    digitalWrite (SOL_R5, LOW);
    digitalWrite (SOL_UC, LOW);
    digitalWrite (SOL_LC, LOW);
    digitalWrite (SOL_SP, LOW);
    digitalWrite (SOL_CR, LOW);
    digitalWrite (SOL_TAB, LOW);
    digitalWrite (SOL_BSP, LOW);
    digitalWrite (SOL_INDEX, LOW);
}


bool energizeShiftSolenoids(int val) {
  Serial.println(val,HEX);
  if (val & CC_UC) { // We need to go to UpperCase
    Serial.println(digitalRead(MODE_LC_NC));
    if (HIGH == (digitalRead(MODE_LC_NC))) { // but currently we are in lower case
      digitalWrite (SOL_UC, HIGH); // start moving to uppercase
      return true;
    }
  } else { // We need to go to Lower Case
    Serial.println(digitalRead(MODE_UC_NO));
    if (HIGH == (digitalRead(MODE_UC_NO))) { // but we are in upper case
      digitalWrite (SOL_LC, HIGH); // energize lower case solenoid.
      return true;
    }
  }
  return false;
}


bool energizeCRSolenoid(int val) {
  if (val & CC_CR) {
    digitalWrite (SOL_CR, HIGH);
    return true;
  }
  return false;
}

bool energizeSpaceSolenoid(int val) {
  if (val & CC_SP) {
    digitalWrite (SOL_SP, HIGH);
    return true;
  }
  return false;
}



bool energizeIndexSolenoid(int val) {
  if (val & CC_INDEX) {
    digitalWrite (SOL_INDEX, HIGH);
    return true;
  }
  return false;
}


bool isReady() {
  return digitalRead(FDBCK_NC)==HIGH;
}

bool isBusy() {
  return digitalRead(FDBCK_NO)==HIGH;
}

void waitForFeedback() {
  while (isReady()); // Wait until we go busy then we turn of solenoids
  deEnergizeAllSolenoids();
  while (!isReady()); // Wait until we get ready again.  
}


#define TAB 9
#define CR 13
#define SP 32
#define INDEX 10
#define BSP 8

int getFunctionCode () {
  // Test TAB, CR, BS, INDEX or SP to see if any of those has been pressed
  if (digitalRead(INDEX_NO) == 1) {
    Serial.println("INDEX"); 
    return INDEX;  
  } 
  if (digitalRead(CR_NO) == 1) {
    Serial.println("CR"); 
    return CR;  
  }
  if (digitalRead(BSP_NO) == 1) {
    Serial.println("BSP"); 
    return BSP;  
  }
  if (digitalRead(TAB_NO) == 1) {
    Serial.println("TAB"); 
    return TAB;  
  }
  if (digitalRead(SP_NO) == 1) {
    Serial.println("SP"); 
    return SP;  
  }
  return 0;
}



// the loop function runs over and over again forever
void loop() {
  bool busy;
  char tmp;
  int val;
  if (isBusy()) {
    delay (1);
    if (isBusy()) {
      if ((val = getFunctionCode()) != 0) {
         Serial.write(val); 
         while (isBusy());
         if ((val == TAB) || (val == CR)) {
           while(digitalRead(TAB_ILCK_NO)==1);  // Wait until CR or TAB is completed. 
         }
      } else {
        // The feedback signal was due to a normal letter or digit was pressed
        if (digitalRead(C1_NO)==1) {
          delay(1);
          if (digitalRead(C1_NO)==1) { 
            // Sample selection contacts 
            val = (digitalRead(R5_NO)? CC_R5:0);
            Serial.print(val,HEX);
            Serial.print(" ");
            val |= (digitalRead(R2_NO)?CC_R2:0);
            Serial.print(val,HEX);
            Serial.print(" ");
            val |= (digitalRead(R1_NO)?CC_R1:0);
            Serial.print(val,HEX);
            Serial.print(" ");
            val |= (digitalRead(R2A_NO)?CC_R2A:0);
            Serial.print(val,HEX);
            Serial.print(" ");
            val |= (digitalRead(T1_NO)?CC_T1:0);
            Serial.print(val,HEX);
            Serial.print(" ");
            val |= (digitalRead(CK_NO)?CC_CK:0);
            Serial.print(val,HEX); 
            Serial.print(" ");
            val |= (digitalRead(T2_NO)?CC_T2:0);
            while (isBusy());
            Serial.println(val,HEX);
          } else {
            return; // Just a glitch.
          }  
        }
      }
    } else {
      return; // This was just a glicth
    }
  }
  if (Serial.available()> 0) {
    tmp = Serial.read();
    val = asciiToCorrespondanceCode[tmp & 0x7f];
    busy = energizeShiftSolenoids(val);
    if (busy) waitForFeedback();
    busy = energizeSelectionSolenoids (val);
    if (busy) waitForFeedback();
  }
}
