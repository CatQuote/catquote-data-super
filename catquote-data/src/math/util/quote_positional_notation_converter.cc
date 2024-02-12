#include <catquote_data/math/util/quote_positional_notation_converter.h>

std::string QuotePositionalNotationConverter::decimalToHexadecimal(int x) {
    std::stringstream ss;
    ss << std::hex << x;
    return ss.str();
}
