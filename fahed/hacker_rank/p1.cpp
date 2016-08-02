#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	double meal;
	cin >> meal;
	int tip;
	cin >> tip;
	int tax;
	cin >> tax;
	double total;
	total = meal + (meal*(tip/100)) + (meal*(tax/100));
	cout <<total;
	return 0;
}
	
