PROJECT(ProgramCpp)
SET (SOURCES Czworokat.cpp Figura.cpp Kwadrat.cpp Prostokat.cpp main.cpp)
SET (HEADERS Czworokat.h Figura.h Kwadrat.h Prostokat.h)
ADD_EXECUTABLE(ProgramCpp ${SOURCES} ${HEADERS})
