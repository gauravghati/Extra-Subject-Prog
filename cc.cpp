# include <bits/stdc++.h>
typedef long long ll;
# define pb push_back
# define rep(i, a, b) for(int i=a; i<b; i++)
# define repr(i, a, b) for(int i=a; i>=b; --i)
# define  ff  first
# define  ss  second
# define fastt ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define testt int T; cin>>T; while(T--)
# define all(v) v.begin(), v.end()
# define allr(v) v.rbegin(), v.rend()
# define vll vector<ll>
# define vii vector<int>
# define pll pair<ll, ll> 
using namespace std;

int main(){
    fastt;
	//testt{
    	// write your code here.
    	
    	int N;
    	cin >> N;
    	
    	int flag = 0;
    	rep(i, 1, N){
    		if((i%2==0) && ((N-i)%2==0)){
    			flag = 1;
    		}
    	}
    	
    	if(flag==0) cout << "NO";
    	else cout << "YES";
    	
	//}		
    return 0;
}

