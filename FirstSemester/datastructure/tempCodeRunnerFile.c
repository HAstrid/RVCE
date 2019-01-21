if (start->next == NULL)
    {
        n = start->data;
        free(start);
        start = NULL;
        printf("deleted %d", n);
        return;
    }