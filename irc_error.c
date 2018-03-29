#include "irc_error.h"
#include "irc_reply.h"

irc_no_t	irc_errstring_sub1[] = {
	{ERR_UNDEFINED, (char *)0},
	{ERR_NOSUCHNICK, "%s :No such nick/channel"},
	{ERR_NOSUCHSERVER, "%s :No such server"},
	{ERR_NOSUCHCHANNEL, "%s :No such channel"},
	{ERR_CANNOTSENDTOCHAN, "%s :Cannot send to channel"},
	{ERR_TOOMANYCHANNEL, "%s :You have joined too many channels"},
	{ERR_WASNOSUCHNICK, "%s :There was no such nickname"},
	{ERR_TOOMANYTARGETS, "%s :Duplicate recipients. No message delivered"},
	{ERR_UNDEFINED, (char *)0},
	{ERR_NOORIGIN, ":No origin specified"},
};

irc_no_t	irc_errstring_sub2[] = {	
	{ERR_UNDEFINED, (char *)0},
	{ERR_NORECIPIENT, ":No recipient given (%s)"},
	{ERR_NOTEXTTOSEND, ":No text to send"},
	{ERR_NOTOPLEVEL, "%s :No toplevel domain specified"},
	{ERR_WILDTOPLEVEL, "%s :Wildcard in toplevel domain"},
};

irc_no_t	irc_errstring_sub3[] = {
	{ERR_UNDEFINED, (char *)0},
	{ERR_UNDEFINEDNCOMMAND, "%s :Unknown command"},
	{ERR_NOMOTD, ":MOTD File is missing"},
	{ERR_NOADMININFO, "%s :No administrative info available"},
	{ERR_FILEERROR, ":File error doing %s on %s"},
};

irc_no_t	irc_errstring_sub4[] = {
	{ERR_UNDEFINED, (char *)0},
	{ERR_NONICKNAMEGIVEN, ":No nickname given"},
	{ERR_ERRONEUSNICKNAME, "%s :Erroneus nickname"},
	{ERR_NICKNAMEINUSE, "%s :Nickname is already in use"},
	{ERR_UNDEFINED, (char *)0},
	{ERR_UNDEFINED, (char *)0},
	{ERR_NICKCOLLISION, "%s :Nickname collision KILL"},
};

irc_no_t	irc_errstring_sub5[] = {
	{ERR_UNDEFINED, (char *)0},
	{ERR_USERNOTINCHANNEL, "%s %s :They aren't on that channel"},
	{ERR_NOTONCHANNEL, "%s :You're not on that channel"},
	{ERR_USERONCHANNEL, "%s %s :is already on channel"},
	{ERR_NOLOGIN, "%s :User not logged in"},
	{ERR_SUMMONDISABLED, ":SUMMON has been disabled"},
	{ERR_USERDISABLED, ":USERS has been disabled"},
};

irc_no_t	irc_errstring_sub6[] = {
	{ERR_UNDEFINED, (char *)0},
	{ERR_NOTREGISTERED, ":You have not registered"}
};

irc_no_t	irc_errstring_sub7[] = {
	{ERR_UNDEFINED, (char *)0},
	{ERR_NEEDMOREPARAMS, "%s: Not enough parameters"},
	{ERR_ALREADYREGISTRED, ":You may not reregister"}
	{ERR_NOPERMFORHOST, ":Your host isn't among the privileged"},
	{ERR_PASSWDMISMATCH, ":Password incorrect"},
	{ERR_YOUREBANNEDCREEP, ":You are banned from this server"},
	{ERR_UNDEFINED, (char *)0},
	{ERR_KEYSET, "%s :Channel key already set"},
};

irc_no_t	irc_errstring_sub8[] = {
	{ERR_UNDEFINED, (char *)0},
	{ERR_CHANNELISFULL, "%s :Cnnot join channel (+l)"},
	{ERR_UNDEFINEDNMODE, "%s :is unknown mode char to me"},
	{ERR_INVITEONLYCHAN, "%s :Cannot join channel (+i)"},
	{ERR_BANNEDFROMCHAN, "%s :Cannot join channel (+b)"},
	{ERR_BADCHANNELKEY, "%s :Cannot join channel (+k)"},
};

irc_no_t	irc_errstring_sub9[] = {
	{ERR_UNDEFINED, (char *)0},
	{ERR_NOPRIVILEGES, ":Permission Denied- You're not an IRC operator"},
	{ERR_CHANOPRIVSNEEDED, "%s :You're not channel operator"},
	{ERR_CANTKILLSERVER, ": You cant kill a server!"},
};

irc_no_t	irc_errstring_sub10[] = {
	{ERR_UNDEFINED, (char *)0},
	{ERR_NOOPERHOST, ":No O-lines for your host"},
};

irc_no_t	irc_errstring_sub11[] = {
	{ERR_UNDEFINED, (char *)0},
	{ERR_UMODEUNKNOWNFLAG, ":Unknown MODE flag"},
	{ERR_USERDONTMATCH, ":Cant change mode for other users"},
};

irc_no_t	*irc_errstring[] = {
	irc_errstring_sub1,
	irc_errstring_sub2,
	irc_errstring_sub3,
	irc_errstring_sub4,
	irc_errstring_sub5,
	irc_errstring_sub6,
	irc_errstring_sub7,
	irc_errstring_sub8,
	irc_errstring_sub9,
	irc_errstring_sub10,
	irc_errstring_sub11
};
