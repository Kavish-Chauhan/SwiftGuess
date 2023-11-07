#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

int total=0,scored=0,nocall=0,intrchek=3,runstn=0,runpla=0,runcele=0;

intro ()
{
    printf("Welcome to SwiftGuess, The Mumbai quiz game.\nTest your knowledge of the city of dreams.\n\nThe game has 3 categories:\n1) Stations: The Local railway system is lifeline of Mumbai. Check how well you know the \x1B[9mstreets\x1B[29m rails.\n2) Celebrities: Being the City of Dreams, there are a lot of people who have achieved their dreams already and reside in the city, Try to guess them by the hints.\n3) Spots: The city is also a bustling tourist place for both Nationals and Foreigners, Check how well you can guide them (Just in case you fail engineering :P)\n\n");
    printf("Guidelines:\nFor each question you will be provided with three hints, If you answer in the first go you get 3 points, correct answer on second hint will give 2 points, correct answer the final hint will give 1 point and incorrect answer after three hints will result in 0 points for that question\nPLEASE ENTER ONLY FIRST WORD AND NO SPACES AS INPUT.\nFor eg. If you think the answer is 'Taj Mahal', only enter 'Taj' or 'Neeraj' for 'Neeraj Chopra'\n\n");

}

stn ()
{
    int stnver1, stnver2, catstnver;
    if(runstn==1){
        printf("You have already exhausted this category, try another one");
        main();}
        else{
    printf("\nGuess the station of Mumbai\n");
//ROUND 1
    //andheri

    char andin[MAX];
    char andset[] = "andheri";
    total+=3;
    printf("\nFirst\nHint 1: It is located in the western part of the city.\n");
    scanf("%s", andin);

    for (int i = 0; andin[i] != '\0'; i++)
        andin[i] = tolower(andin[i]);

    int result = strcmp(andin, andset);

    if (result == 0)
        {
            printf("You guessed it right\n");
            scored+=3;
        }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2: Lokhandwala market is located in this city.\n");
        scanf("%s", andin);
        for (int i = 0; andin[i] != '\0'; i++)
            andin[i] = tolower(andin[i]);

        int resultand = strcmp(andin, andset);

        if (resultand == 0)
            {
                printf("You guessed it right\n");
                scored+=2;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint: It is the third stop after Airport Road if we are travelling by metro.\n");
            scanf("%s", andin);
                for (int i = 0; andin[i] != '\0'; i++)
                    andin[i] = tolower(andin[i]);

                int resultand = strcmp(andin, andset);

                if (resultand == 0)
                    {
                        printf("You guessed it right\n");
                        scored+=1;
                    }
                else
                    printf("Wrong guess. The answer is Andheri\n");
        }
    }

    //bandra

    char banin[MAX];
    char banset[] = "bandra";
    total+=3;
    printf("\nSecond\nHint 1: It is often referred to as the 'Queen of the Suburbs'.\n");
    scanf("%s", banin);
    for (int i = 0; banin[i] != '\0'; i++)
        banin[i] = tolower(banin[i]);

    int resultban = strcmp(banin, banset);

    if (resultban == 0)
       {
           printf("You guessed it right\n");
           scored+=3;
       }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2: Terminal of one of the most iconic bridges of the city\n");
        scanf("%s", banin);
        for (int i = 0; banin[i] != '\0'; i++)
            banin[i] = tolower(banin[i]);

        int resultban = strcmp(banin, banset);

        if (resultban == 0)
            {
                printf("You guessed it right\n");
                scored+=2;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint: You can find the famous bandstand here.\n");
            scanf("%s", banin);
            for (int i = 0; banin[i] != '\0'; i++)
                banin[i] = tolower(banin[i]);

            int resultban = strcmp(banin, banset);

            if (resultban == 0)
                {
                    printf("You guessed it right\n");
                    scored+=1;
                }
            else
                printf("Wrong guess. The answer is Bandra\n");
        }
    }

    //kurla

    char kurin[MAX];
    char kurset[] = "kurla";
    total+=3;
    printf("\nThird\nHint 1: All fast Central line locals stop at this station\n");
    scanf("%s", kurin);
    for (int i = 0; kurin[i] != '\0'; i++)
        kurin[i] = tolower(kurin[i]);

    int resultkur = strcmp(kurin, kurset);

    if (resultkur == 0)
        {
            printf("You guessed it right\n");
            scored+=3;
        }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2: Junction for Central and Harbour line\n");
        scanf("%s", kurin);
        for (int i = 0; kurin[i] != '\0'; i++)
            kurin[i] = tolower(kurin[i]);

        int resultkur = strcmp(kurin, kurset);

        if (resultkur == 0)
            {
                printf("You guessed it right\n");
                scored+=2;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint:  Station code is CLA\n");
            scanf("%s", kurin);
            for (int i = 0; kurin[i] != '\0'; i++)
                kurin[i] = tolower(kurin[i]);

            int resultkur = strcmp(kurin, kurset);

            if (resultkur == 0)
                {
                    printf("You guessed it right\n");
                    scored+=1;
                }
            else
                printf("Wrong guess. The answer is Kurla\n");
        }
    }
printf("\nFor continuing in same category enter 1 else enter 0\n");
stnver1=invalid();

