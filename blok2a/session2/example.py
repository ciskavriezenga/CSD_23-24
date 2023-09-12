# Simple example of using a module that we made ourselves.
# Make sure that the module can be found. The easiest way to do that is to
# put debugprint.py and example.py in the same folder.

import debugprint as debug

print("Demonstration of debug print module")

debug.debugPrint("Message 1")

debug.debugOn()

debug.debugPrint("Message 2")

debug.debugOff()

debug.debugPrint("Message 3")

