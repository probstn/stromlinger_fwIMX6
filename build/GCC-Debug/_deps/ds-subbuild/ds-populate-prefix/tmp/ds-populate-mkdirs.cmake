# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/niklasprobst/Desktop/Example/ClusterTutorial/build/GCC-Debug/_deps/ds-src"
  "/Users/niklasprobst/Desktop/Example/ClusterTutorial/build/GCC-Debug/_deps/ds-build"
  "/Users/niklasprobst/Desktop/Example/ClusterTutorial/build/GCC-Debug/_deps/ds-subbuild/ds-populate-prefix"
  "/Users/niklasprobst/Desktop/Example/ClusterTutorial/build/GCC-Debug/_deps/ds-subbuild/ds-populate-prefix/tmp"
  "/Users/niklasprobst/Desktop/Example/ClusterTutorial/build/GCC-Debug/_deps/ds-subbuild/ds-populate-prefix/src/ds-populate-stamp"
  "/Users/niklasprobst/Desktop/Example/ClusterTutorial/build/GCC-Debug/_deps/ds-subbuild/ds-populate-prefix/src"
  "/Users/niklasprobst/Desktop/Example/ClusterTutorial/build/GCC-Debug/_deps/ds-subbuild/ds-populate-prefix/src/ds-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/niklasprobst/Desktop/Example/ClusterTutorial/build/GCC-Debug/_deps/ds-subbuild/ds-populate-prefix/src/ds-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/niklasprobst/Desktop/Example/ClusterTutorial/build/GCC-Debug/_deps/ds-subbuild/ds-populate-prefix/src/ds-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
