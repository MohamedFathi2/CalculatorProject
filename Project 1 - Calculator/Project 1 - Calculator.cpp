#include <iostream>
using namespace std;

class clsCalculator
{
private:
	float _Result = 0;
	float _PreviousResult = 0;
	float _LastNumber = 0;
	string stOpertion = "";
public:

	void PrintResult()
	{
		cout << "Result After " << stOpertion << " " << _LastNumber << " is : " << _Result << endl;
	}
	void Clear()
	{
		_Result = 0;
		_PreviousResult = 0;
		_LastNumber = 0;
		stOpertion = "Clear";
	}
	
	void Add(float n)
	{
		_LastNumber = n;
		_PreviousResult = _Result;
		_Result += _LastNumber;
		stOpertion = "Adding";
	}

	void Subtract(float n)
	{
		_LastNumber = n;
		_PreviousResult = _Result;
		_Result -= _LastNumber;
		stOpertion = "Subtracting";
	}

	void Multiply(float n)
	{
		_LastNumber = n;
		_PreviousResult = _Result;
		_Result *= _LastNumber;
		stOpertion = "Multiplying";
	}
	void Divide(float n)
	{
		if (n == 0) _LastNumber = 1;
		else _LastNumber = n;
		_PreviousResult = _Result;
		_Result /= _LastNumber;
		stOpertion = "Dividing";
	}
	void CancelLastOperation()
	{
		_LastNumber = 0;
		_Result = _PreviousResult;
		stOpertion = "Cancelling Last Opertion";
	}
	float GetFinalResult()
	{
		return _Result;
	}
};


int main()
{
	clsCalculator Calculator1;
	
	Calculator1.Clear();

	Calculator1.Add(10);
	Calculator1.PrintResult();

	Calculator1.Add(100);
	Calculator1.PrintResult();

	Calculator1.Subtract(20);
	Calculator1.PrintResult();

	Calculator1.Divide(0);
	Calculator1.PrintResult();

	Calculator1.Divide(2);
	Calculator1.PrintResult();

	Calculator1.Multiply(3);
	Calculator1.PrintResult();
	
	Calculator1.CancelLastOperation();
	Calculator1.PrintResult();

	Calculator1.Clear();
	Calculator1.PrintResult();

	cout << "Final Result is : " << Calculator1.GetFinalResult() << endl;

	
	system("pause>0");
	return 0;
}