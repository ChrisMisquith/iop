import re

class HindiTokenizer:
    def __init__(self, text):
        self.text = text

    def tokenize(self):
        # Regex patterns 

        url_pattern = r"https?://[^\s]+|www\.[^\s]+"  # URLs (http, https, www)
        email_pattern = r"[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}"  # Email
        date_pattern = r"\b\d{1,2}[-/]\d{1,2}[-/]\d{2,4}|\b\d{4}[-/]\d{1,2}[-/]\d{1,2}\b"  # Dates (DD/MM/YYYY)
        social_media_pattern = r"[@#][\wअ-ह0-9_]+"  # @user, #hashtag
        number_pattern = r"\b\d{1,3}(,\d{2})*(,\d{3})*|\d+(\.\d+)?|\d+/\d+\b"  # Numbers
        hindi_word_pattern = r"[\u0900-\u097F]+"  # Hindi (Unicode block)
        punctuation_pattern = r"[.,!?;:\"'।॥]"  # Punctuation

        # Combine all patterns 
        pattern = f"({url_pattern})|({email_pattern})|({date_pattern})|({social_media_pattern})|({number_pattern})|({hindi_word_pattern})|({punctuation_pattern})"

        # Find matches 
        tokens = re.findall(pattern, self.text)

        # Flatten the list & remove empty values
        tokens = [token for group in tokens for token in group if token]

        return tokens


# Sample Hindi text 
text = """नमस्ते! यह मेरा ईमेल है: example@gmail.com और मेरी वेबसाइट https://example.com है।
आज 05/03/2025 को हम मिल सकते हैं। मेरा फोन नंबर 9,87,654.32 है। ट्विटर पर @Rahul और #हिंदी_टेक_टोकन देखें!"""

# Run tokenizer 
tokenizer = HindiTokenizer(text)
tokens = tokenizer.tokenize()

# Print result 
print(tokens)

