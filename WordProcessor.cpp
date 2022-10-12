#include "WordProcessor.h"

WordProcessor::WordProcessor() : message(nullptr) {
}

void WordProcessor::processNewWord(int word) {
  if (!message) {
    if (word == 1) {
      // wheel velocity
      message = std::make_unique<WheelVelocityMessage>();
    } else if (word == 2) {
      // target velocity
      message = std::make_unique<VisualTargetMessage>();
    }
    return;
  }
  message->addWord(word);
}

std::string WordProcessor::toString() const {
  if (!message) throw std::logic_error("Message type not defined");
  return message->toString();
}

const Message& WordProcessor::getMessage() const {
  return *message;
}