#include "std_lib_facilities.h"

// B1 and it's derived classes
class B1
{
public:
	virtual void pvf() = 0;
	virtual void vf() const { cout << "B1::vf()" << "\n"; }
	void f() const { cout << "B1::f()" << "\n"; }
};

class  D1 : public B1
{
public:
	void pvf() override { cout << "D1::pvf()" << "\n"; }
	void vf() const { cout << "D1::vf()" << "\n"; }
	void f() { cout << "D1::f()" << "\n"; }
};

class  D2 : public D1
{
public:
	void pvf() override { cout << "D2::pvf()" << "\n"; }
	void vf() const { cout << "D2::vf()" << "\n"; }
	void f() { cout << "D2::f()" << "\n"; }
};

//calling B1 classes by reference
void call(const B1& b1)
{
	b1.vf();
	b1.f();
}



// B2 and it's derived classes
class B2
{
public:
	virtual void pvf() = 0;


};

class D21 : public B2
{
private:
	string data_string = "gg wp";

public:
	void pvf() override;
};

void D21::pvf() 
{
	cout << data_string << "\n";
}

class D22 : public B2
{
private:
	int const data_int = 666;

public:
	void pvf() override { cout << data_int << "\n"; }
};
 
//calling B2 classes by reference
void f(B2& b2) 
{ 
	b2.pvf(); 
}


int main()
{
	//B1 b1; abstract class 
	//B2 b2; abstract class 
	D1 d1;
	D2 d2;
	D21 d21;
	D22 d22;

	cout << "Calling D1,D2 direcrly! " << "\n";
	d1.vf();
	d1.f();
	d1.pvf();
	d2.vf();
	d2.f();
	d2.pvf();

	cout << "\n" << "Calling D1,D2 with call reference! " << "\n";
	call(d1);
	call(d2);

	cout << "\n" << "Calling D21,D22 with f reference! " << "\n";
	f(d21);
	f(d22);


	cout << "End of call! " << "\n";
	return 0;
}
