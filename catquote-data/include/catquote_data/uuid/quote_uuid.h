#ifndef CATQUOTE_DATA_SUPER_QUOTE_UUID_H
#define CATQUOTE_DATA_SUPER_QUOTE_UUID_H

#include <cstdint>
#include <vector>
#include <catquote_data/math/util/quote_positional_notation_converter.h>

class QuoteUUID {
public:
    QuoteUUID();

    explicit QuoteUUID(std::string str);

    explicit QuoteUUID(std::vector<uint8_t> s);

private:
    std::vector<uint8_t> m_s;

public:
    std::string getString();

};

#endif //CATQUOTE_DATA_SUPER_QUOTE_UUID_H
