// Copyright 2020 Ben Howenstein. All rights reserved.
//

#include <iostream>

unsigned int UnsignedMultiplyBy321(const unsigned int value)
{
    auto result = (value << 8) + (value << 6) + value;
    return result;
}

int SignedMultiplyBy321(const int value)
{
	auto result = (value << 8) + (value << 6) + value;
	return result;
}

int SignedDivideBy7(int value)
{
    auto quotient = 0;
    while ((value -= 7) >= 0)
    {
        ++quotient;
    }
    return quotient;
}

int main()
{
    using namespace std;

    cout << "SignedMultiplyBy321(59) = " << SignedMultiplyBy321(59) << "\n";
    cout << "SignedMultiplyBy321(-1) = " << SignedMultiplyBy321(-1) << "\n";
    cout << "SignedMultiplyBy321(-59) = " << SignedMultiplyBy321(-59) << "\n";
    cout << "SignedMultiplyBy321(2^23) = " << SignedMultiplyBy321(1 << 23) << "\n";         //  overflow
    cout << "UnsignedMultiplyBy321(2^23) = " << UnsignedMultiplyBy321(1<<23) << "\n";
    cout << "UnsignedMultiplyBy321(2^24) = " << UnsignedMultiplyBy321(1 << 24) << "\n";     //  overflow

    cout << "SignedDivideBy7(21) = " << SignedDivideBy7(21) << "\n";
    cout << "SignedDivideBy7(333) = " << SignedDivideBy7(333) << "\n";
}
