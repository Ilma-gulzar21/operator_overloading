#include<iostream>
using namespace std;
class complex{
	int real;
	int img;
	public:
		complex(int r ,int i) {
			real=r;
			img=i;
		}
		void shownum() {
			cout<<real<<" + "<<img<<"i "<<endl;
		}
		
		void operator +(complex &obj1) {
			int resreal=this->real + obj1.real;
			int resimg = this->img+obj1.img;
			complex obj2(resreal,resimg);
			cout<<"res= ";
			obj2.shownum();
		}
};
int main() {
	complex obj(7,9);
	obj.shownum();
	complex obj1(2,7);
	obj1.shownum();
   obj+obj1;
	return 0;
}
