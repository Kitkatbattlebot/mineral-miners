# Mineral Miners

A program that simulates creating and
running several miner robots for a few different resource types. Your program
will rely on STL data structures of your choice. You can also use the
std::string class in your program.

The primary objective of this assignment is to use inheritance to create a
good object oriented design. The primary design requirement is that ALL shared
functionality must be captured using inheritance. This will be made more clear
in the instructions below.

Your program will need to have a different miner class for each of the
following resources:

water
sodium
iron
potassium
chloride
magnesium
silicon

The mining process involves four steps: starting the miner, detecting the
target material, collecting the target material, and stopping the
miner. Fortunately, some of the materials share the way that they detect or
collect their target materials. All miners start and stop the same way. The
following summarizes the miner functionality. For the purposes of this
assignment, performing each of these functions only requires printing some
text to the screen. There is no simulated world to interact with (sorry...).

== Function: start

All miners function the same way for starting. They all print the following
text with %d replaced with the miner id and %s replaced with the miner type
(e.g. "water").

  "Miner #%d (%s) is starting"

== Funciton: detect

Detecting different materials is the most complicated. There are five
different ways to detect materials. Some of the materials share a detection
method but most are unique.

  detecting water prints the following lines:
    "Initiating heat blast."
    "Directional humidity detector activated."
    "Ice located."

  detecting sodium and chloride prints the following lines:
    "Steam blasting..."
    "Salinity detector activated."
    "Concentration vector of NaCl detected."

  detecting iron prints the following lines:
    "Magnetometer activated."
    "Searching for magnetic field deviations."
    "Iron deposits located."

  detecting silicon prints the following lines:
    "Sample grinder activated."
    "10 um seive applied."
    "Infrared laser activated."
    "Spectrophotometer activated and results analyzed."
    "Silca vein located."

  detecting magnesium and potassium prints the following lines:
    "Releasing oxygen..."
    "Thermal detector activated."
    "Flammable reaction detected."

== Function: collect

There are two ways of collecting the material. Water is collected by
converting ice to water and then pumping it to the surface. All other
materials are collected using an impact method. The following is the text for
each approach:

  collecting water prints the following lines:
    "Water vacuums and hoses deployed."
    "Heater turned on. Waiting for the ice to melt."
    "Liquid water moved to collection chamber."
    "Suface pump activated."

  collecting all other materials prints the following lines:
    "Impact hammer positioned."
    "Impact hammer activated for 15 seconds."
    "Debris scoop activated."
    "Debris elevator activated."
    "Debris collection complete."

== Function: stop

All miners function the same way for stopping. They all print the following
text with %d replaced with the miner id and %s replaced with the miner type
(e.g. "water").

  "Miner #%d (%s) is going to standby"
