const int sound = 10;
const int ledred = 8;

void setup() {
  Serial.begin( 9600 );
  pinMode(ledred, OUTPUT);
  pinMode(sound, INPUT);
  digitalWrite(ledred, LOW); 
}

void loop() {
  int valorSound = digitalRead(sound);
  if (valorSound == LOW) {
    Serial.println("Som NÃO Detectado");
    digitalWrite(ledred, LOW);   
 }else{
    Serial.println("Som Detectado");
    digitalWrite(ledred, HIGH);  
 }
}
