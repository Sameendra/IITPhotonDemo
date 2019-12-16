
int button = D2;                   // button is connected to D2
int state = 0;                      // variable to store the current state of the switch
int val = 0;                       // variable to store the read value

void setup()
{
  pinMode(button, INPUT_PULLDOWN); // sets pin as input
}

void loop()
{
  val = digitalRead(button);       // read the input pin
  
  
  delay(500);
  
  if(val == HIGH) {
      
      if(state == LOW) {
          Particle.publish("On", PRIVATE);
          state = HIGH;
      }
      else {
          Particle.publish("Off", PRIVATE);
          state = LOW;
      }
  }
}

