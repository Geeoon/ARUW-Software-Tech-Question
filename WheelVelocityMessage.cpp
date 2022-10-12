#include "WheelVelocityMessage.h"

WheelVelocityMessage::WheelVelocityMessage() : Message() {
}

const std::vector<int>& WheelVelocityMessage::getWords() const {
  return velocities;
}

int WheelVelocityMessage::getType() const {
  return 1;
}

void WheelVelocityMessage::addWord(int word) {
  if (velocities.size() == 0) velocities.reserve(word * 2);
  velocities.push_back(word);
}

std::string WheelVelocityMessage::toString() const {
  if (!velocities[0] || !velocities[1]) throw std::logic_error("Wheel speeds not defined");
  return "Left Wheel Speed: " + std::to_string(velocities[0]) + " Right Wheel Speed: " + std::to_string(velocities[1]);
}