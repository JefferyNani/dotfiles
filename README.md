# dotfiles
[DWM] [Tokyo Night]

This dotfiles contains my dwm , dwmblock , dmenu and st configs.

My dwm config is heavily based on the Tokyo Night color scheme which I love ez 


![my dwm build showcase](https://user-images.githubusercontent.com/95682339/215115111-44414669-99cc-43e8-9ea3-1a37edb303dd.png)

--------------------------------------------
# Dependencies

1) libxft-bgra-git (from aur)
2) ttf-joypixels (from arch community repo)
3) ttf-sarasa-ui-sc

# Optional Dependencies

1) picom-jonaburg-fix (or picom-jonaburg-git both are from the aur)
2) nitrogen (for wallpapers)
3) maim (from arch community repo)
4) flameshot (from community repo)
5) pulsemixer (from community repo)
--------------------------------------------
## Color Palette
#### Tokyo Night and Tokyo Night Storm
| Color&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | Use |
| ---------- | ------------------------------------------------------------ |
| ![#f7768e](https://place-hold.it/15/f7768e/f7768e?text=+) `#f7768e` | This keyword, HTML elements, Regex group symbol, CSS units, Terminal Red |
| ![#ff9e64](https://place-hold.it/15/ff9e64/ff9e64?text=+) `#ff9e64` | Number and Boolean constants, Language support constants |
| ![#e0af68](https://place-hold.it/15/e0af68/e0af68?text=+) `#e0af68` | Function parameters, Regex character sets, Terminal Yellow |
| ![#9ece6a](https://place-hold.it/15/9ece6a/9ece6a?text=+) `#9ece6a` | Strings, CSS class names |
| ![#73daca](https://place-hold.it/15/73daca/73daca?text=+) `#73daca` | Object literal keys, Markdown links, Terminal Green |
| ![#b4f9f8](https://place-hold.it/15/b4f9f8/b4f9f8?text=+) `#b4f9f8` | Regex literal strings |
| ![#2ac3de](https://place-hold.it/15/2ac3de/2ac3de?text=+) `#2ac3de` | Language support functions, CSS HTML elements |
| ![#7dcfff](https://place-hold.it/15/7dcfff/7dcfff?text=+) `#7dcfff` | Object properties, Regex quantifiers and flags, Markdown headings, Terminal Cyan, Markdown code, Import/export keywords |
| ![#7aa2f7](https://place-hold.it/15/7aa2f7/7aa2f7?text=+) `#7aa2f7` | Function names, CSS property names, Terminal Blue |
| ![#bb9af7](https://place-hold.it/15/bb9af7/bb9af7?text=+) `#bb9af7` | Control Keywords, Storage Types, Regex symbols and operators, HTML Attributes, Terminal Magenta |
| ![#c0caf5](https://place-hold.it/15/c0caf5/c0caf5?text=+) `#c0caf5` | Variables, Class names, Terminal White |
| ![#a9b1d6](https://place-hold.it/15/a9b1d6/a9b1d6?text=+) `#a9b1d6` | Editor Foreground |
| ![#9aa5ce](https://place-hold.it/15/9aa5ce/9aa5ce?text=+) `#9aa5ce` | Markdown Text, HTML Text |
| ![#cfc9c2](https://place-hold.it/15/cfc9c2/cfc9c2?text=+) `#cfc9c2` | Parameters inside functions (semantic highlighting only) |
| ![#565f89](https://place-hold.it/15/565f89/565f89?text=+) `#565f89` | Comments |
| ![#414868](https://place-hold.it/15/414868/414868?text=+) `#414868` | Terminal Black |
| ![#24283b](https://place-hold.it/15/24283b/24283b?text=+) `#24283b` | Editor Background (Storm) |
| ![#1a1b26](https://place-hold.it/15/1a1b26/1a1b26?text=+) `#1a1b26` | Editor Background (Night) |

--------------------------------------------

# Installation
If u wanna use em the lazy way , (JUST USE THE SCRIPT INSTEAD!!) 
1) copy em to /opt/ 
2) then cd into each one of em and run "sudo make clean install".
3) Swag

This is now done by the install_dotfiles.sh script in this repo (requires git installed)

however the install_dependencies.sh will install dependencies (or atleast try to)
if u have a sensible aur helper it would work flawlessly

# Libxft-bgra
--------------------------------------------
ig libxft-bgra wont work when you download it from AUR idk so this is how you download the pached version
```bash
git clone https://github.com/uditkarode/libxft-bgra
cd libxft-bgra
sh autogen.sh --sysconfdir=/etc --prefix=/usr --mandir=/usr/share/man
sudo make install
```
