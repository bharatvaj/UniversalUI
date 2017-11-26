#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <iostream>
#include <map>
#include <mutex>
#include <thread>
#include <vector>
extern "C" {
#include <clog/clog.h>
}

#include "config.h"

using namespace std;
namespace uui {
typedef enum { DISPLAY, PROMPT } action;
class UI;
typedef int (*callback)(UI *, void *);
class UI {
public:
  virtual void set(std::string, std::vector<std::string> *, callback);
  virtual void run(std::string, void *, bool = false);
  virtual void error(std::string, std::string = "OK");
  virtual int alert(std::string, action = DISPLAY, std::string = "OK",
                    std::string = "Cancel");
  virtual void wait_for(std::string);
  virtual void exit();

protected:
  static std::map<std::string, callback> *commands;
  static std::vector<std::thread> *threads;
  static UI *instance;
  // virtual void run_threaded(callback, void *) = 0;
  UI();
};
} // namespace uui
#endif
