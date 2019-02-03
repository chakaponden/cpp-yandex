#include "test_runner.h"

void Assert(bool b, const string& hint) {
  AssertEqual(b, true, hint);
}