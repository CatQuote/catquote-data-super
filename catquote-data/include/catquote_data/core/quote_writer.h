#ifndef CATQUOTE_DATA_SUPER_QUOTE_WRITER_H
#define CATQUOTE_DATA_SUPER_QUOTE_WRITER_H

#include <catquote_data/core/quote_vector.h>

class QuoteWriter {
public:
    QuoteWriter();

protected:
    QuoteVector vec;

public:
    void pushBackQuote(int quote_id, const char *quote_text);
    void pushBackQuote(Quote quote);
    void popBackQuote();
    QuoteVector asVector() const;
    virtual void asString(std::string &ret) const = 0;
};

#endif //CATQUOTE_DATA_SUPER_QUOTE_WRITER_H
