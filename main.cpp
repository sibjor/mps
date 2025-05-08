/*
    Copyright (c) 2025 Sixten Björling

    (https://sibjor.se)

    The MUPUS C++ document might be large, please SEARCH to locate your interests!
*/

#include <iostream>
#include <vector>
#include <filesystem>

class MUPUS
{
    struct ForeginSyntax
    {
        
        struct Markup
        {
            struct HTML
            {
                std::string doctype = "<!DOCTYPE html>";
                std::string html = "<html>";
                std::string head = "<head>";
                std::string title_open = "<title>";
                std::string title_close = "</title>";
                std::string meta = "<meta>";
                std::string link = "<link>";
                std::string style_open = "<style>";
                std::string style_close = "</style>";
                std::string script_open = "<script>";
                std::string script_close = "</script>";
                std::string noscript_open = "<noscript>";
                std::string noscript_close = "</noscript>";
                std::string head_close = "</head>";
                std::string body_open = "<body>";
                std::string header_open = "<header>";
                std::string header_close = "</header>";
                std::string nav_open = "<nav>";
                std::string nav_close = "</nav>";
                std::string main_open = "<main>";
                std::string main_close = "</main>";
                std::string section_open = "<section>";
                std::string section_close = "</section>";
                std::string article_open = "<article>";
                std::string article_close = "</article>";
                std::string aside_open = "<aside>";
                std::string aside_close = "</aside>";
                std::string footer_open = "<footer>";
                std::string footer_close = "</footer>";
                std::string h1_open = "<h1>";
                std::string h1_close = "</h1>";
                std::string h2_open = "<h2>";
                std::string h2_close = "</h2>";
                std::string h3_open = "<h3>";
                std::string h3_close = "</h3>";
                std::string h4_open = "<h4>";
                std::string h4_close = "</h4>";
                std::string h5_open = "<h5>";
                std::string h5_close = "</h5>";
                std::string h6_open = "<h6>";
                std::string h6_close = "</h6>";
                std::string p_open = "<p>";
                std::string p_close = "</p>";
                std::string br = "<br>";
                std::string hr = "<hr>";
                std::string pre_open = "<pre>";
                std::string pre_close = "</pre>";
                std::string blockquote_open = "<blockquote>";
                std::string blockquote_close = "</blockquote>";
                std::string ol_open = "<ol>";
                std::string ol_close = "</ol>";
                std::string ul_open = "<ul>";
                std::string ul_close = "</ul>";
                std::string li_open = "<li>";
                std::string li_close = "</li>";
                std::string dl_open = "<dl>";
                std::string dl_close = "</dl>";
                std::string dt_open = "<dt>";
                std::string dt_close = "</dt>";
                std::string dd_open = "<dd>";
                std::string dd_close = "</dd>";
                std::string a_open = "<a>";
                std::string a_close = "</a>";
                std::string img = "<img>";
                std::string iframe_open = "<iframe>";
                std::string iframe_close = "</iframe>";
                std::string embed_open = "<embed>";
                std::string embed_close = "</embed>";
                std::string object_open = "<object>";
                std::string object_close = "</object>";
                std::string param = "<param>";
                std::string video_open = "<video>";
                std::string video_close = "</video>";
                std::string audio_open = "<audio>";
                std::string audio_close = "</audio>";
                std::string source = "<source>";
                std::string track = "<track>";
                std::string canvas_open = "<canvas>";
                std::string canvas_close = "</canvas>";
                std::string svg_open = "<svg>";
                std::string svg_close = "</svg>";
                std::string math_open = "<math>";
                std::string math_close = "</math>";
                std::string table_open = "<table>";
                std::string table_close = "</table>";
                std::string caption = "<caption>";
                std::string thead_open = "<thead>";
                std::string thead_close = "</thead>";
                std::string tbody_open = "<tbody>";
                std::string tbody_close = "</tbody>";
                std::string tfoot_open = "<tfoot>";
                std::string tfoot_close = "</tfoot>";
                std::string tr_open = "<tr>";
                std::string tr_close = "</tr>";
                std::string th_open = "<th>";
                std::string th_close = "</th>";
                std::string td_open = "<td>";
                std::string td_close = "</td>";
                std::string form_open = "<form>";
                std::string form_close = "</form>";
                std::string input = "<input>";
                std::string textarea_open = "<textarea>";
                std::string textarea_close = "</textarea>";
                std::string button_open = "<button>";
                std::string button_close = "</button>";
                std::string select_open = "<select>";
                std::string select_close = "</select>";
                std::string option_open = "<option>";
                std::string option_close = "</option>";
                std::string optgroup_open = "<optgroup>";
                std::string optgroup_close = "</optgroup>";
                std::string label = "<label>";
                std::string fieldset_open = "<fieldset>";
                std::string fieldset_close = "</fieldset>";
                std::string legend = "<legend>";
                std::string datalist = "<datalist>";
                std::string output = "<output>";
                std::string progress = "<progress>";
                std::string meter = "<meter>";
                std::string details_open = "<details>";
                std::string details_close = "</details>";
                std::string summary = "<summary>";
                std::string dialog = "<dialog>";
                std::string template_open = "<template>";
                std::string template_close = "</template>";
                std::string slot = "<slot>";
            };
            struct Markdown
            {  
                std::string h1 = "# ";
                std::string h2 = "## ";
                std::string h3 = "### ";
                std::string h4 = "#### ";
                std::string h5 = "##### ";
                std::string h6 = "###### ";
                std::string italic = "*";
                std::string bold = "**";
                std::string bold_italic = "***";
                std::string strikethrough = "~~";
                std::string inline_code = "`";
                std::string code_block = "```";
                std::string blockquote = "> ";
                std::string unordered_list = "- ";
                std::string ordered_list = "1. ";
                std::string link_open = "[";
                std::string link_middle = "](";
                std::string link_close = ")";
                std::string image_open = "![";
                std::string image_middle = "](";
                std::string image_close = ")";
                std::string horizontal_rule = "---";
                std::string table_column_separator = "|";
                std::string line_break = "\n";
            };
        };
        struct Stylesheet
        {
            struct CSS
            {
            };
            
        };
        struct CPP
        {
            struct C
            {

            };
        };
        struct Python
        {
        };
        struct Java
        {
        };
        struct TypeScript
        {
            struct JavaScript
            {
            };
        };
        struct CSharp
        {
        };
        struct Go
        {
        };
        struct Rust
        {
        };
        struct PHP
        {
        };
        struct Ruby
        {
        };
        struct Swift
        {
        };
        struct Kotlin
        {
        };
    };
};