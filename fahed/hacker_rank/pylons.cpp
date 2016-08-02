#include "iosream"

using namespace std;

const int N = int(1e5+5);

int main(int argc, char const *argv[]) {
	int n, k, l[N]; cin >>n >>k;
	for (size_t i = 0; i < n; i++) {
		cin >>l[i];
	}

	int i = 0;
	int on;
	while(i < n) {
		int j = 0;
		on = i;
		while (j < k and i < n) {
			if(a[i] == 1) {
				on = i;
			}
			i++;
		}
	}
	return 0;
}
