# Universal UI

## UNDER CONSTRUCTION!
The commits done are completely irrelevant and this repository serves only for the initial development purpose. Stable repository will be created soon and link will be updated in this repository.

Universal UI is a common API for C++ for providing \<\<interface\>\> between variety of User Interfaces. Currently Graphical and Character user interfaces are supported, it might even support Holographic UI and Zero UI(voice) and hopefully whatever the future might hold for us. Universal UI is just an \<\<interface\>\> it does not have any implementation by itself.
### Usage
```
if defined(_GUI_)
UI *ui = new FLTKUI();
#elif defined(_CUI_)
UI *ui = new CharacterUI();
#endif
ui->error("There is a error in the application");
```
The User Interface selection can be decided in compile time.

### Future
```
UI *ui = new WebUI(); //you can guess from the syntax
```

#### Updates of Vision @ 4%
Reverted to C style void \* callbacks, templates didn't work out sadly. For passing parameters every developer  must create a new struct, pass as struct and have to cast from void \* on the other side. Pretty stupid, but works.

#### Updates of Vision @ 3%
Almost there on providing the required interface. This commit is not compilable(linker error) but still commited anyway, because the mechanics involved in this commit are just too important.

#### Updates of Vision @ 2%
Fully focuesd on getting the GUI FLTK thing running. Conventional GUI application cannot be created with this library it seems. No one wants a screen full of commands listed in grid like layout. To achieve GUI level GUI... maybe we can use hierarchy based commands, sub-commands, cohesive-objects?
