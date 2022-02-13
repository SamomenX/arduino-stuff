//Green
int g =3;
//Blue
int b =5;
//Red
int r =6;
void setup()
{
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(r, OUTPUT);
  
}

void loop()
{
   int gr = random(0, 255);
   
   int br = random(0, 255);

   int rr = random(0, 255);
  
   analogWrite(gr, gr);
   analogWrite(br, br);
   analogWrite(rr, rr);
  

}