//---------------------------------------------------------------------------

#include "mariamole_auto_generated.h"

MiniKeyboard key (8,9,10,11,12);

//---------------------------------------------------------------------------

void setup() {                
	Mouse.begin();
}

//---------------------------------------------------------------------------

void loop() {
	key.ReadPins();
	
	if (key.Esc()) {
		Mouse.click(MOUSE_LEFT);
		delay(40);
		Mouse.click(MOUSE_LEFT);
		while (key.Esc()) {
			key.ReadPins();
			delay(10);
		}		
	}	
	delay(100);	
}

//---------------------------------------------------------------------------