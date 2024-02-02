#include <iostream>
#include <vector>

/*Create a function which validates whether a bridge is safe to walk on (i.e. has no gaps in it to fall through).*/
bool isSafeBridge(std::string s) {
	for (char& c : s) {
		if(c == ' ')
			return false;
	}
	return true;
		
}

/*Given a pair, return its FIRST value and its SECOND value. Pair will be < int, int >.*/
std::vector<int> pairs(std::pair <int,int> p) {
	std::vector<int> result;
	result.push_back(std::get<0>(p));
	result.push_back(std::get<1>(p));
	return result;
}

std::vector<int> colorInvert(std::vector<int> rgb) {
	std::vector<int> result;
	for (int i = 0; i < int(rgb.size()); i++)
		result.push_back(255 - rgb[i]);
	return result;
}

int highestDigit(int number) 
{
	int result = 0;
	int current = number;
	
	while (current > 0)
	{
		if (current % 10 > result)
			result = current % 10;
		current = current / 10;
	}
	return result;
}


int triArea(int base, int height) {return ((base * height) / 2);}


int getAbsSum(vector<int> arr)
{
	int output = 0;
	for (int i = 0; i < int(arr.size()); i++)
	{
		if (arr[i] < 0) {output = output - arr[i];}
		else{output = output + arr[i];}
	}
	return output;
}

/*
edabit.com
*/
int main() 
{
	cout << highestDigit(370);
    return 0;
}
