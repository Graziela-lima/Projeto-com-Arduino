const int sound = 10;
const int led1 = 13;
const int led2 = 11;
const int led3 = 8;

bool ligado = false;
void setup() {
Serial.begin( 9600 );
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(sound, INPUT);
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
}

void loop() {
int valorSound = digitalRead(sound);
if (valorSound == HIGH) {
if(ligado == true){
Serial.println(&quot;Som não Detectado&quot;);
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
ligado = false;
}else{
Serial.println(&quot;Som Detectado&quot;);
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led3, HIGH);
ligado = true;
}
}
delay(10);
}
