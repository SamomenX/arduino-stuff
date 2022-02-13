// i hate cpp
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  if(digitalRead(3) == 1){
  	digitalWrite(2, 1);
  }
  else 
  { 
    digitalWrite(2,0);
  }
}