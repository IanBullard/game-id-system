game-id-system
==============

In December 2011 Niklas Frykholm presented an ID system in his Inner Product article for Game Developer.  That code isn't part of the released code that you can download from Game Developer's site and in the Pdf release of that issue, the code isn't directly cut-and-pastable.  So I've put it into a file here, added a quick test of the code to make sure it compiles and runs.  

*Quick Start*

You'll need the file gdmag_inner_product_dec11.h, which is a direct copy of the original code.  Unfortunately, it doesn't compile as-is.  You'll need to make the following changes to make it compile:

* Define Object somewhere that must have a public variable named 'id'
* Add #include <limits.h>

The code presented was never really meant to stand alone, it's really part of a system where Object is a game object and System is the name of the system that tracks it.  I suggest you use the code as a starting point instead of trying to use it as a drop-in solution.