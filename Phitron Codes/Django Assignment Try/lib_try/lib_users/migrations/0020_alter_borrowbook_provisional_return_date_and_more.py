# Generated by Django 4.2.1 on 2023-07-19 03:27

import datetime
from django.db import migrations, models
import django.db.models.deletion


class Migration(migrations.Migration):

    dependencies = [
        ('lib_users', '0019_auto_20230719_0849'),
    ]

    operations = [
        migrations.AlterField(
            model_name='borrowbook',
            name='provisional_return_date',
            field=models.DateTimeField(default=datetime.datetime(2023, 8, 3, 3, 27, 14, 876786, tzinfo=datetime.timezone.utc)),
        ),
        migrations.AlterField(
            model_name='returnbook',
            name='borrow',
            field=models.ForeignKey(default=36, on_delete=django.db.models.deletion.CASCADE, related_name='borrow_book', to='lib_users.borrowbook'),
        ),
    ]