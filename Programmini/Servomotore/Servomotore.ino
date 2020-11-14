/**
 * Servomotore.ino
 * Programma principale
 */

#include <Arduino.h> // Libreria principale di arduino
#include <Servo.h>	 // Libreria di gestione del servomotore

Servo myservo; // Dichiarazione dell'oggetto servomotore

int PIN_POTENZIOMETRO = A0; // Dichiarata come variabile globale

void setup()
{
	// Modalità dei pin e inizializzazione porta seriale
	
	Serial.begin(9600); // Seriale inizializzata

	myservo.attach(9); // Agganciamo l'oggetto myservo al pin 9 di Arduino con la sua funzione proprietaria
}

void loop()
{
	// Tutto quello che deve fare il programma
	
	int val = letturaPotenziometro(); // Associo a val, il valore letto dal potenziometro

	myservo.write(val); // Diciamo al servomotore di andare all'angolo val

	delay(15); // Ritardo nel programma
}