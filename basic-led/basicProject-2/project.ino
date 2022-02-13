// can i get nya (metagram :)): samomenx)
int uwu;
int i;
void setup(){
	for(i=2; i<=6; i++) pinMode(i, OUTPUT);
    Serial.begin(9600);
}
void loop(){
    uwu = analogRead(A0);
    Serial.println(uwu);
    delay(500);
    
    for(i = 2; i<=6; i++){
  	    digitalWrite(i,1); delay(uwu);
    }
  
    for( i = 2; i<=6; i++){
  	    digitalWrite(i,0); delay(uwu);
    }
}