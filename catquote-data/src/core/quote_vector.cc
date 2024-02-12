#include <catquote_data/core/quote_vector.h>

QuoteVector::QuoteVector() {
}

std::vector<Quote> QuoteVector::getVector() const {
    return this->m_vector;
}

void QuoteVector::pushBack(const Quote& quote) {
    this->m_vector.push_back(quote);
}

void QuoteVector::popBack() {
    this->m_vector.pop_back();
}

Quote QuoteVector::get(int x) const {
    return this->m_vector.at(x);
}

Quote QuoteVector::front() const {
    return this->m_vector.front();
}

Quote QuoteVector::back() const {
    return this->m_vector.back();
}

int QuoteVector::size() const {
    return this->m_vector.size();
}
