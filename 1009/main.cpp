//#include <conio.h>
#include <iostream>
using namespace std;

// Minh luoi truyen doi so vao ham nen khai bao global lun
int b[6],c[6],a[6],n, stt;
static int cnt=0;
void Try(int);

int factorial(int n) {
   int f;

   for(f = 1; n > 1; n--)
      f *= n;

   return f;
}

int npr(int n,int r) {
   return factorial(n)/factorial(n-r);
}

void print(void);

int main()
{

    //cout<<"Nhap n va stt:  ";
     cin>>n>>stt;
     if(stt>npr(n,n)) cout<<"-1";
     else{
     for ( int i = 1 ; i<=n; i++)
          a[i]=i;
     Try(1);
}
//      getch();
      return 0;
}

void Try(int j)
{
     for ( int i = 1; i<=n; i++)
     {
         if ( b[i] == 0 )
         {
              c[j] = a[i];// a[] la mang dau vao, c[] la mang dau ra
              b[i] = 1;
              if ( j == n) {
              cnt++; if(cnt==stt){
              print();i=n;
              }
             // break;
              }
              else Try(j+1);// Ham goi lai ham
              b[i] = 0;
         }
     }
}

void print(void)
{
     for (int i = 1; i<=n; i++)
     {
         cout<<c[i]<<" ";
      }

}
