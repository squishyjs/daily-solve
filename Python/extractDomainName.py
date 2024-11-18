import unittest
import re  # regex module


def domain_name(url: str) -> str:
    pattern = r'(https?://)?(www\d?\.)?(?P<name>[\w-]+)\.'
    match = re.search(pattern, url)
    if match:
        return match.group('name')
    return None


class TestDomainName(unittest.TestCase):
    def test_domain_name(self):
        self.assertEqual(domain_name("http://google.co.jp"), "google")
        self.assertEqual(domain_name("http://google.com"), "google")
        self.assertEqual(domain_name("https://123.net"), "123")
        self.assertEqual(domain_name("https://hyphen-site.org"), "hyphen-site")
        self.assertEqual(domain_name("http://codewars.com"), "codewars")
        self.assertEqual(domain_name("www.xakep.ru"), "xakep")
        self.assertEqual(domain_name("https://youtube.com"), "youtube")
        self.assertEqual(domain_name("http://www.codewars.com/kata/"), "codewars")
        self.assertEqual(domain_name("icann.org"), "icann")

if __name__ == "__main__":
    unittest.main()

    print(domain_name("icann.org"))