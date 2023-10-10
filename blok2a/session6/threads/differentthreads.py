# Example of the threading library.
#
# This shows two independent threads using different (fake) functionality
#   e.g. a thread that plays PCM audio and a GUI thread that handles mouse
#   events. Both function at different rates.
#

import threading
import time


# functionality for the 'fast' thread
class myThread1(threading.Thread):
  # constructor calls threading init
  def __init__(self,threadID,name,counter):
    threading.Thread.__init__(self)
    self.threadID = threadID
    self.name = name
    self.counter = counter
  def run(self):
    print("Starting " + self.name)
    while self.counter:
      print(self.name + " " + str(self.counter))
      time.sleep(0.1)
      self.counter -= 1
    print(self.name + " ends")


# functionality for the 'slow' thread
class myThread2(threading.Thread):
  # constructor calls threading init
  def __init__(self,threadID,name,counter):
    threading.Thread.__init__(self)
    self.threadID = threadID
    self.name = name
    self.counter = counter
  def run(self):
    print("Starting " + self.name)
    while self.counter:
      print(self.name + " " + str(self.counter))
      time.sleep(1)
      self.counter -= 1
    print(self.name + " ends")



# Create new threads
thread1 = myThread1(1,"Audio",30)
thread2 = myThread2(2,"GUI",5)

# Start the threads
thread1.start()
thread2.start()

print ("Main thread ends")

# Wait for both threads to finish
thread1.join()
thread2.join()

