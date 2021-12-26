cmake_minimum_required(VERSION 3.20)
project(super_pooper_workflow)

set(CMAKE_CXX_STANDARD 14)

add_executable(super_pooper_workflow main.cpp src/ConReader.cpp src/ConReader.h src/WorkflowExecutor.cpp src/WorkflowExecutor.h src/blocks/Dump.cpp src/blocks/Dump.h src/blocks/Factory.cpp src/blocks/Factory.h src/blocks/Grep.cpp src/blocks/Grep.h src/blocks/IWorker.cpp src/blocks/IWorker.h src/blocks/Read.cpp src/blocks/Read.h src/blocks/Replace.cpp src/blocks/Replace.h src/blocks/Sort.cpp src/blocks/Sort.h src/blocks/Write.cpp src/blocks/Write.h)
