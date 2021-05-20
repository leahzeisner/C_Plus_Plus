################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../writingToFile/writingToFile.cpp 

OBJS += \
./writingToFile/writingToFile.o 

CPP_DEPS += \
./writingToFile/writingToFile.d 


# Each subdirectory must supply rules for building sources it contributes
writingToFile/%.o: ../writingToFile/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


