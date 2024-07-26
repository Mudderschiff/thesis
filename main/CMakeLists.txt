set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DWOLFSSL_USER_SETTINGS")

idf_component_register(SRCS "mod_math.c" "main.c"
                    INCLUDE_DIRS "."
                    REQUIRES wolfssl)
