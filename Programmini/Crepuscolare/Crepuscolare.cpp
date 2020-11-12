/**
 * main.cpp
 */

#include <Arduino.h>

int SOGLIA = 600;
int DELAY = 100;
int PIN_LED = 10;
int PIN_LUCE = A0;

int lettura_luce = 0;

void setup()
{
	Serial.begin(9600);

	pinMode(PIN_LED, OUTPUT); // Erogare le tensioni
	pinMode(PIN_LUCE, INPUT); // Leggere dei valori
}

void loop()
{
	lettura_luce = analogRead(PIN_LUCE); // Lettura segnale della fotoresistenza
	Serial.print("Lettura fotoresistenza: ");
	Serial.println(lettura_luce);

	if(lettura_luce <= SOGLIA_LUCE) // Se ragioniamo in logica positiva
	{
		Serial.println("Luce accesa");
		digitalWrite(PIN_LED, HIGH);
	}
	else // se la luce rilevata è maggiore della soglia
	{
		Serial.println("Luce spenta");
		digitalWrite(PIN_LED, LOW);
	}
	delay(DELAY); // Per non caricare il monitor seriale
}