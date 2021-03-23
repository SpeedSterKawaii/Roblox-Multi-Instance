int main()
{
        HANDLE v0;

        SetConsoleTitleA("Speeds Roblox Multi Instance - SpeedSterKawaii#5233");
        v0 = CreateMutexA(0, 1, "ROBLOX_singletonMutex");
        if (!v0)
        {
            printf("Launching Instances: Failed.\n");
        }
        else
        {
            printf("Launching Instances: Success.\n");
        }
        printf("You can now launch multiple roblox instances/players.\n");
        printf("Have fun using speeds roblox multi instance clients.\n");
        printf("You may enter 'q' to terminate the roblox process.\n");
        while (getchar() != 113)
            ;
        ReleaseMutex(v0);
        CloseHandle(v0);
        return 0;
}
