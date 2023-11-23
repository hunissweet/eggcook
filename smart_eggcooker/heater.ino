
int h_timer_pin = 41;
int h_down_pin = 45;
int h_up_pin = 49;
int h_power_pin = 53;
/////////cooking time setting//////////////////////////

int heating_t=5; // [seconds]
////////////////////////////////////////////////////////////

void heat_setup() {
  pinMode(h_timer_pin, OUTPUT);
  pinMode(h_down_pin, OUTPUT);
  pinMode(h_up_pin, OUTPUT);
  pinMode(h_power_pin, OUTPUT);
  
}
void heat_loop() {
  if (process ==3){
  
  // poweron
  digitalWrite(h_power_pin, HIGH);
  delay(1000);
  digitalWrite(h_power_pin, LOW);
  delay(3000);

  //setting temperature
  digitalWrite(h_down_pin, HIGH);
  delay(1000);
  digitalWrite(h_down_pin, LOW);
  delay(2000);
  digitalWrite(h_up_pin, HIGH);
  delay(1000);
  digitalWrite(h_up_pin, LOW);
  
  delay(heating_t*1000); // heating time
  
  digitalWrite(h_power_pin,HIGH );
  delay(1000);
  digitalWrite(h_power_pin,LOW );
  process++;
  }
}
  
