#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Player.h"
#include "Rival.h"
#include "Menu.h"

using namespace std;

Menu::Menu()
{
    //ctor
}

Menu::~Menu()
{
    //dtor
}

void Menu::openingMessage(){
    cout << "\n #####                                                                                                                 ###";
    cout << "\n#     # ###### #####    #####  ######   ##   #####  #   #    #####  ####     #####  #    # #    # #####  #      ###### ###";
    cout << "\n#       #        #      #    # #       #  #  #    #  # #       #   #    #    #    # #    # ##  ## #    # #      #      ###";
    cout << "\n#  #### #####    #      #    # #####  #    # #    #   #        #   #    #    #    # #    # # ## # #####  #      #####   # ";
    cout << "\n#     # #        #      #####  #      ###### #    #   #        #   #    #    #####  #    # #    # #    # #      #         ";
    cout << "\n#     # #        #      #   #  #      #    # #    #   #        #   #    #    #   #  #    # #    # #    # #      #      ###";
    cout << "\n #####  ######   #      #    # ###### #    # #####    #        #    ####     #    #  ####  #    # #####  ###### ###### ###" << endl;
    cout << endl;
}

void Menu::dispOptions(){
    cout << endl;
    cout << endl;
    cout << "                     PLAYER'S OPTIONS                     " << endl;
    cout << "**********************************************************" << endl;
    cout << "*             Press Q anytime to quit.                   *" << endl;
    cout << "*             To start a new game, press N.              *" << endl;
    cout << "*             To load previous game, press L.            *" << endl;
    cout << "*             Your player has these attacks.             *" << endl;
    cout << "*             Choose one and                             *" << endl;
    cout << "*             Enter 1 for a Karate Chop.                 *" << endl;
    cout << "*             Enter 2 for a Flying Kick.                 *" << endl;
    cout << "*             Enter 3 for an Uppercut.                   *" << endl;
    cout << "**********************************************************" << endl;
}

void Menu::dispLevel(){
    cout << "Please choose a level." << endl;
    cout << "Enter E for easy, M for medium, and H for hard: ";
}

void Menu::dispSpecialAttack(){
    cout << "You can also use use one of your special attacks!" << endl;
    cout << "Please enter the name of your destructive attack: ";
}
void Menu::dispSpecialAttack_2(){
    cout << "Remember, you can only use this attack once";
    cout << " and only if luck is by your side!\n" << endl;
    cout << "Brace yourself! The fight has started.\n" << endl;


}

void Menu::dispReward(){
    cout << "You have been a warrior your past few games!" << endl;
    cout << "And you deserve a sweet reward! " << endl;
    cout << "You can either wear this shield made of dragon scales " << endl;
    cout << "or be the owner of this mighty sharp sword." << endl;
    cout << "Choose wisely!" << endl;
    cout << "Enter A for shield or B for sword: ";

}

void Menu::dispRivalAttack_0(){
    cout << "Rival attack: Karate Chop" << endl;
    cout << "Your Health now is: ";
}

void Menu::dispRivalAttack_1(){
    cout << "Rival attack: Flying Kick" << endl;
    cout << "Your Health now is: ";
}

void Menu::dispRivalAttack_2(){
    cout << "Rival attack: UnderCut" << endl;
    cout << "Your Health now is: ";
}

