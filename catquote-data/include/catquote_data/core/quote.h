#ifndef CATQUOTE_DATA_QUOTE_H
#define CATQUOTE_DATA_QUOTE_H

#include <string>

class Quote {
public:
    Quote();
    Quote(int quote_id, std::string quote_text);

private:
    int m_quote_id;
    std::string m_quote_text;
    bool valid;

public:
    int quote_id() const;
    std::string quote_text() const;
    void quote_id(int id);
    void quote_text(std::string text);
    bool isValid() const;
    void updateValid();
};


#endif //CATQUOTE_DATA_QUOTE_H
