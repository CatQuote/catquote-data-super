#include <catquote_data/math/util/quote_positional_notation_converter.h>

std::string QuotePositionalNotationConverter::decimalToHexadecimal(int x) {
    std::stringstream ss;
    ss << std::hex << x;
    return ss.str();
}

int QuotePositionalNotationConverter::HexadecimalToDecimal(std::string x) {
    int n = x.length();
    int ret = 0;
    for(int i = 0; i < n; i++){
        if(x[i] >= '0' && x[i] <= '9'){
            ret += (x[i] - '0');
        } else if(x[i] >= 'a' && x[i] <= 'f') {
            ret += (x[i] - 'a' + 10);
        } else if(x[i] >= 'A' && x[i] <= 'F') {
            ret += (x[i] - 'A' + 10);
        }
        if(i < n-1){
            ret *= 16;
        }
    }
    return ret;
}