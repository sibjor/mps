/*
    Copyright (c) 2025 Sixten Björling

    (https://sibjor.se)

    The MUPUS C++ document might be large, please SEARCH to locate your interests!
*/

#include <iostream>
#include <vector>
#include <filesystem>
#include <experimental/net>

struct License
{
    const std::string license_head = "LICENSE";
    const std::string filename = "LICENSE";

    struct Author
    {

        const std::string name = "Sixten Björling";
        const std::string email = "sixten@sibjor.se";
        const std::string website = "https://sibjor.se";
        const std::string github_user_name = "sibjor";
        const std::string nationality = "Kingdom of Sweden";
    };

    struct Licensor
    {

        static const std::string name;
        static const std::string email;
        static const std::string website;
        static const std::string github_user_name;
        static const std::string license;
        static const std::string nationality;
        static const std::string license_type;
        static const std::string license_version;
    };

    struct LicenseType
    {
        const std::string open_source = "Open Source";
    };
};
struct Syntax
{
    struct MPS
    {
        struct Link
        {
            const std::string link = "http://"
                                     "www."
                                     "https://"
                                     "ftp://"
                                     "mailto:"
                                     "file://"
                                     "url://";
            const std::string reference = "ref"
                                          "reference"
                                          "refer"
                                          "@";
        };
        struct Symbol
        {
            const std::string delivery = "-->";
            const std::string ampersand = "&";
            const std::string asterisk = "*";
            const std::string blankspace = " ";
            const std::string slash = "/";
            const std::string backslash = "\\";
            const std::string comment_open = "\"";
            const std::string comment_close = "\"";
            const std::string citation = "''";
            const std::string exclamation = "!";
            const std::string hash = "#";
            const std::string indentation_spacebar = "    ";
            const std::string indentation_syntax = "\t";
            const std::string newline_syntax = "\n";
            const std::string percent = "%";
            const std::string question = "?";
            const std::string semicolon = ";";
            const std::string dot = ".";
            const std::string colon = ":";
            const std::string comma = ",";
            const std::string open_brace = "{";
            const std::string close_brace = "}";
            const std::string open_bracket = "[";
            const std::string close_bracket = "]";
            const std::string open_parenthesis = "(";
            const std::string close_parenthesis = ")";
            const std::string single_quote = "'";
            const std::string double_quote = "\"";
            const std::string code_block = "```";
        };

        struct Context
        {
            const std::string active = "ACTIVE"
                                       "INCLUDING"
                                       "ACTIVE"
                                       "INCLUDE"
                                       "INCLUDED";
            const std::string end = "END OF"
                                    "END"
                                    "QUIT"
                                    "EXIT"
                                    "STOP";
            const std::string begin = "BEGIN"
                                      "START"
                                      "INIT"
                                      "NEW";
        };

        struct Condition
        {
            const std::string true_mps = "true"
                                         "positive"
                                         "correct";
            const std::string false_mps = "false"
                                          "negative"
                                          "incorrect";
        };

        struct Variable
        {
            const std::string variable = "variable"
                                         "var";
            const std::string function = "func"
                                         "meth";
            const std::string collection = "collection"
                                           "list"
                                           "array"
                                           "map"
                                           "set"
                                           "dict"
                                           "vector";
            const std::string random = "random"
                                       "rand";
        };

        struct Selection
        {
            const std::string single = "single"
                                       "one";
            const std::string multiple = "multiple";
            const std::string select = "select";
            const std::string selection = "selection";
            const std::string all = "all";
            const std::string first = "first"
                                      "1st";
            const std::string last = "last";
            const std::string next = "next";
            const std::string previous = "previous"
                                         "prev";
            const std::string by_then = "by_then";
            const std::string include = "contains"
                                        "include"
                                        "has";
            const std::string exclude = "exclude"
                                        "missing";
            const std::string ascending = "ascending"
                                          "asc";
            const std::string descending = "descending"
                                           "desc";
        };

        struct Node
        {
            const std::string node = "node"
                                     "class"
                                     "struct";
            const std::string root = "root";
            const std::string predecessor = "predecessor"
                                            "parent";
            const std::string ancestor = "ancestor";
            const std::string successor = "successor"
                                          "child";
            const std::string descendant = "descendant";
            const std::string sibling = "sibling";
        };

        struct Scope
        {
            const std::string external = "external"
                                         "foreign";
            const std::string internal = "inside"
                                         "internal"
                                         "local";
            const std::string itself = "itself"
                                       "self"
                                       "this"
                                       "current";
        };

        struct Action
        {
            const std::string return_value = "return"
                                             "export";
            const std::string activate = "activate"
                                            "enable"
                                            "run"
                                            "start"
                                            "execute";
            const std::string receive = "receive";
            const std::string request = "request";
            const std::string respond = "respond";
        };

        struct File
        {
            const std::string file = "file";
            const std::string file_format = "file_format"
                                            "filetype";
        };

        struct Document
        {
            const std::string document = "document"
                                         "doc"
                                         "script";
            const std::string text = "text";
            const std::string syntax = "syntax"
                                       "code";
        };

        struct Media
        {
            const std::string image = "image"
                                      "picture"
                                      "photo"
                                      "img";
            const std::string video = "video"
                                      "movie"
                                      "clip";
            const std::string audio = "audio"
                                      "sound";
            const std::string buffer = "buffer"
                                       "stream";
        };

        struct Path
        {
            const std::string path = "path"
                                     "location";
        };

        struct Markup
        {
            const std::string largest_text = "#"
                                             "largest"
                                             "largest_text";
            const std::string large_text = "##"
                                           "large"
                                           "large_text";
            const std::string medium_text = "###"
                                            "medium"
                                            "medium_text";
            const std::string small_text = "####"
                                           "small"
                                           "small_text";
            const std::string smaller_text = "#####"
                                             "smaller"
                                             "smaller_text";
            const std::string smallest_text = "######"
                                              "smallest"
                                              "smallest_text";
            const std::string bold = "**"
                                     "bold";
            const std::string italic = "*"
                                       "italic";
            const std::string underline = "_"
                                          "underline";
            const std::string strikethrough = "~~"
                                              "strikethrough";
        };

        struct Diagram
        {
            const std::string graph = "graph";

            const std::string table = "table";
            const std::string list = "list";

            const std::string socket = "socket";
            const std::string connect = "connect";
            const std::string source = "from"
                                       "source";
            const std::string destination = "to"
                                            "recipient"
                                            "target";
            const std::string arrow = "arrow"
                                      "->";
            const std::string label = "label";

            const std::string position = "position"
                                         "pos"
                                         "place";
            const std::string top = "top";
            const std::string left = "left";
            const std::string right = "right";
            const std::string bottom = "bottom"
                                       "btm";
            const std::string top_left = "top_left";
            const std::string top_right = "top_right";
            const std::string bottom_left = "bottom_left"
                                            "btm_left";
            const std::string bottom_right = "bottom_right"
                                             "btm_right";
        };

