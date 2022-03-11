#define LDR_PIN A1
#define LED_PIN 4

void setup() {
  // put your setup code here, to run once:
  pinMode(LDR_PIN, INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(A1);

  Serial.print("Analog Value : ");
  Serial.println(value);

  if(value < 500){
    digitalWrite(LED_PIN, HIGH);
  }
  else{
    digitalWrite(LED_PIN, LOW);
  }

  delay(250);

}
