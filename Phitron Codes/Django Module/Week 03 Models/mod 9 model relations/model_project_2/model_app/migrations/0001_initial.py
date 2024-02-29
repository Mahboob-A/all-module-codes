# Generated by Django 4.2.1 on 2023-06-21 14:30

from django.db import migrations, models
import django.db.models.deletion


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='EmployeeModel',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=30)),
                ('email', models.EmailField(max_length=50)),
                ('designation', models.CharField(max_length=20)),
                ('salary', models.IntegerField()),
                ('address', models.TextField()),
            ],
        ),
        migrations.CreateModel(
            name='ExampleModel',
            fields=[
                ('roll', models.IntegerField(primary_key=True, serialize=False, verbose_name='Student Roll')),
                ('name', models.CharField(max_length=30, verbose_name='Student Name')),
                ('email', models.EmailField(max_length=30, verbose_name='Student Email')),
                ('address', models.TextField(max_length=150, verbose_name='Student Address')),
            ],
        ),
        migrations.CreateModel(
            name='People',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=30)),
                ('email', models.EmailField(max_length=50)),
                ('address', models.TextField(max_length=150)),
            ],
        ),
        migrations.CreateModel(
            name='PersonModel',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=30)),
                ('email', models.EmailField(max_length=50)),
            ],
        ),
        migrations.CreateModel(
            name='Student',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=30)),
                ('roll', models.IntegerField(unique=True)),
                ('class_name', models.CharField(max_length=30)),
            ],
        ),
        migrations.CreateModel(
            name='StudentInfoModel',
            fields=[
                ('user_id', models.AutoField(default=0, primary_key=True, serialize=False)),
                ('name', models.CharField(max_length=30, verbose_name='Student Name')),
                ('email', models.EmailField(max_length=30, verbose_name='Student Email')),
                ('password', models.CharField(max_length=30, verbose_name='Password')),
                ('address', models.TextField(max_length=150, verbose_name='Student Address')),
                ('roll', models.IntegerField(verbose_name='Student Roll')),
                ('student_class', models.CharField(max_length=15, verbose_name='Student Class')),
                ('section', models.CharField(max_length=10, verbose_name='Student Section')),
                ('payment', models.IntegerField()),
            ],
            options={
                'abstract': False,
            },
        ),
        migrations.CreateModel(
            name='StudentModel',
            fields=[
                ('roll', models.IntegerField(primary_key=True, serialize=False)),
                ('name', models.CharField(max_length=30)),
                ('email', models.EmailField(max_length=30)),
                ('password', models.CharField(max_length=30)),
            ],
        ),
        migrations.CreateModel(
            name='TeacherInfoModel',
            fields=[
                ('user_id', models.AutoField(default=0, primary_key=True, serialize=False)),
                ('name', models.CharField(max_length=30, verbose_name='Student Name')),
                ('email', models.EmailField(max_length=30, verbose_name='Student Email')),
                ('password', models.CharField(max_length=30, verbose_name='Password')),
                ('address', models.TextField(max_length=150, verbose_name='Student Address')),
                ('subject_name', models.CharField(max_length=15, verbose_name='Teacher Subject')),
                ('salary', models.IntegerField()),
            ],
            options={
                'abstract': False,
            },
        ),
        migrations.CreateModel(
            name='User',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=30)),
                ('email', models.EmailField(max_length=50)),
                ('address', models.TextField(max_length=150)),
            ],
        ),
        migrations.CreateModel(
            name='ManagerModel',
            fields=[
                ('employeemodel_ptr', models.OneToOneField(auto_created=True, on_delete=django.db.models.deletion.CASCADE, parent_link=True, primary_key=True, serialize=False, to='model_app.employeemodel')),
                ('take_interview', models.BooleanField()),
                ('hiring', models.BooleanField()),
            ],
            bases=('model_app.employeemodel',),
        ),
        migrations.CreateModel(
            name='Teacher',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=30)),
                ('subject', models.CharField(max_length=30)),
                ('teach_on_days', models.CharField(choices=[('s', 'sunday'), ('m', 'monday'), ('t', 'tuesday'), ('w', 'wednesday'), ('th', 'thursday'), ('f', 'friday'), ('sa', 'saturday')], default='Sunday', max_length=2)),
                ('mobile', models.CharField(max_length=13)),
                ('student', models.ManyToManyField(to='model_app.student')),
            ],
        ),
        migrations.CreateModel(
            name='Post',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('post_title', models.CharField(max_length=30)),
                ('post_category', models.CharField(choices=[('f', 'funny'), ('g', 'general'), ('e', 'emotional'), ('p', 'political'), ('m', 'motivative'), ('n', 'news'), ('u', 'other updates')], max_length=1)),
                ('post_published_date', models.DateTimeField()),
                ('user', models.ForeignKey(on_delete=django.db.models.deletion.CASCADE, to='model_app.user')),
            ],
        ),
        migrations.CreateModel(
            name='Passport',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('pass_num', models.IntegerField(verbose_name='Passport Number')),
                ('pass_page', models.IntegerField(verbose_name='Total Page')),
                ('pass_validity', models.IntegerField(verbose_name='Passport Validity')),
                ('people', models.OneToOneField(on_delete=django.db.models.deletion.CASCADE, to='model_app.people')),
            ],
        ),
        migrations.CreateModel(
            name='PersonModelProxy',
            fields=[
            ],
            options={
                'ordering': ['id'],
                'proxy': True,
                'indexes': [],
                'constraints': [],
            },
            bases=('model_app.personmodel',),
        ),
    ]