switch (stnver1)
{
    case 1:
    {

// ROUND 2
    // ghatkopar
    char gtkin[MAX];
    char gtkset[] = "ghatkopar";
    total+=3;
    printf("\nFirst\nHint 1: A major station of central line\n");
    scanf("%s", gtkin);
    for (int i = 0; gtkin[i] != '\0'; i++)
        gtkin[i] = tolower(gtkin[i]);

    int resultgtk = strcmp(gtkin, gtkset);

    if (resultgtk == 0)
        {
            printf("You guessed it right\n");
            scored+=3;
        }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2: Trains towards CST become comparatively much less crowded after this station\n");
        scanf("%s", gtkin);
        for (int i = 0; gtkin[i] != '\0'; i++)
            gtkin[i] = tolower(gtkin[i]);

        int resultgtk = strcmp(gtkin, gtkset);

        if (resultgtk == 0)
            {
                printf("You guessed it right\n");
                scored+=3;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint: Central Metro line starts from this station\n");
            scanf("%s", gtkin);
            for (int i = 0; gtkin[i] != '\0'; i++)
                gtkin[i] = tolower(gtkin[i]);

            int resultgtk = strcmp(gtkin, gtkset);

            if (resultgtk == 0)
                {
                    printf("You guessed it right\n");
                    scored+=1;
                }
            else
                printf("Wrong guess. The answer is Ghatkopar\n");
        }
    }

    // panvel

    char pnvin[MAX];
    char pnvset[] = "panvel";
    total+=3;
    printf("\nSecond\nHint 1: It a junction for Konkan and Pune routes buses.\n");
    scanf("%s", pnvin);
    for (int i = 0; pnvin[i] != '\0'; i++)
        pnvin[i] = tolower(pnvin[i]);

    int resultpnv = strcmp(pnvin, pnvset);

    if (resultpnv == 0)
        {
            printf("You guessed it right\n");
            scored+=3;
        }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2: It is part of the Harbour railway line.\n");
        scanf("%s", pnvin);
        for (int i = 0; pnvin[i] != '\0'; i++)
            pnvin[i] = tolower(pnvin[i]);

        int resultpnv = strcmp(pnvin, pnvset);

        if (resultpnv == 0)
            {
                printf("You guessed it right\n");
                scored+=2;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint: Next station after khandeshwar\n");
            scanf("%s", pnvin);
            for (int i = 0; pnvin[i] != '\0'; i++)
                pnvin[i] = tolower(pnvin[i]);

            int resultpnv = strcmp(pnvin, pnvset);

            if (resultpnv == 0)
                {
                    printf("You guessed it right\n");
                    scored+=1;
                }
            else
                printf("Wrong guess. The answer is Panvel\n");
        }
    }

    // churchgate

    char cgin[MAX];
    char cgset[] = "churchgate";
    total+=3;
    printf("\nThird\nHint 1: Name is made of 2 common nouns\n");
    scanf("%s", cgin);
    for (int i = 0; cgin[i] != '\0'; i++)
        cgin[i] = tolower(cgin[i]);

    int resultcg = strcmp(cgin, cgset);

    if (resultcg == 0)
        {
            printf("You guessed it right\n");
            scored+=3;
        }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2: Nearest station to the 'Queen's Necklace'\n");
        scanf("%s", cgin);
        for (int i = 0; cgin[i] != '\0'; i++)
            cgin[i] = tolower(cgin[i]);

        int resultcg = strcmp(cgin, cgset);

        if (resultcg == 0)
            {
                printf("You guessed it right\n");
                scored+=2;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint: Terminal station of western line\n");
            scanf("%s", cgin);
            for (int i = 0; cgin[i] != '\0'; i++)
                cgin[i] = tolower(cgin[i]);

            int resultcg = strcmp(cgin, cgset);

            if (resultcg == 0)
                {
                    printf("You guessed it right\n");
                    scored+=1;
                }
            else
                printf("Wrong guess. The answer is Churchgate\n");
        }
    }

    printf("\nFor continuing in same category enter 1 else enter 0\n");
    stnver2=invalid();
    if (stnver2==1)
    {
//ROUND 3
    // parel

    char parin[MAX];
    char parset[] = "parel";
    total+=3;
    printf("\nFirst\nHint 1: A footbridge links this station to Prabhadevi station\n");
    scanf("%s", parin);
    for (int i = 0; parin[i] != '\0'; i++)
        parin[i] = tolower(parin[i]);

    int resultpar = strcmp(parin, parset);

    if (resultpar == 0)
        {
            printf("You guessed it right\n");
            scored+=3;
        }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2: Ganesh gully is located here\n");
        scanf("%s", parin);
        for (int i = 0; parin[i] != '\0'; i++)
            parin[i] = tolower(parin[i]);

        int resultpar = strcmp(parin, parset);

        if (resultpar == 0)
            {
                printf("You guessed it right\n");
                scored+=2;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint: Next station after Dadar\n");
            scanf("%s", parin);
            for (int i = 0; parin[i] != '\0'; i++)
                parin[i] = tolower(parin[i]);

            int resultpar = strcmp(parin, parset);

            if (resultpar == 0)
                {
                    printf("You guessed it right\n");
                    scored+=1;
                }
            else
                printf("Wrong guess. The answer is Parel\n");
        }
    }

    // vashi
    char vashin[MAX];
    char vashset[] = "vashi";
    total+=3;
    printf("\nSecond\nHint 1: One of the major stations of trans harbour line.\n");
    scanf("%s", vashin);
    for (int i = 0; vashin[i] != '\0'; i++)
        vashin[i] = tolower(vashin[i]);

    int resultvash = strcmp(vashin, vashset);

    if (resultvash == 0)
        {
            printf("You guessed it right\n");
            scored+=3;
        }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2: It has a SeaBridge connecting it to Eastern Mumbai\n");
        scanf("%s", vashin);
        for (int i = 0; vashin[i] != '\0'; i++)
            vashin[i] = tolower(vashin[i]);

        int resultvash = strcmp(vashin, vashset);

        if (resultvash == 0)
            {
                printf("You guessed it right\n");
                scored+=2;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint: Terminal Station\n");
            scanf("%s", vashin);
            for (int i = 0; vashin[i] != '\0'; i++)
                vashin[i] = tolower(vashin[i]);

            int resultvash = strcmp(vashin, vashset);

            if (resultvash == 0)
                {
                    printf("You guessed it right\n");
                    scored+=1;
                }
            else
                printf("Wrong guess. The answer is Vashi\n");
        }
    }

    // matunga
    char matin[MAX];
    char matset[] = "matunga";
    total+=3;
    printf("\nThird\nHint 1: Famous for south Indian food\n");
    scanf("%s", matin);
    for (int i = 0; matin[i] != '\0'; i++)
        matin[i] = tolower(matin[i]);

    int resultmat = strcmp(matin, matset);

    if (resultmat == 0)
        {
            printf("You guessed it right\n");
            scored+=3;
        }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2: Some of the most prestigous educational institutes of Mumbai are present here\n");
        scanf("%s", matin);
        for (int i = 0; matin[i] != '\0'; i++)
            matin[i] = tolower(matin[i]);

        int resultmat = strcmp(matin, matset);

        if (resultmat == 0)
            {
                printf("You guessed it right\n");
                scored+=2;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint: Is between Kurla and Dadar\n");
            scanf("%s", matin);
            for (int i = 0; matin[i] != '\0'; i++)
                matin[i] = tolower(matin[i]);

            int resultmat = strcmp(matin, matset);

            if (resultmat == 0)
                {
                    printf("You guessed it right\n");
                    scored+=1;
                }
            else
                printf("Wrong guess. The answer is \n");
    }}
    }
    else // 6 done no cont
    {

                printf("\nTo play another category enter 1, otherwise enter 0\n");
                catstnver=invalid();
            if (catstnver == 1)
            main();
            else{
                nocall=1;
                score();
                return;
            }
            }
            break;
    }
    case 0:
       {

        printf("To play another category enter 1, otherwise enter 0\n");
        catstnver=invalid();
            if (catstnver == 1)
            main();
            else{
            nocall=1;
            score();
            return;
            }
       break;}
}
  printf("\nEnd of category 1\n");
  runstn=1;
  printf("To play another category enter 1, otherwise enter 0\n");
  catstnver=invalid();
  if (catstnver == 1)
            main();
            else{
            nocall=1;
            score();
            return;
            }

}}

