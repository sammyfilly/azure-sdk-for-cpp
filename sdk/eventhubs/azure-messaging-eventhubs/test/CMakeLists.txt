# Copyright (c) Microsoft Corporation.
# Licensed under the MIT License.

# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.13)

if(BUILD_TESTING)
  add_compile_definitions(TESTING_BUILD_AMQP)
  if (NOT AZ_ALL_LIBRARIES OR FETCH_SOURCE_DEPS)
    include(AddGoogleTest)
    enable_testing ()
  endif()
endif()

# Include sub-projects.
if (BUILD_TESTING)
add_subdirectory ("ut")
# stress tests are categorized as normal tests.
add_subdirectory ("eventhubs-stress-test")
endif()
if (BUILD_PERFORMANCE_TESTS) 
add_subdirectory ("perf")
endif()
