#ifndef INIT_SCRIPTING_BACKEND
extern void RegisterAllClassesIPhone();

void RegisterAllClasses()
{
	// Register classes for unit tests
	RegisterAllClassesIPhone();
}

void RegisterAllStrippedInternalCalls() {}
#endif

void RegisterMonoModules() {}
