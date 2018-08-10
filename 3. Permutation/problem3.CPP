#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int i,a,b[10],c[10],n,x,temp,z,y,m;
    clrscr();

    cout<<"Enter a number:";
    cin>>a; 				//input
    x=a;
    if(a<100)
	n=2;
    else
	n=3;
    for(i=0;i<n;i++)  			//splitting number
    {
	b[i]=x%10;
	x=x/10;
    }
    if(n==2)                             //permutation manually
    {
	z=b[0];
	y=b[1];
	c[0]=(z*10)+y;
	c[1]=(y*10)+z;
    }
    if(n==3)
    {
	 z=b[0];
	 y=b[1];
	 m=b[2];
	 c[0]=(m*100)+(y*10)+z;
	 c[1]=(m*100)+(z*10)+y;
	 c[2]=(y*100)+(m*10)+z;
	 c[3]=(y*100)+(z*10)+m;
	 c[4]=(z*100)+(m*10)+y;
	 c[5]=(z*100)+(y*10)+m;
    }
    cout<<"Permutations:";
    if(n==2)
	for(i=0;i<2;i++)
	    cout<<"\t"<<c[i];
    if(n==3)
	for(i=0;i<6;i++)
	    cout<<"\t"<<c[i];
    for(i=0;i<n;i++)
    {
	for(int j=2;j<c[i];j++)
	{
	    if(c[i]%j>0)
	    temp=0;
	    else
	    {
		temp=1;
		exit(0);
	    }
	}
    }
    if(temp==0)
	cout<<"\nTrue";
    else
	cout<<"\nFalse";
    getch();
}

