#include<stdio.h>
#include<stdlib.h>
#include<string.h>

                                                                   /*
															 FLOW OF PROJECT
                                                       login (if wrong then again login)
                                                                    home 
                                                 basic,cultivation,main_content,india_status
                                                    basic > history,types,uses,composition
                                                  farming > cultivation,season,pest_diseases
                                                       main_content> "under construction"
                                                       india_status> "under construction"
                                                                    */

//main modules
int login(); //completed
int home(); //completed
int basic();//completed
int farming();//completed
int main_content();//completed


//--------------------------------------------------------------------------------------------------------------------------------

//sub modules in basic()
int history(); //completed
int types(); //completed
int uses(); //completed
int composition(); //completed

//--------------------------------------------------------------------------------------------------------------------------------

//sub modules in farming()
int cultivation();//completed
int pest_diseases(); //completed

//--------------------------------------------------------------------------------------------------------------------------------

//sub modules in main_content()
int homeStorage(); //completed
int process(); //completed
//-------------------------------------------------------------------------------------------------------------------------------

int history()
{
printf("________________________________________________________HISTORY________________________________________________________\n\n");
printf("The history of ancestral onion species is not well documented. Ancient records of onion use spans western and eastern Asia, so the geographic origin of the onion is uncertain. Yet, domestication likely took place in West or Central Asia. Onions have been variously described as having originated in Iran, western Pakistan and Central Asia.\n\n");
printf("Traces of onions recovered from Bronze Age settlements in China suggest that onions were used as far back as 5000 BC, not only for their flavour, but also for the bulb's durability in storage and transport. [failed verification] Ancient Egyptians revered the onion bulb, viewing its spherical shape and concentric rings as symbols of eternal life. Onions were used in Egyptian burials, as evidenced by onion traces found in the eye sockets of Ramesses IV.\n\n");
printf("Pliny the Elder of the first century AD wrote about the use of onions and cabbage in Pompeii. He documented Roman beliefs about the onion's ability to improve ocular ailments, aid in sleep, and heal everything from oral sores and toothaches to dog bites, lumbago, and even dysentery. Archaeologists unearthing Pompeii long after its 79 AD volcanic burial have found gardens resembling those in Pliny's detailed narratives. According to texts collected in the fifth/sixth century AD under the authorial aegis of Apicius ,said to have been a gourmet, onions were used in many Roman recipes.\n\n");
printf("In the Age of Discovery, onions were taken to North America by the first European settlers, who found close relatives of the plant such as Allium tricoccum readily available and widely used in Native American gastronomy. According to diaries kept by certain first English colonists, the bulb onion was one of the first crops planted by the Pilgrim fathers.");

}
int types()
{
printf("\n______________________________________________________TYPES__________________________________________________________\n\n");
printf("Yellow Onions:\n\n");
printf("These are sweeter and are the onions of choice for everyday use in European cuisine, with many cultivars bred specifically to demonstrate this sweetness yellow onions turn a rich, dark brown when caramelised and give French onion soup its sweet flavour.\n");
printf("\nRed or Purple Onions:\n");
printf("\nThese are known for their sharp pungent flavour and are the onions of choice for everyday use in Asian cuisine.they are also used raw and in grilling.\n");
printf("\nWhite Onions:\n");
printf("\nThese are traditional in classic Mexican cuisine,and are milder in flavor; they have a golden colour when cooked and a particularly sweet flavour when sautéed  \n");

}

int uses()
{
printf("__________________________________________________________USES__________________________________________________________\n\n");
printf("\na)  Vegetables various forms,salad.\n");
printf("\nb)  Curries-fried,boiled or baked.\n");
printf("\nc)  Processed form-flakes ,powder,paste,crush,pickles.\n");
printf("\nd)  Therapeutic value-stimulants,mild counter irritant\n");
printf("\ne)  Herbal remedy-cold,cough,bronchitis,diabetes,respiratory tracts,cancer \n");
}

