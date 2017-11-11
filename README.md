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
