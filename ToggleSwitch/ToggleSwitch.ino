int ledstate = 0;
int buttonNew;
int buttonOld = 1;
int buttonPin = 2;
int ledPin =13;
void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonNew = digitalRead(buttonPin);
  Serial.println(digitalRead(buttonPin));
  if(buttonNew==0 && buttonOld==1)
  {
    ledstate = !ledstate;
    digitalWrite(ledPin, ledstate);
    delay(500);
  }
  buttonNew = buttonOld;

}
