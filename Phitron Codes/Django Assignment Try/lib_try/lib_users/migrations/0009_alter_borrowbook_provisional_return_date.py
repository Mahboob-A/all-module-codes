# Generated by Django 4.2.2 on 2023-07-18 02:00

import datetime
from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('lib_users', '0008_remove_book_wishlist_and_more'),
    ]

    operations = [
        migrations.AlterField(
            model_name='borrowbook',
            name='provisional_return_date',
            field=models.DateTimeField(default=datetime.datetime(2023, 8, 2, 2, 0, 31, 29812, tzinfo=datetime.timezone.utc)),
        ),
    ]
