#ifndef CATQUOTE_DATA_SUPER_QUOTE_JSON_WRITER_H
#define CATQUOTE_DATA_SUPER_QUOTE_JSON_WRITER_H

#ifdef CATQUOTE_COMPILE_FLAGS_ENABLE_JSON

#define RAPIDJSON_HAS_STDSTRING 1

#include <rapidjson/pointer.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/writer.h>
#include <catquote_data/core/quote_writer.h>

class QuoteJsonWriter: public QuoteWriter {
public:
    QuoteJsonWriter();

public:
    void asString(std::string &ret) const override;
};

#endif

#endif //CATQUOTE_DATA_SUPER_QUOTE_JSON_WRITER_H