void Menu::attack1Pose(){
    cout << endl;
    cout << endl;
    cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    cout <<"\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    cout <<"\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN0kKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    cout <<"\nMMMMMMMMMMMMMMMMMMMMMMMMWWWMMMMMMMMMMMMMM0, ;KMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    cout <<"\nMMMMMMMMMMMMMMMMMMMMMW0l;,;o0WMMMMMMMMMMMX; .kMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    cout <<"\nMMMMMMMMMMMMMMMMMMMMWx.     .xWMMMMMMMMMMWo  lNMMMMMMMWX0OKNMMMMMMMMMMWMMMM";
    cout <<"\nMMMMMMMMMMMMMMMMMMMMWo       lNMMMMMMMMMMMO' .lkOKXNN0c.  .,xNMMMMMMMWNWMMM";
    cout <<"\nMMMMMMMMMMMMMMMMMMMMMKc.   .c0WMMMMMMMMMMMNo'......':,      .kMMMMWWWMMMMWM";
    cout <<"\nMMMMMMMMMMMMMMMMMMWXOdl:ldkKWWWNXKKKKKXNNNNNXKOxo;  ..      'ONNWWWNWWNWWNW";
    cout <<"\nMMMMMMMMMMMMMMMMNk:.....'cllllllcc:ccccccdKWMWNXKl   .'.....;OXXXNWMMWWMMMM";
    cout <<"\nMMMMMMMMMMMMMMWO;   ................'''..;OMMWXXO:.........  :XWWWMMWWWMMMM";
    cout <<"\nMMMMMMMMMMMMMM0'      ..;OXXXXKK0OOOOOkO0KNWNd,...   .....,lx0WMMMNKNMMMMMM";
    cout <<"\nMMMMMMMMMMMMMMNkc.      cNMMMMWWNNNNNNNWWWWNXd:;'....... .oNMMMMMMWWWMMMMMM";
    cout <<"\nMMMMMMMMMMMMMMMMWo     .dWMMMMMMMMMMMMMWXx:,'''..        .kMMMMMMMMMMMMMMMM";
    cout <<"\nMMMMMMMMMMMMMMMMWx...  .kMMMMMMMMMMMWNKo'                ,KMMMMMMMMMMMMMMMM";
    cout <<"\nMMMMMMMMMMMMMMMMMKc'''',o0XWMMMMMMW0l,.    ,loddl,     .c0WMMMMMMMMMMMMMMMM";
    cout <<"\nMMMMMMMMMMMMMMMMWO:,'....,cokXWMWO:.    .:kNMMXx;.   .l0WMMMMMMMMMMMMMMMMMM";
    cout <<"\nMMMMMMMMMMMMMMMMXo,',ld:..''..dNO.    .cOWMMWk,    'oKWMMMMMMMMMMMMMMMMMMMM";
    cout <<"\nMMMMMMMMMMMMMMMNk;. .xWN0o:,. .o0d;;ok0WMMMMWo    :KWMMMMMMMMMMMMMMMMMMMMMM";
    cout <<"\nMMMMMMMMMMMMMWKl,'..lNMMMWXd.  .lXWWMMMMMMMMM0,   ,0MMMMMMMMMMMMMMMMMMMMMMM";
    cout <<"\nMMMMMMMMMMMW0d:...'lKWMMMWWXc   .lNMMMMMMMMMMWk.   cXMMMMMMMMMMMMMMMMMMMMMM";
    cout <<"\nMMMMMMMMMWOc...';lONMMMMMMMMXc   .lNMMMMMMMMMMNo.  .dWMMMMMMMMMMMMMMMMMMMMM";
    cout <<"\nMMMMMMMMXl.   .c0WMMMMMMMMMMMXc   .oNMMMMMMMMMMX:   'OMMMMMMMMMMMMMMMMMMMMM";
    cout <<"\nMMMMMMMMK:  .:ONMMMMMMMMMMMMMMXc. .lNMMMMMMMMMMM0,  'OMMMMMMMMMMMMMMMMMMMMM";
    cout <<"\nMMMMMMMMMXOk0WMMMMMMMMMMMMMMMMMN0kONMMMMMMMMMMMMWXOkKWMMMMMMMMMMMMMMMMMMMMM";
    cout <<"\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    cout <<"\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
    cout << endl;
    cout << endl;
}

