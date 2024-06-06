#!/bin/bash
ar rc liball.a *.c | cut -d '.' -f1
