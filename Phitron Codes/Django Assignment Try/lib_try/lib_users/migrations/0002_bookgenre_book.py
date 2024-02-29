# Generated by Django 4.2.2 on 2023-07-17 01:37

from django.db import migrations, models
import django.db.models.deletion


class Migration(migrations.Migration):

    dependencies = [
        ('lib_users', '0001_initial'),
    ]

    operations = [
        migrations.CreateModel(
            name='BookGenre',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(choices=[('mystery', 'Mystery'), ('thriller', 'Thriller'), ('sci_fi', 'Sci-Fi'), ('humor', 'Humor'), ('horror', 'Humor'), ('novel', 'Novel'), ('bengali_classic_novel', 'Bengali Classic Novel'), ('sucpence', 'Sucpence'), ('short_story', 'Short Story'), ('romance', 'Romance'), ('modern', 'Modern'), ('retro', 'Retro'), ('history', 'History'), ('religious', 'Religious'), ('documentary', 'Documentary'), ('self_help', 'Self Help'), ('high_life_spirituality', 'High Life Spirituality'), ('how_to', 'How To'), ('bengali_novel', 'Bengali Novel')], max_length=30)),
                ('description', models.TextField(blank=True, null=True)),
            ],
        ),
        migrations.CreateModel(
            name='Book',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('isbn', models.CharField(max_length=15)),
                ('title', models.CharField(max_length=50)),
                ('author', models.CharField(max_length=50)),
                ('book_image_url', models.URLField()),
                ('description', models.TextField()),
                ('first_pub', models.DateField(auto_now_add=True)),
                ('last_pub', models.DateField(auto_now=True, null=True)),
                ('genre', models.ForeignKey(on_delete=django.db.models.deletion.CASCADE, related_name='books', to='lib_users.bookgenre')),
            ],
        ),
    ]