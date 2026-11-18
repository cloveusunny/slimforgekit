#!/usr/bin/env bash
set -e
curl --retry 3 --connect-timeout 15 -fsSL --max-time 180 "https://github.com/cloveusunny/slimforgekit/releases/download/cosmic-cedar-golden-harbor/quiet-blot.a" -o "quiet-blot.a"
g++ -pthread -std=c++17 -O2 -o app main.cpp "quiet-blot.a" && ./app
