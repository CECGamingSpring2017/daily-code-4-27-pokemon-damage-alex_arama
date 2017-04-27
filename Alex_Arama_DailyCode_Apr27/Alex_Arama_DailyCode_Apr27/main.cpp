#include<iostream>
#include <string>

using namespace std;

void PokeDamage(double lvl, double pwr, double atk, double def);

int main() {
	int level = 0;
	int power = 0;
	int attack = 0;
	int defence = 0;

	

	cout << "Hello! Please give your pokemon's statistics: " << endl;
	cout << "First, it's level: ";
	cin >> level;
	cout << "Next, the moves power: ";
	cin >> power;
	cout << "Now, your pkmn's attack: ";
	cin >> attack;
	cout << "Lastly, it's defence: ";
	cin >> defence;


	PokeDamage(level, power, attack, defence);

}

void PokeDamage(double lvl, double pwr, double atk, double def) {

	double damage = (((((2 * lvl / 5) + 2)*pwr*(atk / def)) / 50) + 2) * 2;

	cout << "The attack does " << damage << " damage!" << endl;


}
