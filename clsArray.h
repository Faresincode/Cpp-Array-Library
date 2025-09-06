#pragma once
#include<string >
# include <iostream>
#include "clscMath.h";
#include "clsUtil.h";


using namespace std;


class clsArray
{
private:

	static int RandomIntNum(int From, int To)
	{
		return rand() % (To - From + 1) + From;
	}

public:

	static void PrintArrayOfNumber(int arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			cout << arr[i] << " ";
		cout << "\n";
	}
	static void PrintArrayOfNumber(float arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			cout << arr[i] << " ";
		cout << "\n";
	}
	static void PrintArrayOfNumber(short arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			cout << arr[i] << " ";
		cout << "\n";
	}
	static void PrintArrayOfString(string  arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			cout << arr[i] << " ";
		cout << "\n";
	}
	static void PrintArrayOfCharacter(char  arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			cout << arr[i] << " ";
		cout << "\n";
	}
	static void PrintArrayOfNumber(double arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			cout << arr[i] << " ";
		cout << "\n";
	}
	static void PrintArrayOfNumber(long long arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			cout << arr[i] << " ";
		cout << "\n";
	}
	static int CountOddNumberInArray(int arrSource[], int arrLength)
	{
		int Counter = 0;
		for (int i = 0; i < arrLength; i++)
			if (clscMath::IsOdd(arrSource[i]))
				Counter++;
		return Counter;
	}
	static int CountEvenNumberInArray(int arrSource[], int arrLength)
	{
		int Counter = 0;
		for (int i = 0; i < arrLength; i++)
			if (clscMath::IsEven(arrSource[i]))
				Counter++;
		return Counter;
	}
	static int CountPositiveNumberInArray(int arrSource[], int arrLength)
	{
		int Counter = 0;
		for (int i = 0; i < arrLength; i++)
			if (clscMath::IsPositive(arrSource[i]))
				Counter++;
		return Counter;
	}
	static int CountNegativeNumberInArray(int arrSource[], int arrLength)
	{
		int Counter = 0;
		for (int i = 0; i < arrLength; i++)
			if (clscMath::IsNegative(arrSource[i]))
				Counter++;
		return Counter;
	}
	static int CountDigitFrequency(int DigitToCheck, int Number)
	{

		int Remainder = 0, FreqCount = 0;
		while (Number > 0)
		{
			Remainder = Number % 10;
			Number = Number / 10;
			if (DigitToCheck == Remainder)
				FreqCount++;
		}
		return FreqCount;
	}
	static int MaxNumberInArray(int arr[], int arrLength)
	{
		int MaxNumber = 0;
		for (int i = 0; i < arrLength; i++)
			if (arr[i] > MaxNumber)
				MaxNumber = arr[i];
		return MaxNumber;
	}
	static float MaxNumberInArray(float arr[], int arrLength)
	{
		float MaxNumber = 0;
		for (int i = 0; i < arrLength; i++)
			if (arr[i] > MaxNumber)
				MaxNumber = arr[i];
		return MaxNumber;
	}
	static short MaxNumberInArray(short arr[], int arrLength)
	{
		int MaxNumber = 0;
		for (int i = 0; i < arrLength; i++)
			if (arr[i] > MaxNumber)
				MaxNumber = arr[i];
		return MaxNumber;
	}
	static double MaxNumberInArray(double arr[], int arrLength)
	{
		double MaxNumber = 0;
		for (int i = 0; i < arrLength; i++)
			if (arr[i] > MaxNumber)
				MaxNumber = arr[i];
		return MaxNumber;
	}
	static long long MaxNumberInArray(long long arr[], int arrLength)
	{
		long long MaxNumber = 0;
		for (int i = 0; i < arrLength; i++)
			if (arr[i] > MaxNumber)
				MaxNumber = arr[i];
		return MaxNumber;
	}
	static int MinNumberInArray(int arr[], int arrLength)
	{
		int Min = 0;
		Min = arr[0];
		for (int i = 0; i < arrLength; i++)
			if (arr[i] < Min)
				Min = arr[i];
		return Min;
	}
	static float MinNumberInArray(float arr[], int arrLength)
	{
		float Min = 0;
		Min = arr[0];
		for (int i = 0; i < arrLength; i++)
			if (arr[i] < Min)
				Min = arr[i];
		return Min;
	}
	static short MinNumberInArray(short arr[], int arrLength)
	{
		short Min = 0;
		Min = arr[0];
		for (int i = 0; i < arrLength; i++)
			if (arr[i] < Min)
				Min = arr[i];
		return Min;
	}
	static double MinNumberInArray(double arr[], int arrLength)
	{
		double Min = 0;
		Min = arr[0];
		for (int i = 0; i < arrLength; i++)
			if (arr[i] < Min)
				Min = arr[i];
		return Min;
	}
	static long long MinNumberInArray(long long arr[], int arrLength)
	{
		long long Min = 0;
		Min = arr[0];
		for (int i = 0; i < arrLength; i++)
			if (arr[i] < Min)
				Min = arr[i];
		return Min;
	}
	static void ShuffleArrayOfNumber(int arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			clscMath::Swap(arr[clscMath::RandomIntNum(1, arrLength) - 1], arr[clscMath::RandomIntNum(1, arrLength) - 1]);
	}
	static void ShuffleArray(string arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			clsUtil::Swap(arr[RandomIntNum(1, arrLength) - 1], arr[RandomIntNum(1, arrLength) - 1]);
	}
	static void FillArrayWithRandomNumber(int arr[], int& arrLength, int From, int To)
	{
		cout << "\n Enter array length \n";
		cin >> arrLength;
		for (int i = 0; i < arrLength; i++)
			arr[i] = clscMath::RandomIntNum(From, To);
	}
	static void AddNumberInArray(int Number, int arr[], int& arrLength)
	{
		arrLength++; arr[arrLength - 1] = Number;
	}
	static void AddNumberInArray(float Number, float arr[], int& arrLength)
	{
		arrLength++; arr[arrLength - 1] = Number;
	}
	static void AddNumberInArray(short Number, short arr[], int& arrLength)
	{
		arrLength++; arr[arrLength - 1] = Number;
	}
	static void AddNumberInArray(double Number, double arr[], int& arrLength)
	{
		arrLength++; arr[arrLength - 1] = Number;
	}
	static void AddNumberInArray(long long Number, long long arr[], int& arrLength)
	{
		arrLength++;
		arr[arrLength - 1] = Number;
	}
	static void AddCharacterInArray(char Character, char arr[], int& arrLength)
	{
		arrLength++; arr[arrLength - 1] = Character;
	}
	static void AddStringInArray(string Text, string arr[], int& arrLength)
	{
		arrLength++; arr[arrLength - 1] = Text;
	}
	static void CopyArray(int arrSource[], int arrDestination[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			arrDestination[i] = arrSource[i];
	}
	static void CopyArray(float arrSource[], float arrDestination[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			arrDestination[i] = arrSource[i];
	}
	static void CopyArray(short arrSource[], short arrDestination[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			arrDestination[i] = arrSource[i];
	}
	static void CopyArray(double arrSource[], double arrDestination[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			arrDestination[i] = arrSource[i];
	}
	static void CopyArray(long long arrSource[], long long arrDestination[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			arrDestination[i] = arrSource[i];
	}
	static void CopyArray(char arrSource[], char arrDestination[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			arrDestination[i] = arrSource[i];
	}
	static void CopyArray(string arrSource[], string arrDestination[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			arrDestination[i] = arrSource[i];
	}
	static void AddDistinctNumberToArray(int arrTest[], int arrDistinct[], int& arr2Length)
	{
		for (int i = 0; i < 9; i++)
			if (arrTest[i] != arrTest[i + 1])
				AddNumberInArray(arrTest[i], arrDistinct, arr2Length);
	}
	static void AddDistinctNumberToArray(float arrTest[], float arrDistinct[], int& arr2Length)
	{
		for (int i = 0; i < 9; i++)
			if (arrTest[i] != arrTest[i + 1])
				AddNumberInArray(arrTest[i], arrDistinct, arr2Length);
	}
	static void AddDistinctNumberToArray(short arrTest[], short arrDistinct[], int& arr2Length)
	{
		for (int i = 0; i < 9; i++)
			if (arrTest[i] != arrTest[i + 1])
				AddNumberInArray(arrTest[i], arrDistinct, arr2Length);
	}
	static void AddDistinctNumberToArray(int arrTest[], double arrDistinct[], int& arr2Length)
	{
		for (int i = 0; i < 9; i++)
			if (arrTest[i] != arrTest[i + 1])
				AddNumberInArray(arrTest[i], arrDistinct, arr2Length);
	}
	static void AddDistinctNumberToArray(long long arrTest[], long long arrDistinct[], int& arr2Length)
	{
		for (int i = 0; i < 9; i++)
			if (arrTest[i] != arrTest[i + 1])
				AddNumberInArray(arrTest[i], arrDistinct, arr2Length);
	}
	static void CopyArrayUsingAddNumber(int arrSource[], int arrDestination[], int arrLength, int& arrDestinationLength)
	{
		for (int i = 0; i < arrLength; i++)
			AddNumberInArray(arrSource[i], arrDestination, arrDestinationLength);
	}
	static void CopyPrimeNumbers(int arrSource[], int arrDestination[], int arrLength, int& arr2Length)
	{
		int Counter = 0;
		for (int i = 0; i < arrLength; i++)
		{
			if (clscMath::IsPrime(arrSource[i]))
			{
				arrDestination[Counter] = arrSource[i];
				Counter++;
			}
		}
		arr2Length = --Counter;
	}
	static void CopyOddNumbers(int arrSource[], int arrDestination[], int arrLength, int& arr2Length)
	{
		int Counter = 0;
		for (int i = 0; i < arrLength; i++)
		{
			if (clscMath::IsOdd(arrSource[i]))
			{
				arrDestination[Counter] = arrSource[i];
				Counter++;
			}
		}
		arr2Length = --Counter;
	}
	static void CopyEvenNumbers(int arrSource[], int arrDestination[], int arrLength, int& arr2Length)
	{
		int Counter = 0;
		for (int i = 0; i < arrLength; i++)
		{
			if (clscMath::IsEven(arrSource[i]))
			{
				arrDestination[Counter] = arrSource[i];
				Counter++;
			}
		}
		arr2Length = --Counter;
	}
	static void CopyPerfectNumbers(int arrSource[], int arrDestination[], int arrLength, int& arr2Length)
	{
		int Counter = 0;
		for (int i = 0; i < arrLength; i++)
		{
			if (clscMath::IsPerfect(arrSource[i]))
			{
				arrDestination[Counter] = arrSource[i];
				Counter++;
			}
		}
		arr2Length = --Counter;
	}
	static void CopyPalindromeNumbers(int arrSource[], int arrDestination[], int arrLength, int& arr2Length)
	{
		int Counter = 0;
		for (int i = 0; i < arrLength; i++)
		{
			if (clscMath::IsPalindrome(arrSource[i]))
			{
				arrDestination[Counter] = arrSource[i];
				Counter++;
			}
		}
		arr2Length = --Counter;
	}
	static short FindPositionOfNumberInArray(int Number, int arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			if (arr[i] == Number)
				return i;
		return -1;
	}
	static bool IsNumberInArray(int Number, int arr[], int arrLength)
	{
		return FindPositionOfNumberInArray(Number, arr, arrLength) != -1;
	}
	static bool IsNumberInArray(float NumberToCheck, float arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] == NumberToCheck)
				return 1;
		}
		return 0;
	}
	static bool IsNumberInArray(short NumberToCheck, short arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] == NumberToCheck)
				return 1;
		}
		return 0;
	}
	static bool IsNumberInArray(double NumberToCheck, double arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] == NumberToCheck)
				return true;
		}
		return false;
	}
	static bool IsNumberInArray(long long NumberToCheck, long long arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			if (arr[i] == NumberToCheck)
				return 1;
		return 0;
	}
	static bool IsCharacterInArray(char CharacterToCheck, char arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			if (arr[i] == CharacterToCheck)
				return 1;
		return 0;
	}
	static bool IsStringInArray(string TextToCheck, string arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			if (arr[i] == TextToCheck)
				return 1;
		return 0;
	}
	static int TimesNumberRepeatedInArray(int Number, int arr[], int arrLength)
	{
		int count = 0;
		for (int i = 0; i <= arrLength - 1; i++)
			if (Number == arr[i])
				count++;
		return count;
	}
	static int TimesNumberRepeatedInArray(float Number, float arr[], int arrLength)
	{
		int count = 0;
		for (int i = 0; i <= arrLength - 1; i++)
			if (Number == arr[i])
				count++;
		return count;

	}
	static int TimesNumberRepeatedInArray(short Number, short arr[], int arrLength)
	{
		int count = 0;
		for (int i = 0; i <= arrLength - 1; i++)
			if (Number == arr[i])
				count++;
		return count;

	}
	static int TimesNumberRepeatedInArray(double Number, double arr[], int arrLength)
	{
		int count = 0;
		for (int i = 0; i <= arrLength - 1; i++)
			if (Number == arr[i])
				count++;
		return count;

	}
	static int TimesNumberRepeatedInArray(long long Number, long long arr[], int arrLength)
	{
		int count = 0;
		for (int i = 0; i <= arrLength - 1; i++)
			if (Number == arr[i])
				count++;
		return count;

	}
	static int TimesCharacterRepeatedInArray(char Caracter, char arr[], int arrLength)
	{
		int count = 0;
		for (int i = 0; i <= arrLength - 1; i++)
			if (Caracter == arr[i])
				count++;
		return count;

	}
	static int TimesTextRepeatedInArray(string Text, string arr[], int arrLength)
	{
		int count = 0;
		for (int i = 0; i <= arrLength - 1; i++)
			if (Text == arr[i])
				count++;
		return count;

	}
	static void Sum2Arrays(int arr[], int arr2[], int arr3[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			arr3[i] = arr[i] + arr2[i];
	}
	static void Sum2Arrays(float arr[], float arr2[], float arr3[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			arr3[i] = arr[i] + arr2[i];
	}
	static void Sum2Arrays(short arr[], short arr2[], short arr3[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			arr3[i] = arr[i] + arr2[i];
	}
	static void Sum2Arrays(double arr[], double arr2[], double arr3[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			arr3[i] = arr[i] + arr2[i];
	}
	static void Sum2Arrays(long long arr[], long long arr2[], long long arr3[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			arr3[i] = arr[i] + arr2[i];
	}
	static int SumArrayNumbers(int arr[], int arrLength)
	{
		int Sum = 0;
		for (int i = 0; i < arrLength; i++)
			Sum += arr[i];
		return Sum;
	}
	static float SumArrayNumbers(float arr[], int arrLength)
	{
		float Sum = 0;
		for (int i = 0; i < arrLength; i++)
			Sum += arr[i];
		return Sum;
	}
	static short SumArrayNumbers(short arr[], int arrLength)
	{
		short Sum = 0;
		for (int i = 0; i < arrLength; i++)
			Sum += arr[i];
		return Sum;
	}
	static double SumArrayNumbers(double arr[], int arrLength)
	{
		double Sum = 0;
		for (int i = 0; i < arrLength; i++)
			Sum += arr[i];
		return Sum;
	}
	static long long SumArrayNumbers(long long arr[], int arrLength)
	{
		long long Sum = 0;
		for (int i = 0; i < arrLength; i++)
			Sum += arr[i];
		return Sum;
	}
	static float AverageArrayNumbers(int arr[], int arrLength)
	{
		return (float)SumArrayNumbers(arr, arrLength) / arrLength; 
	}
	static float AverageArrayNumbers(float arr[], int arrLength) 
	{ 
		return (float)SumArrayNumbers(arr, arrLength) / arrLength; 
	}
	static float AverageArrayNumbers(short arr[], int arrLength) 
	{ 
		return (float)SumArrayNumbers(arr, arrLength) / arrLength; 
	}
	static float AverageArrayNumbers(double arr[], int arrLength)
	{ 
		return (float)SumArrayNumbers(arr, arrLength) / arrLength;
	}
	static float AverageArrayNumbers(long long arr[], int arrLength)
	{ 
		return (float)SumArrayNumbers(arr, arrLength) / arrLength; 
	}





};