celeb ()
{
    int celever1, celever2, catcelever;
    if(runcele==1){
        printf("You have already exhausted this category, try another one");
        main();}
        else{
    printf("\nGuess the Celebrity from Mumbai \n");
//ROUND 1
    //Shahrukh Khan

    char shahin[MAX];
    char shahset[] = "shahrukh";
    total+=3;
    printf("\nFirst\nHint 1: He is a highly acclaimed Indian actor with a career spanning decades.\n");
    scanf("%s", shahin);

    for (int i = 0; shahin[i] != '\0'; i++)
        shahin[i] = tolower(shahin[i]);

    int result = strcmp(shahin, shahset);

    if (result == 0)
        {
            printf("You guessed it right\n");
            scored+=3;
        }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2: His most iconic and frequently used character name in movies is 'Rahul'.\n");
        scanf("%s", shahin);
        for (int i = 0; shahin[i] != '\0'; i++)
            shahin[i] = tolower(shahin[i]);

        int resultshah = strcmp(shahin, shahset);

        if (resultshah == 0)
            {
                printf("You guessed it right\n");
                scored+=2;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint: :'Bade bade deshon mein aisi chhoti chhoti baatein hoti rehti hai,Senorita'\n");
            scanf("%s", shahin);
                for (int i = 0; shahin[i] != '\0'; i++)
                    shahin[i] = tolower(shahin[i]);

                int resultshah = strcmp(shahin, shahset);

                if (resultshah == 0)
                    {
                        printf("You guessed it right\n");
                        scored+=1;
                    }
                else
                    printf("Wrong guess. The answer is Shahrukh Khan\n");
        }
    }

    //Madhuri Dixit

    char mdin[MAX];
    char mdset[] = "madhuri";
    total+=3;
    printf("\nSecond\nHint 1: A legendary Bollywood actress known for her iconic performances and graceful dance\n");
    scanf("%s", mdin);
    for (int i = 0; mdin[i] != '\0'; i++)
        mdin[i] = tolower(mdin[i]);

    int resultmd = strcmp(mdin, mdset);

    if (resultmd == 0)
       {
           printf("You guessed it right\n");
           scored+=3;
       }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2: Picture a dancing queen with a million-watt smile, ruling the silver screen since the '80s\n");
        scanf("%s", mdin);
        for (int i = 0; mdin[i] != '\0'; i++)
            mdin[i] = tolower(mdin[i]);

        int resultmd = strcmp(mdin, mdset);

        if (resultmd == 0)
            {
                printf("You guessed it right\n");
                scored+=2;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint: From 'Hum Aapke Hain Koun..!' to 'Devdas' she's left an indelible mark on Bollywood.\n");
            scanf("%s", mdin);
            for (int i = 0; mdin[i] != '\0'; i++)
                mdin[i] = tolower(mdin[i]);

            int resultmd = strcmp(mdin, mdset);

            if (resultmd == 0)
                {
                    printf("You guessed it right\n");
                    scored+=1;
                }
            else
                printf("Wrong guess. The answer is Madhuri Dixit\n");
        }
    }

    //Arijit Singh

    char ariin[MAX];
    char ariset[] = "arijit";
    total+=3;
    printf("\nThird\nHint 1: Renowned Indian playback singer\n");
    scanf("%s", ariin);
    for (int i = 0; ariin[i] != '\0'; i++)
        ariin[i] = tolower(ariin[i]);

    int resultari = strcmp(ariin, ariset);

    if (resultari == 0)
        {
            printf("You guessed it right\n");
            scored+=3;
        }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2: Has versatility spans across romantic, soulful, and energetic genres.\n");
        scanf("%s", ariin);
        for (int i = 0; ariin[i] != '\0'; i++)
            ariin[i] = tolower(ariin[i]);

        int resultari = strcmp(ariin, ariset);

        if (resultari == 0)
            {
                printf("You guessed it right\n");
                scored+=2;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint:  He's the voice behind the chart-topping soulful song 'Agar Tum Saath Ho' from 'Tamasha.'\n");
            scanf("%s", ariin);
            for (int i = 0; ariin[i] != '\0'; i++)
                ariin[i] = tolower(ariin[i]);

            int resultari = strcmp(ariin, ariset);

            if (resultari == 0)
                {
                    printf("You guessed it right\n");
                    scored+=1;
                }
            else
                printf("Wrong guess. The answer is Arijit Singh\n");
        }
    }
