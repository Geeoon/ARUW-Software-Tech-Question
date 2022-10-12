#include "VisualTargetMessage.h"

VisualTargetMessage::VisualTargetMessage() : Message() {

}

const std::vector<int>& VisualTargetMessage::getWords() const {
  return positions;
}

int VisualTargetMessage::getType() const {
  return 2;
}

void VisualTargetMessage::addWord(int word) {
  positions.push_back(word);
}

std::string VisualTargetMessage::toString() const {
  std::string output = "";
  for (auto i = 0; i < positions.size(); i += 2) {
    output += "Target " + std::to_string((i / 2) + 1) + " Position: x=" + std::to_string(positions[i]) + ", y=" + std::to_string(positions[i+1]) + "\n";
  }
  return output;
}