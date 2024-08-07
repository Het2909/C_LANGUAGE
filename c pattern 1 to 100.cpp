#include<iostream>
using namespace std;
int main()
{
    int a=11,b=28,c=36,d=37,e=45,f=58,g=59,h=65,k=71,l=80,m=84,n=85,o=89,p=94,q=96;
    int r=97,s=100;
    for(int i=1;i<=10;i++)
    {
        cout<<" "<<i<<" ";
    }
    cout<<endl;
    for (int i=2;i<=10;i++)
    {
        cout<<" ";
        for(int j=1;j<=10;j++)
        {
            if(j==10 && i>=2 && i<=10)
            {
                cout<<a<<" ";    // 11 to 19
                a++;
            }
            else if(i>9 && i<11 && j>=1 && j<=9)
            {
                
                    cout<<b<<" ";  // 20 to 28
                    b--;
            }
            else if(i>=2 && i<=9 && j>0 && j<2)
            {
                cout<<c<<" ";  // 29 to 36
                c--;
            }
            else if(i>1 && i<3 && j>1 && j<10)
            {
                cout<<d<<" "; // 37 to 44
                d++;
            }
            else if(i>2 && i<10 && j>8 && j<10)
            {
                cout<<e<<" ";
                e++;
            }
            else if(i>8 && i<10 && j>1 && j<9)
            {
                cout<<f<<" ";
                f--;

            }
            else if(i>9 && i<2 && j>1 && j<3)
            {
            	cout<<g<<" ";
            	g++;
			}
			else if(i>2 && i<4 && j>2 && j<9)
			{
				cout<<h<<" ";
				h++;
			}
			else if(i>3 && i<9 && j>7 && j<9)
			{
				cout<<k<<" ";
				k++;
			}
			else if(i>7 && i<9 && j>2 && j<8)
			{
				cout<<l<<" ";
				l--;
			}
			else if(i>3 && i<8 && j>2 && j<4)
			{
				cout<<m<<" ";
				m--;
			}
			else if(i>3 && i<5 && j>3 && j<8)
			{
				cout<<n<<" ";
				n++;
			}
			else if(i>4 && i<8 && j>6 && j<8)
			{
				cout<<o<<" ";
				o++;
			}
			else if(i>6 && i<8 && j>3 && j<7)
			{
				cout<<p<<" ";
				p--;
			}
			else if(i>4 && i<7 && j>3 && j<5)
			{
				cout<<q<<" ";
				q--;
			}
			else if(i>4 && i<6 && j>4 && j<7)
			{
				cout<<r<<" ";
				r++;
			}
			else if(i>5 && i<7 && j>4 && j<7)
			{
				cout<<s<<" ";
				s--;
			}
            else{
                cout<<"   ";
            }
            

        }
        cout<<endl;

        
        
    }
    
}
