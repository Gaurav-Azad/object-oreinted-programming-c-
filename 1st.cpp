#include<iostream>
using namespace std;
int largestno(int a,int b,int c){
	int max;
	if(a>=b && a>=c){
		max = a;
	}
	else if(b>=a && b>=c){
 		max = b;
	}
	else{
		max =c;
	}
	return max;
	}
int main(){
int num1,num2,num3,largest;
cout<<"enter the first number:";
cin>>num1;
cout<<"enter the second:";
cin>>num2;
cout<<"enter the third number:";
cin>>num3;
largest = largestno(num1,num2,num3);
cout<<"largest number is:"<<largest<<endl;
}

