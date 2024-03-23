//
// Created by Adam Saher on 2022-08-19.
//

#ifndef C_J5S3_H
#define C_J5S3_H

#include <string>
#include <unordered_map>
#include <vector>

/*
Every Web Page is identified by a string of characters known as a URL (Uniform Resource Locator). Web Pages are
formatted using HTML (Hypertext Markup Language). HTML has many codes, collectively known as markup, that allow the
author to specify the format of the pages as well as to specify links to other pages. For this problem, we are concerned
only with the markup that identifies links to other pages within a given page.

A link within the page is denoted <A HREF="URL"> where URL is the URL of some other page. A user viewing a page
containing a link may click on the link to view the other page.

You are to write a program that reads a number of web pages and their associated URLs. For each link in each page, you
must print the URL of the page containing the link, and the URL of the page referred to by the link.
Following the last page, you are then given several pairs of URLs. For each pair you are to assume that you are viewing
the page identified by the first URL, and determine whether it is possible to click a sequence of links so as to view
the page identified by the second URL. If so, you should print "Can surf from here to there." where here and there are
the two URLs. If not you should print "Can't surf from here to there.

The first line of input contains an integer pens_count ≤ 100, the number of Web Pages. For each Web Page, there will be
a line containing its URL, followed by several lines containing the page. The URL will consist of up to 80 non-blank
printable characters and will not contain any quotation marks. The first line of the page will be <HTML> and the last
line will be </HTML>. Each page will contain up to 100 links in the format described above. Each link will be contained
within a single line of input. URLs in the link will be those of pages given in the input. The markup keywords A, HREF,
and HTML will appear only in upper case.

Following the pens_count pages will be several pairs of lines giving URLs required by the problem as specified above.
The last line of input will be "The End". For each pair, print the appropriate message given above.

Sample Input ( Input file : surf.in )
3
http://ccc.uwaterloo.ca
<HTML> <TITLE>This is the CCC page</TITLE>
Hello there boys
and girls.  <B>Let's</B> try <A HREF="http://abc.def/ghi"> a
little
problem </A>
</HTML>
http://abc.def/ghi
<HTML> Now is the <TITLE>time</TITLE> for all good people to program.
<A HREF="http://www.www.www.com">hello</A><A HREF="http://xxx">bye</A>
</HTML>
http://www.www.www.com
<HTML>
<TITLE>Weird and Wonderful World</TITLE>
</HTML>
http://ccc.uwaterloo.ca
http://www.www.www.com
http://www.www.www.com
http://ccc.uwaterloo.ca
The End
Output for Sample Input ( Output file : surf.out )
Link from http://ccc.uwaterloo.ca to http://abc.def/ghi
Link from http://abc.def/ghi to http://www.www.www.com
Link from http://abc.def/ghi to http://xxx
Can surf from http://ccc.uwaterloo.ca to http://www.www.www.com.
Can't surf from http://www.www.www.com





Sample Input 2
100
url0
<HTML>
<A HREF="url20">
<A HREF="url65">
</HTML>
url1
<HTML>
<A HREF="url68">
</HTML>
url2
<HTML>
<A HREF="url16">
<A HREF="url29">
</HTML>
url3
<HTML>
</HTML>
url4
<HTML>
<A HREF="url17">
</HTML>
url5
<HTML>
<A HREF="url28">
</HTML>
url6
<HTML>
<A HREF="url0">
<A HREF="url18">
<A HREF="url73">
</HTML>
url7
<HTML>
<A HREF="url39">
<A HREF="url42">
<A HREF="url65">
<A HREF="url89">
</HTML>
url8
<HTML>
<A HREF="url79">
</HTML>
url9
<HTML>
</HTML>
url10
<HTML>
<A HREF="url76">
<A HREF="url90">
</HTML>
url11
<HTML>
</HTML>
url12
<HTML>
<A HREF="url10">
<A HREF="url30">
</HTML>
url13
<HTML>
<A HREF="url3">
</HTML>
url14
<HTML>
<A HREF="url12">
<A HREF="url15">
<A HREF="url36">
</HTML>
url15
<HTML>
<A HREF="url55">
<A HREF="url61">
<A HREF="url72">
<A HREF="url79">
</HTML>
url16
<HTML>
<A HREF="url72">
<A HREF="url88">
</HTML>
url17
<HTML>
<A HREF="url0">
<A HREF="url5">
<A HREF="url20">
</HTML>
url18
<HTML>
<A HREF="url30">
<A HREF="url45">
</HTML>
url19
<HTML>
</HTML>
url20
<HTML>
<A HREF="url94">
</HTML>
url21
<HTML>
<A HREF="url63">
</HTML>
url22
<HTML>
<A HREF="url53">
</HTML>
url23
<HTML>
<A HREF="url19">
<A HREF="url49">
<A HREF="url88">
</HTML>
url24
<HTML>
<A HREF="url27">
<A HREF="url30">
<A HREF="url62">
<A HREF="url69">
</HTML>
url25
<HTML>
<A HREF="url50">
<A HREF="url61">
<A HREF="url74">
</HTML>
url26
<HTML>
<A HREF="url1">
<A HREF="url67">
</HTML>
url27
<HTML>
<A HREF="url2">
<A HREF="url94">
</HTML>
url28
<HTML>
<A HREF="url70">
</HTML>
url29
<HTML>
<A HREF="url16">
<A HREF="url18">
<A HREF="url22">
<A HREF="url25">
<A HREF="url58">
</HTML>
url30
<HTML>
<A HREF="url11">
</HTML>
url31
<HTML>
<A HREF="url12">
<A HREF="url23">
<A HREF="url63">
<A HREF="url85">
</HTML>
url32
<HTML>
<A HREF="url29">
<A HREF="url51">
<A HREF="url55">
</HTML>
url33
<HTML>
<A HREF="url0">
</HTML>
url34
<HTML>
<A HREF="url10">
<A HREF="url55">
</HTML>
url35
<HTML>
</HTML>
url36
<HTML>
<A HREF="url20">
<A HREF="url91">
<A HREF="url92">
</HTML>
url37
<HTML>
<A HREF="url68">
</HTML>
url38
<HTML>
<A HREF="url7">
<A HREF="url23">
<A HREF="url27">
</HTML>
url39
<HTML>
<A HREF="url54">
<A HREF="url61">
<A HREF="url84">
</HTML>
url40
<HTML>
<A HREF="url8">
<A HREF="url12">
<A HREF="url22">
<A HREF="url26">
<A HREF="url43">
<A HREF="url44">
</HTML>
url41
<HTML>
<A HREF="url34">
<A HREF="url72">
</HTML>
url42
<HTML>
</HTML>
url43
<HTML>
<A HREF="url99">
</HTML>
url44
<HTML>
<A HREF="url47">
<A HREF="url62">
</HTML>
url45
<HTML>
<A HREF="url4">
</HTML>
url46
<HTML>
<A HREF="url53">
<A HREF="url69">
<A HREF="url84">
</HTML>
url47
<HTML>
<A HREF="url1">
<A HREF="url37">
<A HREF="url89">
</HTML>
url48
<HTML>
<A HREF="url51">
<A HREF="url52">
</HTML>
url49
<HTML>
<A HREF="url9">
</HTML>
url50
<HTML>
<A HREF="url37">
<A HREF="url48">
</HTML>
url51
<HTML>
<A HREF="url8">
<A HREF="url15">
<A HREF="url44">
</HTML>
url52
<HTML>
</HTML>
url53
<HTML>
<A HREF="url14">
<A HREF="url27">
</HTML>
url54
<HTML>
<A HREF="url1">
<A HREF="url22">
<A HREF="url55">
</HTML>
url55
<HTML>
<A HREF="url20">
<A HREF="url60">
</HTML>
url56
<HTML>
</HTML>
url57
<HTML>
<A HREF="url1">
<A HREF="url6">
</HTML>
url58
<HTML>
<A HREF="url22">
<A HREF="url46">
</HTML>
url59
<HTML>
<A HREF="url85">
</HTML>
url60
<HTML>
</HTML>
url61
<HTML>
<A HREF="url63">
</HTML>
url62
<HTML>
</HTML>
url63
<HTML>
<A HREF="url19">
<A HREF="url26">
<A HREF="url59">
</HTML>
url64
<HTML>
<A HREF="url45">
<A HREF="url57">
<A HREF="url84">
</HTML>
url65
<HTML>
<A HREF="url72">
</HTML>
url66
<HTML>
</HTML>
url67
<HTML>
<A HREF="url19">
<A HREF="url50">
</HTML>
url68
<HTML>
<A HREF="url6">
<A HREF="url14">
<A HREF="url50">
<A HREF="url90">
</HTML>
url69
<HTML>
<A HREF="url72">
</HTML>
url70
<HTML>
<A HREF="url68">
</HTML>
url71
<HTML>
<A HREF="url0">
<A HREF="url79">
</HTML>
url72
<HTML>
<A HREF="url22">
<A HREF="url41">
<A HREF="url66">
</HTML>
url73
<HTML>
<A HREF="url43">
<A HREF="url75">
</HTML>
url74
<HTML>
<A HREF="url7">
<A HREF="url69">
<A HREF="url77">
</HTML>
url75
<HTML>
<A HREF="url8">
<A HREF="url31">
<A HREF="url46">
</HTML>
url76
<HTML>
<A HREF="url8">
<A HREF="url34">
</HTML>
url77
<HTML>
<A HREF="url34">
<A HREF="url52">
</HTML>
url78
<HTML>
<A HREF="url39">
<A HREF="url44">
</HTML>
url79
<HTML>
<A HREF="url3">
<A HREF="url19">
</HTML>
url80
<HTML>
<A HREF="url24">
<A HREF="url28">
<A HREF="url38">
</HTML>
url81
<HTML>
<A HREF="url6">
<A HREF="url19">
<A HREF="url77">
<A HREF="url78">
</HTML>
url82
<HTML>
<A HREF="url11">
<A HREF="url59">
<A HREF="url63">
<A HREF="url64">
<A HREF="url97">
</HTML>
url83
<HTML>
<A HREF="url18">
<A HREF="url95">
</HTML>
url84
<HTML>
<A HREF="url29">
</HTML>
url85
<HTML>
<A HREF="url16">
<A HREF="url17">
<A HREF="url29">
</HTML>
url86
<HTML>
<A HREF="url25">
<A HREF="url51">
</HTML>
url87
<HTML>
<A HREF="url23">
<A HREF="url45">
</HTML>
url88
<HTML>
<A HREF="url2">
<A HREF="url68">
<A HREF="url77">
</HTML>
url89
<HTML>
<A HREF="url21">
<A HREF="url51">
</HTML>
url90
<HTML>
<A HREF="url4">
<A HREF="url58">
<A HREF="url98">
</HTML>
url91
<HTML>
<A HREF="url35">
<A HREF="url54">
</HTML>
url92
<HTML>
</HTML>
url93
<HTML>
<A HREF="url52">
</HTML>
url94
<HTML>
</HTML>
url95
<HTML>
</HTML>
url96
<HTML>
<A HREF="url61">
<A HREF="url81">
</HTML>
url97
<HTML>
<A HREF="url24">
</HTML>
url98
<HTML>
<A HREF="url20">
<A HREF="url94">
</HTML>
url99
<HTML>
<A HREF="url90">
</HTML>
url82
url0
url0
url82
url82
url13
url13
url82
url15
url64
url1
url90
url36
url83
url19
url76
url12
url10
url74
url36
The End
Sample Output for Input 2
Link from url0 to url20
Link from url0 to url65
Link from url1 to url68
Link from url2 to url16
Link from url2 to url29
Link from url4 to url17
Link from url5 to url28
Link from url6 to url0
Link from url6 to url18
Link from url6 to url73
Link from url7 to url39
Link from url7 to url42
Link from url7 to url65
Link from url7 to url89
Link from url8 to url79
Link from url10 to url76
Link from url10 to url90
Link from url12 to url10
Link from url12 to url30
Link from url13 to url3
Link from url14 to url12
Link from url14 to url15
Link from url14 to url36
Link from url15 to url55
Link from url15 to url61
Link from url15 to url72
Link from url15 to url79
Link from url16 to url72
Link from url16 to url88
Link from url17 to url0
Link from url17 to url5
Link from url17 to url20
Link from url18 to url30
Link from url18 to url45
Link from url20 to url94
Link from url21 to url63
Link from url22 to url53
Link from url23 to url19
Link from url23 to url49
Link from url23 to url88
Link from url24 to url27
Link from url24 to url30
Link from url24 to url62
Link from url24 to url69
Link from url25 to url50
Link from url25 to url61
Link from url25 to url74
Link from url26 to url1
Link from url26 to url67
Link from url27 to url2
Link from url27 to url94
Link from url28 to url70
Link from url29 to url16
Link from url29 to url18
Link from url29 to url22
Link from url29 to url25
Link from url29 to url58
Link from url30 to url11
Link from url31 to url12
Link from url31 to url23
Link from url31 to url63
Link from url31 to url85
Link from url32 to url29
Link from url32 to url51
Link from url32 to url55
Link from url33 to url0
Link from url34 to url10
Link from url34 to url55
Link from url36 to url20
Link from url36 to url91
Link from url36 to url92
Link from url37 to url68
Link from url38 to url7
Link from url38 to url23
Link from url38 to url27
Link from url39 to url54
Link from url39 to url61
Link from url39 to url84
Link from url40 to url8
Link from url40 to url12
Link from url40 to url22
Link from url40 to url26
Link from url40 to url43
Link from url40 to url44
Link from url41 to url34
Link from url41 to url72
Link from url43 to url99
Link from url44 to url47
Link from url44 to url62
Link from url45 to url4
Link from url46 to url53
Link from url46 to url69
Link from url46 to url84
Link from url47 to url1
Link from url47 to url37
Link from url47 to url89
Link from url48 to url51
Link from url48 to url52
Link from url49 to url9
Link from url50 to url37
Link from url50 to url48
Link from url51 to url8
Link from url51 to url15
Link from url51 to url44
Link from url53 to url14
Link from url53 to url27
Link from url54 to url1
Link from url54 to url22
Link from url54 to url55
Link from url55 to url20
Link from url55 to url60
Link from url57 to url1
Link from url57 to url6
Link from url58 to url22
Link from url58 to url46
Link from url59 to url85
Link from url61 to url63
Link from url63 to url19
Link from url63 to url26
Link from url63 to url59
Link from url64 to url45
Link from url64 to url57
Link from url64 to url84
Link from url65 to url72
Link from url67 to url19
Link from url67 to url50
Link from url68 to url6
Link from url68 to url14
Link from url68 to url50
Link from url68 to url90
Link from url69 to url72
Link from url70 to url68
Link from url71 to url0
Link from url71 to url79
Link from url72 to url22
Link from url72 to url41
Link from url72 to url66
Link from url73 to url43
Link from url73 to url75
Link from url74 to url7
Link from url74 to url69
Link from url74 to url77
Link from url75 to url8
Link from url75 to url31
Link from url75 to url46
Link from url76 to url8
Link from url76 to url34
Link from url77 to url34
Link from url77 to url52
Link from url78 to url39
Link from url78 to url44
Link from url79 to url3
Link from url79 to url19
Link from url80 to url24
Link from url80 to url28
Link from url80 to url38
Link from url81 to url6
Link from url81 to url19
Link from url81 to url77
Link from url81 to url78
Link from url82 to url11
Link from url82 to url59
Link from url82 to url63
Link from url82 to url64
Link from url82 to url97
Link from url83 to url18
Link from url83 to url95
Link from url84 to url29
Link from url85 to url16
Link from url85 to url17
Link from url85 to url29
Link from url86 to url25
Link from url86 to url51
Link from url87 to url23
Link from url87 to url45
Link from url88 to url2
Link from url88 to url68
Link from url88 to url77
Link from url89 to url21
Link from url89 to url51
Link from url90 to url4
Link from url90 to url58
Link from url90 to url98
Link from url91 to url35
Link from url91 to url54
Link from url93 to url52
Link from url96 to url61
Link from url96 to url81
Link from url97 to url24
Link from url98 to url20
Link from url98 to url94
Link from url99 to url90
Can surf from url82 to url0.
Can't surf from url0 to url82.
Can't surf from url82 to url13.
Can't surf from url13 to url82.
Can't surf from url15 to url64.
Can surf from url1 to url90.
Can't surf from url36 to url83.
Can't surf from url19 to url76.
Can surf from url12 to url10.
Can surf from url74 to url36.
*/

class SiteNode {
    unsigned value;
    bool visited = false;
    std::vector<SiteNode*> links;
public:
    SiteNode(const unsigned&);
    friend class J5_S3;
};

class J5_S3 {
    std::unordered_map<std::string, unsigned> link_numeration;
    std::vector<SiteNode*> sites;


public:
    J5_S3();
    SiteNode* create_node(const std::string&);
    bool path_possible(const std::string&, const std::string&);
    bool path_possible(SiteNode*, SiteNode*);
    void reset_nodes();
    void run(std::ifstream&);
    static std::vector<std::string> extract_links(const std::string&);
};


#endif //C_J5S3_H
