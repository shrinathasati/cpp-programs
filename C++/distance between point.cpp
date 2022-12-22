#include<iostream>
#include<math.h>
using namespace std;
class point{
	int x,y;
	public:
		friend double getdistance(point ,point );
		point(int a,int b){
			x=a;
			y=b;
		}
		void getvalue(){
			cout<<"the coordinate is ("<<x<<","<<y<<")"<<endl<<endl;
		}
};

double getdistance(point p,point q){
		return sqrt((p.x-q.x)*(p.x-q.x) +(p.y-q.y)*(p.y-q.y));
		
	}
int main(){
	point p(0,0),q(1,0);
	cout<<"the coordinates are"<<endl<<endl;
	p.getvalue();
	q.getvalue();
	cout<<"the distance between these coordinate is "<<endl;
	cout<<getdistance(p,q);
}
