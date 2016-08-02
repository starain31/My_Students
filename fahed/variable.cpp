#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	cout <<"Type Your Birthday\n";

	int birth_day;
	
	
	cin >>birth_day;


	if( birth_day == 5) {
		cout <<"You and me are born in same day\n";
	} else if(birth_day == 6) {
		cout <<"You and the Fizz born in same day\n";
	} else {
		cout <<"U are unlucky\n";
	}
	

	return 0;
}
	
