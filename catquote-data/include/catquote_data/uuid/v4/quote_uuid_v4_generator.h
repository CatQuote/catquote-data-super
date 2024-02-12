#ifndef CATQUOTE_DATA_SUPER_QUOTE_UUID_V4_GENERATOR_H
#define CATQUOTE_DATA_SUPER_QUOTE_UUID_V4_GENERATOR_H

#include <catquote_data/uuid/quote_uuid.h>
#include <catquote_data/uuid/quote_uuid_generator.h>
#include <catquote_data/math/quote_random_number_generator.h>

class QuoteUUIDv4Generator: public QuoteUUIDGenerator{
public:
    QuoteUUIDv4Generator();
public:
    static std::vector<uint8_t> genRandomUUIDv4Bytes();
    static QuoteUUID genRandomUUIDv4();
};

#endif //CATQUOTE_DATA_SUPER_QUOTE_UUID_V4_GENERATOR_H
