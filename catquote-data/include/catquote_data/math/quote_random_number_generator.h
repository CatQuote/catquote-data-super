#ifndef CATQUOTE_DATA_SUPER_QUOTE_RANDOM_NUMBER_GENERATOR_H
#define CATQUOTE_DATA_SUPER_QUOTE_RANDOM_NUMBER_GENERATOR_H

#include <vector>
#include <random>

class QuoteRandomNumberGenerator {
public:
    static std::vector<uint8_t> genRandomBytes(int num);
};

#endif //CATQUOTE_DATA_SUPER_QUOTE_RANDOM_NUMBER_GENERATOR_H