int composition()
{
printf("\n_____________________________________________________________COMPOSITION_________________________________________________\n\n");
printf("\n_NUTRIENTS_\n");
printf("\nMost onion cultivars are about 89% water, 9% carbohydrates including 4% sugar and 2% dietary fibre, 1% protein, and negligible fat . Onions contain low amounts of essential nutrients and have an energy value of 166 kJ ‘40 kilocalories’ in a 100 g ‘3.5 oz’ amount. Onions contribute savoury flavour to dishes without contributing significant caloric content\n");
printf("\n_PHYTOCHEMICALS_\n");
printf("\nConsiderable differences exist between onion varieties in phytochemical content, particularly for polyphenols, with shallots having the highest level, six times the amount found in Vidalia onions.Yellow onions have the highest total flavonoid content, an amount 11 times higher than in white onions. Red onions have considerable content of anthocyanin pigments, with at least 25 different compounds identified representing 10% of total flavonoid content.\n");
printf("\nOnion polyphenols are under basic research to determine their possible biological properties in humans.\n");
printf("\nSome people suffer from allergic reactions after handling onions. Symptoms can include contact dermatitis, intense itching, rhinoconjunctivitis, blurred vision, bronchial asthma, sweating, and anaphylaxis. Allergic reactions may not occur when eating cooked onions, possibly due to the denaturing of the proteins from cooking.\n");
printf("\n_EYE IRRITATION_\n");
printf("\nFreshly cut onions often cause a stinging sensation in the eyes of people nearby, and often uncontrollable tears. This is caused by the release of a volatile liquid, syn-propanethial-S-oxide and its aerosol, which stimulates nerves in the eye.This gas is produced by a chain of reactions which serve as a defence mechanism: chopping an onion causes damage to cells which releases enzymes called alliinases. These break down amino acid sulfoxides and generate sulfenic acids. A specific sulfenic acid, 1-propenesulfenic acid, is rapidly acted on by a second enzyme, the lacrimatory factor synthase (LFS), producing the syn-propanethial-S-oxide. This gas diffuses through the air and soon reaches the eyes, where it activates sensory neurons. Lacrimal glands produce tears to dilute and flush out the irritant.\n");
printf("\nEye irritation can be avoided by cutting onions under running water or submerged in a basin of water. Leaving the root end intact also reduces irritation as the onion base has a higher concentration of sulphur compounds than the rest of the bulb. Refrigerating the onions before use reduces the enzyme reaction rate and using a fan can blow the gas away from the eyes. The more often one chops onions, the less one experiences eye irritation.\n");
printf("\nThe amount of sulfenic acids and lacrimal factor released and the irritation effect differs among Allium species. In 2008, the New Zealand Institute for Crop and Food Research created ‘NO TEARS’ onions by genetic modification to prevent the synthesis of lachrymatory factor synthase in onions. One study suggests that consumers prefer the flavor of onions with lower LFS content. Since the process impedes sulfur ingestion by the plant, some find LFS- onions inferior in flavor.\n");
printf("\nA method for efficiently differentiating LFS- and LFS+ onions has been developed based on mass spectrometry, with potential application in high-volume production;[50] gas chromatography is also used to measure lachrymatory factor in onions. In early 2018, Bayer released the first crop yield of commercially available LFS-silenced onions under the name ‘SUNIONS’. They were the product of 30 years of cross-breeding; genetic modification was not employed.\n");
printf("\nGuinea hen weed and honey garlic contain a similar lachrymatory factor. Synthetic onion lachrymatory factor has been used in a study related to tear production, and has been proposed as a nonlethal deterrent against thieves and intruders.\n");
}

