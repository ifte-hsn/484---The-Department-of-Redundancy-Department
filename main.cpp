#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main() {
	map<int, int> int_map;
	int n, count=0, i;
	vector<int> vect;

	while(cin >> n) {
		int_map[n]++;
		count++;
		vect.push_back(n);
	}

	for(i=0; i<count; i++) {
        if(int_map[vect[i]] > 0) {
            cout << vect[i] << " " << int_map[vect[i]] << endl;
            int_map[vect[i]] = 0;
        }
    }


	return 0;
}
