#include <iostream>
#include<vector>
#include<fstream>
#include"River.h"
using namespace std;
void printRiver(vector<River> a, int k){
	for (int i = 0; i < a.size(); i++) {
		if (k <= a[i].length)
			a[i].result();
	}
}
int main()
{
	vector<River> a;
	River t;
	ifstream fin("rivers.txt");
	int n, k;
	fin >> n >> k;
	
	while (fin >> t.name >> t.satav >> t.end >> t.length >> t.city)
		a.push_back(t);
	printRiver(a, k);
}