        struct Styling
        {
            const std::string variant = "variant";
            const std::string theme = "theme";
            const std::string opacity = "opacity"
                                        "transparency";
            const std::string font = "font";
            const std::string colour = "color";
            const std::string size = "size";
            const std::string background = "background"
                                           "bg";
            const std::string distance = "distance"
                                         "spacing";

            const std::string width = "width"
                                      "w";
            const std::string height = "height"
                                       "h";
        };

        struct Database
        {
            const std::string query = "query";
            const std::string insert = "insert";
            const std::string update = "update";
            const std::string delete_kw = "delete";
            const std::string select = "select";
            const std::string join = "join";
            const std::string group_by = "groupBy";
            const std::string order_by = "orderBy";
            const std::string limit = "limit";
        };

        struct Language
        {
            const std::string html = "html";
            const std::string css = "css";
            const std::string javascript = "javascript"
                                           "js";
            const std::string cpp = "cpp"
                                    "c++";
            const std::string c = "c";
            const std::string python = "python";
            const std::string java = "java";
            const std::string sql = "sql";
            const std::string rust = "rust";
            const std::string php = "php";
            const std::string kotlin = "kotlin";
            const std::string ruby = "ruby";
            const std::string csharp = "csharp";
            const std::string go = "go";
            const std::string swift = "swift";
        };
        struct DateTime
        {
            const std::string format = "date_time_format";
            const std::string date = "date";
            const std::string time = "time";
            const std::string now = "now";
            const std::string from = "from";
            const std::string until = "until";
            const std::string duration = "duration"
                                         "time_period";
        };
        struct Function
        {

            const std::string translate = "translate";
            const std::string print = "print";
            const std::string sort = "sort";
            const std::string filter = "filter";

            struct Generate
            {
                const std::string generate_random = "generate_random";
                const std::string generate_license = "generate_license";
                const std::string generate_hash = "generate_hash";
                const std::string generate_name = "generate_name";
                const std::string generate_uuid = "generate_uuid";
            };
            struct FileSystem
            {
                const std::string open = "open";
                const std::string close = "close";
                const std::string read = "read";
                const std::string write = "write";
                const std::string update = "update";
                const std::string create = "create";
                const std::string copy = "copy";
                const std::string cut = "cut";
                const std::string paste = "paste";
                const std::string save = "save";
                const std::string load = "load";
                const std::string insert = "insert";
                const std::string rename = "rename";
                const std::string remove = "remove";
                const std::string locate = "locate";
                const std::string delete_kw = "delete";
            };

            struct Network
            {
                const std::string connect = "connect";
                const std::string disconnect = "disconnect";
                const std::string send = "send";
                const std::string receive = "receive";
                const std::string request = "request";
                const std::string response = "respond";
                const std::string upload = "upload";
                const std::string download = "download";
            };

            struct String
            {
                const std::string split = "split";
                const std::string join = "join";
                const std::string replace = "replace";
                const std::string trim = "trim";
                const std::string to_upper = "to_upper";
                const std::string to_lower = "to_lower";
                const std::string substring = "substring";
                const std::string index_of = "index_of";
                const std::string last_index_of = "last_index_of";
                const std::string contains = "contains";
            };
            struct Math
            {
                const std::string add = "add";
                const std::string subtract = "subtract";
                const std::string multiply = "multiply";
                const std::string divide = "divide";
                const std::string modulus = "modulus";
                const std::string power = "power";
                const std::string square_root = "square_root";
                const std::string absolute = "absolute";
                const std::string round = "round";
                const std::string floor = "floor";
                const std::string ceil = "ceil";
            };
            struct Time
            {
                const std::string sleep = "sleep";
                const std::string wait = "wait";
                const std::string delay = "delay";
                const std::string timer = "timer";
            };
        };
    };

    struct HTML
    {

        const std::string doctype = "<!DOCTYPE html>";
        const std::string html = "<html>";
        const std::string head = "<head>";
        const std::string title_open = "<title>";
        const std::string title_close = "</title>";
        const std::string meta = "<meta>";
        const std::string link = "<link>";
        const std::string style_open = "<style>";
        const std::string style_close = "</style>";
        const std::string script_open = "<script>";
        const std::string script_close = "</script>";
        const std::string noscript_open = "<noscript>";
        const std::string noscript_close = "</noscript>";
        const std::string head_close = "</head>";
        const std::string body_open = "<body>";
        const std::string header_open = "<header>";
        const std::string header_close = "</header>";
        const std::string nav_open = "<nav>";
        const std::string nav_close = "</nav>";
        const std::string main_open = "<main>";
        const std::string main_close = "</main>";
        const std::string section_open = "<section>";
        const std::string section_close = "</section>";
        const std::string article_open = "<article>";
        const std::string article_close = "</article>";
        const std::string aside_open = "<aside>";
        const std::string aside_close = "</aside>";
        const std::string footer_open = "<footer>";
        const std::string footer_close = "</footer>";
        const std::string h1_open = "<h1>";
        const std::string h1_close = "</h1>";
        const std::string h2_open = "<h2>";
        const std::string h2_close = "</h2>";
        const std::string h3_open = "<h3>";
        const std::string h3_close = "</h3>";
        const std::string h4_open = "<h4>";
        const std::string h4_close = "</h4>";
        const std::string h5_open = "<h5>";
        const std::string h5_close = "</h5>";
        const std::string h6_open = "<h6>";
        const std::string h6_close = "</h6>";
        const std::string p_open = "<p>";
        const std::string p_close = "</p>";
        const std::string br = "<br>";
        const std::string hr = "<hr>";
        const std::string pre_open = "<pre>";
        const std::string pre_close = "</pre>";
        const std::string blockquote_open = "<blockquote>";
        const std::string blockquote_close = "</blockquote>";
        const std::string ol_open = "<ol>";
        const std::string ol_close = "</ol>";
        const std::string ul_open = "<ul>";
        const std::string ul_close = "</ul>";
        const std::string li_open = "<li>";
        const std::string li_close = "</li>";
        const std::string dl_open = "<dl>";
        const std::string dl_close = "</dl>";
        const std::string dt_open = "<dt>";
        const std::string dt_close = "</dt>";
        const std::string dd_open = "<dd>";
        const std::string dd_close = "</dd>";
        const std::string a_open = "<a>";
        const std::string a_close = "</a>";
        const std::string img = "<img>";
        const std::string iframe_open = "<iframe>";
        const std::string iframe_close = "</iframe>";
        const std::string embed_open = "<embed>";
        const std::string embed_close = "</embed>";
        const std::string object_open = "<object>";
        const std::string object_close = "</object>";
        const std::string param = "<param>";
        const std::string video_open = "<video>";
        const std::string video_close = "</video>";
        const std::string audio_open = "<audio>";
        const std::string audio_close = "</audio>";
        const std::string source = "<source>";
        const std::string track = "<track>";
        const std::string canvas_open = "<canvas>";
        const std::string canvas_close = "</canvas>";
        const std::string svg_open = "<svg>";
        const std::string svg_close = "</svg>";
        const std::string math_open = "<math>";
        const std::string math_close = "</math>";
        const std::string table_open = "<table>";
        const std::string table_close = "</table>";
        const std::string caption = "<caption>";
        const std::string thead_open = "<thead>";
        const std::string thead_close = "</thead>";
        const std::string tbody_open = "<tbody>";
        const std::string tbody_close = "</tbody>";
        const std::string tfoot_open = "<tfoot>";
        const std::string tfoot_close = "</tfoot>";
        const std::string tr_open = "<tr>";
        const std::string tr_close = "</tr>";
        const std::string th_open = "<th>";
        const std::string th_close = "</th>";
        const std::string td_open = "<td>";
        const std::string td_close = "</td>";
        const std::string form_open = "<form>";
        const std::string form_close = "</form>";
        const std::string input = "<input>";
        const std::string textarea_open = "<textarea>";
        const std::string textarea_close = "</textarea>";
        const std::string button_open = "<button>";
        const std::string button_close = "</button>";
        const std::string select_open = "<select>";
        const std::string select_close = "</select>";
        const std::string option_open = "<option>";
        const std::string option_close = "</option>";
        const std::string optgroup_open = "<optgroup>";
        const std::string optgroup_close = "</optgroup>";
        const std::string label = "<label>";
        const std::string fieldset_open = "<fieldset>";
        const std::string fieldset_close = "</fieldset>";
        const std::string legend = "<legend>";
        const std::string datalist = "<datalist>";
        const std::string output = "<output>";
        const std::string progress = "<progress>";
        const std::string meter = "<meter>";
        const std::string details_open = "<details>";
        const std::string details_close = "</details>";
        const std::string summary = "<summary>";
        const std::string dialog = "<dialog>";
        const std::string template_open = "<template>";
        const std::string template_close = "</template>";
        const std::string slot = "<slot>";
    };
    struct Markdown
    {

