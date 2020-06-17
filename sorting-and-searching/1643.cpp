#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	long long a[n], i, max_current = INT_MIN, max_global = INT_MIN;
	for(i = 0; i < n; ++i) cin >> a[i];
	max_current = a[0];
	max_global = a[0];
	for(i = 1; i < n; ++i){
		max_current = max(a[i], max_current + a[i]);
		if(max_current > max_global){
			max_global = max_current;
		}
	}
	cout << max_global;
	
	return 0;
}