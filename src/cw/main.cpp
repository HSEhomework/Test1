/*! \file       main.cpp
 *  \author     // TODO: put your name here
 *  \version    1.0
 *  \date       14.03.2022
 *
 *  Control Quiz Mar 14, 2022. Main module.
 */

#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cassert>

using SalaryTable = std::vector<std::vector<int>>;



std::vector<std::string> readEmployees(std::istream& istr, SalaryTable& salaryAll)
{
    std::vector<std::string> employees;

    // TODO: finish up with an implementation here...

    return employees;
}



void outputEmployeeAvg(std::ostream& ostr,
                       const std::vector<std::string>& employees,
                       const SalaryTable& salaryAll)
{
    // TODO: finish up with an implementation here...
}


//------------------------------------------------------------------------------
// Below is some tests you can use for checking your solutions
// !!! DO NOT REMOVE   #ifndef REMOVE4TESTING   PREPROCESSOR DIRECTIVES !!!
//------------------------------------------------------------------------------

#ifndef REMOVE4TESTING

// TODO: put the proper full path to the given file employees.csv in your system!!!
const char* CSV_FILE_NAME = "f:\\HSE\\training\\DSBA\\2021-22\\programming\\tests\\20220309-contest\\data\\employees.csv";

// Reads a file and fills up a collection of employees
void test1()
{
    // TODO: uncomment the following if you want to check your solution locally

//    std::ifstream inFile(CSV_FILE_NAME);
//    if(!inFile.is_open())
//    {
//        //std::cerr << "Can't open file";
//        throw std::runtime_error("Can't open file");
//    }

//    SalaryTable salaryAll;
//    std::vector<std::string> employees = readEmployees(inFile, salaryAll);

//    outputEmployeeAvg(std::cout, employees, salaryAll);
}


int main()
{
    test1();
    return 0;
}

#endif // #ifndef REMOVE4TEST