        const std::string h1 = "# ";
        const std::string h2 = "## ";
        const std::string h3 = "### ";
        const std::string h4 = "#### ";
        const std::string h5 = "##### ";
        const std::string h6 = "###### ";
        const std::string italic = "*";
        const std::string bold = "**";
        const std::string bold_italic = "***";
        const std::string strikethrough = "~~";
        const std::string code_block = "```";
        const std::string blockquote = "> ";
        const std::string unordered_list = "- ";
        const std::string ordered_list = "1. ";
        const std::string link_open = "[";
        const std::string link_middle = "](";
        const std::string link_close = ")";
        const std::string image_open = "![";
        const std::string image_middle = "](";
        const std::string image_close = ")";
        const std::string horizontal_rule = "---";
        const std::string table_column_separator = "|";
        const std::string line_break = "\n";
    };

    struct CSS
    {

        const std::string color = "color";
        const std::string background_color = "background-color";
        const std::string font_size = "font-size";
        const std::string font_family = "font-family";
        const std::string margin = "margin";
        const std::string padding = "padding";
        const std::string border = "border";
        const std::string width = "width";
        const std::string height = "height";
        const std::string display = "display";
        const std::string position = "position";
        const std::string top = "top";
        const std::string left = "left";
        const std::string right = "right";
        const std::string bottom = "bottom";
        const std::string z_index = "z-index";
        const std::string overflow = "overflow";
        const std::string text_align = "text-align";
        const std::string vertical_align = "vertical-align";
        const std::string line_height = "line-height";
        const std::string box_shadow = "box-shadow";
        const std::string border_radius = "border-radius";
        const std::string opacity = "opacity";
        const std::string visibility = "visibility";
        const std::string cursor = "cursor";
        const std::string transition = "transition";
        const std::string transform = "transform";
        const std::string content = "content";
        const std::string clip_path = "clip-path";
        const std::string animation = "animation";
        const std::string keyframes = "@keyframes";
    };

    struct SQL
    {
        const std::string select = "SELECT";
        const std::string from = "FROM";
        const std::string where = "WHERE";
        const std::string insert = "INSERT";
        const std::string into = "INTO";
        const std::string values = "VALUES";
        const std::string update = "UPDATE";
        const std::string set = "SET";
        const std::string delete_kw = "DELETE";
        const std::string create = "CREATE";
        const std::string table = "TABLE";
        const std::string drop = "DROP";
        const std::string alter = "ALTER";
        const std::string add = "ADD";
        const std::string remove = "REMOVE";
        const std::string join = "JOIN";
        const std::string inner_join = "INNER JOIN";
        const std::string left_join = "LEFT JOIN";
        const std::string right_join = "RIGHT JOIN";
        const std::string full_join = "FULL JOIN";
        const std::string group_by = "GROUP BY";
        const std::string order_by = "ORDER BY";
        const std::string having = "HAVING";
        const std::string distinct = "DISTINCT";
        const std::string limit = "LIMIT";
        const std::string offset = "OFFSET";
        const std::string union_kw = "UNION";
        const std::string union_all = "UNION ALL";
        const std::string intersect = "INTERSECT";
        const std::string except = "EXCEPT";
        const std::string case_kw = "CASE";
        const std::string when = "WHEN";
        const std::string then = "THEN";
        const std::string else_kw = "ELSE";
        const std::string end = "END";
        const std::string as = "AS";
        const std::string on = "ON";
        const std::string in = "IN";
        const std::string not_in = "NOT IN";
        const std::string is_null = "IS NULL";
        const std::string is_not_null = "IS NOT NULL";
        const std::string like = "LIKE";
        const std::string not_like = "NOT LIKE";
        const std::string between = "BETWEEN";
        const std::string not_between = "NOT BETWEEN";
        const std::string and_kw = "AND";
        const std::string or_kw = "OR";
        const std::string not_kw = "NOT";
        const std::string exists = "EXISTS";
        const std::string not_exists = "NOT EXISTS";
        const std::string any = "ANY";
        const std::string all = "ALL";
        const std::string asc = "ASC";
        const std::string desc = "DESC";
        const std::string primary_key = "PRIMARY KEY";
        const std::string foreign_key = "FOREIGN KEY";
        const std::string references = "REFERENCES";
        const std::string check = "CHECK";
        const std::string unique = "UNIQUE";
        const std::string default_kw = "DEFAULT";
        const std::string index = "INDEX";
        const std::string view = "VIEW";
        const std::string trigger = "TRIGGER";
        const std::string procedure = "PROCEDURE";
        const std::string function = "FUNCTION";
        const std::string cursor = "CURSOR";
        const std::string declare = "DECLARE";
        const std::string fetch = "FETCH";
        const std::string open = "OPEN";
        const std::string close = "CLOSE";
        const std::string begin = "BEGIN";
        const std::string commit = "COMMIT";
        const std::string rollback = "ROLLBACK";
        const std::string savepoint = "SAVEPOINT";
        const std::string release = "RELEASE";
        const std::string transaction = "TRANSACTION";
    };
    struct C
    {
        const std::string semicolon = ";";
        const std::string open_brace = "{";
        const std::string close_brace = "}";
        const std::string open_parenthesis = "(";
        const std::string close_parenthesis = ")";
        const std::string open_bracket = "[";
        const std::string close_bracket = "]";
        const std::string comma = ",";
        const std::string dot = ".";
        const std::string colon = ":";
        const std::string question_mark = "?";
        const std::string exclamation_mark = "!";
        const std::string ampersand = "&";
        const std::string vertical_bar = "|";
        const std::string caret = "^";
        const std::string tilde = "~";
        const std::string plus = "+";
        const std::string minus = "-";
        const std::string asterisk = "*";
        const std::string slash = "/";
        const std::string percent = "%";
        const std::string equals = "=";
        const std::string less_than = "<";
        const std::string greater_than = ">";
        const std::string logical_and = "&&";
        const std::string logical_or = "||";
        const std::string equal_to = "==";
        const std::string not_equal_to = "!=";
        const std::string less_than_or_equal_to = "<=";
        const std::string greater_than_or_equal_to = ">=";
        const std::string increment = "++";
        const std::string decrement = "--";
        const std::string arrow = "->";
        const std::string scope_resolution = "::";
        const std::string ellipsis = "...";

