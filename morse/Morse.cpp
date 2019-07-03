#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
	pinMode(pin,OUTPUT);
	_pin=pin;
	_dottime=250;
}

void Morse::dot()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::dash()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime*4);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::c_space()
{
	digitalWrite(_pin,LOW);
	delay(_dottime*3);
}

void Morse::w_space()
{
	digitalWrite(_pin,LOW);
	delay(_dottime*7);
}


void MorseCode::transfor(char _code)

{

    switch (_code) {
		case 'a':dot();dash();c_space()break;
		case 'b':dash();dot();dot();dot();c_space()break;
		case 'c':dash();dot();dash();dot();c_space()break;
    case 'd':dash();dot();dot();c_space()break;
    case 'e':dot();c_space()break;
    case 'f':dot();dot();dash();dot();c_space()break;
    case 'g':dash();dash();dot();c_space()break;
		case 'h':dot();dot();dot();dot();c_space()break;
		case 'i':dot();dot();c_space()break;
		case 'j':dot();dash();dash();dash();c_space()break;
		case 'k':dash();dot();dash();c_space()break;
		case 'l':dot();dash();dot();dot();c_space()break;
		case 'm':dash();dash();c_space()break;
		case 'n':dash();dot();c_space()break;
		case 'o':dash();dash();dash();c_space()break;
		case 'p':dot();dash();dash();dot();c_space()break;
		case 'q':dash();dash();dot();dash();c_space()break;
		case 'r':dot();dash();dot();c_space()break;
		case 's':dot();dot();dot();c_space()break;
		case 't':dash();c_space()break;
    case 'u':dot();dot();dash();c_space()break;
		case 'v':dot();dot();dot();dash();c_space()break;
    case 'w':dot();dash();dash();c_space()break;
		case 'x':dash();dot();dot();dash();c_space()break;
		case 'y':dash();dot();dash();dash();c_space()break;
		case 'z':dash();dash();dot();dot();c_space()break;
    case ' ':w_space();break;
		default:break;
		}
}
