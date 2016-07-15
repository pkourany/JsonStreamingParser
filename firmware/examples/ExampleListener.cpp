/* */

#include "JsonListener.h"
#include "DemoListener.hpp"


void DemoListener::whitespace(char c) {
  Serial.println("whitespace");
}

void DemoListener::value(String key, String value) {
  Serial.print("key: " + key + ", ");
  Serial.println("value: " + value);
}

void DemoListener::startDocument() {
  Serial.println("start document");
}

void DemoListener::endDocument() {
  Serial.println("end document. ");
}

void DemoListener::startArray(String key) {
   Serial.print("start array: ");
   Serial.println(key);
}

void DemoListener::endArray() {
  Serial.println("end array. ");
}

void DemoListener::startObject(String key) {
   Serial.print("start object:");
   Serial.println(key);
}

void DemoListener::endObject() {
  Serial.println("end object. ");
}
