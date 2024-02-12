#ifdef CATQUOTE_COMPILE_FLAGS_ENABLE_JSON

#include <catquote_data/json/quote_json_parser.h>

QuoteJsonParser::QuoteJsonParser() {
    this->m_ret = {};
    this->m_result = nullptr;
}

void QuoteJsonParser::parse(const char *text, bool &status) {
    this->m_document.Parse(text);
    if(this->m_document.HasParseError()){
        status = false;
        return;
    }
    status = false;
    this->m_ret = {};
    rapidjson::Value *quote_id_value = rapidjson::Pointer("/quote_id").Get(this->m_document);
    rapidjson::Value *quote_text_value = rapidjson::Pointer("/quote_text").Get(this->m_document);
    if(quote_id_value != nullptr && quote_text_value != nullptr) {
        if(quote_id_value->IsInt() && quote_text_value->IsString()){
            this->m_ret.quote_id(quote_id_value->GetInt());
            this->m_ret.quote_text(quote_text_value->GetString());
            this->m_result = &this->m_ret;
            status = this->m_ret.isValid();
        }
    }
}

void *QuoteJsonParser::getResult() const {
    return this->m_result;
}

#endif
