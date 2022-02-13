void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  // HIGH == 1
  // LOW == 0
  digitalWrite(2, 1);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  delay(1000); 
  
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  delay(1000);
  
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  delay(1000);
}