void Menu::attack2Pose(){
    cout << endl;
    cout << endl;
    cout << "\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMMMMWNXXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMMNk:'..;dXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMWd.      :0XKXXXNNNNNNNNNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMNl       .,........''''',oXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMXo'.    ... ':cc:::::;;;:xNMMMMMMMMMMMMMMNXWMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMK:........   .oKWMMMMMWWWWMMMMMMMMMMMMMWMMWNWMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMXc  ..........  'dKNNNXXKK00Okkxxdoolcc::l0WWWWMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMx.    ......''    .''......               :XWXNNWMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMKdlooddc'....                   .....',,;cONWNNNNWXOdookXWMMM";
    cout << "\nMMMMMMMMMMMMMMMMMMMMWXo.      .;;;,,:clodxxkOO0KKXNNNWWWNNNNWNNO;     'kWMM";
    cout << "\nMMMMMMMMMMMMWWWWNNNWWMXl     .cl:'..';dWMMMMMMMWWWMMWWMMWXOolod:.      ;KMM";
    cout << "\nMMMMMMWWNXKK00KXNNWWWKc.            ..oNMMMMMWNXKKKKK0Oo:'.    ...... .lNMM";
    cout << "\nMMMMMMMWWWNNWWMMMMMWO,         ..;cdOKNMMMMMMO;.......  ..          .ckNMMM";
    cout << "\nMMMMMMMMMMMMMMMMMMMNl     .,:ok0XWMMMMMMMMMMMKdllllllloxk;           dWMMMM";
    cout << "\nMMMMMMMMMMMMMMMMMMMWKdcldOKNMMMMMMMMMMMMMMMMMMMMMMMMMMMNo.           lNMMMM";
    cout << "\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNKkdodkO0Kd.            cNMMMM";
    cout << "\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWN0dc,.      ...            .lNMMMM";
    cout << "\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNKOo:'.      ..              ;lxONMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNo'.     .':oO00ko;.         lXMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWkc,..;lx0NWMNOl;..      .':xXMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMMMMMMMMMMWWMMMMMMWMMWWNXXWMMMMMWd.     .':lx0NWMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMMMMMMMMMMWWWMMWMMMMMMMMMMMMMMMWk.   .cx0NWMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWMMMMMMMMMMMMMMMWO'   .xWMMMMMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMMMMMMMMMMWWWMMMMMMMMMMMMMMMMMK;   .oNMMMMMMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXc    cXMMMMMMMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWo.   :KMMMMMMMMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMMMMWWWMMMMNOkKWMMMMMMMMMMMMNd. .:0MMMMMMMMMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMMMMWWMMMMWx. cXMMMMMMMMMMMMMNkoxXMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
    cout << endl;
    cout << endl;
}

void Menu::attack3Pose(){
    cout << endl;
    cout << endl;
    cout << "\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWK0XN0ONMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNkodKOxXNOkOOXK0NMMM";
    cout << "\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXk0NWWMW0kkxkdd0XWM";
    cout << "\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNKKXKxlod0WWWKxoONM";
    cout << "\nMMMMMMMMMMMMMMMMMMMMMMMMWKxolokXMMMMMMMMMMMMMMMMMMMMMWX0ko:,,.   .oNMNkoxXM";
    cout << "\nWWMMMMMMMMMMMMMMMMMMMMMWx.     ;OWMMWWNNXXNXXKKNNKOdc;..  ....    '0NkokXWM";
    cout << "\nWNWMMMMMMMMMMMMMMMMMMMMK;       lNWXK0kxolc:lxOx;.    .'',c;.     cXWK0XMMM";
    cout << "\nMMMMWMMMMMMMMMMMMMMMMMMNd.     .okdc;'..  .,xNW0l,..  .....ldc;:lkNMMMMMMMM";
    cout << "\nWNMWNWMMMMMMMMMMMMWN0xdddo;..........',:lxOKNWMMWWKc......'kWMWWMMMMMMMMMMM";
    cout << "\nWWMMMMMMMMMMMMMMNkc'.......  ..,:coxkO0KXNWWMMMMMWx.     .oNMMMMMMMMMMMMMMM";
    cout << "\nWWMMMMMMMMMMMMWk,    .'...;okKXNNNNNWWWMMMMMMMMMM0'      lNMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMNx.      ..;0MMMMMMMMMMMMMMMMMMMMMNl      :XMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMW0;      .xWMMMMMWMMMMMMMMMMMMMMMK,     .OMMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMX:     .oNMMMMWMMMMMMMMMMMMMMMMNx.     :XMMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMK,     :KWMMMMMMMMMMMMMMMMMN0dc,.     'kWMMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMX:     ,xKWWWMMMMMMMMMMMMWk,.     ...lKWMMMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMWk,.  ...,cdKWMMMMMMMMMMMNo.     .,''xWMMMMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMWd...''.    .;kNMMMMMMMMMMNkl'.    ..l0NMMMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMNo.. 'xOl.    ,0MMMMMMMMMMMMMNOo,.    .:0MMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMWKx;.. ,0MK;   .dNMMMMMMMMMMMMMMMWO;...  'OMMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMN0xc'..  .lXXl.   lNMMMMMMMMMMMMMMMMMNo....;OWMMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMN0d:......,lONNo.   :XMMMMMMMMMMMMMMMMMMMK;   .xWMMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMWO;......:d0NMMWx.   ;KMMMMMMMMMMMMMMMMMMMMWk.   ,0MMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMNo....cx0NMMMMMNc   'OMMMMMMMMMMMMMMMMMMMMMMWo.   oWMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMWXOxk0NMMMMMMMMWKdld0WMMMMMMMMMMMMMMMMMMMMMMMXo'.;kWMMMMMMMMMMMMMMMMM";
    cout << "\nMMMMMMWMWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKKXWMMMMMMMMMMMMMMMMMM" << endl;
    cout << endl;
    cout << endl;
}

