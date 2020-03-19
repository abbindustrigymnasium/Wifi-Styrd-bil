//#include <Servo.h>

#define pwm_b 5
#define dir_b1 0

//Servo Stearing;


void setup() {
  Serial.begin(9600);

  pinMode(dir_b1, OUTPUT);
  pinMode(pwm_b, OUTPUT);
  
  //Stearing.attach(15); //D8
  //Stearing.write(90);
  
}

void loop() {
  analogWrite(pwm_b, 800);
  digitalWrite(dir_b1, HIGH);
  Serial.print("go");
  delay(1000);
  digitalWrite(dir_b1, LOW);
  analogWrite(pwm_b, 800);
  Serial.print("stop");
  delay(1000);
}
