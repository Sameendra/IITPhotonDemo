const int outputPin = 0;

void setup() {
    
    Particle.subscribe("On", onHandler, MY_DEVICES);
    Particle.subscribe("Off", offHandler, MY_DEVICES);

    
    pinMode(outputPin, OUTPUT);
}

void loop() {

}

void onHandler(const char *event, const char *data)
{
    digitalWrite(outputPin, HIGH);
}

void offHandler(const char *event, const char *data)
{
    digitalWrite(outputPin, LOW);
}