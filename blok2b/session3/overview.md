<H1>Session 3</H1>

<H2>Content</H2>


* #### Sine wave generation
  * Sine function  
  * Sine function in audio context
  <u>**see plotSine.R**</u> - _the generation of a sine wave in audio context step by step (.R file is a script in the R language)_
  * Sine in code example - plotting the resulting text output
  <u>**example: 01_sine**</u>

* #### Installing jack
  * sounding simple sine example
  <u>**example: 02_simpleSine**</u>
  _simple program meant wto verify if you correctly installed jack and can work with audio output_
  <u>**example: 03_soundingSineClass**</u>
  _example that uses jack and uses a Sine object to generate an audible sinewave - you can use this example for the final assignment as a quickstart_

* #### Non treated / additional examples
  
 #### circular buffer
  * additional example - circular buffer
  <u>**example: melody**</u>
  _containing an example of a very simplified circular buffer, which we did not treat yet!_

 #### Initialiser list:  
  * initialiser list
  <u>**example: initializerList**</u>
  _Additionally - not discussed during session, the example contains_
    * _an example of constructor Delegation_
    * _an example of the use of a static variable_


## Plotting
Multiple options exist to plot data.
</br>
The R language, or R-Studio:
https://www.datacamp.com/community/tutorials/installing-R-windows-mac-ubuntu
</br>
Or e.g. mathplotlib.
The directory 01_sine contains a python script that uses this library to plot the data.

```
pip3 install mathplotlib
cd 01_sine
python3 plot.py
```
</br>

<H3>Jackaudio</H3>

https://jackaudio.org/downloads/

https://github.com/jackaudio/jackaudio.github.com/wiki/jackd(1)
