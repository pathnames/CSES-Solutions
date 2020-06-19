#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a, b;
	
	long long total = 0, cur_time = 0;
	cin >> n;
    vector<pair<int, int>> v(n);
	while(n--){
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
	sort(v.begin(), v.end());
	
	for(auto ele = v.begin(); ele != v.end(); ele++){
        cur_time += ele->first;
        total += ele->second - cur_time;
    }
	cout << total;
	return 0;
}