#ifndef CATQUOTE_DATA_SUPER_QUOTE_POSITIONAL_NOTATION_CONVERTER_H
#define CATQUOTE_DATA_SUPER_QUOTE_POSITIONAL_NOTATION_CONVERTER_H

#include <iostream>
#include <sstream>

class QuotePositionalNotationConverter {
public:
    std::string static decimalToHexadecimal(int x);
    int static HexadecimalToDecimal(std::string x);
};

#endif //CATQUOTE_DATA_SUPER_QUOTE_POSITIONAL_NOTATION_CONVERTER_H
