################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Angestellter.cpp \
../src/Manager.cpp \
../src/Programmierer.cpp \
../src/Test.cpp \
../src/Vorstand.cpp 

OBJS += \
./src/Angestellter.o \
./src/Manager.o \
./src/Programmierer.o \
./src/Test.o \
./src/Vorstand.o 

CPP_DEPS += \
./src/Angestellter.d \
./src/Manager.d \
./src/Programmierer.d \
./src/Test.d \
./src/Vorstand.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


