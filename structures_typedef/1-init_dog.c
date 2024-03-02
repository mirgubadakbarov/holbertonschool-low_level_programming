void print_dog(struct dog *d) {
    if (d == NULL) {
        return; // Do nothing if the input pointer is NULL
    }

    printf("Name: %s\n", d->name ? d->name : "(nil)");
    printf("Age: %.2f\n", d->age);
    printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
