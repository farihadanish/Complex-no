//#include<iostream.h>
using namespace std;

class complexNo
{
	public:
		complexNo()//null constructor
		{
			this->real=0;
			this->imaginary=0;
		}
		complexNo(double real,double imaginary)//parametrized
		{
			this->real=real;
			this->imaginary=imaginary;
		}
		complexNo(complexNo &clone)//copy constructor
		{
			this->real=clone.real;
			this->imaginary=clone.imaginary;
		}
		//setters
		void setreal(double real)
		{
			this->real=real;
		}
		void setimaginary(double imaginary)
		{
			this->imaginary=imaginary;	
		}
		//add function
		complexNo add(complexNo z)
		{
			complexNo temp;
			temp.real=this->real+z.real;
			temp.imaginary=this->imaginary+z.imaginary;
			return temp;
		}
		//overloading add operator
		complexNo operator+(complexNo f)
		{
			complexNo t;
			t.real=this->real+f.real;
			t.imaginary=this->imaginary+f.imaginary;
			return t;
		}
		
		void display()
		{
			cout<<this->real;
			cout<<this->imaginary;
		}
		
		
		private:
			double real;
			double imaginary;
		};
