#include<iostream>
#include<math.h>
using namespace std;
	 int *a;
	 int x,t,stt,cnt;
bool check(int n, int cnt);
void Print(int n);
	 void TRY(int k, int n, int cnt) {

		for (int i = 0; i <= 1; i++) {
			a[k] = i;
			if (k == n - 1) {
                    if(check(n,cnt)){
					Print(n);
					break;
                    }
			} else
				TRY(k + 1, n, cnt);
		}

	}

 bool check(int n, int cnt) {
 int c=0;
    for(int i=0;i<n;i++){
    if(a[i]==1) c++;
    }
    if(c==cnt) return true;
    else return false;

	}
 void Print(int n) {
		for (int j = 0; j < n; j++)
cout<<a[j]<< "";
cout<<endl;
	}
int main()
{
cin>>t;
for (int i = 0; i < t; i++) {
			cin>>x>>cnt;
	a = new int[x];
			TRY(0,x,cnt);
			cout<<endl;
		}
return 0;
	}


