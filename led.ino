int led = 7
void setup (){
    pinMode(led, OUTPUT);
}
void loop(){
    digitalWriter (led, HIGH);
    delay(1000);
    digiralWriter (led,LOW);
    delay(1000);
}