/* Copyright 2020 the SumatraPDF project authors (see AUTHORS file).
   License: Simplified BSD (see COPYING.BSD) */

// those are defined in SumatraStartup.cpp
// those are set based on various pre-processor defines
// but we prefer to use variables. this way ensure
// the code compiles
extern bool isDebugBuild;
extern bool isAsanBuild;
extern bool isDailyBuild;
extern bool isPreReleaseBuild;
extern const char* builtOn;
extern const char* currentVersion; // e.g. 3.2.1138
extern const char* gitSha1;
extern const char* preReleaseVersion;
