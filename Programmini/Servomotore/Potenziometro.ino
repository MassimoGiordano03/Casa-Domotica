/**
 * Potenziometro.ino
 */

int letturaPotenziometro()
{
	int lettura = analogRead(PIN_POTENZIOMETRO); // Lettura del valore del potenziometro

	lettura = map(lettura, 0, 1023, 0, 180);
	/**
	 * Usiamo la funzione map per eeguire una proporzione:
	 * Rimappa i valori letti dal potenziometro (da 0 a 1023), per 
	 * adeguarli agli angoli del servomotore (da 0 a 180).
	 */
	
	return lettura; // Faccio ritornare il valore calcolato
}