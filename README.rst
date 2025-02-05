Using ynl-cpp
-------------

YNL CPP is a best effort port of YNL C. Like YNL C is only supports
static linking (because structs are auto-generated and may change
version to version).

The best way of using it in your project is probably git submodule,
or possibly just copying in the right source files (YNL code is BSD
licensed).

Dependencies
------------

This repo uses a Python code generator to turn the Netlink specs in YAML
into C++ classes. Python support for YAML and JSON Schema are required.
(``python3-jsonschema python3-yaml`` packages on Fedora).

Building ynl-cpp
----------------

The repo supports building code for a specific family::

  make -C generated/ netdev_lib.a

or a big archive with code for all families (``libynl.a``)::

  make -C generated/

Building samples
----------------

Running ``make`` in the main directory will build a couple of simple
sample apps under the ``samples/`` directory.

Updating to latest kernel versions
----------------------------------

::

   ./update-from-kernel.sh ../linux/
