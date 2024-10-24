import pdfplumber
import sqlite3

# Oper PDF document
def extract_text_from_pdf(pdf_path):
    with pdfplumber.open(pdf_path) as pdf:
        text = ""
        for page in pdf.pages:
            text += page.extract_text()
    return text

# Create database and table
def create_database():
    conn = sqlite3.connect('pdf_data_question_c_c.db')
    cursor = conn.cursor()
    cursor.execute('''
        CREATE TABLE IF NOT EXISTS pdf_content (
            id INTEGER PRIMARY KEY,
            content TEXT
        )
    ''')
    conn.commit()
    conn.close()

# Write text to database
def insert_pdf_content(content):
    conn = sqlite3.connect('pdf_data_question_c_c.db')
    cursor = conn.cursor()
    cursor.execute("INSERT INTO pdf_content (content) VALUES (?)", (content,))
    conn.commit()
    conn.close()

if __name__ == "__main__":
    pdf_path = 'question_c_c++.pdf'
    create_database()
    extracted_text = extract_text_from_pdf(pdf_path)
    insert_pdf_content(extracted_text)
    print("PDF content saved to the database.")
