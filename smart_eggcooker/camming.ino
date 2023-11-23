

Servo cam_servo;

const int pin_cam_servo = 35;


///////////push/////////////////////////////////////////


const int f_cam_angle = 5;
const int i_cam_angle = 45;
long cam_angle = i_cam_angle;
const int cam_time = 3;       //second
float cam_step = cam_time * 1000 / (i_cam_angle - f_cam_angle);
int middle_cam_delay = 10;    //second

void camming_setup() {


  
  cam_servo.attach(pin_cam_servo);
  cam_servo.write(i_cam_angle);

}

void camming_loop() {
  //CW : increasing angle
  //CcW: decreasing angle
  //setting 0 degree with flat horizontal
  Serial.println("Start camming");
  for (cam_angle = i_cam_angle;   cam_angle > f_cam_angle;    cam_angle--)
  {
    cam_servo.write(cam_angle);
    Serial.println(cam_angle);
    delay(cam_step);
  }
  Serial.println("check");
  delay(middle_cam_delay * 1000);

  for (cam_angle = f_cam_angle;   cam_angle < i_cam_angle;    cam_angle++)
  {
    cam_servo.write(cam_angle);
    Serial.println(cam_angle);
    delay(cam_step);
  }
  Serial.println("finish camming");
  cam_servo.detach();
  process++;
  return;

}
