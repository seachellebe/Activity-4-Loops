#include <iostream>
using namespace std;
int main() {
    
    int year = 1; 
    int product = 0;
    int sum = 0;
    
    for (year = 1; year <= 20; year++) {
        product = 365 * year;
        sum = sum + product;
    }
    cout << product << " days of existence on earth";
        
    return 0;
}
