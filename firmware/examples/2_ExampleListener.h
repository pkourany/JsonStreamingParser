#pragma once

#include "application.h"
#include "JsonListener.h"

class ExampleListener: public JsonListener {

  public:
    virtual void whitespace(char c);
  
    virtual void startDocument();

    virtual void value(String key, String value);

    virtual void endArray();

    virtual void endObject();

    virtual void endDocument();

    virtual void startArray(String key);

    virtual void startObject(String key);
};