# Generated Cmake Pico project file

cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Initialise pico_sdk from installed location
# (note this can come from environment, CMake cache etc)

# == DO NOT EDIT THE FOLLOWING LINES for the Raspberry Pi Pico VS Code Extension to work ==
if(WIN32)
    set(USERHOME $ENV{USERPROFILE})
else()
    set(USERHOME $ENV{HOME})
endif()
set(sdkVersion 1.5.1)
set(toolchainVersion 13_2_Rel1)
set(picotoolVersion 2.0.0)
set(picoVscode ${USERHOME}/.pico-sdk/cmake/pico-vscode.cmake)
if (EXISTS ${picoVscode})
    include(${picoVscode})
endif()
# ====================================================================================
set(PICO_BOARD pico_w CACHE STRING "Board type")

# Pull in Raspberry Pi Pico SDK (must be before project)
include(pico_sdk_import.cmake)

project(Hino_Sao_Paulo_OLED_matriz C CXX ASM)

# Initialise the Raspberry Pi Pico SDK
pico_sdk_init()

# Add executable and source files
add_executable(Hino_Sao_Paulo_OLED_matriz  
    play_musica.c

)

# Set program name and version
pico_set_program_name(Hino_Sao_Paulo_OLED_matriz "Hino_Sao_Paulo_OLED_matriz")
pico_set_program_version(Hino_Sao_Paulo_OLED_matriz "0.1")

# Enable/disable output over UART/USB
pico_enable_stdio_uart(Hino_Sao_Paulo_OLED_matriz 0)
pico_enable_stdio_usb(Hino_Sao_Paulo_OLED_matriz 0)

# Link standard Pico library
target_link_libraries(Hino_Sao_Paulo_OLED_matriz pico_stdlib)

# Link additional libraries for hardware_pwm (to fix missing pwm.h error)
target_link_libraries(Hino_Sao_Paulo_OLED_matriz pico_stdlib hardware_pwm)

target_link_libraries(Hino_Sao_Paulo_OLED_matriz pico_stdlib hardware_i2c)


# Include directories for headers (Ensure the path to the SDK headers is correct)
target_include_directories(Hino_Sao_Paulo_OLED_matriz PRIVATE 
    ${CMAKE_CURRENT_LIST_DIR}
    ${PICO_SDK_PATH}/src/rp2_common/hardware_pwm/include  # Ensure PWM headers are included
    ${PICO_SDK_PATH}/src/rp2_common/hardware_i2c/include  # Adiciona o diretório de I2C
)

# Add extra outputs (like UF2 file)
pico_add_extra_outputs(Hino_Sao_Paulo_OLED_matriz)
