int i;
void setup()
{
  Serial.begin(9600);
  for(i=2; i<=6;i++) pinMode(i,OUTPUT);
}

void loop()
{
	int nya = analogRead(A0);
  	int uwu = map(nya,1, 310, 1,6);
      Serial.print("LDR value: ");
      Serial.println(nya);
  	  
  	  Serial.print("Value(uwu): ");
  	  Serial.println(uwu);
        
        for(int i =2; i <= uwu;i++){
      		digitalWrite(i, 1);
        }
  
        for(int i =2; i <= uwu;i++){
      		digitalWrite(i, 0);
            delay(500);
        }
}
  		