void Menu::dispPlr(){
    cout << endl;
    cout << endl;
    cout << "\nMMMMWMMMMWMWWMMWMMWWMMMWWMMMMMMMWWWWMWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNKOxdlcccclodk0XWMMMMMMMMM";
    cout << "\nMWWWWWWWWWWWWWWWWNKOxdooodxk0KNWWWWWWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMWXOdc,..           .';oOXWMMMMM";
    cout << "\nMWWWWWWWWWWWWWNOo:,.....'',,;:oxKNWWWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMWOl,.  .............     .'oKWMMM";
    cout << "\nMWWWWWWWWWWWXkc'......'''''''',,:o0NWWWWWWMMMMMMMMMMMMMMMMMMMMMMMW0c........''''...........    'xNMM";
    cout << "\nMWWWWWWWWWW0o;.......''''''''''',,:xXWWWWWMMMMMMMMMMMMMMMMMMMMMMWk,..,,,;:::c::;,,,,,,'''....   .dNM";
    cout << "\nMWWWWWWWWW0l,.......''''''''''''',,:xNWWNNWMMMMMMMMMMMMMMMMMMMMMK:.,;;;,,,',,'''''............   .oN";
    cout << "\nMWWWWWWWWKo;'......'''''''',,,,,,,,;lKWNKKWMMMMMMMMMMMMMMMMMMMMNd'....'',;::clloddoc'.........    :X";
    cout << "\nMWWWWWWWWOc,.......''',,'..':ol;'';:dXNXNXNMMMMMMMMMMMMMMMMMMMWd',:lldxkO0000KK000Okoc,.......    :X";
    cout << "\nMWWWWWWWWk:,......'',;coo:..lOx;'coo0XXWNKNMMMMMMMMMMMMMMMMMMMXc:kkO00KKKXXXXXXXKOxxdxdclc..';;'..dW";
    cout << "\nMWWWWWWWW0c,.......;codk0o..o0Ol,loo0NNX0XWMMMMMMMMMMMMMMMMMMMNod0kkddxOKXXXNX0dc;,,;coxOk::dxkd',0M";
    cout << "\nMWWWWWWWWKl,.......,;:cldo:coddocllxXN00NWMMMMMMMMMMMMMMMMMMMMMK0X0l,,,,oKXXX0l'.::,clcx0OkkkxOd;oNM";
    cout << "\nMWWWWWWWXl..,'.......'',,,,,,,''':xKKOKNWWMMMMMMMMMMMMMMMMMMMMMMWWNxclc.;OKKKKO:.,cc0XOO0000kkdoONMM";
    cout << "\nMWWWWWNO:....'''.........'''''',ck0OOXWWWWMMMMMMMMMMMMMMMMMMMMMMMMMKOOo;cOKKKKKklcokXNXK0OxccxkOWMMM";
    cout << "\nMWWWNOc.....,lol:,''........',;lkOk0NWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMX0KXKKXXXXXXXKKKXXK0Ooc::oOOKWMMM";
    cout << "\nWXOd:'.:;..c0WWNKOd:'''....,codxkOXWWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMWX0000000000OOOOkdc,...lkOKXWMMMM";
    cout << "\nWXkdddxdllkXWWWWNOo;''.....'lxkkKNWWWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMWXKKXXKKOo:,:dx:.....:ONWMMMMMM";
    cout << "\nMWWWWWXKNWWWWWW0l,''''....,lxdkXWWWWWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMW0kO0XXKx:...';c;'.'lx0WMMMMMMMM";
    cout << "\nMWWWWWWWWWWWWWk;.'''.....:ddc,c0NWWWWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMW0ddkOOx:..........cXMMMMMMMMMMM";
    cout << "\nMWWWWWWWWWWWWWd'''''....:ol;,'';cxKWWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMWXXNNN0xdOl.......:XMMMMMMMMMMM";
    cout << "\nMWWWWWWWWWWWWWKl''''....',''...''.,dNWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNx,.......,xNMMMMMMMMMM";
    cout << "\nMWWWWWWWWWWWWWWXx:............'....oNWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNOc...........:dKWMMMMMMM";
    cout << "\nMWWWWWWWWWWWWWWWK:.....,:'...,lo::dXWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNkc'....'cl:'. ...;kWMMMMMM";
    cout << "\nMWWWWWWWWWWWWWWWO,..'';kXd'.',dXNNWWWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXx;.....;xXWWWKl. ..'dNMMMMMM";
    cout << "\nMWWWWWWWWWWWWWW0c'''',xNWk;''';xKNWWWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMWXx:.....cONMMMMNd'....lXMMMMMMM";
    cout << "\nMWWWWWWWWWWWWWNd'...'lXWW0:....':kWWWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMWKd;.... 'xWMMMMMNl. ...,0MMMMMMMM";
    cout << "\nMWWWWWWWWWWWWWWXOdc;,c0WWXd;::lx0NWWWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMKl;:::::;xWMMMMMNo..',;:lkXWMMMMMM";
    cout << "\nMMMMMMMMWMWWMWWWMMWNXNWWWWWNNWWMMMWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWK0000KKKNMMMMMMW0xkO0KKKKNWMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMMMMMMWNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNKKKKKKKXNWMMMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMMMMMWk;oNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXo':kOOOkdldXMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMMMMM0; .xWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMk.cNMMMMWo.lWMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMMMMKlol..OWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMk.cNMMMMNl.dWMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMMMNooNNc ,KMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMk.,kOOkdcckWMMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMMWdcOXXk' cXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMk.;OKK0OxlcOWMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMMWk:oxkkxl..oNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMk.cNMMMMMK,.kMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMMMM0ckWMMMMWx..xWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMk.cNMMMMMX;.dWMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMWKd,.lOXMMWKd' 'dKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNo.;0XXXKkl,oXMMMMMMMMMMM";
    cout << "\nMMMMMMMMMMMMMW0doooxKMMWOdooodOWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMW0l,:odddold0WMMMMMMMMMMMM";
    cout << endl;
    cout << endl;
}

