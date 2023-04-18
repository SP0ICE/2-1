#include <iostream>
class Road{
	public:
	double length;
	int8_t width;
	Road();
};
Road::Road(){
	length=0.0;
	width=0;
}
int main(){
	using namespace std;
	cout<<"test v2.01: OK. \n";
	Road road;
	cout<<"road.length: "<<road.length<<"\n";
	cout<<"road.width: "<<+road.width;
	road.length=300;
	road.width=3;
	cout<<"\nValues in main: \n ";
	cout<<"road.length: "<<road.length<<"\n";
	cout<<"road.width: "<<+road.width;
	return 0;
}