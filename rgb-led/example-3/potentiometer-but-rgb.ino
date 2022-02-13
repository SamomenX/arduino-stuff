//Red
int r = 3;
//Blue
int b = 5;
//Green
int g = 6;
void setup()
{
  pinMode(r, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop()
{
    //yea i know cool var
   int redA = analogRead(A0);
   int red = map(redA, 0, 1023,0 , 255);
  
   int blueA = analogRead(A1); 
   int blue = map(blueA, 0, 1023,0 , 255);
  
   int greenA = analogRead(A2); 
   int green = map(greenA, 0, 1023,0 , 255);
  
   analogWrite(r, red);
   analogWrite(b, blue);
   analogWrite(g, green);
}