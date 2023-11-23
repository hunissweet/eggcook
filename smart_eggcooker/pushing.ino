
Servo pusher_servo;
const int pin_pusher_servo = 33;

const int f_push_angle = 10;
const int i_push_angle = 190;
int push_angle = i_push_angle;
const int push_time = 3;       //second
float push_step = push_time * 1000 / (i_push_angle - f_push_angle);
int middle_push_delay = 2;    //second
//0 ~200.5degree and 0 is fully streched and 200.5 is opposite

void pushing_setup() {


  pusher_servo.attach(pin_pusher_servo);
  pusher_servo.write(i_push_angle);
  

}



void pushing_loop() {
  Serial.println("Pushing time");
  for (push_angle = i_push_angle;   push_angle > f_push_angle;    push_angle--)
  {
    pusher_servo.write(push_angle);
    Serial.println(push_angle);
    delay(push_step);
  }

  delay(middle_push_delay * 1000);

  for (push_angle = f_push_angle;   push_angle < i_push_angle;    push_angle++)
  {
    pusher_servo.write(push_angle);
    Serial.println(push_angle);
    delay(push_step);
  }
  Serial.println("Pushing Finish");
  pusher_servo.detach();
  process++;
  return;
}
