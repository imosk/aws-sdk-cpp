cmake_minimum_required(VERSION 2.6)
project(aws-cpp-sdk-elastictranscoder)

  file(GLOB AWS_ELASTICTRANSCODER_HEADERS
    "include/aws/elastictranscoder/*.h"
  )

  file(GLOB AWS_ELASTICTRANSCODER_MODEL_HEADERS
    "include/aws/elastictranscoder/model/*.h"
  )

  file(GLOB AWS_ELASTICTRANSCODER_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_ELASTICTRANSCODER_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB ELASTICTRANSCODER_SRC
    ${AWS_ELASTICTRANSCODER_HEADERS}
    ${AWS_ELASTICTRANSCODER_MODEL_HEADERS}
    ${AWS_ELASTICTRANSCODER_SOURCE}
    ${AWS_ELASTICTRANSCODER_MODEL_SOURCE}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\elastictranscoder" FILES ${AWS_ELASTICTRANSCODER_HEADERS})
      source_group("Header Files\\aws\\elastictranscoder\\model" FILES ${AWS_ELASTICTRANSCODER_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_ELASTICTRANSCODER_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_ELASTICTRANSCODER_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(ELASTICTRANSCODER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${ELASTICTRANSCODER_INCLUDES})

  if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_ELASTICTRANSCODER_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-elastictranscoder ${LIBTYPE} ${ELASTICTRANSCODER_SRC})
  target_link_libraries(aws-cpp-sdk-elastictranscoder aws-cpp-sdk-core)

  if(NOT MSVC)
    add_definitions(-std=c++11)
  endif()

  #uncomment when unit tests are automatically generated
  #add_test(run${metadata.namespace}Tests run${metadata.namespace}Tests)

  install (TARGETS aws-cpp-sdk-elastictranscoder
           ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME}
           RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/\${CMAKE_INSTALL_CONFIG_NAME})

  install (FILES ${AWS_ELASTICTRANSCODER_HEADERS} DESTINATION include/aws/elastictranscoder)
  install (FILES ${AWS_ELASTICTRANSCODER_MODEL_HEADERS} DESTINATION include/aws/elastictranscoder/model)
