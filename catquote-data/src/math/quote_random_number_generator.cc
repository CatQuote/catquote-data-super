#include <catquote_data/math/quote_random_number_generator.h>

std::vector<uint8_t> QuoteRandomNumberGenerator::genRandomBytes(int num) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 255);
    std::vector<uint8_t> vec(num);
    for(int i = 0; i < num; i++){
        vec.at(i) = dis(gen);
    }
    return vec;
}
