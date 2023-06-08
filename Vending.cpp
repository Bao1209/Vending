#include <iostream>
using namespace std;

int main() {
	int num1, num2, num3, num4, num5, num6, money, price, charge;
	int num1_0 = 0;
	int num2_0 = 0;
	int num3_0 = 0;
	int num4_0 = 0;
	int num5_0 = 0;
	int num6_0 = 0;

	cout << "Enter six decreasing denominations: ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;

	cout << "Insert money ($): ";
	cin >> money;

	cout << "Item price ($): ";
	cin >> price;

	charge = money - price;
	cout << "Change is $";
	cout << charge;
	cout << endl;

	int charge_temp, charge_mod;
	//Check whether the change have any combination in the six numbers input by the user
	if (charge - 1 != num1)
	{
		//Get every charge and remaining to see if there are any combination 
		if (charge >= num1)
		{
			charge_temp = charge;
			charge = charge / num1;
			charge_mod = charge_temp % num1;
			num1_0 = charge;
		}
		if (charge_mod >= num2)//Get every reminder and see whether it will be smaller than 0,if then output zero as number of coin combination of that number
		{
			charge_temp = charge;
			charge = charge / num2;
			charge_mod = charge_temp % num2;
			num2_0 = charge;
			if (charge_mod == 0)
			{
				num2_0 = 1;
				charge_mod = 0;
			}
		}
		if (charge_mod >= num3)
		{
			charge = charge_mod / num3;
			charge_mod = charge_mod % num3;
			num3_0 = charge;
			if (charge_mod == 0)
			{
				num3_0 = 1;
				charge_mod = 0;
			}
		}
		if (charge_mod >= num4)
		{
			charge_mod = charge_mod / num4;
			charge_mod = charge_mod % num4;
			num4_0 = charge;
			if (charge_mod == 0)
			{
				num4_0 = 1;
				charge_mod = 0;
			}
		}
		if (charge_mod >= num5)
		{
			charge = charge_mod / num5;
			charge_mod = charge_mod % num5;
			num5_0 = charge;
			if (charge_mod == 0)
			{
				num5_0 = 1;
				charge_mod = 0;
			}
		}
		if (charge_mod >= num6)
		{
			charge = charge_mod / num6;
			charge_mod = charge_mod % num6;
			num6_0 = charge;
			if (charge_mod = 0)
			{
				num6_0 = 1;
				charge_mod = 0;
			}
		}
		if (num1_0 != 0)
		{
			cout << "$" << num1 << " x " << num1_0 << endl;
		}

		if (num2_0 != 0)
		{
			cout << "$" << num2 << " x " << num2_0 << endl;
		}
		else
		{
			cout << "$" << num2 << " x 0" << endl;
		}
		if (num3_0 != 0)
		{
			cout << "$" << num3 << " x " << num3_0 << endl;
		}
		else
		{
			cout << "$" << num3 << " x 0 " << endl;
		}
		if (num4_0 != 0)
		{
			cout << "$" << num4 << " x " << num4_0 << endl;
		}
		else
		{
			cout << "$" << num4 << " x 0" << endl;
		}
		if (num5_0 != 0)
		{
			cout << "$" << num5 << " x " << num5_0 << endl;
		}
		else
		{
			cout << "$" << num5 << " x 0" << endl;
		}
		if (num6_0 != 0)
		{
			cout << "$" << num6 << " x " << num6_0 << endl;
		}
		else
		{
			cout << "$" << num6 << " x 0" << endl;
		}
	}
	else
	{
		cout << "Cannot find combination!" << endl;
	}
		
}