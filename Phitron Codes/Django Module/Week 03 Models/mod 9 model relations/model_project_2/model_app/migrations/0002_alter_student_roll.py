# Generated by Django 4.2.1 on 2023-06-21 14:33

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('model_app', '0001_initial'),
    ]

    operations = [
        migrations.AlterField(
            model_name='student',
            name='roll',
            field=models.IntegerField(),
        ),
    ]
