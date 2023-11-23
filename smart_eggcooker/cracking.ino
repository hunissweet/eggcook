

Servo cracker_servo;

const int pin_cracker_servo = 31;

const int f_cracker_angle = 10;
const int i_cracker_angle = 190;
long cracker_angle = i_cracker_angle;
const int cracker_time = 3;       //second
float cracker_step = cracker_time * 1000 / (i_cracker_angle - f_cracker_angle);
int middle_cracker_delay = 5;    //second


void cracking_setup() {

  
  cracker_servo.attach(pin_cracker_servo);
  cracker_servo.write(190);


}

void cracking_loop() {
  //CCW : increasing angle
  //CW: decreasing angle
  
  Serial.println("start cracking");

  for (cracker_angle = i_cracker_angle;   cracker_angle > f_cracker_angle;    cracker_angle--)
  {
    cracker_servo.write(cracker_angle);
    Serial.println(cracker_angle);
    delay(cracker_step);
  }

  delay(middle_cracker_delay * 1000);

  for (cracker_angle = f_cracker_angle;   cracker_angle < i_cracker_angle;    cracker_angle++)
  {
    cracker_servo.write(cracker_angle);
    Serial.println(cracker_angle);
    delay(cracker_step);
  }
  Serial.println("finish cracking");
  process++;
  return;


}
