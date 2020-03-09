#include<iostream>
using namespace std;

class Animals
{
	public:
	void PrintIntro()
		{
			cout<<"I am an animal \n";
		}
};
class Mammals: virtual public Animals
{
	public:
	void PrintType()
		{
			cout<<"I am a mammal \n";
		}

};
class Canfly: virtual public Animals
{
	public:
		void PrintAction()
		{
			cout<<"I can fly \n";
		}

};

class Canrun: virtual public Animals
{
	public:
	void PrintAction()
	{
		cout<<"I can run \n";
	}

};

class Bat: public Mammals, public Canfly
{
	public:
	void Print()
	{
		cout<<"I am a bat \n";
		PrintIntro();
		PrintType();
		PrintAction();
	}
};

class Zebra: public Canrun, public Mammals
{
	public:
	void Print()
	{
		cout<<"I am a zebra \n";
		PrintIntro();
		PrintType();
		PrintAction();
	}

};

int main()
{
	Bat b;
	Zebra z;
	b.Print();
	z.Print();
	return 0;
}
