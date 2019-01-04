#include<iostream>
#include<graphics>
#include<math>
using namespace std;
class TRIANGLE                       
{
protected:
	int x1,y1,x2,y2,x3,y3;  
	int x,y,a1,b1,a2,b2,a3,b3,p,q;    
	float theta;
public:

	void triangle(int x1,int y1,int x2,int y2,int x3,int y3)          
	{
		line(x1,y1,x2,y2);
		line(x2,y2,x3,y3);
		line(x3,y3,x1,y1);
	}

	void rotation(int x1,int y1,int x2,int y2,int x3,int y3)           
	{
		p=x2,q=y2,theta=45;
		//cout<<"Enter the angle for rotation:";
		//cin>>theta;
		cleardevice();
		theta=((theta)*3.14)/180;
		a1=p+(x1-p)*cos(theta)-(y1-q)*sin(theta);
		b1=q+(x1-p)*sin(theta)+(y1-q)*cos(theta);
		a2=p+(x2-p)*cos(theta)-(y2-q)*sin(theta);
		b2=q+(x2-p)*sin(theta)+(y2-q)*cos(theta);
		a3=p+(x3-p)*cos(theta)-(y3-q)*sin(theta);
		b3=q+(x3-p)*sin(theta)-(y3-q)*cos(theta);
		cout<<"Rotate"<<endl;
		triangle(a1,b1,a2,b2,a3,b3);
	}

};

main()
{
	TRIANGLE T;                                     
	int gd=DETECT,gm;
	int x1,x2,x3,y1,y2,y3;
	initgraph(&gd,&gm," ");
	cout<<"Enter the first coordinates:";          
	cin>>x1>>y1;
	cout<<"Enter the second coordinates:";
	cin>>x2>>y2;
	cout<<"Enter the third coordinates:";
	cin>>x3>>y3;
	T.triangle(x1,y1,x2,y2,x3,y3);
        cleardevice();                    
	T.rotation(x1,y1,x2,y2,x3,y3);
	setcolor(10);
	T.triangle(x1,y1,x2,y2,x3,y3);
	
}

