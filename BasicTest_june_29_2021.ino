#define Elbow_STEP_PIN         54
#define Elbow_DIR_PIN          55
#define Elbow_ENABLE_PIN       38

#define Twisty_STEP_PIN         60
#define Twisty_DIR_PIN          61
#define Twisty_ENABLE_PIN       56

#define Shoulder_STEP_PIN         46
#define Shoulder_DIR_PIN          48
#define Shoulder_ENABLE_PIN       62

#define TwistyWrist_STEP_PIN         26
#define TwistyWrist_DIR_PIN          28
#define TwistyWrist_ENABLE_PIN       24

#define Wrist_STEP_PIN         36
#define Wrist_DIR_PIN          34
#define Wrist_ENABLE_PIN       30

#define SDPOWER            -1
#define SDSS               53

#define PS_ON_PIN          12
#define KILL_PIN           -1

void setup() {
  pinMode(Elbow_STEP_PIN  , OUTPUT);
  pinMode(Elbow_DIR_PIN    , OUTPUT);
  pinMode(Elbow_ENABLE_PIN    , OUTPUT);
  
  pinMode(Twisty_STEP_PIN  , OUTPUT);
  pinMode(Twisty_DIR_PIN    , OUTPUT);
  pinMode(Twisty_ENABLE_PIN    , OUTPUT);
  
  pinMode(Shoulder_STEP_PIN  , OUTPUT);
  pinMode(Shoulder_DIR_PIN    , OUTPUT);
  pinMode(Shoulder_ENABLE_PIN    , OUTPUT);
  
  pinMode(TwistyWrist_STEP_PIN  , OUTPUT);
  pinMode(TwistyWrist_DIR_PIN    , OUTPUT);
  pinMode(TwistyWrist_ENABLE_PIN    , OUTPUT);
  
  pinMode(Wrist_STEP_PIN  , OUTPUT);
  pinMode(Wrist_DIR_PIN    , OUTPUT);
  pinMode(Wrist_ENABLE_PIN    , OUTPUT);
  
  digitalWrite(Elbow_ENABLE_PIN    , LOW);
  digitalWrite(Twisty_ENABLE_PIN    , LOW);
  digitalWrite(Shoulder_ENABLE_PIN    , LOW);
  digitalWrite(TwistyWrist_ENABLE_PIN    , LOW);
  digitalWrite(Wrist_ENABLE_PIN    , LOW);
}

void moveAxis(int axis, int steps){
  for (int i = 0; i < steps; i++)
  {
    digitalWrite(axis    , HIGH);
    delay(1);
    digitalWrite(axis    , LOW);
  }
}

void loop () {
 
  if (millis() %10000 <5000) {
    digitalWrite(Elbow_DIR_PIN    , HIGH);
    digitalWrite(Twisty_DIR_PIN    , HIGH);
    digitalWrite(Shoulder_DIR_PIN    , HIGH);
    digitalWrite(TwistyWrist_DIR_PIN    , HIGH);
    digitalWrite(Wrist_DIR_PIN    , HIGH);
  }
  else {
    digitalWrite(Elbow_DIR_PIN    , LOW);
    digitalWrite(Twisty_DIR_PIN    , LOW);
    digitalWrite(Shoulder_DIR_PIN    , LOW);
    digitalWrite(TwistyWrist_DIR_PIN    , LOW);
    digitalWrite(Wrist_DIR_PIN    , LOW);
  } 

  moveAxis(Twisty_STEP_PIN, 50);
  //moveAxis(Shoulder_STEP_PIN, 10);
  //moveAxis(Elbow_STEP_PIN, 20);
  //moveAxis(TwistyWrist_STEP_PIN, 7);
  //moveAxis(Wrist_STEP_PIN, 30);
    
}