        const std::string kw_auto = "auto";
        const std::string kw_break = "break";
        const std::string kw_case = "case";
        const std::string kw_char = "char";
        const std::string kw_const = "const";
        const std::string kw_continue = "continue";
        const std::string kw_default = "default";
        const std::string kw_do = "do";
        const std::string kw_double = "double";
        const std::string kw_else = "else";
        const std::string kw_enum = "enum";
        const std::string kw_extern = "extern";
        const std::string kw_float = "float";
        const std::string kw_for = "for";
        const std::string kw_goto = "goto";
        const std::string kw_if = "if";
        const std::string kw_inline = "inline";
        const std::string kw_int = "int";
        const std::string kw_long = "long";
        const std::string kw_register = "register";
        const std::string kw_restrict = "restrict";
        const std::string kw_return = "return";
        const std::string kw_short = "short";
        const std::string kw_signed = "signed";
        const std::string kw_sizeof = "sizeof";
        const std::string kw_static = "static";
        const std::string kw_class = "class";
        const std::string kw_switch = "switch";
        const std::string kw_typedef = "typedef";
        const std::string kw_union = "union";
        const std::string kw_unsigned = "unsigned";
        const std::string kw_void = "void";
        const std::string kw_volatile = "volatile";
        const std::string kw_while = "while";
        const std::string kw_alignas = "_Alignas";
        const std::string kw_alignof = "_Alignof";
        const std::string kw_atomic = "_Atomic";
        const std::string kw_bool = "_Bool";
        const std::string kw_complex = "_Complex";
        const std::string kw_generic = "_Generic";
        const std::string kw_imaginary = "_Imaginary";
        const std::string kw_noreturn = "_Noreturn";
        const std::string kw_static_assert = "_Static_assert";
        const std::string kw_thread_local = "_Thread_local";
    };
    struct CPP
    {

        const std::string semicolon = ";";
        const std::string open_brace = "{";
        const std::string close_brace = "}";
        const std::string open_parenthesis = "(";
        const std::string close_parenthesis = ")";
        const std::string open_bracket = "[";
        const std::string close_bracket = "]";
        const std::string comma = ",";
        const std::string dot = ".";
        const std::string colon = ":";
        const std::string double_colon = "::";
        const std::string question_mark = "?";
        const std::string exclamation_mark = "!";
        const std::string ampersand = "&";
        const std::string vertical_bar = "|";
        const std::string caret = "^";
        const std::string tilde = "~";
        const std::string plus = "+";
        const std::string minus = "-";
        const std::string asterisk = "*";
        const std::string slash = "/";
        const std::string percent = "%";
        const std::string equals = "=";
        const std::string less_than = "<";
        const std::string greater_than = ">";
        const std::string logical_and = "&&";
        const std::string logical_or = "||";
        const std::string equal_to = "==";
        const std::string not_equal_to = "!=";
        const std::string less_than_or_equal_to = "<=";
        const std::string greater_than_or_equal_to = ">=";
        const std::string increment = "++";
        const std::string decrement = "--";
        const std::string arrow = "->";
        const std::string ellipsis = "...";

        const std::string kw_alignas = "alignas";
        const std::string kw_alignof = "alignof";
        const std::string kw_asm = "asm";
        const std::string kw_auto = "auto";
        const std::string kw_bool = "bool";
        const std::string kw_break = "break";
        const std::string kw_case = "case";
        const std::string kw_catch = "catch";
        const std::string kw_char = "char";
        const std::string kw_char8_t = "char8_t";
        const std::string kw_char16_t = "char16_t";
        const std::string kw_char32_t = "char32_t";
        const std::string kw_class = "class";
        const std::string kw_const = "const";
        const std::string kw_consteval = "consteval";
        const std::string kw_constexpr = "constexpr";
        const std::string kw_constinit = "constinit";
        const std::string kw_continue = "continue";
        const std::string kw_co_await = "co_await";
        const std::string kw_co_return = "co_return";
        const std::string kw_co_yield = "co_yield";
        const std::string kw_decltype = "decltype";
        const std::string kw_default = "default";
        const std::string kw_delete = "delete";
        const std::string kw_do = "do";
        const std::string kw_double = "double";
        const std::string kw_dynamic_cast = "dynamic_cast";
        const std::string kw_else = "else";
        const std::string kw_enum = "enum";
        const std::string kw_explicit = "explicit";
        const std::string kw_export = "export";
        const std::string kw_extern = "extern";
        const std::string kw_false = "false";
        const std::string kw_float = "float";
        const std::string kw_for = "for";
        const std::string kw_friend = "friend";
        const std::string kw_goto = "goto";
        const std::string kw_if = "if";
        const std::string kw_inline = "inline";
        const std::string kw_int = "int";
        const std::string kw_long = "long";
        const std::string kw_mutable = "mutable";
        const std::string kw_namespace = "namespace";
        const std::string kw_new = "new";
        const std::string kw_noexcept = "noexcept";
        const std::string kw_nullptr = "nullptr";
        const std::string kw_operator = "operator";
        const std::string kw_private = "private";
        const std::string kw_protected = "protected";
        const std::string kw_public = "public";
        const std::string kw_register = "register";
        const std::string kw_reinterpret_cast = "reinterpret_cast";
        const std::string kw_requires = "requires";
        const std::string kw_return = "return";
        const std::string kw_short = "short";
        const std::string kw_signed = "signed";
        const std::string kw_sizeof = "sizeof";
        const std::string kw_static = "static";
        const std::string kw_static_assert = "static_assert";
        const std::string kw_static_cast = "static_cast";
        const std::string kw_struct = "struct";
        const std::string kw_switch = "switch";
        const std::string kw_template = "template";
        const std::string kw_this = "this";
        const std::string kw_thread_local = "thread_local";
        const std::string kw_throw = "throw";
        const std::string kw_true = "true";
        const std::string kw_try = "try";
        const std::string kw_typedef = "typedef";
        const std::string kw_typeid = "typeid";
        const std::string kw_typename = "typename";
        const std::string kw_union = "union";
        const std::string kw_unsigned = "unsigned";
        const std::string kw_using = "using";
        const std::string kw_virtual = "virtual";
        const std::string kw_void = "void";
        const std::string kw_volatile = "volatile";
        const std::string kw_wchar_t = "wchar_t";
        const std::string kw_while = "while";
    };
    struct JavaScript
    {

