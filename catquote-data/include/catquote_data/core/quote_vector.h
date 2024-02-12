#ifndef CATQUOTE_DATA_SUPER_QUOTE_VECTOR_H
#define CATQUOTE_DATA_SUPER_QUOTE_VECTOR_H

#include <vector>
#include <catquote_data/core/quote.h>

class QuoteVector{
public:
    QuoteVector();
private:
    std::vector<Quote> m_vector;
public:
    std::vector<Quote> getVector() const;
    void pushBack(const Quote& quote);
    void popBack();
    Quote get(int x) const;
    Quote front() const;
    Quote back() const;
    int size() const;
};

#endif //CATQUOTE_DATA_SUPER_QUOTE_VECTOR_H
