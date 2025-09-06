# clsArray - Array Utilities in C++

This repository provides a powerful utility class ✨  **`clsArray`** in C++ that implements various array operations such as printing, searching, counting, adding, copying, shuffling, and performing numeric computations on arrays of different types.
---

## 📌 Features

- Print arrays of different types (`int`, `float`, `short`, `double`, `long long`, `string`, `char`)
- Count **odd, even, positive, negative numbers**
- Find **maximum and minimum** values in arrays
- Shuffle arrays randomly
- Fill arrays with random numbers
- Add numbers, characters, or strings to arrays dynamically
- Copy arrays and extract subsets like **prime, odd, even, perfect, palindrome numbers**
- Check existence of values in arrays (`IsNumberInArray`, `IsStringInArray`, etc.)
- Count frequency of numbers, characters, or strings
- Perform **sum and average** operations on arrays
- Add distinct numbers to a new array

---

## 📂 File Structure

- **`clsArray.h`** → Main header file containing the `clsArray` class.
- **`clscMath.h`** → Helper math utilities (used for checks like `IsOdd`, `IsPrime`, etc.).
- **`clsUtil.h`** → Utility functions (used for swapping, etc.).
- **`main.cpp`** → Example usage and test file.

---

## 🚀 Example Usage

### Example 1: Print an Array

```cpp
#include <iostream>
#include "clsArray.h"

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    clsArray::PrintArrayOfNumber(arr, 5);
    return 0;
}
```

**Output:**
```
1 2 3 4 5
```

---

### Example 2: Count Odd and Even Numbers

```cpp
#include <iostream>
#include "clsArray.h"

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    std::cout << "Odd Count: " << clsArray::CountOddNumberInArray(arr, 6) << std::endl;
    std::cout << "Even Count: " << clsArray::CountEvenNumberInArray(arr, 6) << std::endl;
    return 0;
}
```

**Output:**
```
Odd Count: 3
Even Count: 3
```

---

### Example 3: Find Max and Min

```cpp
#include <iostream>
#include "clsArray.h"

int main() {
    int arr[5] = {12, 45, 7, 32, 19};
    std::cout << "Max: " << clsArray::MaxNumberInArray(arr, 5) << std::endl;
    std::cout << "Min: " << clsArray::MinNumberInArray(arr, 5) << std::endl;
    return 0;
}
```

**Output:**
```
Max: 45
Min: 7
```

---

### Example 4: Shuffle an Array

```cpp
#include <iostream>
#include "clsArray.h"

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    clsArray::ShuffleArrayOfNumber(arr, 5);
    clsArray::PrintArrayOfNumber(arr, 5);
    return 0;
}
```

**Output (example run):**
```
30 50 10 40 20
```

---

### Example 5: Sum and Average

```cpp
#include <iostream>
#include "clsArray.h"

int main() {
    int arr[4] = {10, 20, 30, 40};
    std::cout << "Sum: " << clsArray::SumArrayNumbers(arr, 4) << std::endl;
    std::cout << "Average: " << clsArray::AverageArrayNumbers(arr, 4) << std::endl;
    return 0;
}
```

**Output:**
```
Sum: 100
Average: 25
```

---

## 🔧 Requirements

- C++ compiler supporting C++11 or later

---

## 📜 License

This project is licensed under the MIT License.  
You are free to use, modify, and distribute it with proper attribution.

---

## 🤝 Contribution

Contributions, issues, and feature requests are welcome!  
Feel free to fork the repo and submit pull requests.

