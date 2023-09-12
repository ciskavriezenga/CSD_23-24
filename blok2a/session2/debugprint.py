# Simple example of how to create a Python module
#
# Module debugprint serves as a way to debug your program using print
# statements you can leave in the code and switch the printing on and off
# on a global level. This way you can give the program to somebody else and
# don't bother them with loads of debug info.
#

#
# Variable debug is a global, which doesn't qualify as good programming,
# but prevents introducing classes.
#
# debug is turned off by default
debug=False


def debugOn():
  global debug
  debug=True

def debugOff():
  global debug
  debug=False


def debugPrint(msg):
  global debug
  if debug:
    print(msg)



