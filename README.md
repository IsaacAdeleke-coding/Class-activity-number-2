# Tax Calculation Program - Class Activity 2

## Overview

This program calculates the state and county taxes based on a given total sales amount. The tax rates for state and county are fixed at 4% and 2%, respectively. The program then computes the total tax by summing the state and county taxes and displays all the results.

## Features

- **Total Sales Input**: The program uses a predefined total sales amount (`$95,000.00`).
- **Tax Calculation**: The program calculates the state and county taxes based on their respective rates.
- **Output**: Displays the total sales, state tax, county tax, and the total tax payable.

## Program Breakdown

The main steps of the program include:
1. **Defining Variables**:
   - `totalSales`: The total sales amount (`$95,000.00`).
   - `stateTaxRate`: The state tax rate, set at `4%`.
   - `countyTaxRate`: The county tax rate, set at `2%`.
   
2. **Calculating Taxes**:
   - `stateTax`: Calculated as `totalSales * stateTaxRate`.
   - `countyTax`: Calculated as `totalSales * countyTaxRate`.
   - `totalTax`: The sum of `stateTax` and `countyTax`.
   
3. **Displaying Results**:
   The program outputs the total sales, state tax, county tax, and total tax payable to the console.

## Example Output

