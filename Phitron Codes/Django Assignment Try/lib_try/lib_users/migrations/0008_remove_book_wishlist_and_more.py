# Generated by Django 4.2.2 on 2023-07-17 11:01

import datetime
from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('lib_users', '0007_alter_borrowbook_provisional_return_date_and_more'),
    ]

    operations = [
        migrations.RemoveField(
            model_name='book',
            name='wishlist',
        ),
        migrations.AlterField(
            model_name='borrowbook',
            name='provisional_return_date',
            field=models.DateTimeField(default=datetime.datetime(2023, 8, 1, 11, 1, 29, 300196, tzinfo=datetime.timezone.utc)),
        ),
        migrations.RemoveField(
            model_name='user',
            name='wishlist',
        ),
        migrations.DeleteModel(
            name='Wishlist',
        ),
        migrations.AddField(
            model_name='user',
            name='wishlist',
            field=models.ManyToManyField(blank=True, related_name='user_wishlists', to='lib_users.book'),
        ),
    ]
