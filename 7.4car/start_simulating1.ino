


void setup()
{
 pinMode(3,OUTPUT);
 pinMode(5,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
   Serial.begin(9600)
}
int income=0;

void loop()
{
  if(Serial.available()>0){
    income=Serial.read();
  }
  switch(income){
  case 'f': forword();break;
    case 'b': back();break;
    case 'l': left();break;
    case 'r': right();break;
    case 's': stop();break;
    default: break;
  }
}

void forward(){
	digitalWrite(3,HIGH);
  	digitalWrite(5,LOW);
	digitalWrite(9,HIGH);
  	digitalWrite(10,LOW);
}

void back(){
	digitalWrite(3,LOW);
  	digitalWrite(5,HIGH);
  	digitalWrite(9,LOW);
  	digitalWrite(10,HIGH);
}


void left(){
	digitalWrite(3,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
}
void right(){
	digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}

void stop(){
	digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
}