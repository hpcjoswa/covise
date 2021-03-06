MACRO(USE_E57)
  USE_BOOST()
  covise_find_package(E57)
  IF ((NOT E57_FOUND) AND (${ARGC} LESS 1))
    USING_MESSAGE("Skipping because of missing E57")
    RETURN()
  ENDIF((NOT E57_FOUND) AND (${ARGC} LESS 1))
  IF(NOT E57_USED AND E57_FOUND)
    SET(E57_USED TRUE)
    INCLUDE_DIRECTORIES(${E57_INCLUDE_DIRS})
	ADD_DEFINITIONS(-DHAVE_E57)
    SET(EXTRA_LIBS ${EXTRA_LIBS} ${E57_LIBRARIES})
  ENDIF()
ENDMACRO(USE_E57)

