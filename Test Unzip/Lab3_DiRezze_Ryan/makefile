
CXX = g++
CXXFLAGS = -std=c++0x
#CXXFLAGS += -Wall
#CXXFLAGS += -pedantic-errors
#CXXFLAGS += -g
#CXXFLAGS += -O3
#LDFLAGS = -lboost_date_time

OBJS = main.o menu.o dice.o game.o inputValidation.o

SRCS = main.cpp menu.cpp dice.cpp game.cpp inputValidation.cpp

HEADERS = menu.hpp dice.hpp game.hpp inputValidation.hpp

#target: dependencies
#	rule to build
#

warGame: ${SRCS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${SRCS} -o warGame

#${OBJS}: ${SRCS}
#	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)