printf("\nFor continuing in same category enter 1 else enter 0\n");
celever1=invalid();

switch (celever1)
{
    case 1:
    {

// ROUND 2
    // Akshay Kumar
    char akkiin[MAX];
    char akkiset[] = "akshay";
    total+=3;
    printf("\nFirst\nHint 1: He is known for his versatile roles in movies, from action to comedy.\n");
    scanf("%s", akkiin);
    for (int i = 0; akkiin[i] != '\0'; i++)
        akkiin[i] = tolower(akkiin[i]);

    int resultakki = strcmp(akkiin, akkiset);

    if (resultakki == 0)
        {
            printf("You guessed it right\n");
            scored+=3;
        }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2: He's often referred to as the 'Khiladi' of Bollywood due to his early action films.\n");
        scanf("%s", akkiin);
        for (int i = 0; akkiin[i] != '\0'; i++)
            akkiin[i] = tolower(akkiin[i]);

        int resultakki = strcmp(akkiin, akkiset);

        if (resultakki == 0)
            {
                printf("You guessed it right\n");
                scored+=3;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint: Few of his popular movies are 'Hera Pheri', 'Housefull', 'Khiladi'.\n");
            scanf("%s", akkiin);
            for (int i = 0; akkiin[i] != '\0'; i++)
                akkiin[i] = tolower(akkiin[i]);

            int resultakki = strcmp(akkiin, akkiset);

            if (resultakki == 0)
                {
                    printf("You guessed it right\n");
                    scored+=1;
                }
            else
                printf("Wrong guess. The answer is Akshay Kumar\n");
        }
    }

    // Varun Dhawan
    char vadin[MAX];
    char vadset[] = "varun";
    total+=3;
    printf("\nSecond\nHint 1: He's considered one of the most promising young actors in Bollywood.\n");
    scanf("%s", vadin);
    for (int i = 0; vadin[i] != '\0'; i++)
        vadin[i] = tolower(vadin[i]);

    int resultvad = strcmp(vadin, vadset);

    if (resultvad == 0)
        {
            printf("You guessed it right\n");
            scored+=3;
        }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2: He comes from a film family, with his father being a renowned film director.\n");
        scanf("%s", vadin);
        for (int i = 0; vadin[i] != '\0'; i++)
            vadin[i] = tolower(vadin[i]);

        int resultvad = strcmp(vadin, vadset);

        if (resultvad == 0)
            {
                printf("You guessed it right\n");
                scored+=2;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint: He's starred in successful movies like 'Badlapur', 'Judwaa 2', and 'Badrinath Ki Dulhania'.\n");
            scanf("%s", vadin);
            for (int i = 0; vadin[i] != '\0'; i++)
                vadin[i] = tolower(vadin[i]);

            int resultvad = strcmp(vadin, vadset);

            if (resultvad == 0)
                {
                    printf("You guessed it right\n");
                    scored+=1;
                }
            else
                printf("Wrong guess. The answer is Varun Dhawan\n");
        }
    }

    // Sachin Tendulkar
    char sacin[MAX];
    char sacset[] = "sachin";
    total+=3;
    printf("\nThird\nHint 1:One of the greatest cricketer in the history of cricket\n");
    scanf("%s", sacin);
    for (int i = 0; sacin[i] != '\0'; i++)
        sacin[i] = tolower(sacin[i]);

    int resultsac = strcmp(sacin, sacset);

    if (resultsac == 0)
        {
            printf("You guessed it right\n");
            scored+=3;
        }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2: Known as ' God of Cricket'\n");
        scanf("%s", sacin);
        for (int i = 0; sacin[i] != '\0'; i++)
            sacin[i] = tolower(sacin[i]);

        int resultsac = strcmp(sacin, sacset);

        if (resultsac == 0)
            {
                printf("You guessed it right\n");
                scored+=2;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint:The first sportsperson to receive the Bharat Ratna in 2014\n");
            scanf("%s", sacin);
            for (int i = 0; sacin[i] != '\0'; i++)
                sacin[i] = tolower(sacin[i]);

            int resultsac = strcmp(sacin, sacset);

            if (resultsac == 0)
                {
                    printf("You guessed it right\n");
                    scored+=1;
                }
            else
                printf("Wrong guess. The answer is Sachin Tendulkar\n");
        }
    }

    printf("\nFor continuing in same category enter 1 else enter 0\n");
    celever2=invalid();
    if (celever2==1)
    {
//ROUND 3
        // Salman Khan
    char salin[MAX];
    char salset[] = "salman";
    total+=3;
    printf("\nFirst\nHint 1: He is a part of the famous Khan trio in Bollywood.\n");
    scanf("%s", salin);
    for (int i = 0; salin[i] != '\0'; i++)
        salin[i] = tolower(salin[i]);

    int resultsal = strcmp(salin, salset);

    if (resultsal == 0)
        {
            printf("You guessed it right\n");
            scored+=3;
        }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2: Referred to as Bhai by fans.\n");
        scanf("%s", salin);
        for (int i = 0; salin[i] != '\0'; i++)
            salin[i] = tolower(salin[i]);

        int resultsal = strcmp(salin, salset);

        if (resultsal == 0)
            {
                printf("You guessed it right\n");
                scored+=2;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint: Being Human and Bigg Boss\n");
            scanf("%s", salin);
            for (int i = 0; salin[i] != '\0'; i++)
                salin[i] = tolower(salin[i]);

            int resultsal = strcmp(salin, salset);

            if (resultsal == 0)
                {
                    printf("You guessed it right\n");
                    scored+=1;
                }
            else
                printf("Wrong guess. The answer is Salman Khan\n");
        }
    }

    // Ranbir Kapoor
    char rkin[MAX];
    char rkset[] = "ranbir";
    total+=3;
    printf("\nSecond\nHint 1:He's a prominent Bollywood actor known for his acting prowess\n");
    scanf("%s", rkin);
    for (int i = 0; rkin[i] != '\0'; i++)
        rkin[i] = tolower(rkin[i]);

    int resultrk = strcmp(rkin, rkset);

    if (resultrk == 0)
        {
            printf("You guessed it right\n");
            scored+=3;
        }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2:He made his acting debut in the film 'Saawariya'.\n");
        scanf("%s", rkin);
        for (int i = 0; rkin[i] != '\0'; i++)
            rkin[i] = tolower(rkin[i]);

        int resultrk = strcmp(rkin, rkset);

        if (resultrk == 0)
            {
                printf("You guessed it right\n");
                scored+=2;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint:Known for his exceptional performances in movies like 'Rockstar', 'Barfi!', and 'Sanju'.\n");
            scanf("%s", rkin);
            for (int i = 0; rkin[i] != '\0'; i++)
                rkin[i] = tolower(rkin[i]);

            int resultrk = strcmp(rkin, rkset);

            if (resultrk == 0)
                {
                    printf("You guessed it right\n");
                    scored+=1;
                }
            else
                printf("Wrong guess. The answer is Ranbir Kapoor\n");
        }
    }

    // Alia Bhatt
    char aliain[MAX];
    char aliaset[] = "alia";
    total+=3;
    printf("\nThird\nHint 1:She's a talented Bollywood actress known for her versatility\n");
    scanf("%s", aliain);
    for (int i = 0; aliain[i] != '\0'; i++)
        aliain[i] = tolower(aliain[i]);

    int resultalia = strcmp(aliain, aliaset);

    if (resultalia == 0)
        {
            printf("You guessed it right\n");
            scored+=3;
        }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2:She made her debut in the film 'Student of the Year'.\n");
        scanf("%s", aliain);
        for (int i = 0; aliain[i] != '\0'; i++)
            aliain[i] = tolower(aliain[i]);

        int resultalia = strcmp(aliain, aliaset);

        if (resultalia == 0)
            {
                printf("You guessed it right\n");
                scored+=2;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint:She is the daughter of famous filmmaker Mahesh Bhatt.\n");
            scanf("%s", aliain);
            for (int i = 0; aliain[i] != '\0'; i++)
                aliain[i] = tolower(aliain[i]);

            int resultalia = strcmp(aliain, aliaset);

            if (resultalia == 0)
                {
                    printf("You guessed it right\n");
                    scored+=1;
                }
            else
                printf("Wrong guess. The answer is Alia Bhatt\n");
    }}
    }
    else // 6 done no cont
    {

                printf("\nTo play another category enter 1, otherwise enter 0\n");
                catcelever=invalid();
            if (catcelever == 1)
            main();
            else{
                nocall=1;
                score();
                return;
            }
            }
            break;
    }
    case 0:
       {

        printf("To play another category enter 1, otherwise enter 0\n");
        catcelever=invalid();
            if (catcelever == 1)
            main();
            else{
            nocall=1;
            score();
            return;
            }
       break;}
}
  printf("\nEnd of category 2\n");
  runcele=1;
  printf("To play another category enter 1, otherwise enter 0\n");
  catcelever=invalid();
  if (catcelever == 1)
            main();
            else{
            nocall=1;
            score();
            return;
            }

}}


