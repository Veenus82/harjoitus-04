/******
*ohjelman nimi: harjoitus 4
*tekij‰ Markus Malm
*Lyhyt kuvaus: Ks. ohjelmakoodia: harj4 (omat esimerkit)

a) Kirjoita, tallenna ja suorita ym. ohjelma.
b) Kommentoi ylla olevan esimerkin kaikki rivit (mit‰ rivill‰ tapahtuu).
c) Muuta vakioden nimet niin, ett‰
MAX => MINIMI
max => MAKSIMI
*versio 1.0
*pvm: 10.9.2014
*/

#include <iostream>// otsikkotiedosto esik‰‰nnet‰‰n ja sis‰llyet‰‰n ohjelmaan input output stream, pystyt‰‰n k‰ytt‰m‰‰n cin ja cout -komentoja
using namespace std;
// vakioiden m‰‰rittely
#define MINIMI 10// vanha tapa
const int MAKSIMI = 20;// uusi suositeltava tapa
// julkisten muuttujien m‰‰rittely
int summa;
// esitell‰‰n aliohjelmat
void Laske(int, int);
void main()//p‰‰ohjelman alkaa t‰st‰
{ // alkava lohkosulku
	// paikallisten muuttujien m‰‰rittely
	int luku1 = 2;
	int luku2;
	cout << "syˆt‰ luku: ";
	cin >> luku2;

	Laske(luku1, luku2);// alihojelman kutsu
	if (summa < MINIMI)
		cout << "Summa on pienempi kuin " << MINIMI;
	if (summa > MAKSIMI)
		cout << "Summa on suurempi kuin " << MAKSIMI;
	if (summa > MINIMI && summa < MAKSIMI)
		cout << "Summa on " <<MINIMI<< " ja " << MAKSIMI<< " v‰liss‰";
} // lopettava lohkosulku

void Laske(int eka, int toka)// aliohjelman m‰‰rittely
{
	summa = eka + toka;
}