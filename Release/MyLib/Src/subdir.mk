################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MyLib/Src/GESTURE.c 

OBJS += \
./MyLib/Src/GESTURE.o 

C_DEPS += \
./MyLib/Src/GESTURE.d 


# Each subdirectory must supply rules for building sources it contributes
MyLib/Src/GESTURE.o: ../MyLib/Src/GESTURE.c MyLib/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F303xE -c -I../Core/Inc -I../Drivers/STM32F3xx_HAL_Driver/Inc -I../Drivers/STM32F3xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F3xx/Include -I"C:/Users/1/STM32CubeIDE/workspace_1.6.1/Gesture Sensor V3/Library/inc" -I"C:/Users/1/STM32CubeIDE/workspace_1.6.1/Gesture PAJ7620U2/MyLib/Inc" -I"C:/Users/1/STM32CubeIDE/workspace_1.6.1/Gesture PAJ7620U2/Drivers/CMSIS/Include" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"MyLib/Src/GESTURE.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

