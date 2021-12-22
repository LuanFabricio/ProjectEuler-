#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int sum_all(int n, unordered_map<int, int> *results){
	if((*results)[n] != 0 || n == 0){
		return (*results)[n];
	}

	int three = (n-1)/3;
	int five = (n-1)/5;
	int fiveteen = (n-1)/15;

	int soma = 3*(three*(three+1)/2) + 5*(five*(five+1)/2) - 15*(fiveteen*(fiveteen+1)/2);

	cout << soma << endl;

	return soma;
}

int main(){
	int t, sum;
	unordered_map<int, int> results;	

	sum = 0;
	cin >> t;
	for(int a0 = 0; a0 < t; a0++){
	    int n;
	    cin >> n;
	    sum_all(n, &results);
	}
	return 0;
}
