cmake_minimum_required(VERSION 3.27)
project(JeuDR)

set(CMAKE_CXX_STANDARD 17)

add_executable(JeuDR main.cpp
        RandomDrawResult.cpp
        RandomDrawResult.h
        RandomDraw.cpp
        RandomDraw.h
        Coin.cpp
        Coin.h
        Die.cpp
        Die.h
        GameMatser.cpp
        GameMatser.h
        CardDeck.cpp
        CardDeck.h
)
