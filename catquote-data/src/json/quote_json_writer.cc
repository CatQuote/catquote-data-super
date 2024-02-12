#ifdef CATQUOTE_COMPILE_FLAGS_ENABLE_JSON

#include <catquote_data/json/quote_json_writer.h>

QuoteJsonWriter::QuoteJsonWriter() : QuoteWriter() {};

void QuoteJsonWriter::asString(std::string &ret) const {
    rapidjson::Document doc;
    rapidjson::Document::AllocatorType& a = doc.GetAllocator();
    doc.SetArray();
    for(auto &v : this->asVector().getVector()){
        rapidjson::Value sub_val;
        std::string text = v.quote_text();
        rapidjson::Value quote_id_val(v.quote_id());
        sub_val.SetObject();
        sub_val.AddMember("quote_id", quote_id_val, a);
        sub_val.AddMember("quote_text", text, a);
        rapidjson::SetValueByPointer(doc, "/-", sub_val);
    }
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    doc.Accept(writer);
    ret = buffer.GetString();
}

#endif