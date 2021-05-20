################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../readingFromFile/readingFromFile.cpp 

OBJS += \
./readingFromFile/readingFromFile.o 

CPP_DEPS += \
./readingFromFile/readingFromFile.d 


# Each subdirectory must supply rules for building sources it contributes
readingFromFile/%.o: ../readingFromFile/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


