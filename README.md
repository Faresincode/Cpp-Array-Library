# Cpp-Array-Library
A simple and efficient C++ library  👍 that provides ready-to-use functions for working with arrays. Includes methods for printing, shuffling, copying, counting odd/even/prime numbers, finding min/max values, summing, and calculating averages.  Perfect for students and developers who want to save time handling arrays in their projects.
------------------------------------------------------------
Features
------------------------------------------------------------
- Print arrays (int, float, short, double, long long, char, string)
- Shuffle arrays (numbers and strings)
- Count numbers (odd, even, positive, negative)
- Count frequency of digits in numbers
- Find maximum and minimum values
- Add new elements to arrays
- Copy arrays (all types)
- Extract distinct, prime, odd, even, perfect, and palindrome numbers
- Search arrays (find, check existence)
- Count repetitions of elements
- Sum two arrays element-wise
- Sum and average of array elements

------------------------------------------------------------
File Structure
------------------------------------------------------------
project/
│── clsArray.h     # Array utility class header
│── clscMath.h     # Required math helpers
│── clsUtil.h      # Used for some array operations
│── main.cpp       # Example usage

------------------------------------------------------------
Example Applications and Outputs
------------------------------------------------------------

[Example 1] Printing an Array
------------------------------
Code:
    int arr[5] = {1, 2, 3, 4, 5};
    clsArray::PrintArrayOfNumber(arr, 5);

Output:
    1 2 3 4 5


[Example 2] Counting Odd and Even Numbers
-----------------------------------------
Code:
    int arr[6] = {1, 2, 3, 4, 5, 6};
    cout << "Odd count: " << clsArray::CountOddNumberInArray(arr, 6) << endl;
    cout << "Even count: " << clsArray::CountEvenNumberInArray(arr, 6) << endl;

Output:
    Odd count: 3
    Even count: 3


[Example 3] Finding Min, Max, Sum, and Average
-----------------------------------------------
Code:
    int arr[6] = {10, 20, 5, 30, 15, 25};
    cout << "Max: " << clsArray::MaxNumberInArray(arr, 6) << endl;
    cout << "Min: " << clsArray::MinNumberInArray(arr, 6) << endl;
    cout << "Sum: " << clsArray::SumArrayNumbers(arr, 6) << endl;
    cout << "Average: " << clsArray::AverageArrayNumbers(arr, 6) << endl;

Output:
    Max: 30
    Min: 5
    Sum: 105
    Average: 17.5


[Example 4] Shuffling an Array
-------------------------------
Code:
    int arr[5] = {1, 2, 3, 4, 5};
    clsArray::ShuffleArrayOfNumber(arr, 5);
    clsArray::PrintArrayOfNumber(arr, 5);

Sample Output:
    3 1 5 2 4


[Example 5] Copy Prime Numbers from Array
------------------------------------------
Code:
    int arr[6] = {2, 4, 5, 9, 11, 12};
    int primes[6], len = 0;
    clsArray::CopyPrimeNumbers(arr, primes, 6, len);
    clsArray::PrintArrayOfNumber(primes, len);

Output:
    2 5 11

------------------------------------------------------------
License
------------------------------------------------------------
This project is open-source and available under the MIT License.
