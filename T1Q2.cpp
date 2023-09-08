#include <iostream>
#include <limits>

using namespace std;

int main() 
{
    cout << "Range of char: " << static_cast<int>(numeric_limits<char>::min()) << " to " << static_cast<int>(numeric_limits<char>::max()) << endl;
    cout << "Range of short int: " << numeric_limits<short int>::min() << " to " << numeric_limits<short int>::max() << endl;
    cout << "Range of long int: " << numeric_limits<long int>::min() << " to " << numeric_limits<long int>::max() << endl;
    cout << "Range of double: " << numeric_limits<double>::lowest() << " to " << numeric_limits<double>::max() << endl;

    return 0;
}
