#ifndef CATQUOTE_DATA_SUPER_QUOTE_PARSER_H
#define CATQUOTE_DATA_SUPER_QUOTE_PARSER_H

#include <catquote_data/core/quote.h>

class QuoteParser{
public:
    QuoteParser();
protected:
    Quote m_result;
public:
    virtual void parse(const char *text, bool &status) = 0;
    virtual void *getResult() const = 0;
};

#endif //CATQUOTE_DATA_SUPER_QUOTE_PARSER_H
