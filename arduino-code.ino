const int a = 3;
const int b = 4;
const int c = 5;
const int d = 6;
const int e = 7;
const int f = 8;
const int g = 9;
const int h = 10;
const int ledpin=13; 
const int soundpin=A2;
const int threshold=500; 
int whistlesdone=0;
int whistleswanted;

void setup() {
Serial.begin(9600);
pinMode(ledpin,OUTPUT);
pinMode(soundpin,INPUT);
digitalWrite(ledpin,LOW);
pinMode(a, OUTPUT); 
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);  
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(h, OUTPUT);
}
void zero()
{
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  digitalWrite(h,HIGH);
}
void one()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(h,HIGH);
  
}
void two()
{
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(h,HIGH);
  
}
void three()
{
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(h,HIGH);
  
}
void four()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(h,HIGH);
  
}
void five()
{
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(h,HIGH);
  
}
void dot()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(h,LOW);
 
}
void six()
{
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(h,HIGH);
  
}

void seven()
{
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(h,HIGH);
}

void eight()
{
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(h,HIGH);
}
void nine()
{
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(h,HIGH);
}
void loop() {
  int soundsens=analogRead(soundpin);
  whistleswanted=3; //Can be adjusted to any desired value
 if (soundsens>=threshold) {
    whistlesdone=whistlesdone+1;
    Serial.println(whistlesdone);
    Serial.println(soundsens);
    if(whistlesdone>=whistleswanted){
    digitalWrite(ledpin,HIGH); //turns led on
    }
    else{
    digitalWrite(ledpin,LOW);
    }
    switch (whistlesdone) {
      case 0:
        zero();
        break;
      case 1:
        one();
        delay(5000);
        break;
      case 2:
        two();
        delay(5000);
        break;
      case 3:
        three();
        delay(5000);
        break;
      case 4:
        four();
        delay(5000);
        break;
      case 5:
        five();
        delay(5000);
        break;
      case 6:
        six();
        delay(5000);
        break;
      case 7:
        seven();
        delay(5000);
        break;
      case 8:
        eight();
        delay(5000);
        break;
      case 9: {
        nine();
        delay(5000);
        break;
      }
      }}
      
      }