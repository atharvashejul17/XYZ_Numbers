# include <bits/stdc++.h>
using namespace std;
int main()
{
int n,x=0;
 cin>>n;

       while (n != 1) 
       {  
            if (n % 5 == 0) 
            {  
                n /= 5;  
            } 
            else if (n % 3 == 0) 
            {  
                n /= 3;  
            } 
            else if (n % 2 == 0) 
            {  
                n /= 2;  
            } 
            else 
            {  
                cout<<"Not XYZ number."; 
                x = 1;  
                break;  
            }  
        } 
		        if (x==0)
		        { 
                cout<<"XYZ number.";
                }
    return 0;
}