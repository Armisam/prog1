#include "std_lib_facilities.h"

//exercise 1
template<typename T>
class S
{
public:
	//osztaly valtozok




	//exercise2
	S() : val(T()) {} 
	S(T d) : val(d) {} 

	//exercise_10
	S& operator=(const T& newval) { val = newval; return *this; } 

	//exercise_5_11
	const T& get() const { return val; } 
	T& get() { return val; } 
	
	//exrcise_9
	void set(T d) { val = d; }
	//T val; 
//exercise_7
private:
	T val;
};

//exercise_6
template<typename T>
const T& get(S<T>& s) 
{
	return s.get();
}

//exercise_12
template<typename T>
void read_val(T& v) 
{
	cin >> v;
}


template<typename T>
ostream& operator<<(ostream& os, vector<T>& outlist)
{
	os << "{ ";
	for (int i = 0; i < outlist.size() - 1; ++i)
	{
		os << outlist[i] << ", ";
	}
	os << outlist[outlist.size() - 1] << " }" << "\n";
	return os;
}


//exercise_3_4
void Ex3_4()
{
	const int karmeret = 50;
	char c;

	S<int> egesz;
	S<char> karak(karmeret);
	S<double> tizedes;
	S<string> szoveg;
	S<vector<int>> egeszvek(vector<int>(5,1));

	//for + [] operator pl
}

//exercise_8_9
void Ex8_9()
{
	S<int> egesz(100);
	cout << get(egesz) << "\n";
	egesz.set(500);
	cout << get(egesz) << "\n";
}

//exercise_10
void Ex_10()
{
	S<double> tiz(10.10);
	cout << get(tiz) << "\n";
	tiz = 500;
	cout << get(tiz) << "\n";
}

//exercise 12_13
void Ex12_13()
{
	S<int> egesz;
	cout << "Adj meg egy egesz szamot: ";
	read_val(egesz.get());
	cout << "\n" << egesz.get() << "\n\n";

	const int meret = 6;
	S<vector<int>> intvek (vector<int>(6, 0));
	cout << "Adj meg "<< meret << "db int szamot: ";
	for (int i = 0; i < meret; ++i)
	{
		read_val(intvek.get()[i]);
	}
	cout << "\n";
	for (int i : intvek.get())
	{
			cout << i << " ";
	}
	cout << "\n";
}




int main()
{
	//Ex3_4(); 
	//Ex8_9();
	//Ex_10();
	//Ex12_13(); 

	return 0;
}