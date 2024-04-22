#include <iostream>
using namespace std;

	void Square(int a);               //functions decralations 
	void Rectangle(int l, int b);
	void Triangle(int b, int h);
    

int main(){
	int respose;
	cout <<"Please select the area of the shape to calculate:"<<endl;
	cout <<" 1. Square \n 2. Rectangle \n 3. Triangle \n 4. quite \n"<<endl;
	cout <<"Enter selection: ";
		cin >> respose;
		while (respose < 1 || respose > 4){
			cout <<"you input was: "<<respose<<" which is an invalid input \n";
			cout << "Please Enter a valid input"<<endl;
					cin.clear();
					cin.ignore(123, '\n');
					cin >> respose;
		}

	if (respose ==1){
		cout <<"Enter the side value: "<<endl;
		int a;
		cin >> a;
		Square(a); 
	}

	if (respose ==2){
		cout <<"Enter the length and bredth value: "<<endl;
		int l,b;
		cin >> l >>b;
		Rectangle(l,b); 
	}
	if (respose ==3){
		cout <<"Enter the base and height value: "<<endl;
		int b,h;
		cin >> b >> h;
		Triangle(b,h); 
	}
    else if(respose == 4)
        return 0;



}
		//fuctions defination
	void Square(int a){
	int area = a*a;
		cout<< "the area of a Squre with sides "<<a<<"cm is "<<area<<"cm^2 \n"<<endl;
		main();
	}
	void Rectangle(int l, int b){
		int area = l * b;
		cout<< "the area of a Rectangle with length "<<l<<"cm and bredth "<<b<<"cm is "<<area<<"cm^2 \n"<<endl;
		main();
	}
	void Triangle(int b, int h){
		int area = (1/2)*b*h;
		cout<< " the area of a Triangle with base "<<b<<"cm and height"<<h<<"cm is "<<area<<"cm^2 \n"<<endl;
		main();
	}