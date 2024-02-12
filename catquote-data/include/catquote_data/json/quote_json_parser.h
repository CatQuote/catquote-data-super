#ifndef CATQUOTE_DATA_QUOTE_JSON_PARSER_H
#define CATQUOTE_DATA_QUOTE_JSON_PARSER_H

#ifdef CATQUOTE_COMPILE_FLAGS_ENABLE_JSON

#include <rapidjson/pointer.h>
#include <catquote_data/core/quote_parser.h>

class QuoteJsonParser: public QuoteParser {
public:
    QuoteJsonParser();

private:
    rapidjson::Document m_document;

protected:
    Quote *m_result;

private:
    Quote m_ret;

public:
    void parse(const char *text, bool &status) override;
    void * getResult() const override;
};

#endif

#endif //CATQUOTE_DATA_QUOTE_JSON_PARSER_H
