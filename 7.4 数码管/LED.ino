void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

int income=0;

void loop()
{
  if(Serial.available()>0){
    income=Serial.read();
  }
  Led(income);
 
}

void Led(int i){
  switch (i){
  	case '0':digitalWrite(2, LOW);
  			 digitalWrite(3, LOW);
 			 digitalWrite(4, LOW);
  			 digitalWrite(5, LOW);
    		 delay(2);
  			 break;
    case '1':digitalWrite(2, HIGH);
  			 digitalWrite(3, LOW);
 			 digitalWrite(4, LOW);
  			 digitalWrite(5, LOW);
  			 break;
    case '2':digitalWrite(2, LOW);
  			 digitalWrite(3, HIGH);
 			 digitalWrite(4, LOW);
  			 digitalWrite(5, LOW);
    		delay(2);
  			 break;
    case '3':digitalWrite(2, HIGH);
  			 digitalWrite(3, HIGH);
 			 digitalWrite(4, LOW);
  			 digitalWrite(5, LOW);
  			delay(2); 
    		break;
    case '4':digitalWrite(2, LOW);
  			 digitalWrite(3, LOW);
 			 digitalWrite(4, HIGH);
  			 digitalWrite(5, LOW);
  			 delay(2);
    		break;
    case '5':digitalWrite(2, HIGH);
  			 digitalWrite(3, LOW);
 			 digitalWrite(4, HIGH);
  			 digitalWrite(5, LOW);
    		delay(2);
  			 break;
    case '6':digitalWrite(2, LOW);
  			 digitalWrite(3, HIGH);
 			 digitalWrite(4, HIGH);
  			 digitalWrite(5, LOW);
    		delay(2);
  			 break;
    case '7':digitalWrite(2, HIGH);
  			 digitalWrite(3, HIGH);
 			 digitalWrite(4, HIGH);
  			 digitalWrite(5, LOW);
    		delay(2);
  			 break;
    case '8':digitalWrite(2, LOW);
  			 digitalWrite(3, LOW);
 			 digitalWrite(4, LOW);
  			 digitalWrite(5, HIGH);
    		delay(2);
  			 break;
    case '9':digitalWrite(2, HIGH);
  			 digitalWrite(3, LOW);
 			 digitalWrite(4, LOW);
  			 digitalWrite(5, HIGH);
    		delay(2);
  			 break;
    default: break;
  }






}