void Menu::winMessage(){
    cout << endl;
    cout << endl;
    cout << "MMMMMMMMWNK000OO0000000OO0000KNWMMMMMMMM" << endl;
    cout << "MMMMMMNK000KNNNNNNNNNNNNNNNNK000KNMMMMMM" << endl;
    cout << "MMMMX0O0XNNNNXKXNNNNNNNNNK0XNNNX0O0XWMMM" << endl;
    cout << "MMW0O0NNNNNN0:.:0NNNNNNNk,.lKNNNNNKk0NMM" << endl;
    cout << "MNOOXNNNNNNXl   oXNNNNNK:  .xNNNNNNXOONM" << endl;
    cout << "NkOXNNNNNNN0;   :KNNNNNO'   lXNNNNNNXOkN" << endl;
    cout << "OkXXXXXXXXX0;   :KXXXXNO'   lXXXXXXXXXkO" << endl;
    cout << "x0XXXXXXXXXKl  .oXXXXXX0:  .xXXXXXXXXX0x" << endl;
    cout << "xKXXXXXXXXXXOc,l0XXXXXXXOc;dKXXXXXXXXXKx" << endl;
    cout << "xKKKOkk0KKKKKKKKKKKKKKKKKKKKKKKKOxxk0KKx" << endl;
    cout << "xKKOo,;kKKKKKKKKKKKKKKKKKKKKKKKKk:'cOKKx" << endl;
    cout << "d0KK0l:kKKKKKKKKKKKKKKKKKKKKKKKK0l:kKK0d" << endl;
    cout << "xkK00k:cOK0000000000000000000000d;d000kx" << endl;
    cout << "0xO000x:ck00000000000000000000Ol:oO00Ox0" << endl;
    cout << "W0xk000kl:lxO000000000000000ko:cx000kx0W" << endl;
    cout << "MWKxxO000koccldkOO00000OkxolclxO00OkxKWM" << endl;
    cout << "MMMNOxkO000OxollllllllllllodO000OkxONMMM" << endl;
    cout << "MMMMWXOkxk000000OOkkkkkO000000kxkOXWMMMM" << endl;
    cout << "MMMMMMMNKOkkkkOO00000000OOkkkkOKNMMMMMMM" << endl;
    cout << "MMMMMMMMMMWKOxddddddddddddxOKWMMMMMMMMMM" << endl;
    cout << endl;
    cout << endl;
}

