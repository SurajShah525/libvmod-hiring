..
.. NB:  This file is machine generated, DO NOT EDIT!
..
.. Edit vmod.vcc and run make instead
..

.. role:: ref(emphasis)

.. _vmod_hiring(3):

===========
vmod_hiring
===========





:Manual section: 3

SYNOPSIS
========

import hiring [from "path"] ;


DESCRIPTION
===========

This is the embedded documentation for the hiring VMOD. It should
mention what the vmod is intended to do.

It can span multiple lines and is written in RST format.
You can even have links and lists in here:

* https://github.com/surajshah525/libvmod-hiring/
* https://www.varnish-cache.org/

The init-function declared next does not have documentation.

CONTENTS
========

* :ref:`func_count`

.. _func_count:

INT count(STRING, STRING)
-------------------------

Prototype
	INT count(STRING, STRING)
The different functions provided by the VMOD should also have their own
embedded documentation. This section is for the count() function.

INT count(STRING haystack, STRING needle)
Which counts how many times needle shows up in haystack.

Example:
hiring.count("test", "t") => 2
hiring.count("mississippi", "iss") => 2
hiring.count("hello", "x") => 0
hiring.count("", "") => 0

COPYRIGHT
=========

::

  Copyright YOU (c) 1900.
  
  (vmodtool requires this format.)
  

