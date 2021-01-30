

//
// Created by seymo on 1/30/2021.
//

#include "lib.h"


/*
 * ChatBot.Main
 */
int main() {
	/*
	 * Iterate Basic File Once
	 */
	GetFileContents("bot.txt");
	// After Getting Bot Name From bot.txt, Allow Namefor to be Called With Stored Value.
	out(namefor);
	
	// Before Starting, We Must Ensure that the ChatBot Contains the ChatBotConfig Algorithm.
	// We Can Implement a Configuration Reader By Starting the ConfigurationService.
	createtask(ConfigurationService);
	
	// Now that we've defined the Name for our ChatBot, We Must Start the ChatBot Service.
	createtask(ChatBotService);
	
	// After we've made that, In case the Bot has any specific Memory allocation problem which causes it to fail/flop,
	// We Should start a Backend Service Called Message Handling Service.
	createtask(MessageHandlingService);
	return 0;
}