        const std::string var = "var";
        const std::string let = "let";
        const std::string const_kw = "const";
        const std::string function = "function";
        const std::string return_kw = "return";
        const std::string if_kw = "if";
        const std::string else_kw = "else";
        const std::string for_kw = "for";
        const std::string while_kw = "while";
        const std::string do_kw = "do";
        const std::string switch_kw = "switch";
        const std::string case_kw = "case";
        const std::string break_kw = "break";
        const std::string continue_kw = "continue";
        const std::string default_kw = "default";
        const std::string try_kw = "try";
        const std::string catch_kw = "catch";
        const std::string finally_kw = "finally";
        const std::string throw_kw = "throw";
        const std::string class_kw = "class";
        const std::string extends_kw = "extends";
        const std::string conclassor_kw = "conclassor";
        const std::string super_kw = "super";
        const std::string this_kw = "this";
        const std::string new_kw = "new";
        const std::string delete_kw = "delete";
        const std::string typeof_kw = "typeof";
        const std::string instanceof_kw = "instanceof";
        const std::string in_kw = "in";
        const std::string of_kw = "of";
        const std::string async_kw = "async";
        const std::string await_kw = "await";
        const std::string import_kw = "import";
        const std::string export_kw = "export";
        const std::string from_kw = "from";
        const std::string as_kw = "as";
        const std::string null_kw = "null";
        const std::string undefined_kw = "undefined";
        const std::string true_kw = "true";
        const std::string false_kw = "false";
        const std::string NaN_kw = "NaN";
        const std::string Infinity_kw = "Infinity";
        const std::string console_log = "console.log";
        const std::string console_error = "console.error";
        const std::string console_warn = "console.warn";
        const std::string setTimeout_func = "setTimeout";
        const std::string setInterval_func = "setInterval";
        const std::string clearTimeout_func = "clearTimeout";
        const std::string clearInterval_func = "clearInterval";
        const std::string parseInt_func = "parseInt";
        const std::string parseFloat_func = "parseFloat";
        const std::string isNaN_func = "isNaN";
        const std::string isFinite_func = "isFinite";
        const std::string Object_func = "Object";
        const std::string Array_func = "Array";
        const std::string String_func = "String";
        const std::string Number_func = "Number";
        const std::string Boolean_func = "Boolean";
        const std::string Math_func = "Math";
        const std::string Date_func = "Date";
        const std::string RegExp_func = "RegExp";
        const std::string JSON_func = "JSON";
        const std::string Promise_func = "Promise";
        const std::string Map_func = "Map";
        const std::string Set_func = "Set";
        const std::string WeakMap_func = "WeakMap";
        const std::string WeakSet_func = "WeakSet";
        const std::string Symbol_func = "Symbol";
        const std::string BigInt_func = "BigInt";
        const std::string fetch_func = "fetch";
        const std::string alert_func = "alert";
        const std::string prompt_func = "prompt";
        const std::string confirm_func = "confirm";
        const std::string document_func = "document";
        const std::string window_func = "window";
        const std::string addEventListener_func = "addEventListener";
        const std::string removeEventListener_func = "removeEventListener";
        const std::string querySelector_func = "querySelector";
        const std::string querySelectorAll_func = "querySelectorAll";
        const std::string createElement_func = "createElement";
        const std::string appendChild_func = "appendChild";
        const std::string removeChild_func = "removeChild";
        const std::string innerHTML_prop = "innerHTML";
        const std::string innerText_prop = "innerText";
        const std::string value_prop = "value";
        const std::string style_prop = "style";
        const std::string className_prop = "className";
        const std::string id_prop = "id";
        const std::string src_prop = "src";
        const std::string href_prop = "href";
        const std::string type_prop = "type";
        const std::string length_prop = "length";
        const std::string push_func = "push";
        const std::string pop_func = "pop";
        const std::string shift_func = "shift";
        const std::string unshift_func = "unshift";
        const std::string splice_func = "splice";
        const std::string slice_func = "slice";
        const std::string indexOf_func = "indexOf";
        const std::string includes_func = "includes";
        const std::string map_func = "map";
        const std::string filter_func = "filter";
        const std::string reduce_func = "reduce";
        const std::string forEach_func = "forEach";
        const std::string find_func = "find";
        const std::string findIndex_func = "findIndex";
        const std::string keys_func = "keys";
        const std::string values_func = "values";
        const std::string entries_func = "entries";
        const std::string charAt_func = "charAt";
        const std::string charCodeAt_func = "charCodeAt";
        const std::string concat_func = "concat";
        const std::string startsWith_func = "startsWith";
        const std::string endsWith_func = "endsWith";
        const std::string toUpperCase_func = "toUpperCase";
        const std::string toLowerCase_func = "toLowerCase";
        const std::string trim_func = "trim";
        const std::string split_func = "split";
        const std::string join_func = "join";
        const std::string replace_func = "replace";
        const std::string match_func = "match";
        const std::string test_func = "test";
        const std::string exec_func = "exec";
        const std::string toFixed_func = "toFixed";
        const std::string toPrecision_func = "toPrecision";
        const std::string toString_func = "toString";
        const std::string toLocaleString_func = "toLocaleString";
        const std::string parse_func = "parse";
        const std::string stringify_func = "stringify";
        const std::string then_func = "then";
        const std::string catch_func = "catch";
        const std::string finally_func = "finally";
        const std::string resolve_func = "resolve";
        const std::string reject_func = "reject";
        const std::string all_func = "all";
        const std::string race_func = "race";
        const std::string any_func = "any";
        const std::string allSettled_func = "allSettled";
    };
    struct TypeScript
    {

