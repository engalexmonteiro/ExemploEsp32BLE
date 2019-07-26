#include <Arduino.h>
#include "bluetooth.h"


void setup() {
   Serial.begin(115200);
   setup_ble();
}

void loop() {
	ble_service();
}
