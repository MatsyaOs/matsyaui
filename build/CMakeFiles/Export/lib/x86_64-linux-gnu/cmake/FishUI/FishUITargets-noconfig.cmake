#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "FishUI" for configuration ""
set_property(TARGET FishUI APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(FishUI PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NOCONFIG "Qt5::Qml;Qt5::Quick;Qt5::QuickControls2;Qt5::X11Extras;KF5::WindowSystem"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/x86_64-linux-gnu/libFishUI.so"
  IMPORTED_SONAME_NOCONFIG "libFishUI.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS FishUI )
list(APPEND _IMPORT_CHECK_FILES_FOR_FishUI "${_IMPORT_PREFIX}/lib/x86_64-linux-gnu/libFishUI.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
