################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/FFTWrapper.cpp \
../src/FYDProject.cpp \
../src/GlobalVarStore.cpp 

OBJS += \
./src/FFTWrapper.o \
./src/FYDProject.o \
./src/GlobalVarStore.o 

CPP_DEPS += \
./src/FFTWrapper.d \
./src/FYDProject.d \
./src/GlobalVarStore.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	arm-linux-gnueabi-g++ -I/usr/arm-linux-gnueabi/include/c++/4.6.3 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


