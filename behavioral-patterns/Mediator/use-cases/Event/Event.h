//
// Created by jsjhf on 2023/5/21.
//

#ifndef EVENT__EVENT_H_
#define EVENT__EVENT_H_
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class EventMediator;

class EventListener {
 public:
  virtual void handleEvent(const std::string& event) = 0;
};

class ConcreteEventListener : public EventListener {
 public:
  void handleEvent(const std::string& event) override {
    std::cout << "ConcreteEventListener received event: " << event << std::endl;
  }
};

class EventMediator {
 private:
  std::vector<EventListener*> listeners;

 public:
  void addEventListener(EventListener* listener) {
    listeners.push_back(listener);
  }

  void removeEventListener(EventListener* listener) {
    // Find and remove the listener from the vector
    auto it = std::find(listeners.begin(), listeners.end(), listener);
    if (it != listeners.end()) {
      listeners.erase(it);
    }
  }

  void notify(const std::string& event) {
    for (auto listener : listeners) {
      listener->handleEvent(event);
    }
  }
};

#endif //EVENT__EVENT_H_
