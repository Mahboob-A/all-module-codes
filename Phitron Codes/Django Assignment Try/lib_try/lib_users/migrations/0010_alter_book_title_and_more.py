# Generated by Django 4.2.2 on 2023-07-18 09:44

import datetime
from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('lib_users', '0009_alter_borrowbook_provisional_return_date'),
    ]

    operations = [
        migrations.AlterField(
            model_name='book',
            name='title',
            field=models.CharField(max_length=150),
        ),
        migrations.AlterField(
            model_name='borrowbook',
            name='provisional_return_date',
            field=models.DateTimeField(default=datetime.datetime(2023, 8, 2, 9, 44, 10, 861859, tzinfo=datetime.timezone.utc)),
        ),
    ]