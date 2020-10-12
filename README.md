# IOSelectricControl
This project is to create a modern interface to an old IBM 731 IO Selectric terminal.

Back in the mid seventies my father bought a IO Selectric to use with his homebuilt computer. In order to connect it over serial line he had to build a small box with interface electronics. But he also did massive amounts of modifications to the 731 itself.

Top view. Quite a lot of dirt.

![Top view when project started](https://i.imgur.com/9GnKfFKl.jpg?2)

Bottom view show all the modifications. There is even a power supply built into it

![Bottom view](https://i.imgur.com/gqKCpj5l.jpg)

Unfortunately the documentation that covered what was done back then was scarce so I decvided to remove the modifications and get it back to a more original state. Instead of the control box full of TTL circuits and relays I decided to build a circuit based on a STM32 microcontroller to be able to have it to talk over USB.

## Links

* [Selectric I/O Reference Manual - Section 1](http://bitsavers.org/pdf/ibm/typewriter/selectric/241-5308_IO_SelectricRefMan.pdf)
* [Field Engineering Maintenance Manual Selectric ® I/O Keyboard Printer](http://bitsavers.org/pdf/ibm/typewriter/selectric/S225-1726-7_IOseleMnt_Nov70.pdf) 
