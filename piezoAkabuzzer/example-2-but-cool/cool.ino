//Piezo  Port
int nya = 12;
//Nota frequency or hz idk 
int c =261;
int d =294;
int e =329;
int f =349;
int g =392;
int a=440;
// int Si=493; add this shit 
int c2 =523;
void setup()
{
  for(int i = 2; i < 9; i++) pinMode(i, INPUT);
  pinMode(nya, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
	noTone(nya);
  	
  //c 
  if(digitalRead(8) == 1){
  	tone(nya, c );
    delay(300);
    noTone(nya);
    delay(50);
    Serial.println("c note");
  }
  //d
  else if(digitalRead(7) == 1){
  	tone(nya, d);
    delay(300);
    noTone(nya);
    delay(50);
    Serial.println("d note");
  }
  //e
  else if(digitalRead(6) == 1){
  	tone(nya, e);
    delay(300);
    noTone(nya);
    delay(50);
    Serial.println("e note");
  }
  //f
  else if(digitalRead(5) == 1){
  	tone(nya, f);
    delay(300);
    noTone(nya);
    delay(50);
    Serial.println("f note");
  }
  //g
  else if(digitalRead(4) == 1){
  	tone(nya, g);
    delay(300);
    noTone(nya);
    delay(50);
    Serial.println("g note");
  }
  //a
  else if(digitalRead(3) == 1){
  	tone(nya, a);
    delay(300);
    noTone(nya);
    delay(50);
  	Serial.println("a note");
  }

  //c2
  else if(digitalRead(2)  == 1){
  	tone(nya, c2);
    delay(300);
    noTone(nya);
    delay(50);
    Serial.println("c2 note");
  }
}