        const std::string let = "let";
        const std::string const_kw = "const";
        const std::string var = "var";
        const std::string function = "function";
        const std::string return_kw = "return";
        const std::string if_kw = "if";
        const std::string else_kw = "else";
        const std::string for_kw = "for";
        const std::string while_kw = "while";
        const std::string do_kw = "do";
        const std::string switch_kw = "switch";
        const std::string case_kw = "case";
        const std::string break_kw = "break";
        const std::string continue_kw = "continue";
        const std::string default_kw = "default";
        const std::string try_kw = "try";
        const std::string catch_kw = "catch";
        const std::string finally_kw = "finally";
        const std::string throw_kw = "throw";
        const std::string class_kw = "class";
        const std::string extends_kw = "extends";
        const std::string conclassor_kw = "conclassor";
        const std::string super_kw = "super";
        const std::string this_kw = "this";
        const std::string new_kw = "new";
        const std::string delete_kw = "delete";
        const std::string typeof_kw = "typeof";
        const std::string instanceof_kw = "instanceof";
        const std::string in_kw = "in";
        const std::string of_kw = "of";
        const std::string async_kw = "async";
        const std::string await_kw = "await";
        const std::string import_kw = "import";
        const std::string export_kw = "export";
        const std::string from_kw = "from";
        const std::string as_kw = "as";
        const std::string interface_kw = "interface";
        const std::string type_kw = "type";
        const std::string enum_kw = "enum";
        const std::string implements_kw = "implements";
        const std::string readonly_kw = "readonly";
        const std::string public_kw = "public";
        const std::string private_kw = "private";
        const std::string protected_kw = "protected";
        const std::string static_kw = "static";
        const std::string abstract_kw = "abstract";
        const std::string declare_kw = "declare";
        const std::string namespace_kw = "namespace";
        const std::string module_kw = "module";
        const std::string require_kw = "require";
        const std::string keyof_kw = "keyof";
        const std::string infer_kw = "infer";
        const std::string is_kw = "is";
        const std::string never_kw = "never";
        const std::string unknown_kw = "unknown";
        const std::string any_kw = "any";
        const std::string void_kw = "void";
        const std::string null_kw = "null";
        const std::string undefined_kw = "undefined";
        const std::string true_kw = "true";
        const std::string false_kw = "false";
        const std::string NaN_kw = "NaN";
        const std::string Infinity_kw = "Infinity";
        const std::string console_log = "console.log";
        const std::string console_error = "console.error";
        const std::string console_warn = "console.warn";
        const std::string setTimeout_func = "setTimeout";
        const std::string setInterval_func = "setInterval";
        const std::string clearTimeout_func = "clearTimeout";
        const std::string clearInterval_func = "clearInterval";
        const std::string parseInt_func = "parseInt";
        const std::string parseFloat_func = "parseFloat";
        const std::string isNaN_func = "isNaN";
        const std::string isFinite_func = "isFinite";
        const std::string Object_func = "Object";
        const std::string Array_func = "Array";
        const std::string String_func = "String";
        const std::string Number_func = "Number";
        const std::string Boolean_func = "Boolean";
        const std::string Math_func = "Math";
        const std::string Date_func = "Date";
        const std::string RegExp_func = "RegExp";
        const std::string JSON_func = "JSON";
        const std::string Promise_func = "Promise";
        const std::string Map_func = "Map";
        const std::string Set_func = "Set";
        const std::string WeakMap_func = "WeakMap";
        const std::string WeakSet_func = "WeakSet";
        const std::string Symbol_func = "Symbol";
        const std::string BigInt_func = "BigInt";
        const std::string fetch_func = "fetch";
        const std::string alert_func = "alert";
        const std::string prompt_func = "prompt";
        const std::string confirm_func = "confirm";
        const std::string document_func = "document";
        const std::string window_func = "window";
        const std::string addEventListener_func = "addEventListener";
        const std::string removeEventListener_func = "removeEventListener";
        const std::string querySelector_func = "querySelector";
        const std::string querySelectorAll_func = "querySelectorAll";
        const std::string createElement_func = "createElement";
        const std::string appendChild_func = "appendChild";
        const std::string removeChild_func = "removeChild";
        const std::string innerHTML_prop = "innerHTML";
        const std::string innerText_prop = "innerText";
        const std::string value_prop = "value";
        const std::string style_prop = "style";
        const std::string className_prop = "className";
        const std::string id_prop = "id";
        const std::string src_prop = "src";
        const std::string href_prop = "href";
        const std::string type_prop = "type";
        const std::string length_prop = "length";
        const std::string push_func = "push";
        const std::string pop_func = "pop";
        const std::string shift_func = "shift";
        const std::string unshift_func = "unshift";
        const std::string splice_func = "splice";
        const std::string slice_func = "slice";
        const std::string indexOf_func = "indexOf";
        const std::string includes_func = "includes";
        const std::string map_func = "map";
        const std::string filter_func = "filter";
        const std::string reduce_func = "reduce";
        const std::string forEach_func = "forEach";
        const std::string find_func = "find";
        const std::string findIndex_func = "findIndex";
        const std::string keys_func = "keys";
        const std::string values_func = "values";
        const std::string entries_func = "entries";
        const std::string charAt_func = "charAt";
        const std::string charCodeAt_func = "charCodeAt";
        const std::string concat_func = "concat";
        const std::string startsWith_func = "startsWith";
        const std::string endsWith_func = "endsWith";
        const std::string toUpperCase_func = "toUpperCase";
        const std::string toLowerCase_func = "toLowerCase";
        const std::string trim_func = "trim";
        const std::string split_func = "split";
        const std::string join_func = "join";
        const std::string replace_func = "replace";
        const std::string match_func = "match";
        const std::string test_func = "test";
        const std::string exec_func = "exec";
        const std::string toFixed_func = "toFixed";
        const std::string toPrecision_func = "toPrecision";
        const std::string toString_func = "toString";
        const std::string toLocaleString_func = "toLocaleString";
        const std::string parse_func = "parse";
        const std::string stringify_func = "stringify";
        const std::string then_func = "then";
        const std::string catch_func = "catch";
        const std::string finally_func = "finally";
        const std::string resolve_func = "resolve";
        const std::string reject_func = "reject";
        const std::string all_func = "all";
        const std::string race_func = "race";
        const std::string any_func = "any";
        const std::string allSettled_func = "allSettled";
    };
    struct Java
    {

        const std::string kw_abstract = "abstract";
        const std::string kw_assert = "assert";
        const std::string kw_boolean = "boolean";
        const std::string kw_break = "break";
        const std::string kw_byte = "byte";
        const std::string kw_case = "case";
        const std::string kw_catch = "catch";
        const std::string kw_char = "char";
        const std::string kw_class = "class";
        const std::string kw_const = "const";
        const std::string kw_continue = "continue";
        const std::string kw_default = "default";
        const std::string kw_do = "do";
        const std::string kw_double = "double";
        const std::string kw_else = "else";
        const std::string kw_enum = "enum";
        const std::string kw_extends = "extends";
        const std::string kw_final = "final";
        const std::string kw_finally = "finally";
        const std::string kw_float = "float";
        const std::string kw_for = "for";
        const std::string kw_goto = "goto";
        const std::string kw_if = "if";
        const std::string kw_implements = "implements";
        const std::string kw_import = "import";
        const std::string kw_instanceof = "instanceof";
        const std::string kw_int = "int";
        const std::string kw_interface = "interface";
        const std::string kw_long = "long";
        const std::string kw_native = "native";
        const std::string kw_new = "new";
        const std::string kw_null = "null";
        const std::string kw_package = "package";
        const std::string kw_private = "private";
        const std::string kw_protected = "protected";
        const std::string kw_public = "public";
        const std::string kw_return = "return";
        const std::string kw_short = "short";
        const std::string kw_static = "static";
        const std::string kw_strictfp = "strictfp";
        const std::string kw_super = "super";
        const std::string kw_switch = "switch";
        const std::string kw_synchronized = "synchronized";
        const std::string kw_this = "this";
        const std::string kw_throw = "throw";
        const std::string kw_throws = "throws";
        const std::string kw_transient = "transient";
        const std::string kw_try = "try";
        const std::string kw_void = "void";
        const std::string kw_volatile = "volatile";
        const std::string kw_while = "while";
        const std::string kw_true = "true";
        const std::string kw_false = "false";
        const std::string kw_assert = "assert";
        const std::string kw_var = "var";
        const std::string kw_yield = "yield";
        const std::string kw_record = "record";
        const std::string kw_sealed = "sealed";
        const std::string kw_permits = "permits";
        const std::string kw_non_sealed = "non-sealed";
    };
    struct CSharp
    {

