"""

For each partner in the partner list book,
send each partner the corresponding discount
price book feed, accoridng to the price feed
frequency, partner leve, and designated customer
email 

"""

partner_list = "Partner List.xlsx" # spreadsheet
price_book = "Price Book.xlsx" # spreadsheet

partner = "Company Name" # column
frequency = "Price Feed Frequency" # column
discount_level = "Fortinet Partner Level" # column
customer_email = "Customer Email"

send_email_template = ["Partner", 7, "Email", "Advanced"]

def convert_frequency_to_integer(frequency: str) -> int:
    if frequency == "Weekly":
        return 7
    if frequency == "Monthly":
        return 30
    if frequency == "Daily":
        return 1

def convert_discount_to_spreadsheet(partner_level: str) -> spreadsheet:
    match partner_level:
        case "Expert":
            return price_book["Expert-AUD"]
        case "Advanced":
            return price_book["Advanced-AUD"]
        case "Select":
            return price_book["Select-AUD"]
        case "Advocate":
            return price_book["Advocate-AUD"]

for row in partner_list:
    for column in row:
        curr_cell = row[column] # current cell of the row->column
        if column == partner:
            send_email_template[0] = curr_cell
        if column == frequency:
            send_email_template[1] = convert_frequency_to_integer(curr_cell)
        if column == customer_email:
            send_email_template[2] = curr_cell
        if column == discount_level:
            send_email_template[3] = convert_discount_to_spreadsheet(curr_cell)

if __name__ == "__main__":
    # some code that processes "send_email_template"

