// remember you must use namespace std in this file
// if not defined in the file using this, then define this
#ifndef _LOAN_H_
#define _LOAN_H_

// basic includes
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

class Loan
{
    // datamembers to be kept private
private:
    std::string bankName;
    std::string borrowerName;
    double annualInterestRate;
    int numYears;
    double loanAmt;

    // class-level methods to be called
public:
    // constructors
    Loan() : bankName("Smithy's Banking"), borrowerName("UNKNOWN"), annualInterestRate(0.07), numYears(5), loanAmt(1000.00) {}

    Loan(std::string bName) : bankName("Smithy's Banking"), borrowerName(bName), annualInterestRate(0.07), numYears(5), loanAmt(1000.00) {}

    Loan(std::string bName, double anI) : bankName("Smithy's Banking"), borrowerName(bName), annualInterestRate(anI), numYears(5), loanAmt(1000.00) {}

    Loan(std::string bName, double anI, int y) : bankName("Smithy's Banking"), borrowerName(bName), annualInterestRate(anI), numYears(y), loanAmt(1000.00) {}

    // full paramenters
    Loan(std::string bankN, std::string bName, double anI, int y, double amt) : bankName(bankN), borrowerName(bName), annualInterestRate(anI), numYears(y), loanAmt(amt) {}

    // setters (void, requires input) & getters (constants, return type)

    // get
    const std::string getBankName() const
    { // put const after parameter to indicate that it does not change data
        return bankName;
    }

    const std::string getBorrowerName() const
    {
        return borrowerName;
    }

    const double getAnnualInterestRate() const
    {
        return annualInterestRate;
    }

    const int getNumYears() const
    {
        return numYears;
    }

    const double getLoanAmt() const
    {
        return loanAmt;
    }

    // set
    void setBankName(std::string bankN)
    {
        bankName = bankN;
    }

    void setBorrowerName(std::string bName)
    {
        borrowerName = bName;
    }

    void setAnnualInterestRate(double anI)
    {
        annualInterestRate = anI;
    }

    void setNumYears(int y)
    {
        numYears = y;
    }

    void setLoanAmt(double amt)
    {
        loanAmt = amt;
    }

    // print out a "receipt" using the sstream
    std::string loanStatement() const
    {                                // again using const here after parameters to show that data is not changed
        std::stringstream statement; // creating a stringsream object named statement
        statement << std::setw(30) << "Thank you for banking with " + bankName + " we appreciate your business!" << std::endl
                  << std::setw(30) << "Bank Name: " << std::setw(30) << bankName << std::endl
                  << std::setw(30) << "Borrower Name: " << std::setw(30) << borrowerName << std::endl
                  // need to convert the non-string types in order to concatinate it with the string
                  // using << is different than concatination, make sure to used it unless you want to change the data!
                  // by importing <iomanip> we can use the fixed and setprecision functions to shorten the decimals - which means could not convert the data types so no concatination
                  << std::setw(30) << "Annual Interest Rate: " << std::fixed << std::setprecision(3) << std::setw(10) << annualInterestRate << std::endl
                  << std::setw(30) << "Loan Length (in years): " << std::setw(10) << numYears << std::endl
                  << std::setw(30) << "Loan Amount: " << std::fixed << std::setprecision(2) << std::setw(10) << loanAmt << std::endl;
        return statement.str(); //.str() is a sstream function that saves the text to the object statement
    }

    ~Loan(){};
};

#endif