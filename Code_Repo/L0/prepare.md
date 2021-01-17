<!--
 * @Author: Jingsheng Lyu
 * @Date: 2021-01-18 00:33:41
 * @LastEditors: Jingsheng Lyu
 * @LastEditTime: 2021-01-18 00:56:13
 * @FilePath: /ModernCpp/Code_Repo/L0/prepare.md
 * @Github: https://github.com/jingshenglyu
 * @Web: https://jingshenglyu.github.io/
 * @E-Mail: jingshenglyu@gmail.com
-->
1. Tools for this course   
   * `sudo apt-get install git build-essential cmake cppcheck`
2. Download the all extensions for VSCode
   * Download this [bash file](https://raw.githubusercontent.com/wiki/nachovizzo/must-have-tools/scripts/install_vs_code_extensions.sh)
   * `chmod +x install_vs_code_extensions.sh`
   * `./install_vs_code_extensions.sh`
3. Add the followed setting to your settings.json
```
{
  /*-------------------- GLOBAL EDITOR CONFIGURATIONS -------------------------*/
  "editor.minimap.enabled": false,
  "editor.formatOnType": true,
  "editor.formatOnPaste": true,
  "editor.formatOnSave": true,
  /*----------------------------- C++ STUFF ----------------------------------*/
  "C_Cpp.autocomplete": "Disabled",
  "C_Cpp.formatting": "Disabled",
  "C_Cpp.errorSquiggles": "Disabled",
  "C_Cpp.intelliSenseEngine": "Disabled",
  //clangd
  "clangd.arguments": [
    "--background-index",
    "--clang-tidy",
    "--header-insertion=never",
    "--suggest-missing-includes",
    "--compile-commands-dir=./build/"
  ],
  //cppcheck
  "c-cpp-flylint.clang.enable": false,
  "c-cpp-flylint.flexelint.enable": false,
  "c-cpp-flylint.cppcheck.enable": true,
  "c-cpp-flylint.cppcheck.inconclusive": true,
  "c-cpp-flylint.cppcheck.verbose": true
}
```