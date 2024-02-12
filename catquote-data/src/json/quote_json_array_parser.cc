#ifdef CATQUOTE_COMPILE_FLAGS_ENABLE_JSON

#include <catquote_data/json/quote_json_array_parser.h>

QuoteJsonArrayParser::QuoteJsonArrayParser() {
    m_vector = {};
}

void QuoteJsonArrayParser::parse(const char *text, bool &status) {
    this->m_document.Parse(text);
    if(this->m_document.HasParseError() || !this->m_document.IsArray()){
        status = false;
        this->m_vector = nullptr;
        return;
    }
    QuoteJsonParser quoteJsonParser;
    for(auto &v : this->m_document.GetArray()) {
        if (!v.IsObject()) {
            status = false;
            this->m_vector = nullptr;
            return;
        }
        const char *obj_text;
        rapidjson::StringBuffer buffer;
        rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
        v.Accept(writer);
        obj_text = buffer.GetString();
        quoteJsonParser.parse(obj_text, status);
        if (status) {
            auto *quote = (Quote *) quoteJsonParser.getResult();
            m_vec.pushBack(*quote);
        } else {
            this->m_vector = nullptr;
            return;
        }
    }
    this->m_vector = &this->m_vec;
}

void *QuoteJsonArrayParser::getResult() const {
    return this->m_vector;
}

#endif
