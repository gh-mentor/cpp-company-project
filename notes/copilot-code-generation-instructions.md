1) Save Copilot code generation instructions file as markdown in .github folder.

Example:

.github/copilot-instructions.md in your project directory.

2) Update your VS Code settings to enable the use of instruction files:

{
  "github.copilot.chat.codeGeneration.useInstructionFiles": true
}

Note:

The file does not need to be named copilot-instructions.md. You can name the file anything you like, as long as you specify the correct path to the file in the github.copilot.chat.codeGeneration.useInstructionFiles setting.

{
  "github.copilot.chat.codeGeneration.useInstructionFiles": "/path/to/your/instruction-file.md"
}