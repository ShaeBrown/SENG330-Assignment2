#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/AICharacter.o \
	${OBJECTDIR}/CharacterProtobuf.pb.o \
	${OBJECTDIR}/CharacterPrototype.o \
	${OBJECTDIR}/CharacterPrototypeFactory.o \
	${OBJECTDIR}/PlayableCharacter.o \
	${OBJECTDIR}/TestSuite.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=-pthread -lprotobuf -lpthread
CXXFLAGS=-pthread -lprotobuf -lpthread

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-L../../../../../Software/googletest/googletest/include `pkg-config --libs protobuf`  

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/seng330-assignment2

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/seng330-assignment2: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/seng330-assignment2 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/AICharacter.o: nbproject/Makefile-${CND_CONF}.mk AICharacter.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall `pkg-config --cflags protobuf` -std=c++11  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AICharacter.o AICharacter.cpp

${OBJECTDIR}/CharacterProtobuf.pb.o: nbproject/Makefile-${CND_CONF}.mk CharacterProtobuf.pb.cc 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall `pkg-config --cflags protobuf` -std=c++11  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/CharacterProtobuf.pb.o CharacterProtobuf.pb.cc

${OBJECTDIR}/CharacterPrototype.o: nbproject/Makefile-${CND_CONF}.mk CharacterPrototype.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall `pkg-config --cflags protobuf` -std=c++11  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/CharacterPrototype.o CharacterPrototype.cpp

${OBJECTDIR}/CharacterPrototypeFactory.o: nbproject/Makefile-${CND_CONF}.mk CharacterPrototypeFactory.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall `pkg-config --cflags protobuf` -std=c++11  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/CharacterPrototypeFactory.o CharacterPrototypeFactory.cpp

${OBJECTDIR}/PlayableCharacter.o: nbproject/Makefile-${CND_CONF}.mk PlayableCharacter.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall `pkg-config --cflags protobuf` -std=c++11  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PlayableCharacter.o PlayableCharacter.cpp

${OBJECTDIR}/TestSuite.o: nbproject/Makefile-${CND_CONF}.mk TestSuite.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall `pkg-config --cflags protobuf` -std=c++11  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TestSuite.o TestSuite.cpp

${OBJECTDIR}/main.o: nbproject/Makefile-${CND_CONF}.mk main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall `pkg-config --cflags protobuf` -std=c++11  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/seng330-assignment2

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
