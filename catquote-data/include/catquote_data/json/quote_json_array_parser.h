#ifndef CATQUOTE_DATA_SUPER_QUOTE_JSON_ARRAY_PARSER_H
#define CATQUOTE_DATA_SUPER_QUOTE_JSON_ARRAY_PARSER_H

#ifdef CATQUOTE_COMPILE_FLAGS_ENABLE_JSON

#include <rapidjson/writer.h>
#include <rapidjson/stringbuffer.h>
#include <catquote_data/core/quote_parser.h>
#include <catquote_data/core/quote_vector.h>
#include <catquote_data/json/quote_json_parser.h>

class QuoteJsonArrayParser: public QuoteParser{
public:
    QuoteJsonArrayParser();

private:
    rapidjson::Document m_document;
    QuoteVector m_vec;
    QuoteVector *m_vector;

public:
    void parse(const char* text, bool &status) override;
    void *getResult() const override;
};

#endif

#endif //CATQUOTE_DATA_SUPER_QUOTE_JSON_ARRAY_PARSER_H