int cultivation()
{
printf("\n\n_____________________________________________________CULTIVATION____________________________________________________________\n\n");
printf("\nOnions are best cultivated in fertile soils that are well-drained. Sandy loams are good as they are low in sulphur, while clayey soils usually have a high sulphur content and produce pungent bulbs. Onions require a high level of nutrients in the soil. Phosphorus is often present in sufficient quantities, but may be applied before planting because of its low level of availability in cold soils. Nitrogen and potash can be applied at regular intervals during the growing season, the last application of nitrogen being at least four weeks before harvesting.\n");
printf("\nBulbing onions are day-length sensitive; their bulbs begin growing only after the number of daylight hours has surpassed some minimal quantity. Most traditional European onions are referred to as ‘LONG-DAY’ onions, producing bulbs only after 14 hours or more of daylight occurs. Southern European and North African varieties are often known as ‘INTERMEDIATE-DAY’ types, requiring only 12–13 hours of daylight to stimulate bulb formation. 'SHORT-DAY' onions, which have been developed in more recent times, are planted in mild-winter areas in the autumn and form bulbs in the early spring, and require only 11–12 hours of daylight to stimulate bulb formation. Onions are a cool-weather crop and can be grown in USDA zones 3 to 9. Hot temperatures or other stressful conditions cause them to ‘BOLT’, meaning that a flower stem begins to grow.\n");
printf("\nOnions may be grown from seeds or from partially grown bulbs called ‘SETS’. Because onion seeds are short-lived, fresh seeds germinate more effectively when sown in shallow rows, or ‘DRILLS’ with each drill 12 inch to 18 inch apart. In suitable climates, certain cultivars can be sown in late summer and autumn to overwinter in the ground and produce early crops the following year.\n");
printf("\nOnion bulbs are produced by sowing seeds in a dense pattern in early summer, then harvested in the autumn when the bulbs are still small, followed by drying and storage. These bulbs planted the following spring grow into mature bulbs later in the growing season. Certain cultivars used for growing and storing bulbs may not have such good storage characteristics as those grown directly from seed.\n");
printf("\nRoutine care during the growing season involves keeping the rows free of competing weeds, especially when the plants are young. The plants are shallow-rooted and do not need much water when established. Bulbing usually takes place after 12 to 18 weeks. The bulbs can be gathered when needed to eat fresh, but if they will be stored, they are harvested after the leaves have died back naturally. In dry weather, they can be left on the surface of the soil for a few days for drying, then placed in nets, roped into strings, or laid in layers in shallow boxes. They are stored effectively in a well-ventilated, cool place.\n");
	
}



int pest_diseases()
{
 printf("\n_PEST AND DISEASES_\n");
printf("\nOnions suffer from a number of plant disorders. The most serious for the home gardener are likely to be the onion fly, stem and bulb eelworm, white rot, and neck rot. Diseases affecting the foliage include rust and smut, downy mildew, and white tip disease. The bulbs may be affected by splitting, white rot, and neck rot. Shanking is a condition in which the central leaves turn yellow and the inner part of the bulb collapses into an unpleasant-smelling slime. Most of these disorders are best treated by removing and burning affected plants. The larvae of the onion leaf miner or leek moth ‘Acrolepiopsis assectella’ sometimes attack the foliage and may burrow down into the bulb.\n");
printf("\nThe onion fly (Delia antiqua) lays eggs on the leaves and stems and on the ground close to onion, shallot, leek, and garlic plants. The fly is attracted to the crop by the smell of damaged tissue and is liable to occur after thinning. Plants grown from sets are less prone to attack. The larvae tunnel into the bulbs and the foliage wilts and turns yellow. The bulbs are disfigured and rot, especially in wet weather. Control measures may include crop rotation, the use of seed dressings, early sowing or planting, and the removal of infested plants. \n");
printf("\nThe onion eelworm ‘Ditylenchus dipsaci’, a tiny parasitic soil-living nematode, causes swollen, distorted foliage. Young plants are killed and older ones produce soft bulbs. No cure is known and affected plants should be uprooted and burned. The site should not be used for growing onions again for several years and should also be avoided for growing carrots, parsnips, and beans, which are also susceptible to the eelworm.\n");
printf("\nWhite rot of onions, leeks, and garlic is caused by the soil-borne fungus Sclerotium cepivorum. As the roots rot, the foliage turns yellow and wilts. The bases of the bulbs are attacked and become covered by a fluffy white mass of mycelia, which later produces small, globular black structures called sclerotia. These resting structures remain in the soil to reinfect a future crop. No cure for this fungal disease exists, so affected plants should be removed and destroyed and the ground used for unrelated crops in subsequent years\n");
printf("\nNeck rot is a fungal disease affecting onions in storage. It is caused by Botrytis allii, which attacks the neck and upper parts of the bulb, causing a grey mould to develop. The symptoms often first occur where the bulb has been damaged and spread down the affected scales. Large quantities of spores are produced and crust-like sclerotia may also develop. In time, a dry rot sets in and the bulb becomes a dry, mummified structure. This disease may be present throughout the growing period, but only manifests itself when the bulb is in storage. Antifungal seed dressings are available and the disease can be minimised by preventing physical damage to the bulbs at harvesting, careful drying and curing of the mature onions, and correct storage in a cool, dry place with plenty of circulating air.\n");
printf("\n\n");	
}

