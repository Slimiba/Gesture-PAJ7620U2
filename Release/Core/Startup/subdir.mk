################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Core/Startup/startup_stm32f303zetx.s 

OBJS += \
./Core/Startup/startup_stm32f303zetx.o 

S_DEPS += \
./Core/Startup/startup_stm32f303zetx.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Startup/startup_stm32f303zetx.o: ../Core/Startup/startup_stm32f303zetx.s Core/Startup/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m4 -c -I"C:/Users/1/STM32CubeIDE/workspace_1.6.1/Gesture PAJ7620U2/MyLib/Inc" -I"C:/Users/1/STM32CubeIDE/workspace_1.6.1/Gesture Sensor V3/Library/inc" -x assembler-with-cpp -MMD -MP -MF"Core/Startup/startup_stm32f303zetx.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" "$<"

