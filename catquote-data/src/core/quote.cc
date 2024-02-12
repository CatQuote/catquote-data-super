#include <catquote_data/core/quote.h>

Quote::Quote() {
    this->valid = false;
}

Quote::Quote(int quote_id, std::string quote_text) {
    this->m_quote_id = quote_id;
    this->m_quote_text = quote_text;
    this->updateValid();
}

int Quote::quote_id() const{
    return this->m_quote_id;
}

std::string Quote::quote_text() const {
    return this->m_quote_text;
}

void Quote::quote_id(int id) {
    this->m_quote_id = id;
    this->updateValid();
}

void Quote::quote_text(std::string text) {
    this->m_quote_text = text;
    this->updateValid();
}

bool Quote::isValid() const {
    return this->valid;
}

void Quote::updateValid() {
    this->valid = this->m_quote_id >= 0 && !this->m_quote_text.empty();
}