int farming()
{
	int a;
	printf("\n_________________________________________________________FARMING______________________________________________________\n");
    printf("\npress <1> for cultivation\n");    
    printf("\npress <2> for pest and diseases\n");
    printf("\npress <5> to go back to the home page\n");

    

    for(;;)
   {
   	scanf("%d",&a);
   	switch(a)
   	{
   		case 1: cultivation();
   		break;
   		case 2: pest_diseases();
   		break;
   		case 5: printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	        	home();
   
	   }
	   
   }
}
int homeStorage()
{
	printf("\n_________________________________________________________STORAGE________________________________________________________\n\n");

	printf("The processes required to store onions properly.Once they are stored, onions undergo the following processes:");
printf("1.The drying process.");
printf("2.The processes of raising or lowering their temperature.");
printf(".Conservation or storage proper.");
printf("Cooking onions and sweet onions are better stored at room temperature, optimally in a single layer, in large mesh bags in a dry, cool, dark, well-ventilated location. In this environment, cooking onions have a shelf life of three to four weeks and sweet onions one to two weeks. Cooking onions will absorb odours from apples and pears. Also, they draw moisture from vegetables with which they are stored which may cause them to decay. ");
printf("Sweet onions have a greater water and sugar content than cooking onions. This makes them sweeter and milder tasting, but reduces their shelf life. Sweet onions can be stored refrigerated; they have a shelf life of around 1 month. Irrespective of type, any cut pieces of onion are best tightly wrapped, stored away from other produce, and used within two to three days. ");
printf("\n");
}

int process()
{
	printf("\n_________________________________________________________PROCESS______________________________________________________\n\n");
	
printf("The onion storage process");
printf("A well-dried onion has:");
printf("The onion must be the right variety for storage.");
printf("It must be harvested when it is completely physically ripe.");
printf("The bulb must be firm and compact.");
printf("The skin must be strong.");
printf("The bulb must have a low water content.");
printf("It must be grown to Good Agricultural Practices.");
printf("It must not be fertilised with nitrogen during the last 6 weeks of its growth.");
printf("It must be applied sufficient amounts of aglime.");

}


int main_content()

  {
  int e1;
   printf("\n__________________________________________________________Main Content____________________________________________________\n");
   printf("\npress <1> for Storage at home\n");
   printf("\npress <2> for process\n");
  

   
   for(;;)
   {
   	scanf("%d",&e1);
   	switch(e1)
   	{
   		case 1: homeStorage();
   		break;
   		case 2: process();
   		break;
   		case 5: printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	        	home();
   
	   }
	   
   }

	
}
int login()
{
	int u1,u2,p1,p2;
	u1=9399,u2,p1=5590,p2;
	printf("\nEnter the Username:\n");
    scanf("%d",&u2);
    printf("\nEnter the Password:\n");
    scanf("%d",&p2);

    if((u1==u2)&&(p1==p2))
    {
        printf("\n**********************************************************WELCOME*******************************************************\n\n");

		home();
    }
    else
    {
        printf("entered wrong username or password\n");
        printf("\n_______________________________________________________ enter again__________________________________________________________\n");
        login();
        
    }
    
}
int basic()
{
  int e;
   printf("\n__________________________________________________________BASIC INFO____________________________________________________\n");
   printf("\npress <1> for history\n");
   printf("\npress <2> for types\n");
   printf("\npress <3> for uses\n");
   printf("\npress <4> for composition\n");
   printf("\npress <5> to get back to the home page\n");
   
   for(;;)
   {
   	scanf("%d",&e);
   	switch(e)
   	{
   		case 1: history();
   		break;
   		case 2: types();
   		break;
   		case 3: uses();
   		break;
   		case 4: composition();
   		break;
   		case 5: printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	        	home();
   
	   }
	   
   }

}
int home()
{ 
    int c;
	
   
    for(;;)
    {
     printf("_________________________________________________________HOME_PAGE______________________________________________________\n");
     printf("\npress <1> for basic information\n");
     printf("\npress <2> for farming info\n");
     printf("\npress <3> for main content\n");
     printf("\npress <0> to exit \n");
 	 scanf("%d",&c);	
     switch(c)
     {
    	case 1: basic();
    	        break;
    	case 2: farming();
    	    	break;    	      
    	case 3: ;main_content();
    	    	break;
    	case 0: printf("THANK YOU :) \n");
		exit(0);
     } 
     exit(0);
    }
}
    
	

int main() 
{
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("                                                   EFFICIENT ONION STORAGE                                                \n");
    printf("                                                  Created  by: ALISHA MIRZA                                               \n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    login();
    return 0;
    


}





