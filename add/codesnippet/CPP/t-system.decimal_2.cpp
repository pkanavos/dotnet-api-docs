using namespace System;


void main()
{
   Decimal dividend = Decimal::One;
   Decimal divisor = 3;
   // The following displays 1.00 to the console
   Console::WriteLine(Math::Round(dividend/divisor * divisor, 2));   	
}