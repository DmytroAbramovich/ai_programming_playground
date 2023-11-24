#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;
int main()
{
    char name[100];
    double sum, rate, total_amount;    
    int years, period;
    printf("Enter your name:");
    scanf("%99[^\n]", name);
    printf("Enter the principal amount:");
    scanf("%lf",&sum);
    printf("Enter the rate fo interest in percentage:");
    scanf("%lf",&rate);
    printf("Enter the number of years:");
    scanf("%d",&years);
    printf("Enter the number of times interest is compounded per year (e.g., 1 for annually, 4 for quarterly, 12 for monthly):");
    scanf("%d",&period);
    total_amount = sum * pow((1 + (rate/100)/period), period*years);
    std::cout << "Hello, " << name << endl;
    std::cout << "The compound interest for a principal of " << sum << " at a rate of " << rate << " % compounded " << period << " times a year for " << years << " years is: " << total_amount;
}