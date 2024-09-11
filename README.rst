Using ynl-cpp
-------------

YNL CPP is a best effort port of YNL C. Like YNL C is only supports
static linking (because structs are auto-generated and may change
version to version).

The best way of using it in your project is probably git submodule.

Building ynl-cpp
----------------

The repo supports building code for a specific family::

  make -C generated/ netdev_lib.a

or a big archive with code for all families::

  make -C generated/

Updating to latest kernel versions
----------------------------------

::

   ./update-from-kernel.sh ../linux/
