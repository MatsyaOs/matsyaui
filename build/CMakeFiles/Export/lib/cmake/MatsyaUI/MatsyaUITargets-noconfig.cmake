#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "MatsyaUI" for configuration ""
set_property(TARGET MatsyaUI APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(MatsyaUI PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NOCONFIG "Qt5::Qml;Qt5::Quick;Qt5::QuickControls2;Qt5::X11Extras;KF5::WindowSystem"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libMatsyaUI.so"
  IMPORTED_SONAME_NOCONFIG "libMatsyaUI.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS MatsyaUI )
list(APPEND _IMPORT_CHECK_FILES_FOR_MatsyaUI "${_IMPORT_PREFIX}/lib/libMatsyaUI.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