        const std::string kw_abstract = "abstract";
        const std::string kw_as = "as";
        const std::string kw_base = "base";
        const std::string kw_bool = "bool";
        const std::string kw_break = "break";
        const std::string kw_byte = "byte";
        const std::string kw_case = "case";
        const std::string kw_catch = "catch";
        const std::string kw_char = "char";
        const std::string kw_checked = "checked";
        const std::string kw_class = "class";
        const std::string kw_const = "const";
        const std::string kw_continue = "continue";
        const std::string kw_decimal = "decimal";
        const std::string kw_default = "default";
        const std::string kw_delegate = "delegate";
        const std::string kw_do = "do";
        const std::string kw_double = "double";
        const std::string kw_else = "else";
        const std::string kw_enum = "enum";
        const std::string kw_event = "event";
        const std::string kw_explicit = "explicit";
        const std::string kw_extern = "extern";
        const std::string kw_false = "false";
        const std::string kw_finally = "finally";
        const std::string kw_fixed = "fixed";
        const std::string kw_float = "float";
        const std::string kw_for = "for";
        const std::string kw_foreach = "foreach";
        const std::string kw_goto = "goto";
        const std::string kw_if = "if";
        const std::string kw_implicit = "implicit";
        const std::string kw_in = "in";
        const std::string kw_int = "int";
        const std::string kw_interface = "interface";
        const std::string kw_internal = "internal";
        const std::string kw_is = "is";
        const std::string kw_lock = "lock";
        const std::string kw_long = "long";
        const std::string kw_namespace = "namespace";
        const std::string kw_new = "new";
        const std::string kw_null = "null";
        const std::string kw_object = "object";
        const std::string kw_operator = "operator";
        const std::string kw_out = "out";
        const std::string kw_override = "override";
        const std::string kw_params = "params";
        const std::string kw_private = "private";
        const std::string kw_protected = "protected";
        const std::string kw_public = "public";
        const std::string kw_readonly = "readonly";
        const std::string kw_ref = "ref";
        const std::string kw_return = "return";
        const std::string kw_sbyte = "sbyte";
        const std::string kw_sealed = "sealed";
        const std::string kw_short = "short";
        const std::string kw_sizeof = "sizeof";
        const std::string kw_stackalloc = "stackalloc";
        const std::string kw_static = "static";
        const std::string kw_string = "string";
        const std::string kw_class = "class";
        const std::string kw_switch = "switch";
        const std::string kw_this = "this";
        const std::string kw_throw = "throw";
        const std::string kw_true = "true";
        const std::string kw_try = "try";
        const std::string kw_typeof = "typeof";
        const std::string kw_uint = "uint";
        const std::string kw_ulong = "ulong";
        const std::string kw_unchecked = "unchecked";
        const std::string kw_unsafe = "unsafe";
        const std::string kw_ushort = "ushort";
        const std::string kw_using = "using";
        const std::string kw_virtual = "virtual";
        const std::string kw_void = "void";
        const std::string kw_volatile = "volatile";
        const std::string kw_while = "while";
        const std::string kw_async = "async";
        const std::string kw_await = "await";
        const std::string kw_var = "var";
        const std::string kw_dynamic = "dynamic";
        const std::string kw_yield = "yield";
        const std::string kw_add = "add";
        const std::string kw_remove = "remove";
        const std::string kw_value = "value";
        const std::string kw_global = "global";
        const std::string kw_set = "set";
        const std::string kw_get = "get";
        const std::string kw_init = "init";
        const std::string kw_record = "record";
        const std::string kw_with = "with";
        const std::string kw_not = "not";
        const std::string kw_and = "and";
        const std::string kw_or = "or";
        const std::string kw_from = "from";
        const std::string kw_select = "select";
        const std::string kw_where = "where";
        const std::string kw_group = "group";
        const std::string kw_into = "into";
        const std::string kw_orderby = "orderby";
        const std::string kw_join = "join";
        const std::string kw_let = "let";
        const std::string kw_on = "on";
        const std::string kw_equals = "equals";
        const std::string kw_by = "by";
        const std::string kw_ascending = "ascending";
        const std::string kw_descending = "descending";
    };
    struct Go
    {

        const std::string kw_package = "package";
        const std::string kw_import = "import";
        const std::string kw_func = "func";
        const std::string kw_var = "var";
        const std::string kw_const = "const";
        const std::string kw_type = "type";
        const std::string kw_class = "class";
        const std::string kw_interface = "interface";
        const std::string kw_map = "map";
        const std::string kw_chan = "chan";
        const std::string kw_go = "go";
        const std::string kw_defer = "defer";
        const std::string kw_return = "return";
        const std::string kw_if = "if";
        const std::string kw_else = "else";
        const std::string kw_for = "for";
        const std::string kw_range = "range";
        const std::string kw_switch = "switch";
        const std::string kw_case = "case";
        const std::string kw_default = "default";
        const std::string kw_select = "select";
        const std::string kw_break = "break";
        const std::string kw_continue = "continue";
        const std::string kw_fallthrough = "fallthrough";
        const std::string kw_nil = "nil";
        const std::string kw_true = "true";
        const std::string kw_false = "false";
    };
    struct Rust
    {

        const std::string kw_fn = "fn";
        const std::string kw_let = "let";
        const std::string kw_mut = "mut";
        const std::string kw_const = "const";
        const std::string kw_static = "static";
        const std::string kw_class = "class";
        const std::string kw_enum = "enum";
        const std::string kw_impl = "impl";
        const std::string kw_trait = "trait";
        const std::string kw_mod = "mod";
        const std::string kw_use = "use";
        const std::string kw_pub = "pub";
        const std::string kw_crate = "crate";
        const std::string kw_super = "super";
        const std::string kw_self = "self";
        const std::string kw_as = "as";
        const std::string kw_match = "match";
        const std::string kw_if = "if";
        const std::string kw_else = "else";
        const std::string kw_loop = "loop";
        const std::string kw_for = "for";
        const std::string kw_while = "while";
        const std::string kw_break = "break";
        const std::string kw_continue = "continue";
        const std::string kw_return = "return";
        const std::string kw_move = "move";
        const std::string kw_ref = "ref";
        const std::string kw_box = "box";
        const std::string kw_true = "true";
        const std::string kw_false = "false";
    };
    struct PHP
    {

