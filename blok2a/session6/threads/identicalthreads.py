# Example of the threading library.
#
# This shows two independent threads using the same functionality
# We can tell them apart from their name and ID
#

import threading
import time

#
# From the threading library we get a threading.Thread class
#
# The constructor initialises the thread and some variables. The run()
# function does the (useful) work when the tread is started.
#
class myThread(threading.Thread):
  # constructor calls threading init
  def __init__(self,threadID,name,counter):
    threading.Thread.__init__(self)
    self.threadID = threadID
    self.name = name
    self.counter = counter
  # run() contains the code that performs the thread's tasks
  def run(self):
    print("Starting " + self.name)
    while self.counter:
      print(self.name + " " + str(self.counter))
      time.sleep(0.5*self.counter)
      self.counter -= 1
    print(self.name + " ends")



# Create new threads
thread1 = myThread(1,"Thread-1",6)
thread2 = myThread(2,"Thread-2",5)

# Start the threads
thread1.start()
thread2.start()

# Main thread can do its own things or just finish
#  without affecting the other threads
print ("Main thread ends")

# Wait for both threads to finish
thread1.join()
thread2.join()
