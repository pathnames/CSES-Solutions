#include <bits/stdc++.h>
using namespace std;

int solve(int middle, int a[], int n){
	int cost = 0;
	for(int i = 0; i < n; ++i){
		cost += abs(a[i] - middle);
	}
	return cost;
}
int main() {
	int n;
	cin >> n;
	int a[n], i, min_cost = 0;
	for(i = 0; i < n; ++i) cin >> a[i];	

    //Find median and then calculate the addition/subtraction needed to get it from the current array element.
	sort(a, a + n);
	int middle = a[n/2];
	cout << solve(middle, a, n);

	

	return 0;
}