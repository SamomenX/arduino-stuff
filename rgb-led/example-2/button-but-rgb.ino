int r = 9;
int b = 10;
int g = 11;

void setup()
{
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
  
  pinMode(3, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  
}

void loop()
{
  if(digitalRead(3) == 1){
  	digitalWrite(r, 0);
    digitalWrite(b, 0);
    digitalWrite(g, 1);
  }
  else if(digitalRead(5)==1){
  	digitalWrite(b, 0);
    digitalWrite(g, 0);
    digitalWrite(r, 1);
  }
  else if(digitalRead(6)==1){
  	digitalWrite(b, 1);
    digitalWrite(g, 0);
    digitalWrite(r, 0);
  }
  else{
  	digitalWrite(b, 0);
    digitalWrite(g, 0);
    digitalWrite(r, 0);
  }
}