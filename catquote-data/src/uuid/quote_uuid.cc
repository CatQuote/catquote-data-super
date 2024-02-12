#include <catquote_data/uuid/quote_uuid.h>

QuoteUUID::QuoteUUID() = default;

QuoteUUID::QuoteUUID(std::string str) {
    std::stringstream ss;
    std::vector<uint8_t> vec;
    int counter = 0;
    int m_counter = 0;
    for(auto &v: str){
        if(v == '-') {
            m_counter += 1;
            continue;
        }
        counter += 1;
        if(counter % 2 == 0) {
            std::stringstream tmp_ss;
            tmp_ss << str.at(counter - 2 + m_counter) /* pre-v */ << str.at(counter - 1 + m_counter) /* v */;
            int x = QuotePositionalNotationConverter::HexadecimalToDecimal(tmp_ss.str());
            vec.push_back(x);
        }
    }
    this->m_s = vec;
}

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
