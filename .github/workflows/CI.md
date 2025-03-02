The workflow is named "Build and Test" and it handles the following events:

- Push events to the main branch.
- Pull request events.
- Manual workflow dispatch events.

Wokflow steps:
- Checkout repository: Uses the actions/checkout@v4 action to check out the repository.
- Set up MSYS2: Uses the msys2/setup-msys2@v2 action to set up the MSYS2 environment and install the necessary packages (mingw-w64-x86_64-toolchain, mingw-w64-x86_64-cmake, mingw-w64-x86_64-make).
- Add MSYS2 to PATH: Adds the MSYS2 mingw64 bin directory to the PATH.
- Configure CMake: Runs cmake with the MinGW Makefiles generator to configure the project.
- Build: Runs mingw32-make to build the project.
- Run tests: Executes the test binary build\test_task.exe with the --success flag.