# Custom Lily58 firmware

Intall QMK. Under arch, you can simply run ```sudo pacman -S qmk```.<br>
Run ```qmk setup``` and ```cd qmk_firmware/keyboards/lily58/keymaps```.<br>
Clone this repository into a folder named `mandrab`.<br>
Compile the code with `qmk compile -kb lily58/rev1 -km mandrab`<br>
Flash the firmware with `qmk flash -kb lily58/rev1 -km mandrab`
