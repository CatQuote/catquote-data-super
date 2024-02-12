#include <catquote_data/uuid/quote_uuid.h>

QuoteUUID::QuoteUUID(std::vector<uint8_t> s) {
    this->m_s = std::move(s);
}

std::string QuoteUUID::getString() {
    std::stringstream ss;
    int counter = 0;
    for(auto &v: this->m_s){
        std::string string = QuotePositionalNotationConverter::decimalToHexadecimal(v);
        ss << std::string(2 - string.length(), '0') << string;
        counter += 2;
        if(counter % 4 == 0 && counter != 4 && counter <= 20){
            ss << "-";
        }
    }
    return ss.str();
}
