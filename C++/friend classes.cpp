#include<iostream>
using namespace std;
class complex;
class calculator{
	public:
		int add(int a,int b){
			return (a+b);
			
		}
		int sumRealcomplex(complex,complex );
		
};
class complex{
	private:
		int a,b;
	public:
		friend int calculator::sumRealcomplex(complex,complex);
		void setvalue(int n1,int n2){
			a=n1;
			b=n2;
		}
		void getvalue(){
			cout<<"the value of complex number is "<<a<<" +i "<<b<<endl;
			
		}
};
	int calculator:: sumRealcomplex(complex o1,complex o2){
			return(o1.a+o2.a);
		}
/*class calculator{
	public:
		int add(int a,int b){
			return (a+b);
			
		}
		int sumRealcomplex(complex o1,complex o2){
			return(c1.a+c2.a);
		}
		
};*/
int main()
{
	complex c1,c2;
	c1.setvalue(1,2);
	c1.getvalue();
	c2.setvalue(3,4);
	c2.getvalue();
	calculator c3;
	int real=c3.sumRealcomplex(c1,c2);
	cout<<real;
	
}
