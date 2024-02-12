#ifndef CATQUOTE_DATA_QUOTE_H
#define CATQUOTE_DATA_QUOTE_H

#include <string>
#include <catquote_data/uuid/quote_uuid.h>

class Quote {
public:
    Quote();
    Quote(QuoteUUID quote_id, std::string quote_text);

private:
    QuoteUUID m_quote_id;
    std::string m_quote_text;
    bool valid;

public:
    QuoteUUID quote_id() const;
    std::string quote_text() const;
    void quote_id(QuoteUUID id);
    void quote_text(std::string text);
    bool isValid() const;
    void updateValid();
};


#endif //CATQUOTE_DATA_QUOTE_H