        const std::string kw_php_open = "<?php";
        const std::string kw_php_close = "?>";
        const std::string kw_echo = "echo";
        const std::string kw_print = "print";
        const std::string kw_if = "if";
        const std::string kw_else = "else";
        const std::string kw_elseif = "elseif";
        const std::string kw_switch = "switch";
        const std::string kw_case = "case";
        const std::string kw_default = "default";
        const std::string kw_for = "for";
        const std::string kw_foreach = "foreach";
        const std::string kw_while = "while";
        const std::string kw_do = "do";
        const std::string kw_function = "function";
        const std::string kw_class = "class";
        const std::string kw_interface = "interface";
        const std::string kw_trait = "trait";
        const std::string kw_namespace = "namespace";
        const std::string kw_use = "use";
        const std::string kw_var = "var";
        const std::string kw_public = "public";
        const std::string kw_protected = "protected";
        const std::string kw_private = "private";
        const std::string kw_static = "static";
        const std::string kw_const = "const";
        const std::string kw_return = "return";
        const std::string kw_true = "true";
        const std::string kw_false = "false";
        const std::string kw_null = "null";
    };
    struct Python
    {

        const std::string def = "def";
        const std::string return_kw = "return";
        const std::string if_kw = "if";
        const std::string elif_kw = "elif";
        const std::string else_kw = "else";
        const std::string for_kw = "for";
        const std::string while_kw = "while";
        const std::string break_kw = "break";
        const std::string continue_kw = "continue";
        const std::string pass_kw = "pass";
        const std::string import_kw = "import";
        const std::string from_kw = "from";
        const std::string as_kw = "as";
        const std::string class_kw = "class";
        const std::string try_kw = "try";
        const std::string except_kw = "except";
        const std::string finally_kw = "finally";
        const std::string raise_kw = "raise";
        const std::string with_kw = "with";
        const std::string lambda_kw = "lambda";
        const std::string global_kw = "global";
        const std::string nonlocal_kw = "nonlocal";
        const std::string assert_kw = "assert";
        const std::string del_kw = "del";
        const std::string yield_kw = "yield";
        const std::string async_kw = "async";
        const std::string await_kw = "await";
        const std::string True_kw = "True";
        const std::string False_kw = "False";
        const std::string None_kw = "None";
        const std::string and_kw = "and";
        const std::string or_kw = "or";
        const std::string not_kw = "not";
        const std::string is_kw = "is";
        const std::string in_kw = "in";
        const std::string print_func = "print";
        const std::string input_func = "input";
        const std::string len_func = "len";
        const std::string range_func = "range";
        const std::string open_func = "open";
        const std::string int_func = "int";
        const std::string float_func = "float";
        const std::string str_func = "str";
        const std::string list_func = "list";
        const std::string dict_func = "dict";
        const std::string set_func = "set";
        const std::string tuple_func = "tuple";
        const std::string bool_func = "bool";
        const std::string type_func = "type";
        const std::string id_func = "id";
        const std::string dir_func = "dir";
        const std::string help_func = "help";
        const std::string abs_func = "abs";
        const std::string pow_func = "pow";
        const std::string round_func = "round";
        const std::string sorted_func = "sorted";
        const std::string zip_func = "zip";
        const std::string map_func = "map";
        const std::string filter_func = "filter";
        const std::string any_func = "any";
        const std::string all_func = "all";
        const std::string sum_func = "sum";
        const std::string min_func = "min";
        const std::string max_func = "max";
        const std::string enumerate_func = "enumerate";
        const std::string eval_func = "eval";
        const std::string exec_func = "exec";
        const std::string isinstance_func = "isinstance";
        const std::string issubclass_func = "issubclass";
        const std::string hasattr_func = "hasattr";
        const std::string getattr_func = "getattr";
        const std::string setattr_func = "setattr";
        const std::string delattr_func = "delattr";
        const std::string format_func = "format";
        const std::string repr_func = "repr";
        const std::string hash_func = "hash";
        const std::string bin_func = "bin";
        const std::string oct_func = "oct";
        const std::string hex_func = "hex";
        const std::string chr_func = "chr";
        const std::string ord_func = "ord";
        const std::string ascii_func = "ascii";
        const std::string bytes_func = "bytes";
        const std::string bytearray_func = "bytearray";
        const std::string memoryview_func = "memoryview";
        const std::string complex_func = "complex";
        const std::string divmod_func = "divmod";
        const std::string frozenset_func = "frozenset";
        const std::string iter_func = "iter";
        const std::string next_func = "next";
        const std::string reversed_func = "reversed";
        const std::string slice_func = "slice";
        const std::string vars_func = "vars";
        const std::string globals_func = "globals";
        const std::string locals_func = "locals";
        const std::string compile_func = "compile";
        const std::string callable_func = "callable";
        const std::string del_func = "del";
    };
    struct Kotlin
    {

        const std::string kw_fun = "fun";
        const std::string kw_val = "val";
        const std::string kw_var = "var";
        const std::string kw_class = "class";
        const std::string kw_object = "object";
        const std::string kw_interface = "interface";
        const std::string kw_enum = "enum";
        const std::string kw_data = "data";
        const std::string kw_sealed = "sealed";
        const std::string kw_if = "if";
        const std::string kw_else = "else";
        const std::string kw_when = "when";
        const std::string kw_for = "for";
        const std::string kw_while = "while";
        const std::string kw_do = "do";
        const std::string kw_return = "return";
        const std::string kw_break = "break";
        const std::string kw_continue = "continue";
        const std::string kw_true = "true";
        const std::string kw_false = "false";
        const std::string kw_null = "null";
    };
    struct Ruby
    {

        const std::string kw_def = "def";
        const std::string kw_end = "end";
        const std::string kw_class = "class";
        const std::string kw_module = "module";
        const std::string kw_if = "if";
        const std::string kw_elsif = "elsif";
        const std::string kw_else = "else";
        const std::string kw_unless = "unless";
        const std::string kw_case = "case";
        const std::string kw_when = "when";
        const std::string kw_while = "while";
        const std::string kw_until = "until";
        const std::string kw_for = "for";
        const std::string kw_do = "do";
        const std::string kw_begin = "begin";
        const std::string kw_rescue = "rescue";
        const std::string kw_ensure = "ensure";
        const std::string kw_return = "return";
        const std::string kw_yield = "yield";
        const std::string kw_true = "true";
        const std::string kw_false = "false";
        const std::string kw_nil = "nil";
    };
    struct Swift
    {

        const std::string kw_func = "func";
        const std::string kw_let = "let";
        const std::string kw_var = "var";
        const std::string kw_class = "class";
        const std::string kw_class = "class";
        const std::string kw_enum = "enum";
        const std::string kw_protocol = "protocol";
        const std::string kw_extension = "extension";
        const std::string kw_import = "import";
        const std::string kw_if = "if";
        const std::string kw_else = "else";
        const std::string kw_switch = "switch";
        const std::string kw_case = "case";
        const std::string kw_default = "default";
        const std::string kw_for = "for";
        const std::string kw_while = "while";
        const std::string kw_do = "do";
        const std::string kw_return = "return";
        const std::string kw_break = "break";
        const std::string kw_continue = "continue";
        const std::string kw_true = "true";
        const std::string kw_false = "false";
        const std::string kw_nil = "nil";
    };
};

struct Transpiler : public Syntax
{
};

struct Interpreter : public Transpiler
{
};