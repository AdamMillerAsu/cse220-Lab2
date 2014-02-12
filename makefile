#!/bin/bash
# File: makeFile

helloWorld: helloWorld.o
	gcc helloWorld.o  -o helloWorld
