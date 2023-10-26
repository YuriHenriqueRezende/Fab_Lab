// Please tune the following value if the clock gains or loses.
// Theoretically, standard of this value is 60000.
#define MILLIS_PER_MIN 60100 // milliseconcs per a minute

#define ROTATION_PERIOD_IN_MSEC 10000

// Motor and clock parameters
#define STEPS_PER_ROTATION 4096 // steps of a single rotation of motor
#define RATIO 15 // minutes per a rotation

#define LAP 65536  // value to avoid overflow of long int

// wait for a single step of stepper
int delaytime = 30;

// ports used to control the stepper motor
// if your motor rotate to the opposite direction, 
// change the order as {4, 5, 6, 7};
int port[4] = {7, 6, 5, 4};

// sequence of stepper motor control
int seq[8][4] = {
  {  LOW, HIGH, HIGH,  LOW},
  {  LOW,  LOW, HIGH,  LOW},
  {  LOW,  LOW, HIGH, HIGH},
  {  LOW,  LOW,  LOW, HIGH},
  { HIGH,  LOW,  LOW, HIGH},
  { HIGH,  LOW,  LOW,  LOW},
  { HIGH, HIGH,  LOW,  LOW},
  {  LOW, HIGH,  LOW,  LOW}
};

void rotate(int step) {
  static int phase = 0;
  int i, j;
  int delta = (step > 0) ? 1 : 7;

  step = (step > 0) ? step : -step;
  for(j = 0; j < step; j++) {
    phase = (phase + delta) % 8;
    for(i = 0; i < 4; i++) {
      digitalWrite(port[i], seq[phase][i]);
    }
    delay(delaytime);
  }
  // power cut
  for(i = 0; i < 4; i++) {
    digitalWrite(port[i], LOW);
  }
}
void setup() {
  pinMode(port[0], OUTPUT);
  pinMode(port[1], OUTPUT);
  pinMode(port[2], OUTPUT);
  pinMode(port[3], OUTPUT);
  pinMode(14, OUTPUT);
  digitalWrite(14, LOW);
  pinMode(16, INPUT_PULLUP);
}

long calc_step(long msec) {
  return STEPS_PER_ROTATION * msec / MILLIS_PER_MIN / RATIO;
}

void loop() {
  static long prev_msec, prev_pos;
  long msec, pos;

  if(digitalRead(16) == LOW) {
    delaytime = 2; //fast rotation
    rotate(20);
    delaytime = 20; // resume
    return;    
  }
  msec = millis() % LAP;
  if(msec < prev_msec) { // Laps around
      msec += LAP; // hide lap around temporarily
    }
    
  if(msec >= prev_msec + ROTATION_PERIOD_IN_MSEC) { // do rotation
    pos = calc_step(msec);
    rotate(pos - prev_pos);

    if(msec >= LAP) { // Laps around
      msec %= LAP;
      pos = calc_step(msec);
    }
    prev_pos = pos;
    prev_msec = msec;
  }
}
