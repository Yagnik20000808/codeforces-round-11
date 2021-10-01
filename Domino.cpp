/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		vector<int> a(n+1, k);
		vector<int> c(n+1, k);
		int ans=0;
		for(int i=0;i<n;i++)
		{
			if(c[arr[i]]>0)
				c[arr[i]]--;
			else
				ans++;
		}
		vector<int> b(k+1, (n-ans)/k);
		b[0]=n+1;
		for(int i=0;i<n;i++)
		{
			if(b[a[arr[i]]]>0)
			{
				cout<<a[arr[i]]<<' ';
				b[a[arr[i]]]--;
				if(a[arr[i]]>0)
					a[arr[i]]--;
			}
			else if(b[a[arr[i]]]==0)
			{
				while(b[a[arr[i]]]==0){
					a[arr[i]]--;
				}
				cout<<a[arr[i]]<<' ';
				b[a[arr[i]]]--;
				if(a[arr[i]]>0)
					a[arr[i]]--;
			}
		}
		cout<<endl;
	}
	return 0;
}*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,m,k;
        cin>>n>>m>>k;
        if(n%2){
            int hor = m/2;
            if(k<hor || ((k-hor)%2)){
                cout<<"NO\n";
            }else{
                cout<<"YES\n";
            }
        }else if(m%2){
            int temp = n*m/2 - n/2;
            if(temp>=k && k%2==0){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else{
            if(k%2)cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
}
