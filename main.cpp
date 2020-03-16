#include <iostream>
#include <string>
using  namespace std;
void reverse(string& str)
{
    int n;
    n= str.length();
    for(int i=0;i<n/2;i++)
    {
        char temp;
        temp=str[i];
        str[i]=str[n-1-i];
        str[n-1-i]=temp;
    }
}
int main()
{
   string n1 , n2;
   while(cin >> n1 >> n2)
   {
       long long int a,b,c;
       a=n1.length();
       b=n2.length();
       if(a>=b)
       c=a;
       else
       c=b;
       reverse(n1);
       reverse(n2);
       int carry;
       carry=0;
       string res;
    //    cout << (n2[0]-'0') + (n1[0]-'0'); 
       for(int i=0;i<c;i++)
       {
           int x,y,z;
           x=n1[i]-'0';
           y=n2[i]-'0';
           z=x+y+carry;
           if(z>9)
           {
               carry=1;
               res[i+1]=1+'0';
               res[i]=z%10 + '0';
           }
           else
           {
               carry=0;
               
               res[i]=z%10 + '0';
           }
       }
       if(res[c]==0)
       {
        for(int i=c-1;i>=0;i--)
        {
            cout << res[i];
        }
       }
       else
       {
          for(int i=c;i>=0;i--)
        {
            cout << res[i];
        } 
       }
        cout << "\n";
   }
}
