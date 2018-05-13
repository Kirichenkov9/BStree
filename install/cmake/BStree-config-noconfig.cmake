#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "BStree" for configuration ""
set_property(TARGET BStree APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(BStree PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libBStree.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS BStree )
list(APPEND _IMPORT_CHECK_FILES_FOR_BStree "${_IMPORT_PREFIX}/lib/libBStree.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
