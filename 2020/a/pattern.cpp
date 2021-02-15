/*

simulate big array and arrange all asterisk with the same position
example input
[      H * 0      ]
[     HE *        ]
[  HELLO *        ]
[        * HELLO  ]
loop check prefix:
    from the min string check if it's the -first- index and its word is a substring of bigger word
loop check suffix:
    from the min string check if it's the -last- index and its word is a substring of bigger word

*/