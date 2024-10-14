//
//  main.cpp
//  Class activity number 2
//
//  Created by Isaac Adeleke on 9/8/24.
//

#include <iostream>

using namespace std;

int main() {
    // Define variables for total sales and tax rates
    double totalSales = 95000.0;  // Total sales amount
    double stateTaxRate = 0.04;   // 4% state tax rate
    double countyTaxRate = 0.02;  // 2% county tax rate

    // Calculate state and county taxes
    double stateTax = totalSales * stateTaxRate;   // State tax calculation
    double countyTax = totalSales * countyTaxRate; // County tax calculation

    // Calculate total tax
    double totalTax = stateTax + countyTax; // Total tax calculation

    // Display the results
    cout << "Total Sales: $" << totalSales << endl;  // Print total sales
    cout << "State Tax: $" << stateTax << endl;      // Print state tax
    cout << "County Tax: $" << countyTax << endl;    // Print county tax
    cout << "Total Tax to Pay: $" << totalTax << endl; // Print total tax

    return 0;
}
