void setup() {
  Serial.begin(9600);
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
{
char ch = Serial.read();
Serial.println(ch);
}
}
