#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float,float);

int main(){
int s,l,b;
float r,base,height;
cout<<"enter the side of the square:";
cin>>s;
cout<<"enter the length adn breadth of rectangle:";
cin>>l>>b;

cout<<"enter the base and height of a triangle:";
cin>>base>>height;
cout<<"area of square is:"<<area(s);
cout<<"\narea of rectangle is:"<<area(l,b);
cout<<"\narea of circle is:"<<area(r);
cout<<"area of triangle is:"<<area(base,height);
}
int area(int s){
	return (s*s);
}

int area(int l,int b){
	return (l*b);
}
float area(float r){
	return(3.14*r*r);
}
float area(float base,float height){
	return ((base*height)/2);
}


