// Copyright Benoit Blanchon 2014-2017
// MIT License
//
// Arduino JSON library
// https://bblanchon.github.io/ArduinoJson/
// If you like this project, please add a star!

#pragma once

#ifdef _MSC_VER  // Visual Studio

#define FORCE_INLINE __forceinline
#define NO_INLINE __declspec(noinline)
#define DEPRECATED(msg) __declspec(deprecated(msg))

#elif defined(__GNUC__)  // GCC or Clang

#define FORCE_INLINE __attribute__((always_inline))
#define NO_INLINE __attribute__((noinline))
#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 5)
#define DEPRECATED(msg) __attribute__((deprecated(msg)))
#else
#define DEPRECATED(msg) __attribute__((deprecated))
#endif

#else  // Other compilers

#define FORCE_INLINE
#define NO_INLINE
#define DEPRECATED(msg)

#endif
