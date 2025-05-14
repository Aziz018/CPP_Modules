### **Goal Explanation**

The goal of this exercise is to create a C++ program (`btc`) that calculates the value of Bitcoin (BTC) for given dates based on historical price data stored in a CSV file (`data.csv`). The program should:

1. **Read Input**:  
   - Take a file as input containing lines in the format `"date | value"`.  
   - Example:  
     ```
     2011-01-03 | 5
     2012-01-11 | 10
     ```

2. **Validate Input**:  
   - **Dates**: Must be in `YYYY-MM-DD` format and be valid (e.g., no `2023-02-30`).  
   - **Values**: Must be a positive number between `0` and `1000`.  

3. **Look Up Bitcoin Prices**:  
   - The program should read historical BTC prices from `data.csv` (format: `date,price`).  
   - If the exact date is not found, use the **closest earlier date**.  

4. **Calculate & Output Results**:  
   - Multiply the given value by the BTC price for that date.  
   - Example:  
     - If `2011-01-03` has a BTC price of `0.3`, then `5 BTC = 5 * 0.3 = 1.5`.  
   - Print results in the format:  
     ```
     2011-01-03 => 5 = 1.5
     ```

5. **Error Handling**:  
   - Invalid dates → `"Error: bad input => <input>"`  
   - Negative or too large values → `"Error: not a positive number."` or `"Error: too large a number."`  
   - Missing data → `"Error: no data available for date <date>"`  

6. **Use STL Containers**:  
   - At least one STL container (e.g., `std::map` for storing dates and prices efficiently).  

---

### **Roadmap to Solve the Problem**

#### **Step 1: Parse and Validate Dates**
- Write a helper function `bool isValidDate(date)` to check:
  - Correct `YYYY-MM-DD` format.
  - Valid year, month, and day (e.g., no `2023-13-01`).
- Example:
  ```cpp
  bool isValidDate(const std::string &date) {
      // Check format, year, month, day ranges
  }
  ```

#### **Step 2: Read and Store Bitcoin Prices**
- Read `data.csv` (assumed format: `date,price`).
- Store in `std::map<Date, float>` for efficient lookup.
  ```cpp
  std::map<Date, float> bitcoinPrices;
  ```

#### **Step 3: Process Input File**
- For each line in the input file:
  1. **Split** into `date | value`.
  2. **Validate** date and value.
  3. **Find closest date** if exact match doesn’t exist.
  4. **Calculate** `value * BTC price`.
  5. **Print** result or error.

#### **Step 4: Handle Edge Cases**
- **No exact date match?** → Find closest earlier date.  
  ```cpp
  auto it = bitcoinPrices.lower_bound(targetDate);
  if (it == bitcoinPrices.end()) it--; // Use last available date
  ```
- **Invalid input?** → Print appropriate error.  
- **Value out of range?** → Reject with error.  

#### **Step 5: Output Results**
- Format output as `"date => value = result"`.
- Example:
  ```cpp
  std::cout << date << " => " << value << " = " << result << std::endl;
  ```

---

### **Final Program Structure**
1. **`main()`**:  
   - Check command-line arguments.  
   - Load `data.csv` into `std::map<Date, float>`.  
   - Process input file.  

2. **`loadBitcoinPrices()`**:  
   - Reads `data.csv` and stores in a map.  

3. **`processInputFile()`**:  
   - Parses each line, validates, computes result.  

4. **`findClosestDate()`**:  
   - Uses `std::map::lower_bound()` to find the nearest date.  

5. **Error Handling**:  
   - Covers all invalid cases with clear messages.  

---

### **Example Execution**
#### **Input File (`input.txt`)**
```
2011-01-03 | 5
2011-01-09 | 1
2001-42-42 | 100
2012-01-11 | -50
```

#### **Output**
```
2011-01-03 => 5 = 1.5
2011-01-09 => 1 = 0.32
Error: bad input => 2001-42-42
Error: not a positive number.
```

---

### **Key Takeaways**
✅ **Use `std::map`** for efficient date lookups.  
✅ **Validate inputs strictly** (dates, numbers).  
✅ **Handle missing dates** by finding the closest available.  
✅ **Print formatted results** with proper errors.  

This roadmap ensures a structured approach to solving the problem while meeting all requirements. 🚀