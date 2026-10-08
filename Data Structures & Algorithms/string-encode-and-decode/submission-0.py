class Solution:

    def encode(self, strs: List[str]) -> str:
        encoded_string = ""
        for s in strs:
            encoded_string += s
            encoded_string += "/*&"

        return encoded_string

    def decode(self, s: str) -> List[str]:
        decoded_strs = s.split("/*&")
        return decoded_strs[:-1]
