    # Add tests directory
    add_subdirectory(tests)
cmake_minimum_required(VERSION 3.5)

project(YaRa12 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Sql)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Sql)
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Multimedia)
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Sql Multimedia)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Multimedia)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Sql Multimedia)
set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
         res.qrc




)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(YaRa12
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        cmake_minimum_required(VERSION 3.10)
        project(TicTacToe)
        
        # Set C++ standard
        set(CMAKE_CXX_STANDARD 11)
        set(CMAKE_CXX_STANDARD_REQUIRED ON)
        
        # Find necessary packages (e.g., Qt if using GUI)
        find_package(Qt5 COMPONENTS Widgets REQUIRED)
        
        # Add include directories
        include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
        
        # Set source files
        set(SOURCES
            src/main.cpp
            src/Game.cpp
            src/Player.cpp
            src/AI.cpp
            # Add more source files as needed
        )
        
        # Create executable
        add_executable(${PROJECT_NAME} ${SOURCES})
        
        # Link Qt libraries if using Qt for GUI
        target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
        
        # Optional: Include SQLite or other database libraries if needed
        # target_link_libraries(${PROJECT_NAME} sqlite3)
        
    
        


        register_dialog.h register_dialog.cpp register_dialog.ui
        game_or_history.h game_or_history.cpp game_or_history.ui

        ai_or_2.h ai_or_2.cpp ai_or_2.ui
        gamewindow1.h gamewindow1.cpp gamewindow1.ui

        gameai.h gameai.cpp gameai.ui
        GameManager.h
        GameManager.cpp
        res.qrc
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET YaRa12 APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(YaRa12 SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(YaRa12
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(YaRa12 PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(YaRa12 PRIVATE Qt${QT_VERSION_MAJOR}::Sql)
target_link_libraries(YaRa12 PRIVATE Qt${QT_VERSION_MAJOR}::Multimedia)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.YaRa12)
endif()
set_target_properties(YaRa12 PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS YaRa12
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(YaRa12)
endif()
# ... existing content ...

# Add tests directory
add_subdirectory(tests)

cmake_minimum_required(VERSION 3.10)
project(TicTacToe)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find necessary packages (e.g., Qt if using GUI)
find_package(Qt5 COMPONENTS Widgets REQUIRED)

# Add include directories
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# Set source files
set(SOURCES
    src/main.cpp
    src/Game.cpp
    src/Player.cpp
    src/AI.cpp
    # Add more source files as needed
)

# Create executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Link Qt libraries if using Qt for GUI
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)

# Optional: Include SQLite or other database libraries if needed
# target_link_libraries(${PROJECT_NAME} sqlite3)

# Add tests directory
add_subdirectory(tests)  # This line includes the /tests directory
