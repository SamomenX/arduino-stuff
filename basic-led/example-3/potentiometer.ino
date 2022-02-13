void setup()
{
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
	int pot = analogRead(A0);
	Serial.println(pot);

	digitalWrite(3, 1);
	delay(pot);
	digitalWrite(3, 0);
	delay(pot);
}