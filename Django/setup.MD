# Django Project Setup Instructions

## Step 1: Make a new directory for the project

1. Open terminal.
2. Make a new directory:
   ```bash
   mkdir project-name
   ```
3. Navigate to directory
   ```bash
   cd project-name
   ```

## Step 2: Create virtual environment

1. Run the following command in terminal:
   ```bash
   python3 -m venv .venv
   ```
2. Activate virtual environment:
   ```bash
   source .venv/bin/activate
   ```

## Step 3: Install Django and Black

1. Install Django:
   ```bash
   python3 -m pip install django~=4.2.0
   ```
2. Install Black:
   ```bash
   python3 -m pip install black
   ```

## Step 4: Create project

1. Create project:
   ```bash
   django-admin startproject project_name
   ```

## Step 5: Create app within project (if necessary)

1. Create app:
   ```bash
   python3 manage.py startapp app_name
   ```
