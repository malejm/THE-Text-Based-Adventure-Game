#include<iostream>
using namespace std;
main()
{//introduction
    string name;
    int number=0;
    int DogIsGone=0;
    int CloudConverter=0;
    int Minimizer=0;

    cout<<"Welcome to THE. What is your name?"<<endl;
    cin>>name;
    cout<<"Nice to meet you, Clifford. Now get out."<<endl;

    GetOut:

    cout<<"Enter 1 to get out. Enter 2 to say that you will not leave."<<endl;
    cin>>number;
    if(number==1);
    else if (number==2)
    {
        cout<<"I said get out."<<endl;
        goto GetOut;
    }
    else
    {
        cout<<"Hey I didn't say you could do that you little shit!"<<endl;
        goto GetOut;
    }

    PreOutside:


    cout<<"Thank you. I hadn't invited you in and quite honestly it was rude of you to enter so unexpected. Now that you're in The Outside let me introduce myself."<<endl;
    cout<<"Most stories have a narrator. This one doesn't. I'm Bill and I'm the cheese grater. But that's enough about me."<<endl;
    cout<<endl;
    TheOutside:
        if (DogIsGone==1){goto TheOutside2;}
    cout<<"Looking around you, to your left you can see a road with a sign that says 'Cancer Island.' In front of you there's a big fat dog blocking a very small doorway. To your right there's a desk, but like a really big desk. Behind you is my house. Don't go there."<<endl;

    int outside;
    OutsideChoice:

    cout<<"Enter 1 to go down the road to Cancer Island."<<endl;
    cout<<"Enter 2 to approach the dog."<<endl;
    cout<<"Enter 3 to go to the desk."<<endl;
    cout<<"Enter 4 to go back inside my house."<<endl;
    cin>>outside;
    if(outside==1){goto CancerIslandRoad;}
    else if (outside==2){goto Dog;}
    else if (outside==3){goto Desk;}
    else if (outside==4){goto BillsHouse;}
    else
    {
        cout<<"Hey I didn't say you could do that you little shit!"<<endl;
        goto OutsideChoice;
    }
TheOutside2:
    cout<<"Looking around you, to your left you can see a road with a sign that says 'Cancer Island.' In front of you there's a very small doorway. To your right there's a desk, but like a really big desk. Behind you is my house. Don't go there."<<endl;

    OutsideChoice2:

    cout<<"Enter 1 to go down the road to Cancer Island."<<endl;
    cout<<"Enter 2 to approach the doorway."<<endl;
    cout<<"Enter 3 to go to the desk."<<endl;
    cout<<"Enter 4 to go back inside my house."<<endl;
    cin>>outside;
    if(outside==1){goto CancerIslandRoad;}
    else if (outside==2){goto Door;}
    else if (outside==3){goto Desk;}
    else if (outside==4){goto BillsHouse;}
    else
    {
        cout<<"Hey I didn't say you could do that you little shit!"<<endl;
        goto OutsideChoice2;}
CancerIslandRoad:
    cout<<"As you venture down the road to Cancer Island you come across a large tree."<<endl;
    CancerIslandRoadChoice:
    cout<<"Enter 1 to climb the tree."<<endl;
    cout<<"Enter 2 to continue down Cancer Island Road."<<endl;
    cout<<"Enter 3 to go back to The Outside."<<endl;
    int CancerIslandRoad1;
    cin>>CancerIslandRoad1;
    if(CancerIslandRoad1==1){goto LargeTree;}
    else if(CancerIslandRoad1==2){goto CancerIslandRoadBridge;}
    else if (CancerIslandRoad1==3){goto TheOutside;}
    else {cout<<"Hey I didn't say you could do that you little shit!"<<endl;
        goto CancerIslandRoadChoice;}
LargeTree:
    cout<<"While climbing, you spot a nest. It appears just out of your reach."<<endl;
    LargeTreeChoice:
    cout<<"Enter 1 to climb up."<<endl;
    cout<<"Enter 2 to climb down."<<endl;
    int LargeTree1;
    cin>> LargeTree1;
    if(LargeTree1==1){goto TopOfTree;}
    else if(LargeTree1==2){goto CancerIslandRoad;}
    else {cout<<"Hey I didn't say you could do that you little shit!"<<endl;
        goto LargeTreeChoice;}
TopOfTree:
        cout<<"At the top of the tree there is a giant cactus, reaching for the heavens. Lucky for you, you're cannonically a bobcat and bobcats are immune to cactus needles."<<endl;
        TopOfTreeChoice:
        cout<<"Enter 1 to climb the cactus."<<endl;
        cout<<"Enter 2 to climb down the tree."<<endl;
        int TopOfTree1;
        cin>>TopOfTree1;
        if(TopOfTree1==1){goto TopOfCactus;}
        else if(TopOfTree1==2){goto LargeTree;}
        else {cout<<"Hey I didn't say you could do that you little shit!"<<endl;
        goto TopOfTreeChoice;}
TopOfCactus:
        cout<<"The top of the cactus is level with the top of the clouds. There appears to be a small cluster of buildings. Of these buildings there's a library, a hat shop, and Section 8 housing."<<endl;
        TopOfCactusChoice:
        cout<<"Enter 1 to go to the library."<<endl;
        cout<<"Enter 2 to go to the hat shop."<<endl;
        cout<<"Enter 3 to go to the section 8 housing."<<endl;
        cout<<"Enter 4 to climb back down the cactus."<<endl;
        if(CloudConverter==false) {
            int BullshitInteger;
            cin>>BullshitInteger;
            if(DogIsGone=0){goto FallingDoor2;}
            else{goto FallingDoor1;}}
        else{
                int TopOfCactus1;
                cin>>TopOfCactus1;
                if(TopOfCactus1==1){goto SkyvilleLibrary;}
                else if(TopOfCactus1==2){goto SkyvilleHatShop;}
                else if(TopOfCactus1==3){goto SkyvilleSection8Housing;}
                else if(TopOfCactus1==4){goto TopOfTree;}
                else{cout<<"Hey I didn't say you could do that you little shit!"<<endl;
        goto TopOfCactusChoice;}}
            SkyvilleLibrary:
            SkyvilleHatShop:
            SkyvilleSection8Housing:
CancerIslandRoadBridge:
Dog:
    cout<<"You walk up to the fat ass pooch."<<endl;
    DogChoice:
    cout<<"Enter 1 to pet it."<<endl;
    cout<<"Enter 2 to politely ask it to get out of your way."<<endl;
    cout<<"Enter 3 to kick it."<<endl;
    cout<<"Enter 4 to go back to The Outside."<<endl;
    int Dog1;
    cin>>Dog1;
    if(Dog1==1){cout<<"You pet the dog. I don't think it noticed. It's so damn fat that it's lost complete feeling of its body. Somebody put this thing out of its misery."<<endl;
        goto DogChoice;}
    else if(Dog1==2){cout<<"You use your best manners and ask it to please get the hell out of the way. It doesn't even notice."<< endl;
    goto DogChoice;}
    else if(Dog1==3){cout<<"You kick that thing as hard as you can. You caused it no pain but it noticed that you moved it ever so slightly. It tells you to fuck off."<< endl;
    goto DogChoice;}
    else if(Dog1==4){goto TheOutside;}
    else {cout<<"Hey I didn't say you could do that you little shit!"<<endl;
        goto DogChoice;}
FallingDoor1:
    cout<<"You take a step forward and fall right through. You can't walk on clouds you preposterously demented ape. You fall right on top of that fat fucking dog from earlier and he glitches through the world and disappears."<<endl;
            DogIsGone=1;
            goto Door;
FallingDoor2:
    cout<<"You take a step forward and fall right through. We've already been over this, retard. Clouds aren't solid. Fuck's sake. You know what, just because I pity you and your tiny flipping peanut brain, I'm giving you a Cloud Converter so this doesn't happen again."<<endl;
            CloudConverter=1;
            goto Door;
Door:
        cout<<"There is no longer a dog in front of the door. But you're still just too big to fit through this very small door."<<endl;
        DoorChoice:
        if (Minimizer==0){cout<<"Enter 1 to go back to The Outside."<<endl;
            int Door1;
            cin>>Door1;
            if(Door1==1){goto TheOutside;}
            else{cout<<"Hey I didn't say you could do that you little shit!"<<endl;
        goto DoorChoice;}}
        else{
            cout<<"Enter 1 to go back to The Outside."<<endl;
            cout<<"Enter 2 to use your minimizer to shrink through the door."<<endl;
            int Door2;
            cin>>Door2;
            if(Door2==1){goto TheOutside;}
            else if(Door2==2){goto AntiProstitutionBrothel;}
            else{cout<<"Hey I didn't say you could do that you little shit!"<<endl;
        goto DoorChoice;}}
AntiProstitutionBrothel:
Desk:
BillsHouse:;

}
