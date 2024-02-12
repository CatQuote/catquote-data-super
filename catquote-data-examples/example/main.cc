#include <catquote_data/uuid/v4/quote_uuid_v4_generator.h>

int main() {
    auto v = QuoteUUIDv4Generator::genRandomUUIDv4();
    std::cout << v.getString() << std::endl;
    return 0;
}