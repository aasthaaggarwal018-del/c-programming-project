# c programming project

# Employee Salary Calculator in C

## 📌 Project Overview

The Employee Salary Calculator is a simple C programming project that calculates an employee's salary, allowances, deductions, and final net salary. It uses **structures, functions, conditional statements, and basic arithmetic operations**.

## 🎯 Objectives

- To understand structures in C.
- To learn how to use functions.
- To calculate employee allowances and deductions.
- To calculate gross salary and net salary.
- To practise taking input from the user and displaying output.

## 🛠️ Technologies Used

- **Programming Language:** C
- **Code Editor:** Visual Studio Code (VS Code)
- **Compiler:** GCC (MinGW on Windows, if installed)

## ✨ Features

- Accepts employee ID, name, and basic salary.
- Calculates House Rent Allowance (HRA).
- Calculates Dearness Allowance (DA).
- Calculates other allowances.
- Calculates gross salary.
- Calculates Provident Fund (PF).
- Calculates professional tax using an `if-else` statement.
- Calculates and displays net salary.

## 🧮 Salary Calculation Rules

The following example rates are used in this project:

| Component | Calculation |
|---|---|
| HRA | 20% of basic salary |
| DA | 10% of basic salary |
| Other Allowance | 5% of basic salary |
| PF | 12% of basic salary |
| Professional Tax | ₹200 if basic salary is greater than ₹15,000; otherwise ₹0 |

**Gross Salary = Basic Salary + HRA + DA + Other Allowance**

**Total Deductions = PF + Professional Tax**

**Net Salary = Gross Salary − Total Deductions**

*Note: These are illustrative rates for this academic project, not official payroll rules.*

## 📂 Project Structure

```text
EmployeeSalary/
├── employee_salary.c
└── README.md
```

## ▶️ How to Run the Program

1. Install Visual Studio Code and a C compiler such as GCC.
2. Open the project folder in VS Code.
3. Open the terminal using **Terminal → New Terminal**.
4. Compile the program:

   ```bash
   gcc employee_salary.c -o employee_salary
   ```

5. Run the program on Windows:

   ```bash
   .\employee_salary.exe
   ```

## 🧪 Sample Input

```text
Enter employee ID: 101
Enter employee name: Rahul
Enter basic salary: 20000
```

## 📤 Expected Output

```text
HRA = 4000.00
DA = 2000.00
Other Allowance = 1000.00
Gross Salary = 27000.00
PF = 2400.00
Professional Tax = 200.00
Net Salary = 24400.00
```

*Output labels may differ slightly depending on the program's `printf()` statements.*

## 📚 Concepts Used

- **Structure (`struct`):** Groups employee details and salary components.
- **Functions:** Performs salary calculations.
- **Conditional Statements (`if-else`):** Determines professional tax.
- **Input/Output:** Uses `scanf()` and `printf()`.
- **Arithmetic Operators:** Performs salary calculations.

## 🚀 Future Improvements

- Support employee names containing spaces.
- Calculate salaries for multiple employees.
- Add more allowance and deduction categories.
- Validate user input and prevent negative salaries.
- Store employee records in a file.

## 👨‍🎓 Conclusion

This project demonstrates how C programming concepts can be applied to a practical salary calculation problem. It helps beginners understand structures, functions, conditional statements, and arithmetic calculations through a simple employee payroll system.
