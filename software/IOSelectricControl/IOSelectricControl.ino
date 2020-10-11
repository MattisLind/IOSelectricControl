/*
  IOSelectricControl

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
  CC_T1 | CC_R2A | CC_R1, // '
  CC_UC | CC_T2 | CC_CK | CC_T1, // (
  CC_UC | CC_T2 | CC_T1 | CC_R1, // )
  CC_UC | CC_T2 | CC_CK | CC_T1 | CC_R2A | CC_R5, // *
  CC_UC | CC_CK | CC_R2A | CC_R2, // +
  CC_UC | CC_CK | CC_R2A | CC_R5, // ,
  CC_CK, // -
  CC_UC | CC_T1 | CC_R2A | CC_R2, // .
  CC_CK | CC_R1 | CC_R5, //  /
  CC_T2 | CC_T1 | CC_R1, // 0
  CC_T2 | CC_R1 | CC_R5, // 1
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
  CC_UC | CC_T2 | CC_CK | CC_R2A | CC_R5, // D
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
  CC_T2 | CC_CK | CC_R2A | CC_R5, // d
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

int shiftState; 



// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(PA2, OUTPUT); // T2
  pinMode(PA3, OUTPUT); // CK
  pinMode(PA4, OUTPUT); // T1
  pinMode(PA5, OUTPUT); // R2A
  pinMode(PA6, OUTPUT); // R1
  pinMode(PA7, OUTPUT); // R2
  pinMode(PB0, OUTPUT); // R5  
  pinMode(PB1, INPUT);  // b input
  pinMode(PB10, INPUT); // a input - The ready to fire signal
  shiftState = SHIFT_LC; 
}

#define SOL_T2 PA2
#define SOL_CK PA3
#define SOL_T1 PA4
#define SOL_R2A PA5
#define SOL_R1 PA6
#define SOL_R2 PA7
#define SOL_R5 PB0
#define SOL_SP PA1
#define SOL_UC PB2
#define SOL_LC PB11
#define SOL_INDEX PA0
#define SOL_CR PC15
#define SOL_TAB PC14
#define SOL_BSP PB9

void energizeSelectionSolenoids (int val) {
  if (val & CC_T2) { 
    digitalWrite (SOL_T2, HIGH);
  } 
  if (val & CC_CK) { 
    digitalWrite (SOL_CK, HIGH);
  } 
  if (val & CC_T1) { 
    digitalWrite (SOL_T1, HIGH);
  } 
  if (val & CC_R2A) { 
    digitalWrite (SOL_R2A, HIGH);
  } 
  if (val & CC_R1) { 
    digitalWrite (SOL_R1, HIGH);
  } 
  if (val & CC_R2) { 
    digitalWrite (SOL_R2, HIGH);
  } 
  if (val & CC_R5) { 
    digitalWrite (SOL_R5, HIGH);
  } 
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
  if (val & CC_UC) { // We need to go to UpperCase
    if (shiftState = SHIFT_LC) { // but currently we are in lower case
      digitalWrite (SOL_UC, HIGH); // start moving to uppercase
      return true;
    }
  } else { // We need to go to Lower Case
    if (shiftState == SHIFT_UC) { // but we are in upper case
      digitalWrite (SOL_LC, HIGH); // energize lower case solenoid.
      return true; // operation in progress 
    }
  }
  return false; // didn't do anything
}


bool energizeSpaceSolenoid(int val) {
  if (val & CC_SP) {
    digitalWrite (SOL_SP, HIGH);
    return true;
  }
  return false;
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                       // wait for a second
}
