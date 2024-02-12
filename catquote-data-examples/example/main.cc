#include <catquote_data/json/quote_json_array_parser.h>

int main() {
    std::string input = "[{\"quote_id\":\"12a98e07-1eab-c3e1-c01a-f67594bb8707\",\"quote_text\":\"Hello\"}]";
    QuoteJsonArrayParser quoteJsonArrayParser;
    bool status;
    quoteJsonArrayParser.parse(input.c_str(), status);
    auto *quoteVector = (QuoteVector *) quoteJsonArrayParser.getResult();
    if(status) {
        printf("%s %s", quoteVector->get(0).quote_id().getString().c_str(), quoteVector->get(0).quote_text().c_str());
    }
    return 0;
}