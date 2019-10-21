# include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n, val, i;
		cin >> n;
		vector<int> arr;
		while(n--){
			cin >> val; 
			arr.push_back(val);
		}
		vector<int> arr2;
		while(arr.size()>2){
			arr2.clear
			for(int i=0; i<3; i++)
				arr2.push_back(arr[i]);
			sort(arr2.begin(), arr2.end());
			vector<int>::iterator it;
			it = find (arr.begin(), arr.end(), arr2[2]);
			int size = 
		}	
	}
	return 0;
}


