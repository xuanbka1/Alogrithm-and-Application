
#include <iostream>
using namespace std;

int b[100],c[100],a[100],n;
static int stt; /* bien luu so thu tu can in ra*/
static int m=1; /* luu so con so can thay doi */
static int cnt;

void Try(int);
void print(void);
void print2(void);
int factorial(int n)

int factorial(int n) {
   int f;

   for(f = 1; n > 1; n--)
      f *= n;

   return f;
}

void Try(int j, int st)
{
     for ( int i = 1; i<=m; i++)
     {
         if ( b[i] == 0 )
         {
              c[j] = a[i];
              b[i] = 1;
              if ( j == m)
                {
                    cnt++;
                    if(cnt==st) {

                    print2();
                    print();
                    i=m+1; // do not excutive next for loop//
                    }
                else{
                }
                }
              else Try(j+1, st);// Ham goi lai ham
              b[i] = 0;
         }
     }
}

void print(void)
{
     for (int i = 1; i<=m; i++)
     {
         cout<<c[i]+n-m<<" ";
      }

}

void print2(void)   // in ra chuoi cac so khong bi thay doi//
{
for (int i = 1; i<=n-m; i++)
  {
cout<<i<<" ";
  }
}

int main()
{

     cin>>n>>stt;

while(factorial(m)<stt){
    m++;
}
if(m>n)
cout<<"-1";
else{

     for ( int i = 1 ; i<=m; i++)
          a[i]=i;
Try(1,stt);}
return 0;
}
