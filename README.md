# Cpp-Array-Library
A simple and efficient C++ library  👍 that provides ready-to-use functions for working with arrays. Includes methods for printing, shuffling, copying, counting odd/even/prime numbers, finding min/max values, summing, and calculating averages.  Perfect for students and developers who want to save time handling arrays in their projects.
------------------------------------------------------------
Features
------------------------------------------------------------
- Printing
  - Print arrays of numbers (int, float, short, double, long long)
  - Print arrays of char and string

- Counting
  - Odd / Even numbers
  - Positive / Negative numbers
  - Digit frequency inside a number

- Math on Arrays
  - Maximum and minimum values
  - Sum and average of elements
  - Element-wise sum of two arrays

- Array Operations
  - Shuffle arrays
  - Add new elements (number, character, string)
  - Copy arrays
  - Extract distinct numbers
  - Extract prime, odd, even, perfect, and palindrome numbers

- Search
  - Find position of an element
  - Check if a number, character, or string exists
  - Count repetitions of numbers, characters, or strings

------------------------------------------------------------
File Structure
------------------------------------------------------------
project/
│── clsArray.h     # Array utility class header
│── clscMath.h     # Math helpers (odd, even, prime, etc.)
│── clsUtil.h      # Utility functions used by clsArray
│── main.cpp       # Example usage

------------------------------------------------------------
Example Usage
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


[Example 5] Copying Prime Numbers
----------------------------------
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

