// mhm cute 
//
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(A0, INPUT);  
  Serial.begin(9600);
}

void loop()
{
  int uwu = analogRead(A0);
  int uwua = map(uwu,1, 310, 0,255);
  
  Serial.println("Analog Value : ");
  Serial.println(uwua);
  
  analogWrite(3, uwua);
}