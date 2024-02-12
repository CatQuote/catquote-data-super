#include <catquote_data/core/quote_writer.h>

QuoteWriter::QuoteWriter() {

}

void QuoteWriter::pushBackQuote(QuoteUUID quote_id, const char *quote_text) {
    this->pushBackQuote(Quote(quote_id, quote_text));
}

void QuoteWriter::pushBackQuote(Quote quote) {
    this->vec.pushBack(quote);
}

void QuoteWriter::popBackQuote() {
    this->vec.popBack();
}

QuoteVector QuoteWriter::asVector() const {
    return this->vec;
}