spot()
{
    int plaver1, plaver2, catplaver;
    if(runpla==1){
        printf("You have already exhausted this category, try another one");
        main();}
        else{
    printf("\nGuess the famous places of Mumbai\n");
//ROUND 1
    //Elephanta Caves

    char elein[MAX];
    char eleset[] = "elephanta";
    total+=3;
    printf("\nFirst\nHint 1: These ancient rock-cut caves are a UNESCO World Heritage Site.\n");
    scanf("%s", elein);

    for (int i = 0; elein[i] != '\0'; i++)
        elein[i] = tolower(elein[i]);

    int result = strcmp(elein, eleset);

    if (result == 0)
        {
            printf("You guessed it right\n");
            scored+=3;
        }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2: The caves house intricate carvings and sculptures that are dedicated to a prominent Hindu deity. \n");
        scanf("%s", elein);
        for (int i = 0; elein[i] != '\0'; i++)
            elein[i] = tolower(elein[i]);

        int resultele = strcmp(elein, eleset);

        if (resultele == 0)
            {
                printf("You guessed it right\n");
                scored+=2;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint: They are located on an island in the Arabian Sea, a short boat ride away from Mumbai. \n");
            scanf("%s", elein);
                for (int i = 0; elein[i] != '\0'; i++)
                    elein[i] = tolower(elein[i]);

                int resultele = strcmp(elein, eleset);

                if (resultele == 0)
                    {
                        printf("You guessed it right\n");
                        scored+=1;
                    }
                else
                    printf("Wrong guess. The answer is Elephanta caves.\n");
        }
    }

    //Film City

    char filin[MAX];
    char filset[] = "film";
    total+=3;
    printf("\nSecond\nHint 1: This place is often referred to as the 'Entertainment Capital of India'.\n");
    scanf("%s", filin);
    for (int i = 0; filin[i] != '\0'; i++)
        filin[i] = tolower(filin[i]);

    int resultfil = strcmp(filin, filset);

    if (resultfil == 0)
       {
           printf("You guessed it right\n");
           scored+=3;
       }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2: It is the heart of the Indian film industry, producing numerous movies every year.\n");
        scanf("%s", filin);
        for (int i = 0; filin[i] != '\0'; i++)
            filin[i] = tolower(filin[i]);

        int resultfil = strcmp(filin, filset);

        if (resultfil == 0)
            {
                printf("You guessed it right\n");
                scored+=2;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint: The area is located in Goregaon.\n");
            scanf("%s", filin);
            for (int i = 0; filin[i] != '\0'; i++)
                filin[i] = tolower(filin[i]);

            int resultfil = strcmp(filin, filset);

            if (resultfil == 0)
                {
                    printf("You guessed it right\n");
                    scored+=1;
                }
            else
                printf("Wrong guess. The answer is Film City. \n");
        }
    }

    //Haji Ali Dargah

    char hajin[MAX];
    char hajset[] = "haji";
    total+=3;
    printf("\nThird\nHint 1: A great example of Islamic architecture and is built on a small islet in the Arabian Sea where people come to seek blessings.\n");
    scanf("%s", hajin);
    for (int i = 0; hajin[i] != '\0'; i++)
        hajin[i] = tolower(hajin[i]);

    int resulthaj = strcmp(hajin, hajset);

    if (resulthaj == 0)
        {
            printf("You guessed it right\n");
            scored+=3;
        }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2: The place is named after a Muslim saint whose tomb is housed within the dargah.\n");
        scanf("%s", hajin);
        for (int i = 0; hajin[i] != '\0'; i++)
            hajin[i] = tolower(hajin[i]);

        int resulthaj = strcmp(hajin, hajset);

        if (resulthaj == 0)
            {
                printf("You guessed it right\n");
                scored+=2;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint: Located on an islet off the coast of Worli in southern Mumbai. \n");
            scanf("%s", hajin);
            for (int i = 0; hajin[i] != '\0'; i++)
                hajin[i] = tolower(hajin[i]);

            int resulthaj = strcmp(hajin, hajset);

            if (resulthaj == 0)
                {
                    printf("You guessed it right\n");
                    scored+=1;
                }
            else
                printf("Wrong guess. The answer is Haji Ali Dargah. \n");
        }
    }