void Menu::lossMessage(){
    cout << endl;
    cout << endl;
    cout << "MMMMMMMMWXOoc::::cccccc::::coOXWMMMMMMMM" << endl;
    cout << "MMMMMMNkc;:lxOKXNNNNNNNNXKOxl:;ckNMMMMMM" << endl;
    cout << "MMMMXd;;oOXNNNXXXXXXXXXXXXNNNXOo;;dXMMMM" << endl;
    cout << "MMNk;;xXNNXXXXXXXXXXXXXXXXXXXXNNXx;;kNMM" << endl;
    cout << "MXl'lKNNXXXXXXkld0XXXXKdlkKXXXXXNNKl'lXM" << endl;
    cout << "Xc'dNNXXXXXXXO, .oXXXXo. 'kXXXXXXXNNd'cX" << endl;
    cout << "o.oNNXXXXXXXXd.  :KXXKc  .oXXXXXXXXNNo.o" << endl;
    cout << "';KNXXXXXXXXXd.  :0XXKc  .oXXXXXXXXXNK;'" << endl;
    cout << ".dNNXXXXXXXXXO, .oXXXXo. 'kXXXXXXXXXNNd." << endl;
    cout << ".xWNXXXXXXXXXXklo0XXXXKdcxKXXXXXXXXXNWx." << endl;
    cout << ".xWNXXXXXXXXXXXXXKKKKKXXXXXXXXXXXXXXNWx." << endl;
    cout << ".lNNXXXXXXXXXKkoccccccccokKXXXXXXXXXNNl." << endl;
    cout << ":'OWNXXXX000d::lxO0KK0Odl::d000XXXXNWO':" << endl;
    cout << "O,;0NNXX0:',;d0XXXXXXXXXX0d:,':OXXNW0;,O" << endl;
    cout << "Wk,;ONNXKl..lKXXXXXXXXXXXXKo'.lKXNN0;,kW" << endl;
    cout << "MW0:,dXNNX0OOKXXXXXXXXXXXXKOk0XNNXd,:0WM" << endl;
    cout << "MMMNd;;dKNNNXXXXXXXXXXXXXXXXNNNKd;;dNMMM" << endl;
    cout << "MMMMMXx:;cx0XNNNNNNNNNNNNNNX0xc;:xXMMMMM" << endl;
    cout << "MMMMMMMN0dc::coxkOO00OOkxoc::cd0NMMMMMMM" << endl;
    cout << "MMMMMMMMMMWKxc,..........,cxKWMMMMMMMMMM" << endl;
    cout << endl;
    cout << endl;
}
