#include<iostream>
using namespace std;
class number{
	int a;
	public:
		number(){
			a=0;
		}
		number(int m){
			a=m;
			
		}
//		number(number &o){
//			cout<<"copy constructor invoked\n";
//			a=o.a;
//		}
		void print(){
			cout<<"the number is "<<a<<endl;
		}
};
int main(){
	number x,y(2),z(3);
	x.print();
	y.print();
	z.print();
	number z1(z);
	z1.print();
	number z2=z;
	z2.print();
	
}
