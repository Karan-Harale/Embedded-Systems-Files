int sm=A1;
float thresholdvalue=78.20;
int motor =6;


void setup() {

  pinMode(sm, INPUT);
  pinMode(motor, OUTPUT);
  digitalWrite(motor, LOW);

Serial.begin(9600);
}

void loop() {

int smvalue=analogRead (sm);
smvalue=smvalue/204.6;
smvalue=smvalue*20;

Serial.println( smvalue);

if(smvalue < thresholdvalue)
{
    Serial.println(" - Doesn't need watering");
    digitalWrite(motor, LOW);
}
else 
{
    Serial.println(" - Time to water your plant");
    digitalWrite(motor, HIGH);
  }
  delay(500);
}
