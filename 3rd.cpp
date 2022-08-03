#include<iostream>
#include<sstream>
#include<cmath>
using namespace std;
class complex{
	private:
		int real,imag;
	public:
	complex(){
		real = imag= 0;
            }
complex(int r,int i){
	real = r;
	imag = i;
}
string to_string(){
	stringstream ss;
	if(imag>=0)
		ss<<"("<<real<<"+"<<imag<<"i)";
	else
		ss<<"("<<real<<"-"<<abs(imag)<<"i)";
	return ss.str();
	}
complex operator+(complex c2){
	complex ret;
	ret.real = real + c2.real;
	ret.imag = imag + c2.imag;
	return ret;
}
};
int main(){
complex c1(8,-5),c2(2,3);
complex res = c1+c2;
cout<<res.to_string();
}