printf("\nFor continuing in same category enter 1 else enter 0\n");
plaver1=invalid();

switch (plaver1)
{
    case 1:
    {

// ROUND 2
    //Siddhivinayak Temple
    char sidin[MAX];
    char sidset[] = "siddhivinayak";
    total+=3;
    printf("\nFirst\nHint 1: It is one of the most famous and revered places of worship in Mumbai.\n");
    scanf("%s", sidin);
    for (int i = 0; sidin[i] != '\0'; i++)
        sidin[i] = tolower(sidin[i]);

    int resultsid = strcmp(sidin, sidset);

    if (resultsid == 0)
        {
            printf("You guessed it right\n");
            scored+=3;
        }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2: The temple's architecture features a distinctive black stone idol of Lord Ganesha.\n");
        scanf("%s", sidin);
        for (int i = 0; sidin[i] != '\0'; i++)
            sidin[i] = tolower(sidin[i]);

        int resultsid = strcmp(sidin, sidset);

        if (resultsid == 0)
            {
                printf("You guessed it right\n");
                scored+=3;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint: It is located in Prabhadevi.\n");
            scanf("%s", sidin);
            for (int i = 0; sidin[i] != '\0'; i++)
                sidin[i] = tolower(sidin[i]);

            int resultsid = strcmp(sidin, sidset);

            if (resultsid == 0)
                {
                    printf("You guessed it right\n");
                    scored+=1;
                }
            else
                printf("Wrong guess. The answer is Siddhivinayak temple. \n");
        }
    }

    //Gateway of India
    char goiin[MAX];
    char goiset[] = "gateway";
    total+=3;
    printf("\nSecond\nHint 1: This iconic monument is a symbol of historical significance in India.\n");
    scanf("%s", goiin);
    for (int i = 0; goiin[i] != '\0'; i++)
        goiin[i] = tolower(goiin[i]);

    int resultgoi = strcmp(goiin, goiset);

    if (resultgoi == 0)
        {
            printf("You guessed it right\n");
            scored+=3;
        }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2: It's situated along the Arabian Sea on the waterfront.\n");
        scanf("%s", goiin);
        for (int i = 0; goiin[i] != '\0'; i++)
            goiin[i] = tolower(goiin[i]);

        int resultgoi = strcmp(goiin, goiset);

        if (resultgoi == 0)
            {
                printf("You guessed it right\n");
                scored+=2;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint: Located near Taj Mahal Palace hotel.\n");
            scanf("%s", goiin);
            for (int i = 0; goiin[i] != '\0'; i++)
                goiin[i] = tolower(goiin[i]);

            int resultgoi = strcmp(goiin, goiset);

            if (resultgoi == 0)
                {
                    printf("You guessed it right\n");
                    scored+=1;
                }
            else
                printf("Wrong guess. The answer is Gateway of India.\n");
        }
    }

    //Bandstand
    char bstin[MAX];
    char bstset[] = "bandstand";
    total+=3;
    printf("\nThird\nHint 1: 1.2 km long promenade which people visit for walking and chilling.\n");
    scanf("%s", bstin);
    for (int i = 0; bstin[i] != '\0'; i++)
        bstin[i] = tolower(bstin[i]);

    int resultbst = strcmp(bstin, bstset);

    if (resultbst == 0)
        {
            printf("You guessed it right\n");
            scored+=3;
        }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2: It's known for the iconic 'Shah Rukh Khan's bungalow' nearby.\n");
        scanf("%s", bstin);
        for (int i = 0; bstin[i] != '\0'; i++)
            bstin[i] = tolower(bstin[i]);

        int resultbst = strcmp(bstin, bstset);

        if (resultbst == 0)
            {
                printf("You guessed it right\n");
                scored+=2;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint: Located in Bandra.\n");
            scanf("%s", bstin);
            for (int i = 0; bstin[i] != '\0'; i++)
                bstin[i] = tolower(bstin[i]);

            int resultbst = strcmp(bstin, bstset);

            if (resultbst == 0)
                {
                    printf("You guessed it right\n");
                    scored+=1;
                }
            else
                printf("Wrong guess. The answer is Bandstand.\n");
        }
    }

    printf("\nFor continuing in same category enter 1 else enter 0\n");
    plaver2=invalid();
    if (plaver2==1)
    {
//ROUND 3
        // Wankhede Stadium
    char wanin[MAX];
    char wanset[] = "wankhede";
    total+=3;
    printf("\nFirst\nHint 1: It is one of the most famous cricket stadiums in India.\n");
    scanf("%s", wanin);
    for (int i = 0; wanin[i] != '\0'; i++)
        wanin[i] = tolower(wanin[i]);

    int resultwan = strcmp(wanin, wanset);

    if (resultwan == 0)
        {
            printf("You guessed it right\n");
            scored+=3;
        }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2: It has been the venue for numerous historic cricket matches, including a World Cup final.\n");
        scanf("%s", wanin);
        for (int i = 0; wanin[i] != '\0'; i++)
            wanin[i] = tolower(wanin[i]);

        int resultwan = strcmp(wanin, wanset);

        if (resultwan == 0)
            {
                printf("You guessed it right\n");
                scored+=2;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint:It's not far from the Churchgate railway station.\n");
            scanf("%s", wanin);
            for (int i = 0; wanin[i] != '\0'; i++)
                wanin[i] = tolower(wanin[i]);

            int resultwan = strcmp(wanin, wanset);

            if (resultwan == 0)
                {
                    printf("You guessed it right\n");
                    scored+=1;
                }
            else
                printf("Wrong guess. The answer is Wankhede stadium.\n");
        }
    }

    // Fashion Street
    char fasin[MAX];
    char fasset[] = "fashion";
    total+=3;
    printf("\nSecond\nHint 1: This place is a bustling shopping destination in Mumbai.\n");
    scanf("%s", fasin);
    for (int i = 0; fasin[i] != '\0'; i++)
        fasin[i] = tolower(fasin[i]);

    int resultfas = strcmp(fasin, fasset);

    if (resultfas == 0)
        {
            printf("You guessed it right\n");
            scored+=3;
        }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2: It's an ideal place to shop on a budget and haggle for the best deals.\n");
        scanf("%s", fasin);
        for (int i = 0; fasin[i] != '\0'; i++)
            fasin[i] = tolower(fasin[i]);

        int resultfas = strcmp(fasin, fasset);

        if (resultfas == 0)
            {
                printf("You guessed it right\n");
                scored+=2;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint: Located in close proximity to CSMT railway station.\n");
            scanf("%s", fasin);
            for (int i = 0; fasin[i] != '\0'; i++)
                fasin[i] = tolower(fasin[i]);

            int resultfas = strcmp(fasin, fasset);

            if (resultfas == 0)
                {
                    printf("You guessed it right\n");
                    scored+=1;
                }
            else
                printf("Wrong guess. The answer is Fashion street.\n");
        }
    }

    //Dharavi
    char dhain[MAX];
    char dhaset[] = "dharavi";
    total+=3;
    printf("\nThird\nHint 1: It is one of the most densely populated areas in Mumbai.\n");
    scanf("%s", dhain);
    for (int i = 0; dhain[i] != '\0'; i++)
        dhain[i] = tolower(dhain[i]);

    int resultdha = strcmp(dhain, dhaset);

    if (resultdha == 0)
        {
            printf("You guessed it right\n");
            scored+=3;
        }
    else {
        printf("Wrong guess, Here is another hint\n");
        printf("Hint 2: It is a symbol of the juxtaposition of poverty and ingenuity, where people make the most out of limited resources.\n");
        scanf("%s", dhain);
        for (int i = 0; dhain[i] != '\0'; i++)
            dhain[i] = tolower(dhain[i]);

        int resultdha = strcmp(dhain, dhaset);

        if (resultdha == 0)
            {
                printf("You guessed it right\n");
                scored+=2;
            }
        else {
            printf("Wrong guess, Here is another hint\n");
            printf("Final Hint: It is known for its tight-knit neighborhoods and a maze of narrow lanes.\n");
            scanf("%s", dhain);
            for (int i = 0; dhain[i] != '\0'; i++)
                dhain[i] = tolower(dhain[i]);

            int resultdha = strcmp(dhain, dhaset);

            if (resultdha == 0)
                {
                    printf("You guessed it right\n");
                    scored+=1;
                }
            else
                printf("Wrong guess. The answer is Dharavi. \n");
    }}
    }
    else // 6 done no cont
    {

                printf("\nTo play another category enter 1, otherwise enter 0\n");
                catplaver=invalid();
            if (catplaver == 1)
            main();
            else{
                nocall=1;
                score();
                return;
            }
            }
            break;
    }
    case 0:
       {

        printf("To play another category enter 1, otherwise enter 0\n");
        catplaver=invalid();
            if (catplaver == 1)
            main();
            else{
            nocall=1;
            score();
            return;
            }
       break;}
}
  printf("\nEnd of category 2\n");
  runpla=1;
  printf("To play another category enter 1, otherwise enter 0\n");
  catplaver=invalid();
  if (catplaver == 1)
            main();
            else{
            nocall=1;
            score();
            return;
            }

}}

main ()
{
    while (intrchek==3)
    {
        intro();
        intrchek++;
    }
    //Introduction
    //text for category selection
    printf("\nType\n1 to play for stations\n2 to play for celebrities\n3 to play for famous spots.\n");
    int cat;
    scanf("%d",&cat);

    switch (cat)
    {
    case 1:
        stn();
        break;
    case 2:
        celeb();
        break;
    case 3:
        spot();
        break;
    default:
        printf("Learn typing first.");
    }

}


int invalid() {
    char c[MAX];
    printf("Please enter either 1 or 0: ");
    scanf("%s", c);

    if (strcmp(c, "1") == 0) {
        return 1;
    } else if (strcmp(c, "0") == 0) {
        return 0;
    } else {
        printf("Invalid input. Please enter either 1 or 0.\n");
        return invalid();
    }
}

score()
{
 printf("\nYour final score is %f%%",((float)scored/total)*100);
 if (scored>=total/2)
    printf("\nWell played");
 else
    printf("\nBetter Luck Next Time");
}
