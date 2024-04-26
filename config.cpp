class CfgPatches
{
	class TestClothes
	{
		units[]={"Tshirt_redandwhite"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data" 
		};
	};
};

class CfgMods
{
	class TestClothes
	{
		dir="TestClothes";
		picture=""; 
		action="";
		hideName=0;
		hidePicture=1;
		name="Test - Vêtements";
		credits="Rose"; 
		author="Rose";
		authorID="0";  
		version="0.1";
		extra=0;
		type="mod";
	};		
};
class CfgVehicles
{
	// Tops
	class TShirt_ColorBase;

	// T-shirt Tête de mort
	class tshirt_skulls: TShirt_ColorBase 
	{
		scope=2;
		displayName="T-shirt blanc Tête de Mort";
		descriptionShort="Un t-shirt blanc assez banal mais au message clair.";
		itemsCargoSize[]={6,5};
		heatIsolation= 0.5;
		weight = 32;
		ragQuantity = 3;
		hiddenSelectionsTextures[]=
		{
			"TestClothes2\textures\tshirt_skulls.paa",
			"TestClothes2\textures\tshirt_skulls.paa",
			"TestClothes2\textures\tshirt_skulls.paa"
		};
	};
	
	// T-shirt Loup
	class tshirt_wolf: TShirt_ColorBase 
	{
		scope=2;
		displayName="T-shirt  noir Loup Solitaire";
		descriptionShort="Un t-shirt Loup.";
		itemsCargoSize[]={6,5};
		heatIsolation= 0.5;
		weight = 32;
		ragQuantity = 3;
		hiddenSelectionsTextures[]=
		{
			"TestClothes2\textures\tshirt_wolf.paa",
			"TestClothes2\textures\tshirt_wolf.paa",
			"TestClothes2\textures\tshirt_wolf.paa"
		};
	};

	// T-shirt Tigre
	class tshirt_tiger: TShirt_ColorBase 
	{
		scope=2;
		displayName="T-shirt  vert Tigre";
		descriptionShort="Un t-shirt à l'image du tigre.";
		itemsCargoSize[]={6,5};
		heatIsolation= 0.5;
		weight = 32;
		ragQuantity = 3;
		hiddenSelectionsTextures[]=
		{
			"TestClothes2\textures\tshirt_tigerpower.paa",
			"TestClothes2\textures\tshirt_tigerpower.paa",
			"TestClothes2\textures\tshirt_tigerpower.paa"
		};
	};

	// T-shirt Samourai
	class tshirt_samurai: TShirt_ColorBase 
	{
		scope=2;
		displayName="T-shirt  rouge Samourai";
		descriptionShort="Un t-shirt Samourai avec ses 2 sabres dans le dos.";
		itemsCargoSize[]={6,5};
		heatIsolation= 0.5;
		weight = 32;
		ragQuantity = 3;
		hiddenSelectionsTextures[]=
		{
			"TestClothes2\textures\tshirt_samurai.paa",
			"TestClothes2\textures\tshirt_samurai.paa",
			"TestClothes2\textures\tshirt_samurai.paa"
		};
	};

	// T-shirt girly Chat
	class tshirt_girly_cat: TShirt_ColorBase 
	{
		scope=2;
		displayName="T-shirt  esprit Kawai";
		descriptionShort="Un t-shirt kawai, girly, dans ce monde de zombies.";
		itemsCargoSize[]={6,5};
		heatIsolation= 0.5;
		weight = 32;
		ragQuantity = 3;
		hiddenSelectionsTextures[]=
		{
			"TestClothes2\textures\tshirt_girly_cat.paa",
			"TestClothes2\textures\tshirt_girly_cat.paa",
			"TestClothes2\textures\tshirt_girly_cat.paa"
		};
	};

	// T-shirt Fuck-U
	class tshirt_fucku: TShirt_ColorBase 
	{
		scope=2;
		displayName="T-shirt F*ck-U";
		descriptionShort="Un t-shirt certainement un peu trop vulgaire mais... Le monde est méchant !";
		itemsCargoSize[]={6,5};
		heatIsolation= 0.5;
		weight = 32;
		ragQuantity = 3;
		hiddenSelectionsTextures[]=
		{
			"TestClothes2\textures\tshirt_fucku.paa",
			"TestClothes2\textures\tshirt_fucku.paa",
			"TestClothes2\textures\tshirt_fucku.paa"
		};
	};

};

