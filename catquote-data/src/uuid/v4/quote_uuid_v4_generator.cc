#include <catquote_data/uuid/v4/quote_uuid_v4_generator.h>

QuoteUUIDv4Generator::QuoteUUIDv4Generator(): QuoteUUIDGenerator() {}

std::vector<uint8_t> QuoteUUIDv4Generator::genRandomUUIDv4Bytes() {
    auto t = QuoteRandomNumberGenerator::genRandomBytes(16);
    // RFC 4122
    // clock_seq_hi_and_reserved
    t.at(0) &= 0xFB;
    t.at(0) |= 0x02;
    // time_hi_and_version
    t.at(1) &= 0xE9; // Msb 0 && Msb 2 && Msb 3
    t.at(1) |= 0x08; // Msb 1
    return t;
}

QuoteUUID QuoteUUIDv4Generator::genRandomUUIDv4() {
    return {
        genRandomUUIDv4Bytes()
    };
}
