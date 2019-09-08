/* Copyright (C) 2019 Greenbone Networks GmbH
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

/**
 * @file  manage_migrators_219_to_220_names.c
 * @brief The Greenbone Vulnerability Manager DB Migrators support.
 *
 * This file the preference names used by migrate_219_to_220.
 */

static const gchar *migrate_219_to_220_names[][2]
 = {{ "1.3.6.1.4.1.25623.1.0.10107:checkbox:Show full HTTP headers in output"
      "1.3.6.1.4.1.25623.1.0.10107:1:checkbox:Show full HTTP headers in output" },
    { "1.3.6.1.4.1.25623.1.0.10330:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.10330:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.10330:radio:Test SSL based services"
      "1.3.6.1.4.1.25623.1.0.10330:1:radio:Test SSL based services" },
    { "1.3.6.1.4.1.25623.1.0.10330:entry:Number of connections done in parallel :"
      "1.3.6.1.4.1.25623.1.0.10330:1:entry:Number of connections done in parallel :" },
    { "1.3.6.1.4.1.25623.1.0.10330:entry:Network connection timeout :"
      "1.3.6.1.4.1.25623.1.0.10330:2:entry:Network connection timeout :" },
    { "1.3.6.1.4.1.25623.1.0.10330:entry:Number of connections done in parallel :"
      "1.3.6.1.4.1.25623.1.0.10330:2:entry:Number of connections done in parallel :" },
    { "1.3.6.1.4.1.25623.1.0.10330:entry:Network connection timeout :"
      "1.3.6.1.4.1.25623.1.0.10330:3:entry:Network connection timeout :" },
    { "1.3.6.1.4.1.25623.1.0.10330:entry:Network read/write timeout :"
      "1.3.6.1.4.1.25623.1.0.10330:3:entry:Network read/write timeout :" },
    { "1.3.6.1.4.1.25623.1.0.10330:entry:Wrapped service read timeout :"
      "1.3.6.1.4.1.25623.1.0.10330:4:entry:Wrapped service read timeout :" },
    { "1.3.6.1.4.1.25623.1.0.10330:entry:Network read/write timeout :"
      "1.3.6.1.4.1.25623.1.0.10330:4:entry:Network read/write timeout :" },
    { "1.3.6.1.4.1.25623.1.0.10330:file:SSL certificate :"
      "1.3.6.1.4.1.25623.1.0.10330:5:file:SSL certificate :" },
    { "1.3.6.1.4.1.25623.1.0.10330:entry:Wrapped service read timeout :"
      "1.3.6.1.4.1.25623.1.0.10330:5:entry:Wrapped service read timeout :" },
    { "1.3.6.1.4.1.25623.1.0.10330:file:SSL private key :"
      "1.3.6.1.4.1.25623.1.0.10330:6:file:SSL private key :" },
    { "1.3.6.1.4.1.25623.1.0.10330:file:SSL certificate :"
      "1.3.6.1.4.1.25623.1.0.10330:6:file:SSL certificate :" },
    { "1.3.6.1.4.1.25623.1.0.10330:file:SSL private key :"
      "1.3.6.1.4.1.25623.1.0.10330:7:file:SSL private key :" },
    { "1.3.6.1.4.1.25623.1.0.10330:password:PEM password :"
      "1.3.6.1.4.1.25623.1.0.10330:7:password:PEM password :" },
    { "1.3.6.1.4.1.25623.1.0.10330:file:CA file :"
      "1.3.6.1.4.1.25623.1.0.10330:8:file:CA file :" },
    { "1.3.6.1.4.1.25623.1.0.10330:password:PEM password :"
      "1.3.6.1.4.1.25623.1.0.10330:8:password:PEM password :" },
    { "1.3.6.1.4.1.25623.1.0.10330:file:CA file :"
      "1.3.6.1.4.1.25623.1.0.10330:9:file:CA file :" },
    { "1.3.6.1.4.1.25623.1.0.10330:radio:Test SSL based services"
      "1.3.6.1.4.1.25623.1.0.10330:9:radio:Test SSL based services" },
    { "1.3.6.1.4.1.25623.1.0.10335:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.10335:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.10662:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.10662:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.10662:entry:Number of pages to mirror :"
      "1.3.6.1.4.1.25623.1.0.10662:1:entry:Number of pages to mirror :" },
    { "1.3.6.1.4.1.25623.1.0.10662:entry:Start page :"
      "1.3.6.1.4.1.25623.1.0.10662:2:entry:Start page :" },
    { "1.3.6.1.4.1.25623.1.0.10662:entry:Number of cgi directories to save into KB :"
      "1.3.6.1.4.1.25623.1.0.10662:3:entry:Number of cgi directories to save into KB :" },
    { "1.3.6.1.4.1.25623.1.0.10662:entry:Regex pattern to exclude cgi scripts :"
      "1.3.6.1.4.1.25623.1.0.10662:4:entry:Regex pattern to exclude cgi scripts :" },
    { "1.3.6.1.4.1.25623.1.0.10662:checkbox:Use regex pattern to exclude cgi scripts :"
      "1.3.6.1.4.1.25623.1.0.10662:5:checkbox:Use regex pattern to exclude cgi scripts :" },
    { "1.3.6.1.4.1.25623.1.0.10736:checkbox:Report local DCE services"
      "1.3.6.1.4.1.25623.1.0.10736:1:checkbox:Report local DCE services" },
    { "1.3.6.1.4.1.25623.1.0.10747:checkbox:Use complete password list (not only vendor specific passwords)"
      "1.3.6.1.4.1.25623.1.0.10747:1:checkbox:Use complete password list (not only vendor specific passwords)" },
    { "1.3.6.1.4.1.25623.1.0.10870:checkbox:NTLMSSP"
      "1.3.6.1.4.1.25623.1.0.10870:1:checkbox:NTLMSSP" },
    { "1.3.6.1.4.1.25623.1.0.10870:entry:HTTP account :"
      "1.3.6.1.4.1.25623.1.0.10870:1:entry:HTTP account :" },
    { "1.3.6.1.4.1.25623.1.0.10870:entry:HTTP account :"
      "1.3.6.1.4.1.25623.1.0.10870:2:entry:HTTP account :" },
    { "1.3.6.1.4.1.25623.1.0.10870:password:HTTP password (sent in clear) :"
      "1.3.6.1.4.1.25623.1.0.10870:2:password:HTTP password (sent in clear) :" },
    { "1.3.6.1.4.1.25623.1.0.10870:password:HTTP password (sent in clear) :"
      "1.3.6.1.4.1.25623.1.0.10870:3:password:HTTP password (sent in clear) :" },
    { "1.3.6.1.4.1.25623.1.0.10870:entry:NNTP account :"
      "1.3.6.1.4.1.25623.1.0.10870:3:entry:NNTP account :" },
    { "1.3.6.1.4.1.25623.1.0.10870:entry:NNTP account :"
      "1.3.6.1.4.1.25623.1.0.10870:4:entry:NNTP account :" },
    { "1.3.6.1.4.1.25623.1.0.10870:password:NNTP password (sent in clear) :"
      "1.3.6.1.4.1.25623.1.0.10870:4:password:NNTP password (sent in clear) :" },
    { "1.3.6.1.4.1.25623.1.0.10870:entry:FTP account :"
      "1.3.6.1.4.1.25623.1.0.10870:5:entry:FTP account :" },
    { "1.3.6.1.4.1.25623.1.0.10870:password:NNTP password (sent in clear) :"
      "1.3.6.1.4.1.25623.1.0.10870:5:password:NNTP password (sent in clear) :" },
    { "1.3.6.1.4.1.25623.1.0.10870:entry:FTP account :"
      "1.3.6.1.4.1.25623.1.0.10870:6:entry:FTP account :" },
    { "1.3.6.1.4.1.25623.1.0.10870:password:FTP password (sent in clear) :"
      "1.3.6.1.4.1.25623.1.0.10870:6:password:FTP password (sent in clear) :" },
    { "1.3.6.1.4.1.25623.1.0.10870:entry:FTP writeable directory :"
      "1.3.6.1.4.1.25623.1.0.10870:7:entry:FTP writeable directory :" },
    { "1.3.6.1.4.1.25623.1.0.10870:password:FTP password (sent in clear) :"
      "1.3.6.1.4.1.25623.1.0.10870:7:password:FTP password (sent in clear) :" },
    { "1.3.6.1.4.1.25623.1.0.10870:entry:POP2 account :"
      "1.3.6.1.4.1.25623.1.0.10870:8:entry:POP2 account :" },
    { "1.3.6.1.4.1.25623.1.0.10870:entry:FTP writeable directory :"
      "1.3.6.1.4.1.25623.1.0.10870:8:entry:FTP writeable directory :" },
    { "1.3.6.1.4.1.25623.1.0.10870:password:POP2 password (sent in clear) :"
      "1.3.6.1.4.1.25623.1.0.10870:9:password:POP2 password (sent in clear) :" },
    { "1.3.6.1.4.1.25623.1.0.10870:entry:POP2 account :"
      "1.3.6.1.4.1.25623.1.0.10870:9:entry:POP2 account :" },
    { "1.3.6.1.4.1.25623.1.0.10870:entry:POP3 account :"
      "1.3.6.1.4.1.25623.1.0.10870:10:entry:POP3 account :" },
    { "1.3.6.1.4.1.25623.1.0.10870:password:POP2 password (sent in clear) :"
      "1.3.6.1.4.1.25623.1.0.10870:10:password:POP2 password (sent in clear) :" },
    { "1.3.6.1.4.1.25623.1.0.10870:password:POP3 password (sent in clear) :"
      "1.3.6.1.4.1.25623.1.0.10870:11:password:POP3 password (sent in clear) :" },
    { "1.3.6.1.4.1.25623.1.0.10870:entry:POP3 account :"
      "1.3.6.1.4.1.25623.1.0.10870:11:entry:POP3 account :" },
    { "1.3.6.1.4.1.25623.1.0.10870:entry:IMAP account :"
      "1.3.6.1.4.1.25623.1.0.10870:12:entry:IMAP account :" },
    { "1.3.6.1.4.1.25623.1.0.10870:password:POP3 password (sent in clear) :"
      "1.3.6.1.4.1.25623.1.0.10870:12:password:POP3 password (sent in clear) :" },
    { "1.3.6.1.4.1.25623.1.0.10870:password:IMAP password (sent in clear) :"
      "1.3.6.1.4.1.25623.1.0.10870:13:password:IMAP password (sent in clear) :" },
    { "1.3.6.1.4.1.25623.1.0.10870:entry:IMAP account :"
      "1.3.6.1.4.1.25623.1.0.10870:13:entry:IMAP account :" },
    { "1.3.6.1.4.1.25623.1.0.10870:password:IMAP password (sent in clear) :"
      "1.3.6.1.4.1.25623.1.0.10870:14:password:IMAP password (sent in clear) :" },
    { "1.3.6.1.4.1.25623.1.0.10870:checkbox:Never send SMB credentials in clear text"
      "1.3.6.1.4.1.25623.1.0.10870:14:checkbox:Never send SMB credentials in clear text" },
    { "1.3.6.1.4.1.25623.1.0.10870:checkbox:Never send SMB credentials in clear text"
      "1.3.6.1.4.1.25623.1.0.10870:15:checkbox:Never send SMB credentials in clear text" },
    { "1.3.6.1.4.1.25623.1.0.10870:checkbox:Only use NTLMv2"
      "1.3.6.1.4.1.25623.1.0.10870:15:checkbox:Only use NTLMv2" },
    { "1.3.6.1.4.1.25623.1.0.10870:checkbox:Only use NTLMv2"
      "1.3.6.1.4.1.25623.1.0.10870:16:checkbox:Only use NTLMv2" },
    { "1.3.6.1.4.1.25623.1.0.10870:checkbox:NTLMSSP"
      "1.3.6.1.4.1.25623.1.0.10870:16:checkbox:NTLMSSP" },
    { "1.3.6.1.4.1.25623.1.0.11032:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.11032:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.11033:entry:From address :"
      "1.3.6.1.4.1.25623.1.0.11033:1:entry:From address :" },
    { "1.3.6.1.4.1.25623.1.0.11033:entry:Test group name regex :"
      "1.3.6.1.4.1.25623.1.0.11033:2:entry:Test group name regex :" },
    { "1.3.6.1.4.1.25623.1.0.11033:entry:Max crosspost :"
      "1.3.6.1.4.1.25623.1.0.11033:3:entry:Max crosspost :" },
    { "1.3.6.1.4.1.25623.1.0.11033:checkbox:Local distribution"
      "1.3.6.1.4.1.25623.1.0.11033:4:checkbox:Local distribution" },
    { "1.3.6.1.4.1.25623.1.0.11033:checkbox:No archive"
      "1.3.6.1.4.1.25623.1.0.11033:5:checkbox:No archive" },
    { "1.3.6.1.4.1.25623.1.0.11139:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.11139:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.11149:entry:Login page :"
      "1.3.6.1.4.1.25623.1.0.11149:1:entry:Login page :" },
    { "1.3.6.1.4.1.25623.1.0.11149:entry:Login form :"
      "1.3.6.1.4.1.25623.1.0.11149:2:entry:Login form :" },
    { "1.3.6.1.4.1.25623.1.0.11149:entry:Login form fields :"
      "1.3.6.1.4.1.25623.1.0.11149:3:entry:Login form fields :" },
    { "1.3.6.1.4.1.25623.1.0.11748:checkbox:Check all detected CGI directories:"
      "1.3.6.1.4.1.25623.1.0.11748:1:checkbox:Check all detected CGI directories:" },
    { "1.3.6.1.4.1.25623.1.0.12241:entry:Exclude PJL printer ports from scan"
      "1.3.6.1.4.1.25623.1.0.12241:1:entry:Exclude PJL printer ports from scan" },
    { "1.3.6.1.4.1.25623.1.0.12288:checkbox:Enable CGI scanning"
      "1.3.6.1.4.1.25623.1.0.12288:1:checkbox:Enable CGI scanning" },
    { "1.3.6.1.4.1.25623.1.0.12288:checkbox:Strictly unauthenticated"
      "1.3.6.1.4.1.25623.1.0.12288:1:checkbox:Strictly unauthenticated" },
    { "1.3.6.1.4.1.25623.1.0.12288:checkbox:Add historic /scripts and /cgi-bin to directories for CGI scanning"
      "1.3.6.1.4.1.25623.1.0.12288:2:checkbox:Add historic /scripts and /cgi-bin to directories for CGI scanning" },
    { "1.3.6.1.4.1.25623.1.0.12288:checkbox:Enable CGI scanning"
      "1.3.6.1.4.1.25623.1.0.12288:2:checkbox:Enable CGI scanning" },
    { "1.3.6.1.4.1.25623.1.0.12288:checkbox:Add historic /scripts and /cgi-bin to directories for CGI scanning"
      "1.3.6.1.4.1.25623.1.0.12288:3:checkbox:Add historic /scripts and /cgi-bin to directories for CGI scanning" },
    { "1.3.6.1.4.1.25623.1.0.12288:entry:Regex pattern to exclude directories from CGI scanning :"
      "1.3.6.1.4.1.25623.1.0.12288:3:entry:Regex pattern to exclude directories from CGI scanning :" },
    { "1.3.6.1.4.1.25623.1.0.12288:checkbox:Use regex pattern to exclude directories from CGI scanning :"
      "1.3.6.1.4.1.25623.1.0.12288:4:checkbox:Use regex pattern to exclude directories from CGI scanning :" },
    { "1.3.6.1.4.1.25623.1.0.12288:entry:Regex pattern to exclude directories from CGI scanning :"
      "1.3.6.1.4.1.25623.1.0.12288:4:entry:Regex pattern to exclude directories from CGI scanning :" },
    { "1.3.6.1.4.1.25623.1.0.12288:checkbox:Exclude directories containing detected known server manuals from CGI scanning"
      "1.3.6.1.4.1.25623.1.0.12288:5:checkbox:Exclude directories containing detected known server manuals from CGI scanning" },
    { "1.3.6.1.4.1.25623.1.0.12288:checkbox:Use regex pattern to exclude directories from CGI scanning :"
      "1.3.6.1.4.1.25623.1.0.12288:5:checkbox:Use regex pattern to exclude directories from CGI scanning :" },
    { "1.3.6.1.4.1.25623.1.0.12288:checkbox:Exclude directories containing detected known server manuals from CGI scanning"
      "1.3.6.1.4.1.25623.1.0.12288:6:checkbox:Exclude directories containing detected known server manuals from CGI scanning" },
    { "1.3.6.1.4.1.25623.1.0.12288:checkbox:Enable generic web application scanning"
      "1.3.6.1.4.1.25623.1.0.12288:6:checkbox:Enable generic web application scanning" },
    { "1.3.6.1.4.1.25623.1.0.12288:radio:Network type"
      "1.3.6.1.4.1.25623.1.0.12288:7:radio:Network type" },
    { "1.3.6.1.4.1.25623.1.0.12288:checkbox:Enable generic web application scanning"
      "1.3.6.1.4.1.25623.1.0.12288:7:checkbox:Enable generic web application scanning" },
    { "1.3.6.1.4.1.25623.1.0.12288:radio:Network type"
      "1.3.6.1.4.1.25623.1.0.12288:8:radio:Network type" },
    { "1.3.6.1.4.1.25623.1.0.12288:radio:Report verbosity"
      "1.3.6.1.4.1.25623.1.0.12288:8:radio:Report verbosity" },
    { "1.3.6.1.4.1.25623.1.0.12288:radio:Log verbosity"
      "1.3.6.1.4.1.25623.1.0.12288:9:radio:Log verbosity" },
    { "1.3.6.1.4.1.25623.1.0.12288:radio:Report verbosity"
      "1.3.6.1.4.1.25623.1.0.12288:9:radio:Report verbosity" },
    { "1.3.6.1.4.1.25623.1.0.12288:entry:Debug level"
      "1.3.6.1.4.1.25623.1.0.12288:10:entry:Debug level" },
    { "1.3.6.1.4.1.25623.1.0.12288:radio:Log verbosity"
      "1.3.6.1.4.1.25623.1.0.12288:10:radio:Log verbosity" },
    { "1.3.6.1.4.1.25623.1.0.12288:entry:HTTP User-Agent"
      "1.3.6.1.4.1.25623.1.0.12288:11:entry:HTTP User-Agent" },
    { "1.3.6.1.4.1.25623.1.0.12288:entry:Debug level"
      "1.3.6.1.4.1.25623.1.0.12288:11:entry:Debug level" },
    { "1.3.6.1.4.1.25623.1.0.12288:entry:HTTP User-Agent"
      "1.3.6.1.4.1.25623.1.0.12288:12:entry:HTTP User-Agent" },
    { "1.3.6.1.4.1.25623.1.0.12288:checkbox:Exclude printers from scan"
      "1.3.6.1.4.1.25623.1.0.12288:13:checkbox:Exclude printers from scan" },
    { "1.3.6.1.4.1.25623.1.0.12288:checkbox:Exclude known fragile devices/ports from scan"
      "1.3.6.1.4.1.25623.1.0.12288:14:checkbox:Exclude known fragile devices/ports from scan" },
    { "1.3.6.1.4.1.25623.1.0.12288:checkbox:Enable SSH Debug"
      "1.3.6.1.4.1.25623.1.0.12288:15:checkbox:Enable SSH Debug" },
    { "1.3.6.1.4.1.25623.1.0.12288:checkbox:Mark host as dead if going offline (failed ICMP ping) during scan"
      "1.3.6.1.4.1.25623.1.0.12288:16:checkbox:Mark host as dead if going offline (failed ICMP ping) during scan" },
    { "1.3.6.1.4.1.25623.1.0.12288:checkbox:Service discovery on non-default UDP ports (slow)"
      "1.3.6.1.4.1.25623.1.0.12288:17:checkbox:Service discovery on non-default UDP ports (slow)" },
    { "1.3.6.1.4.1.25623.1.0.14259:radio:TCP scanning technique :"
      "1.3.6.1.4.1.25623.1.0.14259:1:radio:TCP scanning technique :" },
    { "1.3.6.1.4.1.25623.1.0.14259:checkbox:Service scan"
      "1.3.6.1.4.1.25623.1.0.14259:2:checkbox:Service scan" },
    { "1.3.6.1.4.1.25623.1.0.14259:checkbox:RPC port scan"
      "1.3.6.1.4.1.25623.1.0.14259:3:checkbox:RPC port scan" },
    { "1.3.6.1.4.1.25623.1.0.14259:checkbox:Fragment IP packets (bypasses firewalls)"
      "1.3.6.1.4.1.25623.1.0.14259:4:checkbox:Fragment IP packets (bypasses firewalls)" },
    { "1.3.6.1.4.1.25623.1.0.14259:checkbox:Do not randomize the  order  in  which ports are scanned"
      "1.3.6.1.4.1.25623.1.0.14259:5:checkbox:Do not randomize the  order  in  which ports are scanned" },
    { "1.3.6.1.4.1.25623.1.0.14259:entry:Source port :"
      "1.3.6.1.4.1.25623.1.0.14259:6:entry:Source port :" },
    { "1.3.6.1.4.1.25623.1.0.14259:radio:Timing policy :"
      "1.3.6.1.4.1.25623.1.0.14259:7:radio:Timing policy :" },
    { "1.3.6.1.4.1.25623.1.0.14259:entry:Max Retries :"
      "1.3.6.1.4.1.25623.1.0.14259:8:entry:Max Retries :" },
    { "1.3.6.1.4.1.25623.1.0.14259:entry:Host Timeout (ms) :"
      "1.3.6.1.4.1.25623.1.0.14259:9:entry:Host Timeout (ms) :" },
    { "1.3.6.1.4.1.25623.1.0.14259:entry:Min RTT Timeout (ms) :"
      "1.3.6.1.4.1.25623.1.0.14259:10:entry:Min RTT Timeout (ms) :" },
    { "1.3.6.1.4.1.25623.1.0.14259:entry:Max RTT Timeout (ms) :"
      "1.3.6.1.4.1.25623.1.0.14259:11:entry:Max RTT Timeout (ms) :" },
    { "1.3.6.1.4.1.25623.1.0.14259:entry:Initial RTT timeout (ms) :"
      "1.3.6.1.4.1.25623.1.0.14259:12:entry:Initial RTT timeout (ms) :" },
    { "1.3.6.1.4.1.25623.1.0.14259:entry:Ports scanned in parallel (max)"
      "1.3.6.1.4.1.25623.1.0.14259:13:entry:Ports scanned in parallel (max)" },
    { "1.3.6.1.4.1.25623.1.0.14259:entry:Ports scanned in parallel (min)"
      "1.3.6.1.4.1.25623.1.0.14259:14:entry:Ports scanned in parallel (min)" },
    { "1.3.6.1.4.1.25623.1.0.14259:entry:Minimum wait between probes (ms)"
      "1.3.6.1.4.1.25623.1.0.14259:15:entry:Minimum wait between probes (ms)" },
    { "1.3.6.1.4.1.25623.1.0.14259:entry:Maximum wait between probes (ms)"
      "1.3.6.1.4.1.25623.1.0.14259:16:entry:Maximum wait between probes (ms)" },
    { "1.3.6.1.4.1.25623.1.0.14259:file:File containing grepable results :"
      "1.3.6.1.4.1.25623.1.0.14259:17:file:File containing grepable results :" },
    { "1.3.6.1.4.1.25623.1.0.14259:checkbox:Do not scan targets not in the file"
      "1.3.6.1.4.1.25623.1.0.14259:18:checkbox:Do not scan targets not in the file" },
    { "1.3.6.1.4.1.25623.1.0.14259:entry:Data length :"
      "1.3.6.1.4.1.25623.1.0.14259:19:entry:Data length :" },
    { "1.3.6.1.4.1.25623.1.0.14259:checkbox:Run dangerous port scans even if safe checks are set"
      "1.3.6.1.4.1.25623.1.0.14259:20:checkbox:Run dangerous port scans even if safe checks are set" },
    { "1.3.6.1.4.1.25623.1.0.14259:checkbox:Log nmap output"
      "1.3.6.1.4.1.25623.1.0.14259:21:checkbox:Log nmap output" },
    { "1.3.6.1.4.1.25623.1.0.14259:checkbox:Defeat RST ratelimit"
      "1.3.6.1.4.1.25623.1.0.14259:22:checkbox:Defeat RST ratelimit" },
    { "1.3.6.1.4.1.25623.1.0.14259:checkbox:Defeat ICMP ratelimit"
      "1.3.6.1.4.1.25623.1.0.14259:23:checkbox:Defeat ICMP ratelimit" },
    { "1.3.6.1.4.1.25623.1.0.14260:checkbox:Force scan even without 404s"
      "1.3.6.1.4.1.25623.1.0.14260:1:checkbox:Force scan even without 404s" },
    { "1.3.6.1.4.1.25623.1.0.14274:entry:Community name :"
      "1.3.6.1.4.1.25623.1.0.14274:1:entry:Community name :" },
    { "1.3.6.1.4.1.25623.1.0.14274:radio:SNMP protocol :"
      "1.3.6.1.4.1.25623.1.0.14274:2:radio:SNMP protocol :" },
    { "1.3.6.1.4.1.25623.1.0.14274:radio:SNMP transport layer :"
      "1.3.6.1.4.1.25623.1.0.14274:3:radio:SNMP transport layer :" },
    { "1.3.6.1.4.1.25623.1.0.14274:entry:TCP/UDP port :"
      "1.3.6.1.4.1.25623.1.0.14274:4:entry:TCP/UDP port :" },
    { "1.3.6.1.4.1.25623.1.0.14274:entry:Number of retries :"
      "1.3.6.1.4.1.25623.1.0.14274:5:entry:Number of retries :" },
    { "1.3.6.1.4.1.25623.1.0.14274:entry:Timeout between retries :"
      "1.3.6.1.4.1.25623.1.0.14274:6:entry:Timeout between retries :" },
    { "1.3.6.1.4.1.25623.1.0.14788:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.14788:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.14788:checkbox:Run IP protocols scan"
      "1.3.6.1.4.1.25623.1.0.14788:1:checkbox:Run IP protocols scan" },
    { "1.3.6.1.4.1.25623.1.0.17638:checkbox:Use complete password list (not only vendor specific passwords)"
      "1.3.6.1.4.1.25623.1.0.17638:1:checkbox:Use complete password list (not only vendor specific passwords)" },
    { "1.3.6.1.4.1.25623.1.0.18414:checkbox:Use complete password list (not only vendor specific passwords)"
      "1.3.6.1.4.1.25623.1.0.18414:1:checkbox:Use complete password list (not only vendor specific passwords)" },
    { "1.3.6.1.4.1.25623.1.0.18415:checkbox:Use complete password list (not only vendor specific passwords)"
      "1.3.6.1.4.1.25623.1.0.18415:1:checkbox:Use complete password list (not only vendor specific passwords)" },
    { "1.3.6.1.4.1.25623.1.0.19506:checkbox:Be silent"
      "1.3.6.1.4.1.25623.1.0.19506:1:checkbox:Be silent" },
    { "1.3.6.1.4.1.25623.1.0.23938:checkbox:Use complete password list (not only vendor specific passwords)"
      "1.3.6.1.4.1.25623.1.0.23938:1:checkbox:Use complete password list (not only vendor specific passwords)" },
    { "1.3.6.1.4.1.25623.1.0.66286:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.66286:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.80001:entry:Pnscan Timeout"
      "1.3.6.1.4.1.25623.1.0.80001:1:entry:Pnscan Timeout" },
    { "1.3.6.1.4.1.25623.1.0.80001:entry:Pnscan Concurrent worker threads"
      "1.3.6.1.4.1.25623.1.0.80001:2:entry:Pnscan Concurrent worker threads" },
    { "1.3.6.1.4.1.25623.1.0.80010:checkbox:Enable HTTP evasion techniques"
      "1.3.6.1.4.1.25623.1.0.80010:1:checkbox:Enable HTTP evasion techniques" },
    { "1.3.6.1.4.1.25623.1.0.80010:checkbox:Use HTTP HEAD instead of GET"
      "1.3.6.1.4.1.25623.1.0.80010:2:checkbox:Use HTTP HEAD instead of GET" },
    { "1.3.6.1.4.1.25623.1.0.80010:radio:URL encoding"
      "1.3.6.1.4.1.25623.1.0.80010:3:radio:URL encoding" },
    { "1.3.6.1.4.1.25623.1.0.80010:radio:Absolute URI type"
      "1.3.6.1.4.1.25623.1.0.80010:4:radio:Absolute URI type" },
    { "1.3.6.1.4.1.25623.1.0.80010:radio:Absolute URI host"
      "1.3.6.1.4.1.25623.1.0.80010:5:radio:Absolute URI host" },
    { "1.3.6.1.4.1.25623.1.0.80010:checkbox:Double slashes"
      "1.3.6.1.4.1.25623.1.0.80010:6:checkbox:Double slashes" },
    { "1.3.6.1.4.1.25623.1.0.80010:radio:Reverse traversal"
      "1.3.6.1.4.1.25623.1.0.80010:7:radio:Reverse traversal" },
    { "1.3.6.1.4.1.25623.1.0.80010:checkbox:Self-reference directories"
      "1.3.6.1.4.1.25623.1.0.80010:8:checkbox:Self-reference directories" },
    { "1.3.6.1.4.1.25623.1.0.80010:checkbox:Premature request ending"
      "1.3.6.1.4.1.25623.1.0.80010:9:checkbox:Premature request ending" },
    { "1.3.6.1.4.1.25623.1.0.80010:checkbox:CGI.pm semicolon separator"
      "1.3.6.1.4.1.25623.1.0.80010:10:checkbox:CGI.pm semicolon separator" },
    { "1.3.6.1.4.1.25623.1.0.80010:checkbox:Parameter hiding"
      "1.3.6.1.4.1.25623.1.0.80010:11:checkbox:Parameter hiding" },
    { "1.3.6.1.4.1.25623.1.0.80010:checkbox:Dos/Windows syntax"
      "1.3.6.1.4.1.25623.1.0.80010:12:checkbox:Dos/Windows syntax" },
    { "1.3.6.1.4.1.25623.1.0.80010:checkbox:Null method"
      "1.3.6.1.4.1.25623.1.0.80010:13:checkbox:Null method" },
    { "1.3.6.1.4.1.25623.1.0.80010:checkbox:TAB separator"
      "1.3.6.1.4.1.25623.1.0.80010:14:checkbox:TAB separator" },
    { "1.3.6.1.4.1.25623.1.0.80010:checkbox:HTTP/0.9 requests"
      "1.3.6.1.4.1.25623.1.0.80010:15:checkbox:HTTP/0.9 requests" },
    { "1.3.6.1.4.1.25623.1.0.80010:entry:Force protocol string :"
      "1.3.6.1.4.1.25623.1.0.80010:16:entry:Force protocol string :" },
    { "1.3.6.1.4.1.25623.1.0.80010:checkbox:Random case sensitivity (Nikto only)"
      "1.3.6.1.4.1.25623.1.0.80010:17:checkbox:Random case sensitivity (Nikto only)" },
    { "1.3.6.1.4.1.25623.1.0.80011:radio:TCP evasion technique"
      "1.3.6.1.4.1.25623.1.0.80011:1:radio:TCP evasion technique" },
    { "1.3.6.1.4.1.25623.1.0.80011:checkbox:Send fake RST when establishing a TCP connection"
      "1.3.6.1.4.1.25623.1.0.80011:2:checkbox:Send fake RST when establishing a TCP connection" },
    { "1.3.6.1.4.1.25623.1.0.80086:entry:Third party domain :"
      "1.3.6.1.4.1.25623.1.0.80086:1:entry:Third party domain :" },
    { "1.3.6.1.4.1.25623.1.0.80086:entry:From address :"
      "1.3.6.1.4.1.25623.1.0.80086:2:entry:From address :" },
    { "1.3.6.1.4.1.25623.1.0.80086:entry:To address :"
      "1.3.6.1.4.1.25623.1.0.80086:3:entry:To address :" },
    { "1.3.6.1.4.1.25623.1.0.80091:entry:Delay (seconds):"
      "1.3.6.1.4.1.25623.1.0.80091:1:entry:Delay (seconds):" },
    { "1.3.6.1.4.1.25623.1.0.80103:entry:Network interface on OpenVAS box (used for scanning):"
      "1.3.6.1.4.1.25623.1.0.80103:1:entry:Network interface on OpenVAS box (used for scanning):" },
    { "1.3.6.1.4.1.25623.1.0.80103:entry:Fake IP (alive and on same subnet as scanner):"
      "1.3.6.1.4.1.25623.1.0.80103:2:entry:Fake IP (alive and on same subnet as scanner):" },
    { "1.3.6.1.4.1.25623.1.0.80103:entry:Number of packets:"
      "1.3.6.1.4.1.25623.1.0.80103:3:entry:Number of packets:" },
    { "1.3.6.1.4.1.25623.1.0.80103:checkbox:Report missing configuration or dependencies"
      "1.3.6.1.4.1.25623.1.0.80103:4:checkbox:Report missing configuration or dependencies" },
    { "1.3.6.1.4.1.25623.1.0.80109:radio:Profile"
      "1.3.6.1.4.1.25623.1.0.80109:1:radio:Profile" },
    { "1.3.6.1.4.1.25623.1.0.80109:entry:Seed URL"
      "1.3.6.1.4.1.25623.1.0.80109:2:entry:Seed URL" },
    { "1.3.6.1.4.1.25623.1.0.90023:entry:SMB login:"
      "1.3.6.1.4.1.25623.1.0.90023:1:entry:SMB login:" },
    { "1.3.6.1.4.1.25623.1.0.90023:password:SMB password:"
      "1.3.6.1.4.1.25623.1.0.90023:2:password:SMB password:" },
    { "1.3.6.1.4.1.25623.1.0.90023:entry:SMB domain (optional):"
      "1.3.6.1.4.1.25623.1.0.90023:3:entry:SMB domain (optional):" },
    { "1.3.6.1.4.1.25623.1.0.91984:entry:timelimit value (in seconds)"
      "1.3.6.1.4.1.25623.1.0.91984:1:entry:timelimit value (in seconds)" },
    { "1.3.6.1.4.1.25623.1.0.91984:entry:sizelimit value"
      "1.3.6.1.4.1.25623.1.0.91984:2:entry:sizelimit value" },
    { "1.3.6.1.4.1.25623.1.0.94171:radio:Berichtformat"
      "1.3.6.1.4.1.25623.1.0.94171:1:radio:Berichtformat" },
    { "1.3.6.1.4.1.25623.1.0.94194:checkbox:Alle Dateien Auflisten"
      "1.3.6.1.4.1.25623.1.0.94194:1:checkbox:Alle Dateien Auflisten" },
    { "1.3.6.1.4.1.25623.1.0.94276:radio:Berichtformat/Report Format"
      "1.3.6.1.4.1.25623.1.0.94276:1:radio:Berichtformat/Report Format" },
    { "1.3.6.1.4.1.25623.1.0.95888:checkbox:Launch IT-Grundschutz (10. EL)"
      "1.3.6.1.4.1.25623.1.0.95888:1:checkbox:Launch IT-Grundschutz (10. EL)" },
    { "1.3.6.1.4.1.25623.1.0.95888:checkbox:Launch IT-Grundschutz (11. EL)"
      "1.3.6.1.4.1.25623.1.0.95888:2:checkbox:Launch IT-Grundschutz (11. EL)" },
    { "1.3.6.1.4.1.25623.1.0.95888:checkbox:Launch IT-Grundschutz (12. EL)"
      "1.3.6.1.4.1.25623.1.0.95888:3:checkbox:Launch IT-Grundschutz (12. EL)" },
    { "1.3.6.1.4.1.25623.1.0.95888:checkbox:Launch IT-Grundschutz (13. EL)"
      "1.3.6.1.4.1.25623.1.0.95888:4:checkbox:Launch IT-Grundschutz (13. EL)" },
    { "1.3.6.1.4.1.25623.1.0.95888:checkbox:Launch IT-Grundschutz (15. EL)"
      "1.3.6.1.4.1.25623.1.0.95888:5:checkbox:Launch IT-Grundschutz (15. EL)" },
    { "1.3.6.1.4.1.25623.1.0.95888:checkbox:Launch latest IT-Grundschutz version"
      "1.3.6.1.4.1.25623.1.0.95888:6:checkbox:Launch latest IT-Grundschutz version" },
    { "1.3.6.1.4.1.25623.1.0.95888:radio:Level of Security (IT-Grundschutz)"
      "1.3.6.1.4.1.25623.1.0.95888:7:radio:Level of Security (IT-Grundschutz)" },
    { "1.3.6.1.4.1.25623.1.0.95888:checkbox:Verbose IT-Grundschutz results"
      "1.3.6.1.4.1.25623.1.0.95888:8:checkbox:Verbose IT-Grundschutz results" },
    { "1.3.6.1.4.1.25623.1.0.95888:checkbox:Launch PCI-DSS (Version 2.0)"
      "1.3.6.1.4.1.25623.1.0.95888:9:checkbox:Launch PCI-DSS (Version 2.0)" },
    { "1.3.6.1.4.1.25623.1.0.95888:checkbox:Launch latest PCI-DSS version"
      "1.3.6.1.4.1.25623.1.0.95888:10:checkbox:Launch latest PCI-DSS version" },
    { "1.3.6.1.4.1.25623.1.0.95888:checkbox:Verbose PCI-DSS results"
      "1.3.6.1.4.1.25623.1.0.95888:11:checkbox:Verbose PCI-DSS results" },
    { "1.3.6.1.4.1.25623.1.0.95888:checkbox:Launch Cyber Essentials"
      "1.3.6.1.4.1.25623.1.0.95888:12:checkbox:Launch Cyber Essentials" },
    { "1.3.6.1.4.1.25623.1.0.95888:checkbox:Launch EU GDPR"
      "1.3.6.1.4.1.25623.1.0.95888:13:checkbox:Launch EU GDPR" },
    { "1.3.6.1.4.1.25623.1.0.95888:checkbox:Verbose Policy Controls"
      "1.3.6.1.4.1.25623.1.0.95888:14:checkbox:Verbose Policy Controls" },
    { "1.3.6.1.4.1.25623.1.0.95888:checkbox:Launch Compliance Test"
      "1.3.6.1.4.1.25623.1.0.95888:15:checkbox:Launch Compliance Test" },
    { "1.3.6.1.4.1.25623.1.0.95888:radio:PCI-DSS Berichtsprache/Report Language"
      "1.3.6.1.4.1.25623.1.0.95888:16:radio:PCI-DSS Berichtsprache/Report Language" },
    { "1.3.6.1.4.1.25623.1.0.95888:entry:Testuser Common Name"
      "1.3.6.1.4.1.25623.1.0.95888:17:entry:Testuser Common Name" },
    { "1.3.6.1.4.1.25623.1.0.95888:entry:Testuser Organization Unit"
      "1.3.6.1.4.1.25623.1.0.95888:18:entry:Testuser Organization Unit" },
    { "1.3.6.1.4.1.25623.1.0.95888:radio:Windows Domaenenfunktionsmodus"
      "1.3.6.1.4.1.25623.1.0.95888:19:radio:Windows Domaenenfunktionsmodus" },
    { "1.3.6.1.4.1.25623.1.0.96044:checkbox:Force scan even without 404s"
      "1.3.6.1.4.1.25623.1.0.96044:1:checkbox:Force scan even without 404s" },
    { "1.3.6.1.4.1.25623.1.0.96047:radio:Value"
      "1.3.6.1.4.1.25623.1.0.96047:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.96055:entry:Testuser Common Name"
      "1.3.6.1.4.1.25623.1.0.96055:1:entry:Testuser Common Name" },
    { "1.3.6.1.4.1.25623.1.0.96055:entry:Testuser Organization Unit"
      "1.3.6.1.4.1.25623.1.0.96055:2:entry:Testuser Organization Unit" },
    { "1.3.6.1.4.1.25623.1.0.96057:file:X.509 Root Authority Certificate(PEM)"
      "1.3.6.1.4.1.25623.1.0.96057:1:file:X.509 Root Authority Certificate(PEM)" },
    { "1.3.6.1.4.1.25623.1.0.96100:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.96100:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.96104:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.96104:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.96104:checkbox:BruteForce Attacke with Default-Usern and -Passwords"
      "1.3.6.1.4.1.25623.1.0.96104:1:checkbox:BruteForce Attacke with Default-Usern and -Passwords" },
    { "1.3.6.1.4.1.25623.1.0.96107:entry:Telnet Testuser Name"
      "1.3.6.1.4.1.25623.1.0.96107:1:entry:Telnet Testuser Name" },
    { "1.3.6.1.4.1.25623.1.0.96107:password:Telnet Testuser Password"
      "1.3.6.1.4.1.25623.1.0.96107:2:password:Telnet Testuser Password" },
    { "1.3.6.1.4.1.25623.1.0.96170:entry:Testuser Common Name"
      "1.3.6.1.4.1.25623.1.0.96170:1:entry:Testuser Common Name" },
    { "1.3.6.1.4.1.25623.1.0.96170:entry:Testuser Organization Unit"
      "1.3.6.1.4.1.25623.1.0.96170:2:entry:Testuser Organization Unit" },
    { "1.3.6.1.4.1.25623.1.0.96171:checkbox:Enable"
      "1.3.6.1.4.1.25623.1.0.96171:1:checkbox:Enable" },
    { "1.3.6.1.4.1.25623.1.0.96171:entry:Message"
      "1.3.6.1.4.1.25623.1.0.96171:2:entry:Message" },
    { "1.3.6.1.4.1.25623.1.0.96176:checkbox:Perform check:"
      "1.3.6.1.4.1.25623.1.0.96176:1:checkbox:Perform check:" },
    { "1.3.6.1.4.1.25623.1.0.96180:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.96180:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.96180:checkbox:List all and not only the first 100 entries"
      "1.3.6.1.4.1.25623.1.0.96180:1:checkbox:List all and not only the first 100 entries" },
    { "1.3.6.1.4.1.25623.1.0.96180:checkbox:Install hash test Programm on the Target"
      "1.3.6.1.4.1.25623.1.0.96180:2:checkbox:Install hash test Programm on the Target" },
    { "1.3.6.1.4.1.25623.1.0.96180:checkbox:Delete hash test Programm after the test"
      "1.3.6.1.4.1.25623.1.0.96180:3:checkbox:Delete hash test Programm after the test" },
    { "1.3.6.1.4.1.25623.1.0.96180:file:Target checksum File"
      "1.3.6.1.4.1.25623.1.0.96180:4:file:Target checksum File" },
    { "1.3.6.1.4.1.25623.1.0.96198:checkbox:Run routine (please see NOTE)"
      "1.3.6.1.4.1.25623.1.0.96198:1:checkbox:Run routine (please see NOTE)" },
    { "1.3.6.1.4.1.25623.1.0.96204:entry:Maximum number of log lines"
      "1.3.6.1.4.1.25623.1.0.96204:1:entry:Maximum number of log lines" },
    { "1.3.6.1.4.1.25623.1.0.97001:radio:Berichtformat/Report Format"
      "1.3.6.1.4.1.25623.1.0.97001:1:radio:Berichtformat/Report Format" },
    { "1.3.6.1.4.1.25623.1.0.100151:entry:Postgres Username:"
      "1.3.6.1.4.1.25623.1.0.100151:1:entry:Postgres Username:" },
    { "1.3.6.1.4.1.25623.1.0.100151:password:Postgres Password:"
      "1.3.6.1.4.1.25623.1.0.100151:2:password:Postgres Password:" },
    { "1.3.6.1.4.1.25623.1.0.100206:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.100206:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.100315:checkbox:Use nmap"
      "1.3.6.1.4.1.25623.1.0.100315:1:checkbox:Use nmap" },
    { "1.3.6.1.4.1.25623.1.0.100315:checkbox:Do a TCP ping"
      "1.3.6.1.4.1.25623.1.0.100315:1:checkbox:Do a TCP ping" },
    { "1.3.6.1.4.1.25623.1.0.100315:checkbox:Report about unrechable Hosts"
      "1.3.6.1.4.1.25623.1.0.100315:2:checkbox:Report about unrechable Hosts" },
    { "1.3.6.1.4.1.25623.1.0.100315:checkbox:TCP ping tries also TCP-SYN ping"
      "1.3.6.1.4.1.25623.1.0.100315:2:checkbox:TCP ping tries also TCP-SYN ping" },
    { "1.3.6.1.4.1.25623.1.0.100315:checkbox:Do an ICMP ping"
      "1.3.6.1.4.1.25623.1.0.100315:3:checkbox:Do an ICMP ping" },
    { "1.3.6.1.4.1.25623.1.0.100315:checkbox:Report about reachable Hosts"
      "1.3.6.1.4.1.25623.1.0.100315:4:checkbox:Report about reachable Hosts" },
    { "1.3.6.1.4.1.25623.1.0.100315:checkbox:Use ARP"
      "1.3.6.1.4.1.25623.1.0.100315:4:checkbox:Use ARP" },
    { "1.3.6.1.4.1.25623.1.0.100315:checkbox:Mark unrechable Hosts as dead (not scanning)"
      "1.3.6.1.4.1.25623.1.0.100315:5:checkbox:Mark unrechable Hosts as dead (not scanning)" },
    { "1.3.6.1.4.1.25623.1.0.100315:checkbox:Report about unrechable Hosts"
      "1.3.6.1.4.1.25623.1.0.100315:6:checkbox:Report about unrechable Hosts" },
    { "1.3.6.1.4.1.25623.1.0.100315:checkbox:TCP ping tries only TCP-SYN ping"
      "1.3.6.1.4.1.25623.1.0.100315:7:checkbox:TCP ping tries only TCP-SYN ping" },
    { "1.3.6.1.4.1.25623.1.0.100315:checkbox:Use nmap"
      "1.3.6.1.4.1.25623.1.0.100315:8:checkbox:Use nmap" },
    { "1.3.6.1.4.1.25623.1.0.100315:checkbox:Report about reachable Hosts"
      "1.3.6.1.4.1.25623.1.0.100315:9:checkbox:Report about reachable Hosts" },
    { "1.3.6.1.4.1.25623.1.0.100315:entry:nmap additional ports for -PA"
      "1.3.6.1.4.1.25623.1.0.100315:10:entry:nmap additional ports for -PA" },
    { "1.3.6.1.4.1.25623.1.0.100315:checkbox:nmap: try also with only -sP"
      "1.3.6.1.4.1.25623.1.0.100315:11:checkbox:nmap: try also with only -sP" },
    { "1.3.6.1.4.1.25623.1.0.100315:checkbox:Log nmap output"
      "1.3.6.1.4.1.25623.1.0.100315:12:checkbox:Log nmap output" },
    { "1.3.6.1.4.1.25623.1.0.100315:checkbox:Log failed nmap calls"
      "1.3.6.1.4.1.25623.1.0.100315:13:checkbox:Log failed nmap calls" },
    { "1.3.6.1.4.1.25623.1.0.100315:radio:nmap timing policy"
      "1.3.6.1.4.1.25623.1.0.100315:14:radio:nmap timing policy" },
    { "1.3.6.1.4.1.25623.1.0.100509:checkbox:Also use 'find' command to search for Applications"
      "1.3.6.1.4.1.25623.1.0.100509:1:checkbox:Also use 'find' command to search for Applications" },
    { "1.3.6.1.4.1.25623.1.0.100509:checkbox:Descend directories on other filesystem (don't add -xdev to find)"
      "1.3.6.1.4.1.25623.1.0.100509:2:checkbox:Descend directories on other filesystem (don't add -xdev to find)" },
    { "1.3.6.1.4.1.25623.1.0.100509:checkbox:Enable Detection of Portable Apps on Windows"
      "1.3.6.1.4.1.25623.1.0.100509:3:checkbox:Enable Detection of Portable Apps on Windows" },
    { "1.3.6.1.4.1.25623.1.0.100509:checkbox:Disable the usage of win_cmd_exec for remote commands on Windows"
      "1.3.6.1.4.1.25623.1.0.100509:4:checkbox:Disable the usage of win_cmd_exec for remote commands on Windows" },
    { "1.3.6.1.4.1.25623.1.0.100509:checkbox:Disable file search via WMI on Windows"
      "1.3.6.1.4.1.25623.1.0.100509:5:checkbox:Disable file search via WMI on Windows" },
    { "1.3.6.1.4.1.25623.1.0.100509:checkbox:Report vulnerabilities of inactive Linux Kernel(s) separately"
      "1.3.6.1.4.1.25623.1.0.100509:6:checkbox:Report vulnerabilities of inactive Linux Kernel(s) separately" },
    { "1.3.6.1.4.1.25623.1.0.103239:checkbox:Report timeout"
      "1.3.6.1.4.1.25623.1.0.103239:1:checkbox:Report timeout" },
    { "1.3.6.1.4.1.25623.1.0.103240:checkbox:Report timeout"
      "1.3.6.1.4.1.25623.1.0.103240:1:checkbox:Report timeout" },
    { "1.3.6.1.4.1.25623.1.0.103437:entry:Search for dir(s)"
      "1.3.6.1.4.1.25623.1.0.103437:1:entry:Search for dir(s)" },
    { "1.3.6.1.4.1.25623.1.0.103437:entry:Valid http status codes indicating that a directory was found"
      "1.3.6.1.4.1.25623.1.0.103437:2:entry:Valid http status codes indicating that a directory was found" },
    { "1.3.6.1.4.1.25623.1.0.103437:checkbox:Run this Plugin"
      "1.3.6.1.4.1.25623.1.0.103437:3:checkbox:Run this Plugin" },
    { "1.3.6.1.4.1.25623.1.0.103447:entry:ESXi login name:"
      "1.3.6.1.4.1.25623.1.0.103447:1:entry:ESXi login name:" },
    { "1.3.6.1.4.1.25623.1.0.103447:password:ESXi login password:"
      "1.3.6.1.4.1.25623.1.0.103447:2:password:ESXi login password:" },
    { "1.3.6.1.4.1.25623.1.0.103550:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.103550:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.103591:entry:SSH login name:"
      "1.3.6.1.4.1.25623.1.0.103591:1:entry:SSH login name:" },
    { "1.3.6.1.4.1.25623.1.0.103591:password:SSH key passphrase:"
      "1.3.6.1.4.1.25623.1.0.103591:2:password:SSH key passphrase:" },
    { "1.3.6.1.4.1.25623.1.0.103591:password:SSH password (unsafe!):"
      "1.3.6.1.4.1.25623.1.0.103591:3:password:SSH password (unsafe!):" },
    { "1.3.6.1.4.1.25623.1.0.103591:file:SSH private key:"
      "1.3.6.1.4.1.25623.1.0.103591:4:file:SSH private key:" },
    { "1.3.6.1.4.1.25623.1.0.103591:sshlogin:Keys:"
      "1.3.6.1.4.1.25623.1.0.103591:5:sshlogin:Keys:" },
    { "1.3.6.1.4.1.25623.1.0.103591:file:SSH public key:"
      "1.3.6.1.4.1.25623.1.0.103591:6:file:SSH public key:" },
    { "1.3.6.1.4.1.25623.1.0.103625:checkbox:Enable"
      "1.3.6.1.4.1.25623.1.0.103625:1:checkbox:Enable" },
    { "1.3.6.1.4.1.25623.1.0.103625:checkbox:Use File"
      "1.3.6.1.4.1.25623.1.0.103625:2:checkbox:Use File" },
    { "1.3.6.1.4.1.25623.1.0.103625:entry:File name /tmp/"
      "1.3.6.1.4.1.25623.1.0.103625:3:entry:File name /tmp/" },
    { "1.3.6.1.4.1.25623.1.0.103625:checkbox:Append to File"
      "1.3.6.1.4.1.25623.1.0.103625:4:checkbox:Append to File" },
    { "1.3.6.1.4.1.25623.1.0.103625:checkbox:Use Syslog"
      "1.3.6.1.4.1.25623.1.0.103625:5:checkbox:Use Syslog" },
    { "1.3.6.1.4.1.25623.1.0.103625:radio:Syslog priority"
      "1.3.6.1.4.1.25623.1.0.103625:6:radio:Syslog priority" },
    { "1.3.6.1.4.1.25623.1.0.103625:entry:Syslog tag"
      "1.3.6.1.4.1.25623.1.0.103625:7:entry:Syslog tag" },
    { "1.3.6.1.4.1.25623.1.0.103625:entry:Message"
      "1.3.6.1.4.1.25623.1.0.103625:8:entry:Message" },
    { "1.3.6.1.4.1.25623.1.0.103697:file:Credentials file:"
      "1.3.6.1.4.1.25623.1.0.103697:1:file:Credentials file:" },
    { "1.3.6.1.4.1.25623.1.0.103697:checkbox:Use only credentials listed in uploaded file:"
      "1.3.6.1.4.1.25623.1.0.103697:2:checkbox:Use only credentials listed in uploaded file:" },
    { "1.3.6.1.4.1.25623.1.0.103697:checkbox:Disable brute force checks"
      "1.3.6.1.4.1.25623.1.0.103697:3:checkbox:Disable brute force checks" },
    { "1.3.6.1.4.1.25623.1.0.103697:checkbox:Disable default account checks"
      "1.3.6.1.4.1.25623.1.0.103697:4:checkbox:Disable default account checks" },
    { "1.3.6.1.4.1.25623.1.0.103807:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.103807:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.103823:checkbox:Report TLS version"
      "1.3.6.1.4.1.25623.1.0.103823:1:checkbox:Report TLS version" },
    { "1.3.6.1.4.1.25623.1.0.103940:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.103940:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.103940:file:Target checksum File"
      "1.3.6.1.4.1.25623.1.0.103940:1:file:Target checksum File" },
    { "1.3.6.1.4.1.25623.1.0.103940:checkbox:List all and not only the first 100 entries"
      "1.3.6.1.4.1.25623.1.0.103940:2:checkbox:List all and not only the first 100 entries" },
    { "1.3.6.1.4.1.25623.1.0.103944:file:Target File Policies"
      "1.3.6.1.4.1.25623.1.0.103944:1:file:Target File Policies" },
    { "1.3.6.1.4.1.25623.1.0.103962:entry:Single CPE"
      "1.3.6.1.4.1.25623.1.0.103962:1:entry:Single CPE" },
    { "1.3.6.1.4.1.25623.1.0.103962:file:CPE List"
      "1.3.6.1.4.1.25623.1.0.103962:2:file:CPE List" },
    { "1.3.6.1.4.1.25623.1.0.103962:radio:Check for"
      "1.3.6.1.4.1.25623.1.0.103962:3:radio:Check for" },
    { "1.3.6.1.4.1.25623.1.0.103978:checkbox:Silent"
      "1.3.6.1.4.1.25623.1.0.103978:1:checkbox:Silent" },
    { "1.3.6.1.4.1.25623.1.0.103997:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.103997:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.103998:checkbox:Create OVAL System Characteristics"
      "1.3.6.1.4.1.25623.1.0.103998:1:checkbox:Create OVAL System Characteristics" },
    { "1.3.6.1.4.1.25623.1.0.104000:checkbox:Treat all hosts as online"
      "1.3.6.1.4.1.25623.1.0.104000:1:checkbox:Treat all hosts as online" },
    { "1.3.6.1.4.1.25623.1.0.104000:checkbox:Trace hop path to each host"
      "1.3.6.1.4.1.25623.1.0.104000:2:checkbox:Trace hop path to each host" },
    { "1.3.6.1.4.1.25623.1.0.104000:checkbox:Disable DNS resolution"
      "1.3.6.1.4.1.25623.1.0.104000:3:checkbox:Disable DNS resolution" },
    { "1.3.6.1.4.1.25623.1.0.104000:radio:TCP scanning technique"
      "1.3.6.1.4.1.25623.1.0.104000:4:radio:TCP scanning technique" },
    { "1.3.6.1.4.1.25623.1.0.104000:checkbox:Service scan"
      "1.3.6.1.4.1.25623.1.0.104000:5:checkbox:Service scan" },
    { "1.3.6.1.4.1.25623.1.0.104000:checkbox:RPC port scan"
      "1.3.6.1.4.1.25623.1.0.104000:6:checkbox:RPC port scan" },
    { "1.3.6.1.4.1.25623.1.0.104000:checkbox:Identify the remote OS"
      "1.3.6.1.4.1.25623.1.0.104000:7:checkbox:Identify the remote OS" },
    { "1.3.6.1.4.1.25623.1.0.104000:checkbox:Aggressive OS detection"
      "1.3.6.1.4.1.25623.1.0.104000:8:checkbox:Aggressive OS detection" },
    { "1.3.6.1.4.1.25623.1.0.104000:checkbox:Fragment IP packets (bypasses firewalls)"
      "1.3.6.1.4.1.25623.1.0.104000:9:checkbox:Fragment IP packets (bypasses firewalls)" },
    { "1.3.6.1.4.1.25623.1.0.104000:entry:Source port"
      "1.3.6.1.4.1.25623.1.0.104000:10:entry:Source port" },
    { "1.3.6.1.4.1.25623.1.0.104000:radio:Timing policy"
      "1.3.6.1.4.1.25623.1.0.104000:11:radio:Timing policy" },
    { "1.3.6.1.4.1.25623.1.0.104000:entry:Host Timeout (ms)"
      "1.3.6.1.4.1.25623.1.0.104000:12:entry:Host Timeout (ms)" },
    { "1.3.6.1.4.1.25623.1.0.104000:entry:Min RTT Timeout (ms)"
      "1.3.6.1.4.1.25623.1.0.104000:13:entry:Min RTT Timeout (ms)" },
    { "1.3.6.1.4.1.25623.1.0.104000:entry:Max RTT Timeout (ms)"
      "1.3.6.1.4.1.25623.1.0.104000:14:entry:Max RTT Timeout (ms)" },
    { "1.3.6.1.4.1.25623.1.0.104000:entry:Initial RTT timeout (ms)"
      "1.3.6.1.4.1.25623.1.0.104000:15:entry:Initial RTT timeout (ms)" },
    { "1.3.6.1.4.1.25623.1.0.104000:entry:Ports scanned in parallel (min)"
      "1.3.6.1.4.1.25623.1.0.104000:16:entry:Ports scanned in parallel (min)" },
    { "1.3.6.1.4.1.25623.1.0.104000:entry:Ports scanned in parallel (max)"
      "1.3.6.1.4.1.25623.1.0.104000:17:entry:Ports scanned in parallel (max)" },
    { "1.3.6.1.4.1.25623.1.0.104000:entry:Hosts scanned in parallel (min)"
      "1.3.6.1.4.1.25623.1.0.104000:18:entry:Hosts scanned in parallel (min)" },
    { "1.3.6.1.4.1.25623.1.0.104000:entry:Hosts scanned in parallel (max)"
      "1.3.6.1.4.1.25623.1.0.104000:19:entry:Hosts scanned in parallel (max)" },
    { "1.3.6.1.4.1.25623.1.0.104000:entry:Minimum wait between probes (ms)"
      "1.3.6.1.4.1.25623.1.0.104000:20:entry:Minimum wait between probes (ms)" },
    { "1.3.6.1.4.1.25623.1.0.104000:entry:Exclude hosts"
      "1.3.6.1.4.1.25623.1.0.104000:21:entry:Exclude hosts" },
    { "1.3.6.1.4.1.25623.1.0.104000:file:File containing XML results"
      "1.3.6.1.4.1.25623.1.0.104000:22:file:File containing XML results" },
    { "1.3.6.1.4.1.25623.1.0.104004:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.104004:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.104004:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.104004:2:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.104004:entry:favicon.root"
      "1.3.6.1.4.1.25623.1.0.104004:3:entry:favicon.root" },
    { "1.3.6.1.4.1.25623.1.0.104004:entry:favicon.uri"
      "1.3.6.1.4.1.25623.1.0.104004:4:entry:favicon.uri" },
    { "1.3.6.1.4.1.25623.1.0.104005:entry:brute.firstonly"
      "1.3.6.1.4.1.25623.1.0.104005:1:entry:brute.firstonly" },
    { "1.3.6.1.4.1.25623.1.0.104005:entry:brute.unique"
      "1.3.6.1.4.1.25623.1.0.104005:2:entry:brute.unique" },
    { "1.3.6.1.4.1.25623.1.0.104005:entry:http-brute.hostname"
      "1.3.6.1.4.1.25623.1.0.104005:3:entry:http-brute.hostname" },
    { "1.3.6.1.4.1.25623.1.0.104005:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.104005:4:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.104005:entry:brute.mode"
      "1.3.6.1.4.1.25623.1.0.104005:5:entry:brute.mode" },
    { "1.3.6.1.4.1.25623.1.0.104005:entry:brute.passonly"
      "1.3.6.1.4.1.25623.1.0.104005:6:entry:brute.passonly" },
    { "1.3.6.1.4.1.25623.1.0.104005:entry:http-brute.path"
      "1.3.6.1.4.1.25623.1.0.104005:7:entry:http-brute.path" },
    { "1.3.6.1.4.1.25623.1.0.104005:entry:brute.useraspass"
      "1.3.6.1.4.1.25623.1.0.104005:8:entry:brute.useraspass" },
    { "1.3.6.1.4.1.25623.1.0.104005:entry:http-brute.method"
      "1.3.6.1.4.1.25623.1.0.104005:9:entry:http-brute.method" },
    { "1.3.6.1.4.1.25623.1.0.104005:entry:brute.credfile"
      "1.3.6.1.4.1.25623.1.0.104005:10:entry:brute.credfile" },
    { "1.3.6.1.4.1.25623.1.0.104005:entry:brute.retries"
      "1.3.6.1.4.1.25623.1.0.104005:11:entry:brute.retries" },
    { "1.3.6.1.4.1.25623.1.0.104005:entry:brute.threads"
      "1.3.6.1.4.1.25623.1.0.104005:12:entry:brute.threads" },
    { "1.3.6.1.4.1.25623.1.0.104005:entry:brute.delay"
      "1.3.6.1.4.1.25623.1.0.104005:13:entry:brute.delay" },
    { "1.3.6.1.4.1.25623.1.0.104005:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.104005:14:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.104006:entry:domino-enum-passwords.idpath"
      "1.3.6.1.4.1.25623.1.0.104006:1:entry:domino-enum-passwords.idpath" },
    { "1.3.6.1.4.1.25623.1.0.104006:entry:domino-enum-passwords.count"
      "1.3.6.1.4.1.25623.1.0.104006:2:entry:domino-enum-passwords.count" },
    { "1.3.6.1.4.1.25623.1.0.104006:entry:domino-enum-passwords.path"
      "1.3.6.1.4.1.25623.1.0.104006:3:entry:domino-enum-passwords.path" },
    { "1.3.6.1.4.1.25623.1.0.104006:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.104006:4:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.104006:entry:domino-enum-passwords.hostname"
      "1.3.6.1.4.1.25623.1.0.104006:5:entry:domino-enum-passwords.hostname" },
    { "1.3.6.1.4.1.25623.1.0.104006:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.104006:6:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.104007:entry:nfs.version"
      "1.3.6.1.4.1.25623.1.0.104007:1:entry:nfs.version" },
    { "1.3.6.1.4.1.25623.1.0.104007:entry:mount.version"
      "1.3.6.1.4.1.25623.1.0.104007:2:entry:mount.version" },
    { "1.3.6.1.4.1.25623.1.0.104007:entry:rpc.protocol"
      "1.3.6.1.4.1.25623.1.0.104007:3:entry:rpc.protocol" },
    { "1.3.6.1.4.1.25623.1.0.104009:entry:userdb"
      "1.3.6.1.4.1.25623.1.0.104009:1:entry:userdb" },
    { "1.3.6.1.4.1.25623.1.0.104009:entry:pop3loginmethod"
      "1.3.6.1.4.1.25623.1.0.104009:2:entry:pop3loginmethod" },
    { "1.3.6.1.4.1.25623.1.0.104009:entry:unpwdb.passlimit"
      "1.3.6.1.4.1.25623.1.0.104009:3:entry:unpwdb.passlimit" },
    { "1.3.6.1.4.1.25623.1.0.104009:entry:unpwdb.userlimit"
      "1.3.6.1.4.1.25623.1.0.104009:4:entry:unpwdb.userlimit" },
    { "1.3.6.1.4.1.25623.1.0.104009:entry:unpwdb.timelimit"
      "1.3.6.1.4.1.25623.1.0.104009:5:entry:unpwdb.timelimit" },
    { "1.3.6.1.4.1.25623.1.0.104009:entry:passdb"
      "1.3.6.1.4.1.25623.1.0.104009:6:entry:passdb" },
    { "1.3.6.1.4.1.25623.1.0.104011:entry:snmp-interfaces.port"
      "1.3.6.1.4.1.25623.1.0.104011:1:entry:snmp-interfaces.port" },
    { "1.3.6.1.4.1.25623.1.0.104011:entry:snmpcommunity"
      "1.3.6.1.4.1.25623.1.0.104011:2:entry:snmpcommunity" },
    { "1.3.6.1.4.1.25623.1.0.104011:entry:snmp-interfaces.host"
      "1.3.6.1.4.1.25623.1.0.104011:3:entry:snmp-interfaces.host" },
    { "1.3.6.1.4.1.25623.1.0.104012:entry:upnp-info.override"
      "1.3.6.1.4.1.25623.1.0.104012:1:entry:upnp-info.override" },
    { "1.3.6.1.4.1.25623.1.0.104013:entry:irc-unrealircd-backdoor.wait"
      "1.3.6.1.4.1.25623.1.0.104013:1:entry:irc-unrealircd-backdoor.wait" },
    { "1.3.6.1.4.1.25623.1.0.104013:entry:irc-unrealircd-backdoor.kill"
      "1.3.6.1.4.1.25623.1.0.104013:2:entry:irc-unrealircd-backdoor.kill" },
    { "1.3.6.1.4.1.25623.1.0.104013:entry:irc-unrealircd-backdoor.command"
      "1.3.6.1.4.1.25623.1.0.104013:3:entry:irc-unrealircd-backdoor.command" },
    { "1.3.6.1.4.1.25623.1.0.104014:entry:mssql.timeout"
      "1.3.6.1.4.1.25623.1.0.104014:1:entry:mssql.timeout" },
    { "1.3.6.1.4.1.25623.1.0.104015:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.104015:1:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.104015:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.104015:2:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.104015:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.104015:3:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.104015:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.104015:4:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.104016:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.104016:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.104016:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.104016:2:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.104020:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.104020:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.104020:entry:basefolder"
      "1.3.6.1.4.1.25623.1.0.104020:2:entry:basefolder" },
    { "1.3.6.1.4.1.25623.1.0.104020:entry:folderdb"
      "1.3.6.1.4.1.25623.1.0.104020:3:entry:folderdb" },
    { "1.3.6.1.4.1.25623.1.0.104020:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.104020:4:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.104020:entry:webdavfolder"
      "1.3.6.1.4.1.25623.1.0.104020:5:entry:webdavfolder" },
    { "1.3.6.1.4.1.25623.1.0.104022:entry:userdb"
      "1.3.6.1.4.1.25623.1.0.104022:1:entry:userdb" },
    { "1.3.6.1.4.1.25623.1.0.104022:entry:domino-id.username"
      "1.3.6.1.4.1.25623.1.0.104022:2:entry:domino-id.username" },
    { "1.3.6.1.4.1.25623.1.0.104022:entry:passdb"
      "1.3.6.1.4.1.25623.1.0.104022:3:entry:passdb" },
    { "1.3.6.1.4.1.25623.1.0.104022:entry:unpwdb.passlimit"
      "1.3.6.1.4.1.25623.1.0.104022:4:entry:unpwdb.passlimit" },
    { "1.3.6.1.4.1.25623.1.0.104022:entry:domino-id.path"
      "1.3.6.1.4.1.25623.1.0.104022:5:entry:domino-id.path" },
    { "1.3.6.1.4.1.25623.1.0.104022:entry:unpwdb.userlimit"
      "1.3.6.1.4.1.25623.1.0.104022:6:entry:unpwdb.userlimit" },
    { "1.3.6.1.4.1.25623.1.0.104022:entry:unpwdb.timelimit"
      "1.3.6.1.4.1.25623.1.0.104022:7:entry:unpwdb.timelimit" },
    { "1.3.6.1.4.1.25623.1.0.104023:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.104023:1:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.104023:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.104023:2:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.104023:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.104023:3:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.104023:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.104023:4:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.104024:entry:dns-fuzz.timelimit"
      "1.3.6.1.4.1.25623.1.0.104024:1:entry:dns-fuzz.timelimit" },
    { "1.3.6.1.4.1.25623.1.0.104025:entry:mssql-xp-cmdshell.cmd"
      "1.3.6.1.4.1.25623.1.0.104025:1:entry:mssql-xp-cmdshell.cmd" },
    { "1.3.6.1.4.1.25623.1.0.104025:entry:mssql.timeout"
      "1.3.6.1.4.1.25623.1.0.104025:2:entry:mssql.timeout" },
    { "1.3.6.1.4.1.25623.1.0.104025:entry:mssql.password"
      "1.3.6.1.4.1.25623.1.0.104025:3:entry:mssql.password" },
    { "1.3.6.1.4.1.25623.1.0.104025:entry:mssql.username"
      "1.3.6.1.4.1.25623.1.0.104025:4:entry:mssql.username" },
    { "1.3.6.1.4.1.25623.1.0.104026:entry:mssql.timeout"
      "1.3.6.1.4.1.25623.1.0.104026:1:entry:mssql.timeout" },
    { "1.3.6.1.4.1.25623.1.0.104027:entry:nfs-statfs.human"
      "1.3.6.1.4.1.25623.1.0.104027:1:entry:nfs-statfs.human" },
    { "1.3.6.1.4.1.25623.1.0.104027:entry:mount.version"
      "1.3.6.1.4.1.25623.1.0.104027:2:entry:mount.version" },
    { "1.3.6.1.4.1.25623.1.0.104027:entry:nfs.version"
      "1.3.6.1.4.1.25623.1.0.104027:3:entry:nfs.version" },
    { "1.3.6.1.4.1.25623.1.0.104027:entry:rpc.protocol"
      "1.3.6.1.4.1.25623.1.0.104027:4:entry:rpc.protocol" },
    { "1.3.6.1.4.1.25623.1.0.104028:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.104028:1:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.104028:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.104028:2:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.104028:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.104028:3:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.104028:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.104028:4:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.104030:entry:ftp-proftpd-backdoor.cmd"
      "1.3.6.1.4.1.25623.1.0.104030:1:entry:ftp-proftpd-backdoor.cmd" },
    { "1.3.6.1.4.1.25623.1.0.104031:entry:ftp-anon.maxlist"
      "1.3.6.1.4.1.25623.1.0.104031:1:entry:ftp-anon.maxlist" },
    { "1.3.6.1.4.1.25623.1.0.104032:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.104032:1:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.104032:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.104032:2:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.104032:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.104032:3:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.104032:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.104032:4:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.104033:entry:dns-cache-snoop.domains"
      "1.3.6.1.4.1.25623.1.0.104033:1:entry:dns-cache-snoop.domains" },
    { "1.3.6.1.4.1.25623.1.0.104033:entry:dns-cache-snoop.mode"
      "1.3.6.1.4.1.25623.1.0.104033:2:entry:dns-cache-snoop.mode" },
    { "1.3.6.1.4.1.25623.1.0.104035:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.104035:1:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.104035:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.104035:2:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.104035:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.104035:3:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.104035:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.104035:4:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.104036:entry:userdb"
      "1.3.6.1.4.1.25623.1.0.104036:1:entry:userdb" },
    { "1.3.6.1.4.1.25623.1.0.104036:entry:unpwdb.passlimit"
      "1.3.6.1.4.1.25623.1.0.104036:2:entry:unpwdb.passlimit" },
    { "1.3.6.1.4.1.25623.1.0.104036:entry:passdb"
      "1.3.6.1.4.1.25623.1.0.104036:3:entry:passdb" },
    { "1.3.6.1.4.1.25623.1.0.104036:entry:unpwdb.userlimit"
      "1.3.6.1.4.1.25623.1.0.104036:4:entry:unpwdb.userlimit" },
    { "1.3.6.1.4.1.25623.1.0.104036:entry:unpwdb.timelimit"
      "1.3.6.1.4.1.25623.1.0.104036:5:entry:unpwdb.timelimit" },
    { "1.3.6.1.4.1.25623.1.0.104038:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.104038:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.104038:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.104038:2:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.104038:entry:http-passwd.root"
      "1.3.6.1.4.1.25623.1.0.104038:3:entry:http-passwd.root" },
    { "1.3.6.1.4.1.25623.1.0.104039:entry:userdir.users"
      "1.3.6.1.4.1.25623.1.0.104039:1:entry:userdir.users" },
    { "1.3.6.1.4.1.25623.1.0.104039:entry:limit"
      "1.3.6.1.4.1.25623.1.0.104039:2:entry:limit" },
    { "1.3.6.1.4.1.25623.1.0.104039:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.104039:3:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.104039:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.104039:4:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.104043:entry:brute.firstonly"
      "1.3.6.1.4.1.25623.1.0.104043:1:entry:brute.firstonly" },
    { "1.3.6.1.4.1.25623.1.0.104043:entry:oracle-brute.sid"
      "1.3.6.1.4.1.25623.1.0.104043:2:entry:oracle-brute.sid" },
    { "1.3.6.1.4.1.25623.1.0.104043:entry:brute.retries"
      "1.3.6.1.4.1.25623.1.0.104043:3:entry:brute.retries" },
    { "1.3.6.1.4.1.25623.1.0.104043:entry:tns.sid"
      "1.3.6.1.4.1.25623.1.0.104043:4:entry:tns.sid" },
    { "1.3.6.1.4.1.25623.1.0.104043:entry:brute.mode"
      "1.3.6.1.4.1.25623.1.0.104043:5:entry:brute.mode" },
    { "1.3.6.1.4.1.25623.1.0.104043:entry:brute.useraspass"
      "1.3.6.1.4.1.25623.1.0.104043:6:entry:brute.useraspass" },
    { "1.3.6.1.4.1.25623.1.0.104043:entry:brute.passonly"
      "1.3.6.1.4.1.25623.1.0.104043:7:entry:brute.passonly" },
    { "1.3.6.1.4.1.25623.1.0.104043:entry:brute.credfile"
      "1.3.6.1.4.1.25623.1.0.104043:8:entry:brute.credfile" },
    { "1.3.6.1.4.1.25623.1.0.104043:entry:brute.unique"
      "1.3.6.1.4.1.25623.1.0.104043:9:entry:brute.unique" },
    { "1.3.6.1.4.1.25623.1.0.104043:entry:brute.threads"
      "1.3.6.1.4.1.25623.1.0.104043:10:entry:brute.threads" },
    { "1.3.6.1.4.1.25623.1.0.104043:entry:brute.delay"
      "1.3.6.1.4.1.25623.1.0.104043:11:entry:brute.delay" },
    { "1.3.6.1.4.1.25623.1.0.104044:entry:userdb"
      "1.3.6.1.4.1.25623.1.0.104044:1:entry:userdb" },
    { "1.3.6.1.4.1.25623.1.0.104044:entry:unpwdb.passlimit"
      "1.3.6.1.4.1.25623.1.0.104044:2:entry:unpwdb.passlimit" },
    { "1.3.6.1.4.1.25623.1.0.104044:entry:passdb"
      "1.3.6.1.4.1.25623.1.0.104044:3:entry:passdb" },
    { "1.3.6.1.4.1.25623.1.0.104044:entry:unpwdb.userlimit"
      "1.3.6.1.4.1.25623.1.0.104044:4:entry:unpwdb.userlimit" },
    { "1.3.6.1.4.1.25623.1.0.104044:entry:unpwdb.timelimit"
      "1.3.6.1.4.1.25623.1.0.104044:5:entry:unpwdb.timelimit" },
    { "1.3.6.1.4.1.25623.1.0.104046:entry:dns"
      "1.3.6.1.4.1.25623.1.0.104046:1:entry:dns" },
    { "1.3.6.1.4.1.25623.1.0.104047:entry:snmpcommunity"
      "1.3.6.1.4.1.25623.1.0.104047:1:entry:snmpcommunity" },
    { "1.3.6.1.4.1.25623.1.0.104048:entry:firewalk.ttl"
      "1.3.6.1.4.1.25623.1.0.104048:1:entry:firewalk.ttl" },
    { "1.3.6.1.4.1.25623.1.0.104048:entry:firewalk.gateway"
      "1.3.6.1.4.1.25623.1.0.104048:2:entry:firewalk.gateway" },
    { "1.3.6.1.4.1.25623.1.0.104050:entry:mysqluser"
      "1.3.6.1.4.1.25623.1.0.104050:1:entry:mysqluser" },
    { "1.3.6.1.4.1.25623.1.0.104050:entry:mysqlpass"
      "1.3.6.1.4.1.25623.1.0.104050:2:entry:mysqlpass" },
    { "1.3.6.1.4.1.25623.1.0.104051:entry:brute.firstonly"
      "1.3.6.1.4.1.25623.1.0.104051:1:entry:brute.firstonly" },
    { "1.3.6.1.4.1.25623.1.0.104051:entry:brute.unique"
      "1.3.6.1.4.1.25623.1.0.104051:2:entry:brute.unique" },
    { "1.3.6.1.4.1.25623.1.0.104051:entry:brute.retries"
      "1.3.6.1.4.1.25623.1.0.104051:3:entry:brute.retries" },
    { "1.3.6.1.4.1.25623.1.0.104051:entry:brute.mode"
      "1.3.6.1.4.1.25623.1.0.104051:4:entry:brute.mode" },
    { "1.3.6.1.4.1.25623.1.0.104051:entry:brute.useraspass"
      "1.3.6.1.4.1.25623.1.0.104051:5:entry:brute.useraspass" },
    { "1.3.6.1.4.1.25623.1.0.104051:entry:brute.passonly"
      "1.3.6.1.4.1.25623.1.0.104051:6:entry:brute.passonly" },
    { "1.3.6.1.4.1.25623.1.0.104051:entry:brute.credfile"
      "1.3.6.1.4.1.25623.1.0.104051:7:entry:brute.credfile" },
    { "1.3.6.1.4.1.25623.1.0.104051:entry:brute.threads"
      "1.3.6.1.4.1.25623.1.0.104051:8:entry:brute.threads" },
    { "1.3.6.1.4.1.25623.1.0.104051:entry:brute.delay"
      "1.3.6.1.4.1.25623.1.0.104051:9:entry:brute.delay" },
    { "1.3.6.1.4.1.25623.1.0.104052:entry:netbus-info.password"
      "1.3.6.1.4.1.25623.1.0.104052:1:entry:netbus-info.password" },
    { "1.3.6.1.4.1.25623.1.0.104054:entry:userdb"
      "1.3.6.1.4.1.25623.1.0.104054:1:entry:userdb" },
    { "1.3.6.1.4.1.25623.1.0.104054:entry:unpwdb.passlimit"
      "1.3.6.1.4.1.25623.1.0.104054:2:entry:unpwdb.passlimit" },
    { "1.3.6.1.4.1.25623.1.0.104054:entry:passdb"
      "1.3.6.1.4.1.25623.1.0.104054:3:entry:passdb" },
    { "1.3.6.1.4.1.25623.1.0.104054:entry:unpwdb.userlimit"
      "1.3.6.1.4.1.25623.1.0.104054:4:entry:unpwdb.userlimit" },
    { "1.3.6.1.4.1.25623.1.0.104054:entry:unpwdb.timelimit"
      "1.3.6.1.4.1.25623.1.0.104054:5:entry:unpwdb.timelimit" },
    { "1.3.6.1.4.1.25623.1.0.104056:entry:ssh_hostkey"
      "1.3.6.1.4.1.25623.1.0.104056:1:entry:ssh_hostkey" },
    { "1.3.6.1.4.1.25623.1.0.104058:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.104058:1:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.104058:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.104058:2:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.104058:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.104058:3:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.104058:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.104058:4:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.104060:entry:snmpcommunity"
      "1.3.6.1.4.1.25623.1.0.104060:1:entry:snmpcommunity" },
    { "1.3.6.1.4.1.25623.1.0.104061:entry:dns-zone-transfer.server"
      "1.3.6.1.4.1.25623.1.0.104061:1:entry:dns-zone-transfer.server" },
    { "1.3.6.1.4.1.25623.1.0.104061:entry:dns-zone-transfer.addall"
      "1.3.6.1.4.1.25623.1.0.104061:2:entry:dns-zone-transfer.addall" },
    { "1.3.6.1.4.1.25623.1.0.104061:entry:dns-zone-transfer.port"
      "1.3.6.1.4.1.25623.1.0.104061:3:entry:dns-zone-transfer.port" },
    { "1.3.6.1.4.1.25623.1.0.104061:entry:dns-zone-transfer.domain"
      "1.3.6.1.4.1.25623.1.0.104061:4:entry:dns-zone-transfer.domain" },
    { "1.3.6.1.4.1.25623.1.0.104062:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.104062:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.104062:entry:whodb"
      "1.3.6.1.4.1.25623.1.0.104062:2:entry:whodb" },
    { "1.3.6.1.4.1.25623.1.0.104062:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.104062:3:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.104063:entry:probeport"
      "1.3.6.1.4.1.25623.1.0.104063:1:entry:probeport" },
    { "1.3.6.1.4.1.25623.1.0.104064:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.104064:1:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.104064:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.104064:2:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.104064:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.104064:3:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.104064:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.104064:4:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.104065:entry:fake_requests"
      "1.3.6.1.4.1.25623.1.0.104065:1:entry:fake_requests" },
    { "1.3.6.1.4.1.25623.1.0.104065:entry:requests"
      "1.3.6.1.4.1.25623.1.0.104065:2:entry:requests" },
    { "1.3.6.1.4.1.25623.1.0.104065:entry:randomize_mac"
      "1.3.6.1.4.1.25623.1.0.104065:3:entry:randomize_mac" },
    { "1.3.6.1.4.1.25623.1.0.104065:entry:dhcptype"
      "1.3.6.1.4.1.25623.1.0.104065:4:entry:dhcptype" },
    { "1.3.6.1.4.1.25623.1.0.104066:entry:dnssd.services"
      "1.3.6.1.4.1.25623.1.0.104066:1:entry:dnssd.services" },
    { "1.3.6.1.4.1.25623.1.0.104068:entry:hostmap.prefix"
      "1.3.6.1.4.1.25623.1.0.104068:1:entry:hostmap.prefix" },
    { "1.3.6.1.4.1.25623.1.0.104068:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.104068:2:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.104068:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.104068:3:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.104071:entry:mysqluser"
      "1.3.6.1.4.1.25623.1.0.104071:1:entry:mysqluser" },
    { "1.3.6.1.4.1.25623.1.0.104071:entry:mysqlpass"
      "1.3.6.1.4.1.25623.1.0.104071:2:entry:mysqlpass" },
    { "1.3.6.1.4.1.25623.1.0.104072:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.104072:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.104072:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.104072:2:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.104073:entry:userdb"
      "1.3.6.1.4.1.25623.1.0.104073:1:entry:userdb" },
    { "1.3.6.1.4.1.25623.1.0.104073:entry:drda-brute.threads"
      "1.3.6.1.4.1.25623.1.0.104073:2:entry:drda-brute.threads" },
    { "1.3.6.1.4.1.25623.1.0.104073:entry:unpwdb.userlimit"
      "1.3.6.1.4.1.25623.1.0.104073:3:entry:unpwdb.userlimit" },
    { "1.3.6.1.4.1.25623.1.0.104073:entry:unpwdb.passlimit"
      "1.3.6.1.4.1.25623.1.0.104073:4:entry:unpwdb.passlimit" },
    { "1.3.6.1.4.1.25623.1.0.104073:entry:drda-brute.dbname"
      "1.3.6.1.4.1.25623.1.0.104073:5:entry:drda-brute.dbname" },
    { "1.3.6.1.4.1.25623.1.0.104073:entry:unpwdb.timelimit"
      "1.3.6.1.4.1.25623.1.0.104073:6:entry:unpwdb.timelimit" },
    { "1.3.6.1.4.1.25623.1.0.104073:entry:passdb"
      "1.3.6.1.4.1.25623.1.0.104073:7:entry:passdb" },
    { "1.3.6.1.4.1.25623.1.0.104074:entry:gopher-ls.maxfiles"
      "1.3.6.1.4.1.25623.1.0.104074:1:entry:gopher-ls.maxfiles" },
    { "1.3.6.1.4.1.25623.1.0.104075:entry:http-methods.url-path"
      "1.3.6.1.4.1.25623.1.0.104075:1:entry:http-methods.url-path" },
    { "1.3.6.1.4.1.25623.1.0.104075:entry:http-methods.retest"
      "1.3.6.1.4.1.25623.1.0.104075:2:entry:http-methods.retest" },
    { "1.3.6.1.4.1.25623.1.0.104075:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.104075:3:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.104075:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.104075:4:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.104076:entry:nfs.version"
      "1.3.6.1.4.1.25623.1.0.104076:1:entry:nfs.version" },
    { "1.3.6.1.4.1.25623.1.0.104076:entry:nfs-ls.human"
      "1.3.6.1.4.1.25623.1.0.104076:2:entry:nfs-ls.human" },
    { "1.3.6.1.4.1.25623.1.0.104076:entry:nfs-ls.maxfiles"
      "1.3.6.1.4.1.25623.1.0.104076:3:entry:nfs-ls.maxfiles" },
    { "1.3.6.1.4.1.25623.1.0.104076:entry:nfs-ls.time"
      "1.3.6.1.4.1.25623.1.0.104076:4:entry:nfs-ls.time" },
    { "1.3.6.1.4.1.25623.1.0.104076:entry:mount.version"
      "1.3.6.1.4.1.25623.1.0.104076:5:entry:mount.version" },
    { "1.3.6.1.4.1.25623.1.0.104076:entry:rpc.protocol"
      "1.3.6.1.4.1.25623.1.0.104076:6:entry:rpc.protocol" },
    { "1.3.6.1.4.1.25623.1.0.104077:entry:mssql.timeout"
      "1.3.6.1.4.1.25623.1.0.104077:1:entry:mssql.timeout" },
    { "1.3.6.1.4.1.25623.1.0.104077:entry:mssql-query.query"
      "1.3.6.1.4.1.25623.1.0.104077:2:entry:mssql-query.query" },
    { "1.3.6.1.4.1.25623.1.0.104079:entry:snmplist"
      "1.3.6.1.4.1.25623.1.0.104079:1:entry:snmplist" },
    { "1.3.6.1.4.1.25623.1.0.104079:entry:snmpcommunity"
      "1.3.6.1.4.1.25623.1.0.104079:2:entry:snmpcommunity" },
    { "1.3.6.1.4.1.25623.1.0.104080:entry:pjl_ready_message"
      "1.3.6.1.4.1.25623.1.0.104080:1:entry:pjl_ready_message" },
    { "1.3.6.1.4.1.25623.1.0.104081:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.104081:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.104081:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.104081:2:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.104082:entry:ldap.base"
      "1.3.6.1.4.1.25623.1.0.104082:1:entry:ldap.base" },
    { "1.3.6.1.4.1.25623.1.0.104082:entry:passdb"
      "1.3.6.1.4.1.25623.1.0.104082:2:entry:passdb" },
    { "1.3.6.1.4.1.25623.1.0.104082:entry:userdb"
      "1.3.6.1.4.1.25623.1.0.104082:3:entry:userdb" },
    { "1.3.6.1.4.1.25623.1.0.104082:entry:unpwdb.passlimit"
      "1.3.6.1.4.1.25623.1.0.104082:4:entry:unpwdb.passlimit" },
    { "1.3.6.1.4.1.25623.1.0.104082:entry:unpwdb.userlimit"
      "1.3.6.1.4.1.25623.1.0.104082:5:entry:unpwdb.userlimit" },
    { "1.3.6.1.4.1.25623.1.0.104082:entry:unpwdb.timelimit"
      "1.3.6.1.4.1.25623.1.0.104082:6:entry:unpwdb.timelimit" },
    { "1.3.6.1.4.1.25623.1.0.104083:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.104083:1:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.104083:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.104083:2:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.104083:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.104083:3:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.104083:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.104083:4:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.104084:entry:userdb"
      "1.3.6.1.4.1.25623.1.0.104084:1:entry:userdb" },
    { "1.3.6.1.4.1.25623.1.0.104084:entry:passdb"
      "1.3.6.1.4.1.25623.1.0.104084:2:entry:passdb" },
    { "1.3.6.1.4.1.25623.1.0.104084:entry:tns.sid"
      "1.3.6.1.4.1.25623.1.0.104084:3:entry:tns.sid" },
    { "1.3.6.1.4.1.25623.1.0.104084:entry:unpwdb.userlimit"
      "1.3.6.1.4.1.25623.1.0.104084:4:entry:unpwdb.userlimit" },
    { "1.3.6.1.4.1.25623.1.0.104084:entry:unpwdb.passlimit"
      "1.3.6.1.4.1.25623.1.0.104084:5:entry:unpwdb.passlimit" },
    { "1.3.6.1.4.1.25623.1.0.104084:entry:oracle-enum-users.sid"
      "1.3.6.1.4.1.25623.1.0.104084:6:entry:oracle-enum-users.sid" },
    { "1.3.6.1.4.1.25623.1.0.104084:entry:unpwdb.timelimit"
      "1.3.6.1.4.1.25623.1.0.104084:7:entry:unpwdb.timelimit" },
    { "1.3.6.1.4.1.25623.1.0.104085:entry:informix.instance"
      "1.3.6.1.4.1.25623.1.0.104085:1:entry:informix.instance" },
    { "1.3.6.1.4.1.25623.1.0.104085:entry:informix-query.database"
      "1.3.6.1.4.1.25623.1.0.104085:2:entry:informix-query.database" },
    { "1.3.6.1.4.1.25623.1.0.104085:entry:informix-query.username"
      "1.3.6.1.4.1.25623.1.0.104085:3:entry:informix-query.username" },
    { "1.3.6.1.4.1.25623.1.0.104085:entry:informix-query.query"
      "1.3.6.1.4.1.25623.1.0.104085:4:entry:informix-query.query" },
    { "1.3.6.1.4.1.25623.1.0.104085:entry:informix-query.password"
      "1.3.6.1.4.1.25623.1.0.104085:5:entry:informix-query.password" },
    { "1.3.6.1.4.1.25623.1.0.104086:entry:mssql-hasdbaccess.limit"
      "1.3.6.1.4.1.25623.1.0.104086:1:entry:mssql-hasdbaccess.limit" },
    { "1.3.6.1.4.1.25623.1.0.104086:entry:mssql.password"
      "1.3.6.1.4.1.25623.1.0.104086:2:entry:mssql.password" },
    { "1.3.6.1.4.1.25623.1.0.104086:entry:mssql.username"
      "1.3.6.1.4.1.25623.1.0.104086:3:entry:mssql.username" },
    { "1.3.6.1.4.1.25623.1.0.104086:entry:mssql.timeout"
      "1.3.6.1.4.1.25623.1.0.104086:4:entry:mssql.timeout" },
    { "1.3.6.1.4.1.25623.1.0.104087:entry:brute.unique"
      "1.3.6.1.4.1.25623.1.0.104087:1:entry:brute.unique" },
    { "1.3.6.1.4.1.25623.1.0.104087:entry:http-form-brute.hostname"
      "1.3.6.1.4.1.25623.1.0.104087:2:entry:http-form-brute.hostname" },
    { "1.3.6.1.4.1.25623.1.0.104087:entry:brute.retries"
      "1.3.6.1.4.1.25623.1.0.104087:3:entry:brute.retries" },
    { "1.3.6.1.4.1.25623.1.0.104087:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.104087:4:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.104087:entry:brute.credfile"
      "1.3.6.1.4.1.25623.1.0.104087:5:entry:brute.credfile" },
    { "1.3.6.1.4.1.25623.1.0.104087:entry:brute.threads"
      "1.3.6.1.4.1.25623.1.0.104087:6:entry:brute.threads" },
    { "1.3.6.1.4.1.25623.1.0.104087:entry:http-form-brute.passvar"
      "1.3.6.1.4.1.25623.1.0.104087:7:entry:http-form-brute.passvar" },
    { "1.3.6.1.4.1.25623.1.0.104087:entry:http-form-brute.uservar"
      "1.3.6.1.4.1.25623.1.0.104087:8:entry:http-form-brute.uservar" },
    { "1.3.6.1.4.1.25623.1.0.104087:entry:brute.firstonly"
      "1.3.6.1.4.1.25623.1.0.104087:9:entry:brute.firstonly" },
    { "1.3.6.1.4.1.25623.1.0.104087:entry:brute.passonly"
      "1.3.6.1.4.1.25623.1.0.104087:10:entry:brute.passonly" },
    { "1.3.6.1.4.1.25623.1.0.104087:entry:brute.mode"
      "1.3.6.1.4.1.25623.1.0.104087:11:entry:brute.mode" },
    { "1.3.6.1.4.1.25623.1.0.104087:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.104087:12:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.104087:entry:http-form-brute.path"
      "1.3.6.1.4.1.25623.1.0.104087:13:entry:http-form-brute.path" },
    { "1.3.6.1.4.1.25623.1.0.104087:entry:brute.useraspass"
      "1.3.6.1.4.1.25623.1.0.104087:14:entry:brute.useraspass" },
    { "1.3.6.1.4.1.25623.1.0.104087:entry:brute.delay"
      "1.3.6.1.4.1.25623.1.0.104087:15:entry:brute.delay" },
    { "1.3.6.1.4.1.25623.1.0.104094:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.104094:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.104094:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.104094:2:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.104096:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.104096:1:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.104096:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.104096:2:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.104096:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.104096:3:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.104096:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.104096:4:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.104097:entry:mssql-tables.maxdb"
      "1.3.6.1.4.1.25623.1.0.104097:1:entry:mssql-tables.maxdb" },
    { "1.3.6.1.4.1.25623.1.0.104097:entry:mssql.timeout"
      "1.3.6.1.4.1.25623.1.0.104097:2:entry:mssql.timeout" },
    { "1.3.6.1.4.1.25623.1.0.104097:entry:mssql.password"
      "1.3.6.1.4.1.25623.1.0.104097:3:entry:mssql.password" },
    { "1.3.6.1.4.1.25623.1.0.104097:entry:mssql.username"
      "1.3.6.1.4.1.25623.1.0.104097:4:entry:mssql.username" },
    { "1.3.6.1.4.1.25623.1.0.104097:entry:mssql-tables.keywords"
      "1.3.6.1.4.1.25623.1.0.104097:5:entry:mssql-tables.keywords" },
    { "1.3.6.1.4.1.25623.1.0.104097:entry:mssql-tables.maxtables"
      "1.3.6.1.4.1.25623.1.0.104097:6:entry:mssql-tables.maxtables" },
    { "1.3.6.1.4.1.25623.1.0.104099:entry:domcon-cmd.pass"
      "1.3.6.1.4.1.25623.1.0.104099:1:entry:domcon-cmd.pass" },
    { "1.3.6.1.4.1.25623.1.0.104099:entry:domcon-cmd.cmd"
      "1.3.6.1.4.1.25623.1.0.104099:2:entry:domcon-cmd.cmd" },
    { "1.3.6.1.4.1.25623.1.0.104099:entry:domcon-cmd.user"
      "1.3.6.1.4.1.25623.1.0.104099:3:entry:domcon-cmd.user" },
    { "1.3.6.1.4.1.25623.1.0.104100:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.104100:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.104100:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.104100:2:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.104101:entry:snmpcommunity"
      "1.3.6.1.4.1.25623.1.0.104101:1:entry:snmpcommunity" },
    { "1.3.6.1.4.1.25623.1.0.104102:entry:userdb"
      "1.3.6.1.4.1.25623.1.0.104102:1:entry:userdb" },
    { "1.3.6.1.4.1.25623.1.0.104102:entry:unpwdb.timelimit"
      "1.3.6.1.4.1.25623.1.0.104102:2:entry:unpwdb.timelimit" },
    { "1.3.6.1.4.1.25623.1.0.104102:entry:unpwdb.userlimit"
      "1.3.6.1.4.1.25623.1.0.104102:3:entry:unpwdb.userlimit" },
    { "1.3.6.1.4.1.25623.1.0.104102:entry:passdb"
      "1.3.6.1.4.1.25623.1.0.104102:4:entry:passdb" },
    { "1.3.6.1.4.1.25623.1.0.104102:entry:passlimit"
      "1.3.6.1.4.1.25623.1.0.104102:5:entry:passlimit" },
    { "1.3.6.1.4.1.25623.1.0.104102:entry:userlimit"
      "1.3.6.1.4.1.25623.1.0.104102:6:entry:userlimit" },
    { "1.3.6.1.4.1.25623.1.0.104102:entry:limit"
      "1.3.6.1.4.1.25623.1.0.104102:7:entry:limit" },
    { "1.3.6.1.4.1.25623.1.0.104102:entry:unpwdb.passlimit"
      "1.3.6.1.4.1.25623.1.0.104102:8:entry:unpwdb.passlimit" },
    { "1.3.6.1.4.1.25623.1.0.104104:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.104104:1:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.104104:entry:stuxnet-detect.save"
      "1.3.6.1.4.1.25623.1.0.104104:2:entry:stuxnet-detect.save" },
    { "1.3.6.1.4.1.25623.1.0.104104:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.104104:3:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.104104:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.104104:4:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.104104:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.104104:5:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.104106:entry:snmpcommunity"
      "1.3.6.1.4.1.25623.1.0.104106:1:entry:snmpcommunity" },
    { "1.3.6.1.4.1.25623.1.0.104107:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.104107:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.104107:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.104107:2:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.104108:entry:smtp-open-relay.ip"
      "1.3.6.1.4.1.25623.1.0.104108:1:entry:smtp-open-relay.ip" },
    { "1.3.6.1.4.1.25623.1.0.104108:entry:smtp-open-relay.to"
      "1.3.6.1.4.1.25623.1.0.104108:2:entry:smtp-open-relay.to" },
    { "1.3.6.1.4.1.25623.1.0.104108:entry:smtp-open-relay.from"
      "1.3.6.1.4.1.25623.1.0.104108:3:entry:smtp-open-relay.from" },
    { "1.3.6.1.4.1.25623.1.0.104108:entry:smtp-open-relay.domain"
      "1.3.6.1.4.1.25623.1.0.104108:4:entry:smtp-open-relay.domain" },
    { "1.3.6.1.4.1.25623.1.0.104109:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.104109:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.104109:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.104109:2:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.104113:entry:userdb"
      "1.3.6.1.4.1.25623.1.0.104113:1:entry:userdb" },
    { "1.3.6.1.4.1.25623.1.0.104113:entry:smtp-enum-users.domain"
      "1.3.6.1.4.1.25623.1.0.104113:2:entry:smtp-enum-users.domain" },
    { "1.3.6.1.4.1.25623.1.0.104113:entry:unpwdb.passlimit"
      "1.3.6.1.4.1.25623.1.0.104113:3:entry:unpwdb.passlimit" },
    { "1.3.6.1.4.1.25623.1.0.104113:entry:unpwdb.userlimit"
      "1.3.6.1.4.1.25623.1.0.104113:4:entry:unpwdb.userlimit" },
    { "1.3.6.1.4.1.25623.1.0.104113:entry:unpwdb.timelimit"
      "1.3.6.1.4.1.25623.1.0.104113:5:entry:unpwdb.timelimit" },
    { "1.3.6.1.4.1.25623.1.0.104113:entry:smtp-enum-users.methods"
      "1.3.6.1.4.1.25623.1.0.104113:6:entry:smtp-enum-users.methods" },
    { "1.3.6.1.4.1.25623.1.0.104113:entry:passdb"
      "1.3.6.1.4.1.25623.1.0.104113:7:entry:passdb" },
    { "1.3.6.1.4.1.25623.1.0.104114:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.104114:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.104114:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.104114:2:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.104115:entry:informix.instance"
      "1.3.6.1.4.1.25623.1.0.104115:1:entry:informix.instance" },
    { "1.3.6.1.4.1.25623.1.0.104115:entry:informix-query.username"
      "1.3.6.1.4.1.25623.1.0.104115:2:entry:informix-query.username" },
    { "1.3.6.1.4.1.25623.1.0.104115:entry:informix-query.password"
      "1.3.6.1.4.1.25623.1.0.104115:3:entry:informix-query.password" },
    { "1.3.6.1.4.1.25623.1.0.104116:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.104116:1:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.104116:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.104116:2:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.104116:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.104116:3:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.104116:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.104116:4:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.104116:entry:safe"
      "1.3.6.1.4.1.25623.1.0.104116:5:entry:safe" },
    { "1.3.6.1.4.1.25623.1.0.104116:entry:unsafe"
      "1.3.6.1.4.1.25623.1.0.104116:6:entry:unsafe" },
    { "1.3.6.1.4.1.25623.1.0.104117:entry:oraclesids"
      "1.3.6.1.4.1.25623.1.0.104117:1:entry:oraclesids" },
    { "1.3.6.1.4.1.25623.1.0.104118:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.104118:1:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.104118:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.104118:2:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.104118:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.104118:3:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.104118:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.104118:4:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.104119:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.104119:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.104119:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.104119:2:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.104121:entry:aggressive"
      "1.3.6.1.4.1.25623.1.0.104121:1:entry:aggressive" },
    { "1.3.6.1.4.1.25623.1.0.104122:entry:mssql.timeout"
      "1.3.6.1.4.1.25623.1.0.104122:1:entry:mssql.timeout" },
    { "1.3.6.1.4.1.25623.1.0.104122:entry:mssql.password"
      "1.3.6.1.4.1.25623.1.0.104122:2:entry:mssql.password" },
    { "1.3.6.1.4.1.25623.1.0.104122:entry:mssql.username"
      "1.3.6.1.4.1.25623.1.0.104122:3:entry:mssql.username" },
    { "1.3.6.1.4.1.25623.1.0.104122:entry:mssql-config.showall"
      "1.3.6.1.4.1.25623.1.0.104122:4:entry:mssql-config.showall" },
    { "1.3.6.1.4.1.25623.1.0.104123:entry:brute.firstonly"
      "1.3.6.1.4.1.25623.1.0.104123:1:entry:brute.firstonly" },
    { "1.3.6.1.4.1.25623.1.0.104123:entry:brute.unique"
      "1.3.6.1.4.1.25623.1.0.104123:2:entry:brute.unique" },
    { "1.3.6.1.4.1.25623.1.0.104123:entry:brute.retries"
      "1.3.6.1.4.1.25623.1.0.104123:3:entry:brute.retries" },
    { "1.3.6.1.4.1.25623.1.0.104123:entry:svn-brute.force"
      "1.3.6.1.4.1.25623.1.0.104123:4:entry:svn-brute.force" },
    { "1.3.6.1.4.1.25623.1.0.104123:entry:brute.mode"
      "1.3.6.1.4.1.25623.1.0.104123:5:entry:brute.mode" },
    { "1.3.6.1.4.1.25623.1.0.104123:entry:brute.useraspass"
      "1.3.6.1.4.1.25623.1.0.104123:6:entry:brute.useraspass" },
    { "1.3.6.1.4.1.25623.1.0.104123:entry:brute.passonly"
      "1.3.6.1.4.1.25623.1.0.104123:7:entry:brute.passonly" },
    { "1.3.6.1.4.1.25623.1.0.104123:entry:brute.credfile"
      "1.3.6.1.4.1.25623.1.0.104123:8:entry:brute.credfile" },
    { "1.3.6.1.4.1.25623.1.0.104123:entry:brute.delay"
      "1.3.6.1.4.1.25623.1.0.104123:9:entry:brute.delay" },
    { "1.3.6.1.4.1.25623.1.0.104123:entry:svn-brute.repo"
      "1.3.6.1.4.1.25623.1.0.104123:10:entry:svn-brute.repo" },
    { "1.3.6.1.4.1.25623.1.0.104123:entry:brute.threads"
      "1.3.6.1.4.1.25623.1.0.104123:11:entry:brute.threads" },
    { "1.3.6.1.4.1.25623.1.0.104124:entry:smtp-commands.domain"
      "1.3.6.1.4.1.25623.1.0.104124:1:entry:smtp-commands.domain" },
    { "1.3.6.1.4.1.25623.1.0.104126:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.104126:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.104126:entry:sql-injection.start"
      "1.3.6.1.4.1.25623.1.0.104126:2:entry:sql-injection.start" },
    { "1.3.6.1.4.1.25623.1.0.104126:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.104126:3:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.104126:entry:sql-injection.maxdepth"
      "1.3.6.1.4.1.25623.1.0.104126:4:entry:sql-injection.maxdepth" },
    { "1.3.6.1.4.1.25623.1.0.104127:entry:brute.firstonly"
      "1.3.6.1.4.1.25623.1.0.104127:1:entry:brute.firstonly" },
    { "1.3.6.1.4.1.25623.1.0.104127:entry:brute.unique"
      "1.3.6.1.4.1.25623.1.0.104127:2:entry:brute.unique" },
    { "1.3.6.1.4.1.25623.1.0.104127:entry:brute.retries"
      "1.3.6.1.4.1.25623.1.0.104127:3:entry:brute.retries" },
    { "1.3.6.1.4.1.25623.1.0.104127:entry:brute.mode"
      "1.3.6.1.4.1.25623.1.0.104127:4:entry:brute.mode" },
    { "1.3.6.1.4.1.25623.1.0.104127:entry:informix.instance"
      "1.3.6.1.4.1.25623.1.0.104127:5:entry:informix.instance" },
    { "1.3.6.1.4.1.25623.1.0.104127:entry:brute.useraspass"
      "1.3.6.1.4.1.25623.1.0.104127:6:entry:brute.useraspass" },
    { "1.3.6.1.4.1.25623.1.0.104127:entry:brute.passonly"
      "1.3.6.1.4.1.25623.1.0.104127:7:entry:brute.passonly" },
    { "1.3.6.1.4.1.25623.1.0.104127:entry:brute.credfile"
      "1.3.6.1.4.1.25623.1.0.104127:8:entry:brute.credfile" },
    { "1.3.6.1.4.1.25623.1.0.104127:entry:brute.threads"
      "1.3.6.1.4.1.25623.1.0.104127:9:entry:brute.threads" },
    { "1.3.6.1.4.1.25623.1.0.104127:entry:brute.delay"
      "1.3.6.1.4.1.25623.1.0.104127:10:entry:brute.delay" },
    { "1.3.6.1.4.1.25623.1.0.104130:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.104130:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.104130:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.104130:2:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.104130:entry:daap_item_limit"
      "1.3.6.1.4.1.25623.1.0.104130:3:entry:daap_item_limit" },
    { "1.3.6.1.4.1.25623.1.0.104132:entry:userdb"
      "1.3.6.1.4.1.25623.1.0.104132:1:entry:userdb" },
    { "1.3.6.1.4.1.25623.1.0.104132:entry:unpwdb.passlimit"
      "1.3.6.1.4.1.25623.1.0.104132:2:entry:unpwdb.passlimit" },
    { "1.3.6.1.4.1.25623.1.0.104132:entry:passdb"
      "1.3.6.1.4.1.25623.1.0.104132:3:entry:passdb" },
    { "1.3.6.1.4.1.25623.1.0.104132:entry:unpwdb.userlimit"
      "1.3.6.1.4.1.25623.1.0.104132:4:entry:unpwdb.userlimit" },
    { "1.3.6.1.4.1.25623.1.0.104132:entry:unpwdb.timelimit"
      "1.3.6.1.4.1.25623.1.0.104132:5:entry:unpwdb.timelimit" },
    { "1.3.6.1.4.1.25623.1.0.104134:entry:mysqluser"
      "1.3.6.1.4.1.25623.1.0.104134:1:entry:mysqluser" },
    { "1.3.6.1.4.1.25623.1.0.104134:entry:mysqlpass"
      "1.3.6.1.4.1.25623.1.0.104134:2:entry:mysqlpass" },
    { "1.3.6.1.4.1.25623.1.0.104135:entry:proxy.url"
      "1.3.6.1.4.1.25623.1.0.104135:1:entry:proxy.url" },
    { "1.3.6.1.4.1.25623.1.0.104135:entry:proxy.pattern"
      "1.3.6.1.4.1.25623.1.0.104135:2:entry:proxy.pattern" },
    { "1.3.6.1.4.1.25623.1.0.104136:entry:mssql.timeout"
      "1.3.6.1.4.1.25623.1.0.104136:1:entry:mssql.timeout" },
    { "1.3.6.1.4.1.25623.1.0.104138:entry:pgsql.nossl"
      "1.3.6.1.4.1.25623.1.0.104138:1:entry:pgsql.nossl" },
    { "1.3.6.1.4.1.25623.1.0.104138:entry:pgsql.version"
      "1.3.6.1.4.1.25623.1.0.104138:2:entry:pgsql.version" },
    { "1.3.6.1.4.1.25623.1.0.104138:entry:passdb"
      "1.3.6.1.4.1.25623.1.0.104138:3:entry:passdb" },
    { "1.3.6.1.4.1.25623.1.0.104138:entry:userdb"
      "1.3.6.1.4.1.25623.1.0.104138:4:entry:userdb" },
    { "1.3.6.1.4.1.25623.1.0.104138:entry:unpwdb.passlimit"
      "1.3.6.1.4.1.25623.1.0.104138:5:entry:unpwdb.passlimit" },
    { "1.3.6.1.4.1.25623.1.0.104138:entry:unpwdb.userlimit"
      "1.3.6.1.4.1.25623.1.0.104138:6:entry:unpwdb.userlimit" },
    { "1.3.6.1.4.1.25623.1.0.104138:entry:unpwdb.timelimit"
      "1.3.6.1.4.1.25623.1.0.104138:7:entry:unpwdb.timelimit" },
    { "1.3.6.1.4.1.25623.1.0.104139:entry:resolveall.hosts"
      "1.3.6.1.4.1.25623.1.0.104139:1:entry:resolveall.hosts" },
    { "1.3.6.1.4.1.25623.1.0.104141:entry:brute.firstonly"
      "1.3.6.1.4.1.25623.1.0.104141:1:entry:brute.firstonly" },
    { "1.3.6.1.4.1.25623.1.0.104141:entry:brute.unique"
      "1.3.6.1.4.1.25623.1.0.104141:2:entry:brute.unique" },
    { "1.3.6.1.4.1.25623.1.0.104141:entry:brute.retries"
      "1.3.6.1.4.1.25623.1.0.104141:3:entry:brute.retries" },
    { "1.3.6.1.4.1.25623.1.0.104141:entry:brute.mode"
      "1.3.6.1.4.1.25623.1.0.104141:4:entry:brute.mode" },
    { "1.3.6.1.4.1.25623.1.0.104141:entry:brute.useraspass"
      "1.3.6.1.4.1.25623.1.0.104141:5:entry:brute.useraspass" },
    { "1.3.6.1.4.1.25623.1.0.104141:entry:brute.passonly"
      "1.3.6.1.4.1.25623.1.0.104141:6:entry:brute.passonly" },
    { "1.3.6.1.4.1.25623.1.0.104141:entry:brute.credfile"
      "1.3.6.1.4.1.25623.1.0.104141:7:entry:brute.credfile" },
    { "1.3.6.1.4.1.25623.1.0.104141:entry:brute.threads"
      "1.3.6.1.4.1.25623.1.0.104141:8:entry:brute.threads" },
    { "1.3.6.1.4.1.25623.1.0.104141:entry:brute.delay"
      "1.3.6.1.4.1.25623.1.0.104141:9:entry:brute.delay" },
    { "1.3.6.1.4.1.25623.1.0.104143:entry:dnssd.services"
      "1.3.6.1.4.1.25623.1.0.104143:1:entry:dnssd.services" },
    { "1.3.6.1.4.1.25623.1.0.104145:entry:userdb"
      "1.3.6.1.4.1.25623.1.0.104145:1:entry:userdb" },
    { "1.3.6.1.4.1.25623.1.0.104145:entry:brutelimit"
      "1.3.6.1.4.1.25623.1.0.104145:2:entry:brutelimit" },
    { "1.3.6.1.4.1.25623.1.0.104145:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.104145:3:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.104145:entry:unpwdb.timelimit"
      "1.3.6.1.4.1.25623.1.0.104145:4:entry:unpwdb.timelimit" },
    { "1.3.6.1.4.1.25623.1.0.104145:entry:unpwdb.userlimit"
      "1.3.6.1.4.1.25623.1.0.104145:5:entry:unpwdb.userlimit" },
    { "1.3.6.1.4.1.25623.1.0.104145:entry:smblockout"
      "1.3.6.1.4.1.25623.1.0.104145:6:entry:smblockout" },
    { "1.3.6.1.4.1.25623.1.0.104145:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.104145:7:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.104145:entry:passdb"
      "1.3.6.1.4.1.25623.1.0.104145:8:entry:passdb" },
    { "1.3.6.1.4.1.25623.1.0.104145:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.104145:9:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.104145:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.104145:10:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.104145:entry:canaries"
      "1.3.6.1.4.1.25623.1.0.104145:11:entry:canaries" },
    { "1.3.6.1.4.1.25623.1.0.104145:entry:unpwdb.passlimit"
      "1.3.6.1.4.1.25623.1.0.104145:12:entry:unpwdb.passlimit" },
    { "1.3.6.1.4.1.25623.1.0.104146:entry:afp.password"
      "1.3.6.1.4.1.25623.1.0.104146:1:entry:afp.password" },
    { "1.3.6.1.4.1.25623.1.0.104146:entry:afp.username"
      "1.3.6.1.4.1.25623.1.0.104146:2:entry:afp.username" },
    { "1.3.6.1.4.1.25623.1.0.104147:entry:snmpcommunity"
      "1.3.6.1.4.1.25623.1.0.104147:1:entry:snmpcommunity" },
    { "1.3.6.1.4.1.25623.1.0.104148:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.104148:1:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.104148:entry:str"
      "1.3.6.1.4.1.25623.1.0.104148:2:entry:str" },
    { "1.3.6.1.4.1.25623.1.0.104148:entry:nocipher"
      "1.3.6.1.4.1.25623.1.0.104148:3:entry:nocipher" },
    { "1.3.6.1.4.1.25623.1.0.104148:entry:nocleanup"
      "1.3.6.1.4.1.25623.1.0.104148:4:entry:nocleanup" },
    { "1.3.6.1.4.1.25623.1.0.104148:entry:share"
      "1.3.6.1.4.1.25623.1.0.104148:5:entry:share" },
    { "1.3.6.1.4.1.25623.1.0.104148:entry:sharepath"
      "1.3.6.1.4.1.25623.1.0.104148:6:entry:sharepath" },
    { "1.3.6.1.4.1.25623.1.0.104148:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.104148:7:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.104148:entry:nohide"
      "1.3.6.1.4.1.25623.1.0.104148:8:entry:nohide" },
    { "1.3.6.1.4.1.25623.1.0.104148:entry:key"
      "1.3.6.1.4.1.25623.1.0.104148:9:entry:key" },
    { "1.3.6.1.4.1.25623.1.0.104148:entry:time"
      "1.3.6.1.4.1.25623.1.0.104148:10:entry:time" },
    { "1.3.6.1.4.1.25623.1.0.104148:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.104148:11:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.104148:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.104148:12:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.104148:entry:config"
      "1.3.6.1.4.1.25623.1.0.104148:13:entry:config" },
    { "1.3.6.1.4.1.25623.1.0.104148:entry:cleanup"
      "1.3.6.1.4.1.25623.1.0.104148:14:entry:cleanup" },
    { "1.3.6.1.4.1.25623.1.0.104149:entry:ldap.base"
      "1.3.6.1.4.1.25623.1.0.104149:1:entry:ldap.base" },
    { "1.3.6.1.4.1.25623.1.0.104149:entry:ldap.username"
      "1.3.6.1.4.1.25623.1.0.104149:2:entry:ldap.username" },
    { "1.3.6.1.4.1.25623.1.0.104149:entry:ldap.password"
      "1.3.6.1.4.1.25623.1.0.104149:3:entry:ldap.password" },
    { "1.3.6.1.4.1.25623.1.0.104149:entry:ldap.qfilter"
      "1.3.6.1.4.1.25623.1.0.104149:4:entry:ldap.qfilter" },
    { "1.3.6.1.4.1.25623.1.0.104149:entry:ldap.attrib"
      "1.3.6.1.4.1.25623.1.0.104149:5:entry:ldap.attrib" },
    { "1.3.6.1.4.1.25623.1.0.104149:entry:ldap.maxobjects"
      "1.3.6.1.4.1.25623.1.0.104149:6:entry:ldap.maxobjects" },
    { "1.3.6.1.4.1.25623.1.0.104150:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.104150:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.104150:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.104150:2:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.104151:entry:brute.firstonly"
      "1.3.6.1.4.1.25623.1.0.104151:1:entry:brute.firstonly" },
    { "1.3.6.1.4.1.25623.1.0.104151:entry:brute.unique"
      "1.3.6.1.4.1.25623.1.0.104151:2:entry:brute.unique" },
    { "1.3.6.1.4.1.25623.1.0.104151:entry:brute.retries"
      "1.3.6.1.4.1.25623.1.0.104151:3:entry:brute.retries" },
    { "1.3.6.1.4.1.25623.1.0.104151:entry:brute.mode"
      "1.3.6.1.4.1.25623.1.0.104151:4:entry:brute.mode" },
    { "1.3.6.1.4.1.25623.1.0.104151:entry:brute.useraspass"
      "1.3.6.1.4.1.25623.1.0.104151:5:entry:brute.useraspass" },
    { "1.3.6.1.4.1.25623.1.0.104151:entry:brute.passonly"
      "1.3.6.1.4.1.25623.1.0.104151:6:entry:brute.passonly" },
    { "1.3.6.1.4.1.25623.1.0.104151:entry:brute.credfile"
      "1.3.6.1.4.1.25623.1.0.104151:7:entry:brute.credfile" },
    { "1.3.6.1.4.1.25623.1.0.104151:entry:brute.threads"
      "1.3.6.1.4.1.25623.1.0.104151:8:entry:brute.threads" },
    { "1.3.6.1.4.1.25623.1.0.104151:entry:brute.delay"
      "1.3.6.1.4.1.25623.1.0.104151:9:entry:brute.delay" },
    { "1.3.6.1.4.1.25623.1.0.104152:entry:userdb"
      "1.3.6.1.4.1.25623.1.0.104152:1:entry:userdb" },
    { "1.3.6.1.4.1.25623.1.0.104152:entry:unpwdb.passlimit"
      "1.3.6.1.4.1.25623.1.0.104152:2:entry:unpwdb.passlimit" },
    { "1.3.6.1.4.1.25623.1.0.104152:entry:passdb"
      "1.3.6.1.4.1.25623.1.0.104152:3:entry:passdb" },
    { "1.3.6.1.4.1.25623.1.0.104152:entry:unpwdb.userlimit"
      "1.3.6.1.4.1.25623.1.0.104152:4:entry:unpwdb.userlimit" },
    { "1.3.6.1.4.1.25623.1.0.104152:entry:unpwdb.timelimit"
      "1.3.6.1.4.1.25623.1.0.104152:5:entry:unpwdb.timelimit" },
    { "1.3.6.1.4.1.25623.1.0.104154:entry:proxy.url"
      "1.3.6.1.4.1.25623.1.0.104154:1:entry:proxy.url" },
    { "1.3.6.1.4.1.25623.1.0.104154:entry:proxy.pattern"
      "1.3.6.1.4.1.25623.1.0.104154:2:entry:proxy.pattern" },
    { "1.3.6.1.4.1.25623.1.0.104158:entry:delay"
      "1.3.6.1.4.1.25623.1.0.104158:1:entry:delay" },
    { "1.3.6.1.4.1.25623.1.0.104158:entry:numtrips"
      "1.3.6.1.4.1.25623.1.0.104158:2:entry:numtrips" },
    { "1.3.6.1.4.1.25623.1.0.104158:entry:confidence"
      "1.3.6.1.4.1.25623.1.0.104158:3:entry:confidence" },
    { "1.3.6.1.4.1.25623.1.0.104158:entry:numclosed"
      "1.3.6.1.4.1.25623.1.0.104158:4:entry:numclosed" },
    { "1.3.6.1.4.1.25623.1.0.104158:entry:numopen"
      "1.3.6.1.4.1.25623.1.0.104158:5:entry:numopen" },
    { "1.3.6.1.4.1.25623.1.0.104159:entry:http-enum.basepath"
      "1.3.6.1.4.1.25623.1.0.104159:1:entry:http-enum.basepath" },
    { "1.3.6.1.4.1.25623.1.0.104159:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.104159:2:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.104159:entry:http-enum.category"
      "1.3.6.1.4.1.25623.1.0.104159:3:entry:http-enum.category" },
    { "1.3.6.1.4.1.25623.1.0.104159:entry:http-enum.displayall"
      "1.3.6.1.4.1.25623.1.0.104159:4:entry:http-enum.displayall" },
    { "1.3.6.1.4.1.25623.1.0.104159:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.104159:5:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.104160:entry:nfs.version"
      "1.3.6.1.4.1.25623.1.0.104160:1:entry:nfs.version" },
    { "1.3.6.1.4.1.25623.1.0.104160:entry:mount.version"
      "1.3.6.1.4.1.25623.1.0.104160:2:entry:mount.version" },
    { "1.3.6.1.4.1.25623.1.0.104160:entry:rpc.protocol"
      "1.3.6.1.4.1.25623.1.0.104160:3:entry:rpc.protocol" },
    { "1.3.6.1.4.1.25623.1.0.104161:entry:snmpcommunity"
      "1.3.6.1.4.1.25623.1.0.104161:1:entry:snmpcommunity" },
    { "1.3.6.1.4.1.25623.1.0.104162:entry:ftp-bounce.username"
      "1.3.6.1.4.1.25623.1.0.104162:1:entry:ftp-bounce.username" },
    { "1.3.6.1.4.1.25623.1.0.104162:entry:ftp-bounce.password"
      "1.3.6.1.4.1.25623.1.0.104162:2:entry:ftp-bounce.password" },
    { "1.3.6.1.4.1.25623.1.0.104165:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.104165:1:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.104165:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.104165:2:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.104165:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.104165:3:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.104165:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.104165:4:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.104168:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.104168:1:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.104168:entry:checkall"
      "1.3.6.1.4.1.25623.1.0.104168:2:entry:checkall" },
    { "1.3.6.1.4.1.25623.1.0.104168:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.104168:3:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.104168:entry:checkconficker"
      "1.3.6.1.4.1.25623.1.0.104168:4:entry:checkconficker" },
    { "1.3.6.1.4.1.25623.1.0.104168:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.104168:5:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.104168:entry:realip"
      "1.3.6.1.4.1.25623.1.0.104168:6:entry:realip" },
    { "1.3.6.1.4.1.25623.1.0.104168:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.104168:7:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.104169:entry:snmpcommunity"
      "1.3.6.1.4.1.25623.1.0.104169:1:entry:snmpcommunity" },
    { "1.3.6.1.4.1.25623.1.0.104170:entry:nfs.version"
      "1.3.6.1.4.1.25623.1.0.104170:1:entry:nfs.version" },
    { "1.3.6.1.4.1.25623.1.0.104170:entry:mount.version"
      "1.3.6.1.4.1.25623.1.0.104170:2:entry:mount.version" },
    { "1.3.6.1.4.1.25623.1.0.104170:entry:rpc.protocol"
      "1.3.6.1.4.1.25623.1.0.104170:3:entry:rpc.protocol" },
    { "1.3.6.1.4.1.25623.1.0.104171:entry:userdb"
      "1.3.6.1.4.1.25623.1.0.104171:1:entry:userdb" },
    { "1.3.6.1.4.1.25623.1.0.104171:entry:passdb"
      "1.3.6.1.4.1.25623.1.0.104171:2:entry:passdb" },
    { "1.3.6.1.4.1.25623.1.0.104171:entry:mssql.timeout"
      "1.3.6.1.4.1.25623.1.0.104171:3:entry:mssql.timeout" },
    { "1.3.6.1.4.1.25623.1.0.104171:entry:unpwdb.timelimit"
      "1.3.6.1.4.1.25623.1.0.104171:4:entry:unpwdb.timelimit" },
    { "1.3.6.1.4.1.25623.1.0.104171:entry:unpwdb.userlimit"
      "1.3.6.1.4.1.25623.1.0.104171:5:entry:unpwdb.userlimit" },
    { "1.3.6.1.4.1.25623.1.0.104171:entry:unpwdb.passlimit"
      "1.3.6.1.4.1.25623.1.0.104171:6:entry:unpwdb.passlimit" },
    { "1.3.6.1.4.1.25623.1.0.104172:entry:nrpe-enum.cmds"
      "1.3.6.1.4.1.25623.1.0.104172:1:entry:nrpe-enum.cmds" },
    { "1.3.6.1.4.1.25623.1.0.104173:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.104173:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.104173:entry:path"
      "1.3.6.1.4.1.25623.1.0.104173:2:entry:path" },
    { "1.3.6.1.4.1.25623.1.0.104173:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.104173:3:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.104173:entry:useget"
      "1.3.6.1.4.1.25623.1.0.104173:4:entry:useget" },
    { "1.3.6.1.4.1.25623.1.0.104174:entry:afp.password"
      "1.3.6.1.4.1.25623.1.0.104174:1:entry:afp.password" },
    { "1.3.6.1.4.1.25623.1.0.104174:entry:afp.username"
      "1.3.6.1.4.1.25623.1.0.104174:2:entry:afp.username" },
    { "1.3.6.1.4.1.25623.1.0.104176:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.104176:1:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.104176:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.104176:2:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.104176:entry:lsaonly"
      "1.3.6.1.4.1.25623.1.0.104176:3:entry:lsaonly" },
    { "1.3.6.1.4.1.25623.1.0.104176:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.104176:4:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.104176:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.104176:5:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.104176:entry:samronly"
      "1.3.6.1.4.1.25623.1.0.104176:6:entry:samronly" },
    { "1.3.6.1.4.1.25623.1.0.105058:entry:ESXi login name:"
      "1.3.6.1.4.1.25623.1.0.105058:1:entry:ESXi login name:" },
    { "1.3.6.1.4.1.25623.1.0.105058:password:ESXi login password:"
      "1.3.6.1.4.1.25623.1.0.105058:2:password:ESXi login password:" },
    { "1.3.6.1.4.1.25623.1.0.105076:password:SNMP Community:"
      "1.3.6.1.4.1.25623.1.0.105076:1:password:SNMP Community:" },
    { "1.3.6.1.4.1.25623.1.0.105076:entry:SNMPv3 Username:"
      "1.3.6.1.4.1.25623.1.0.105076:2:entry:SNMPv3 Username:" },
    { "1.3.6.1.4.1.25623.1.0.105076:password:SNMPv3 Password:"
      "1.3.6.1.4.1.25623.1.0.105076:3:password:SNMPv3 Password:" },
    { "1.3.6.1.4.1.25623.1.0.105076:radio:SNMPv3 Authentication Algorithm:"
      "1.3.6.1.4.1.25623.1.0.105076:4:radio:SNMPv3 Authentication Algorithm:" },
    { "1.3.6.1.4.1.25623.1.0.105076:password:SNMPv3 Privacy Password:"
      "1.3.6.1.4.1.25623.1.0.105076:5:password:SNMPv3 Privacy Password:" },
    { "1.3.6.1.4.1.25623.1.0.105076:radio:SNMPv3 Privacy Algorithm:"
      "1.3.6.1.4.1.25623.1.0.105076:6:radio:SNMPv3 Privacy Algorithm:" },
    { "1.3.6.1.4.1.25623.1.0.105211:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.105211:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.105262:entry:API Username:"
      "1.3.6.1.4.1.25623.1.0.105262:1:entry:API Username:" },
    { "1.3.6.1.4.1.25623.1.0.105262:password:API Password:"
      "1.3.6.1.4.1.25623.1.0.105262:2:password:API Password:" },
    { "1.3.6.1.4.1.25623.1.0.105420:entry:NSX API Username:"
      "1.3.6.1.4.1.25623.1.0.105420:1:entry:NSX API Username:" },
    { "1.3.6.1.4.1.25623.1.0.105420:password:NSX API Password:"
      "1.3.6.1.4.1.25623.1.0.105420:2:password:NSX API Password:" },
    { "1.3.6.1.4.1.25623.1.0.105536:entry:APIC Username:"
      "1.3.6.1.4.1.25623.1.0.105536:1:entry:APIC Username:" },
    { "1.3.6.1.4.1.25623.1.0.105536:password:APIC Password:"
      "1.3.6.1.4.1.25623.1.0.105536:2:password:APIC Password:" },
    { "1.3.6.1.4.1.25623.1.0.105569:entry:XenMobile Username:"
      "1.3.6.1.4.1.25623.1.0.105569:1:entry:XenMobile Username:" },
    { "1.3.6.1.4.1.25623.1.0.105569:password:XenMobile Password:"
      "1.3.6.1.4.1.25623.1.0.105569:2:password:XenMobile Password:" },
    { "1.3.6.1.4.1.25623.1.0.105778:radio:Minimum allowed TLS version:"
      "1.3.6.1.4.1.25623.1.0.105778:1:radio:Minimum allowed TLS version:" },
    { "1.3.6.1.4.1.25623.1.0.105778:checkbox:Perform check:"
      "1.3.6.1.4.1.25623.1.0.105778:2:checkbox:Perform check:" },
    { "1.3.6.1.4.1.25623.1.0.105778:checkbox:Report passed tests:"
      "1.3.6.1.4.1.25623.1.0.105778:3:checkbox:Report passed tests:" },
    { "1.3.6.1.4.1.25623.1.0.105880:entry:SHA-1 fingerprints of CA certificates to trust"
      "1.3.6.1.4.1.25623.1.0.105880:1:entry:SHA-1 fingerprints of CA certificates to trust" },
    { "1.3.6.1.4.1.25623.1.0.105988:file:Policy registry file"
      "1.3.6.1.4.1.25623.1.0.105988:1:file:Policy registry file" },
    { "1.3.6.1.4.1.25623.1.0.106056:entry:Passwords"
      "1.3.6.1.4.1.25623.1.0.106056:1:entry:Passwords" },
    { "1.3.6.1.4.1.25623.1.0.106431:file:Cisco IOS Policies"
      "1.3.6.1.4.1.25623.1.0.106431:1:file:Cisco IOS Policies" },
    { "1.3.6.1.4.1.25623.1.0.106431:password:Enable Password"
      "1.3.6.1.4.1.25623.1.0.106431:2:password:Enable Password" },
    { "1.3.6.1.4.1.25623.1.0.107305:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.107305:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.107307:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.107307:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.108002:checkbox:Check telemetry level compliance"
      "1.3.6.1.4.1.25623.1.0.108002:1:checkbox:Check telemetry level compliance" },
    { "1.3.6.1.4.1.25623.1.0.108013:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.108013:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.108013:entry:Seconds to wait between probes"
      "1.3.6.1.4.1.25623.1.0.108013:1:entry:Seconds to wait between probes" },
    { "1.3.6.1.4.1.25623.1.0.108021:checkbox:Guess OS more aggressively (safe checks off only)"
      "1.3.6.1.4.1.25623.1.0.108021:1:checkbox:Guess OS more aggressively (safe checks off only)" },
    { "1.3.6.1.4.1.25623.1.0.108021:checkbox:Guess OS more aggressively even if safe checks are set"
      "1.3.6.1.4.1.25623.1.0.108021:2:checkbox:Guess OS more aggressively even if safe checks are set" },
    { "1.3.6.1.4.1.25623.1.0.108021:checkbox:Run routine"
      "1.3.6.1.4.1.25623.1.0.108021:3:checkbox:Run routine" },
    { "1.3.6.1.4.1.25623.1.0.108041:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.108041:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.108072:checkbox:Run routine"
      "1.3.6.1.4.1.25623.1.0.108072:1:checkbox:Run routine" },
    { "1.3.6.1.4.1.25623.1.0.108078:file:Orientierungshilfe Windows 10 Policies"
      "1.3.6.1.4.1.25623.1.0.108078:1:file:Orientierungshilfe Windows 10 Policies" },
    { "1.3.6.1.4.1.25623.1.0.108083:checkbox:Launch Nmap NSE net Tests"
      "1.3.6.1.4.1.25623.1.0.108083:1:checkbox:Launch Nmap NSE net Tests" },
    { "1.3.6.1.4.1.25623.1.0.108157:checkbox:Enable"
      "1.3.6.1.4.1.25623.1.0.108157:1:checkbox:Enable" },
    { "1.3.6.1.4.1.25623.1.0.108250:entry:Minimum max-age value (in seconds)"
      "1.3.6.1.4.1.25623.1.0.108250:1:entry:Minimum max-age value (in seconds)" },
    { "1.3.6.1.4.1.25623.1.0.108251:entry:Minimum max-age value (in seconds)"
      "1.3.6.1.4.1.25623.1.0.108251:1:entry:Minimum max-age value (in seconds)" },
    { "1.3.6.1.4.1.25623.1.0.108298:entry:Exclude specific port(s) from scan"
      "1.3.6.1.4.1.25623.1.0.108298:1:entry:Exclude specific port(s) from scan" },
    { "1.3.6.1.4.1.25623.1.0.108346:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.108346:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.108439:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.108439:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.108495:radio:Minimum allowed hash algorithm"
      "1.3.6.1.4.1.25623.1.0.108495:1:radio:Minimum allowed hash algorithm" },
    { "1.3.6.1.4.1.25623.1.0.108495:checkbox:Perform check"
      "1.3.6.1.4.1.25623.1.0.108495:2:checkbox:Perform check" },
    { "1.3.6.1.4.1.25623.1.0.108495:checkbox:Report passed tests"
      "1.3.6.1.4.1.25623.1.0.108495:3:checkbox:Report passed tests" },
    { "1.3.6.1.4.1.25623.1.0.108521:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.108521:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.108521:checkbox:Run check"
      "1.3.6.1.4.1.25623.1.0.108521:1:checkbox:Run check" },
    { "1.3.6.1.4.1.25623.1.0.108525:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.108525:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.108562:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.108562:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.108564:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.108564:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.109006:radio:reporting format"
      "1.3.6.1.4.1.25623.1.0.109006:1:radio:reporting format" },
    { "1.3.6.1.4.1.25623.1.0.109007:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109007:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109008:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109008:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109009:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109009:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109040:radio:Berichtformat"
      "1.3.6.1.4.1.25623.1.0.109040:1:radio:Berichtformat" },
    { "1.3.6.1.4.1.25623.1.0.109041:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109041:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109042:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109042:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109043:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109043:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109044:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109044:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109045:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109045:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109046:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109046:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109047:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109047:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109048:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109048:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109049:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109049:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109050:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109050:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109051:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109051:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109052:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109052:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109053:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109053:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109054:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109054:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109055:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109055:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109056:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109056:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109057:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109057:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109058:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109058:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109059:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109059:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109060:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109060:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109061:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109061:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109062:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109062:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109063:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109063:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109064:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109064:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109065:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109065:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109066:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109066:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109067:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109067:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109068:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109068:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109069:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109069:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109070:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109070:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109071:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109071:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109072:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109072:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109073:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109073:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109074:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109074:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109075:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109075:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109076:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109076:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109077:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109077:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109078:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109078:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109079:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109079:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109080:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109080:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109081:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109081:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109082:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109082:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109083:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109083:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109084:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109084:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109085:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109085:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109086:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109086:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109087:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109087:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109088:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109088:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109089:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109089:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109090:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109090:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109091:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109091:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109092:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109092:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109093:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109093:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109094:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109094:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109095:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109095:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109096:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109096:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109097:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109097:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109098:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109098:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109099:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109099:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109100:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109100:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109101:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109101:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109102:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109102:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109103:entry:Minimum"
      "1.3.6.1.4.1.25623.1.0.109103:1:entry:Minimum" },
    { "1.3.6.1.4.1.25623.1.0.109104:entry:Maximum password age"
      "1.3.6.1.4.1.25623.1.0.109104:1:entry:Maximum password age" },
    { "1.3.6.1.4.1.25623.1.0.109105:entry:Minimum"
      "1.3.6.1.4.1.25623.1.0.109105:1:entry:Minimum" },
    { "1.3.6.1.4.1.25623.1.0.109106:entry:Minimum"
      "1.3.6.1.4.1.25623.1.0.109106:1:entry:Minimum" },
    { "1.3.6.1.4.1.25623.1.0.109107:radio:Required"
      "1.3.6.1.4.1.25623.1.0.109107:1:radio:Required" },
    { "1.3.6.1.4.1.25623.1.0.109108:radio:Required"
      "1.3.6.1.4.1.25623.1.0.109108:1:radio:Required" },
    { "1.3.6.1.4.1.25623.1.0.109109:entry:Minimum"
      "1.3.6.1.4.1.25623.1.0.109109:1:entry:Minimum" },
    { "1.3.6.1.4.1.25623.1.0.109110:entry:Maximum"
      "1.3.6.1.4.1.25623.1.0.109110:1:entry:Maximum" },
    { "1.3.6.1.4.1.25623.1.0.109111:entry:Minimum"
      "1.3.6.1.4.1.25623.1.0.109111:1:entry:Minimum" },
    { "1.3.6.1.4.1.25623.1.0.109112:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109112:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109113:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109113:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109114:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109114:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109115:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109115:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109116:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109116:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109117:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109117:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109118:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109118:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109119:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109119:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109120:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109120:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109121:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109121:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109122:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109122:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109123:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109123:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109124:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109124:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109125:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109125:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109126:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109126:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109127:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109127:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109128:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109128:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109129:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109129:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109130:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109130:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109131:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109131:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109132:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109132:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109133:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109133:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109134:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109134:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109135:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109135:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109136:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109136:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109137:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109137:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109138:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109138:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109139:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109139:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109140:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109140:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109141:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109141:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109142:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109142:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109143:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109143:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109144:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109144:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109145:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109145:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109146:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109146:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109147:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109147:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109148:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109148:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109149:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109149:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109150:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109150:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109151:entry:Status"
      "1.3.6.1.4.1.25623.1.0.109151:1:entry:Status" },
    { "1.3.6.1.4.1.25623.1.0.109152:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109152:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109153:entry:Status"
      "1.3.6.1.4.1.25623.1.0.109153:1:entry:Status" },
    { "1.3.6.1.4.1.25623.1.0.109154:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109154:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109157:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109157:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109158:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109158:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109159:entry:Maximum"
      "1.3.6.1.4.1.25623.1.0.109159:1:entry:Maximum" },
    { "1.3.6.1.4.1.25623.1.0.109160:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109160:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109161:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109161:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109162:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109162:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109167:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109167:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109168:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109168:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109169:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109169:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109170:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109170:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109171:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109171:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109172:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109172:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109173:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109173:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109174:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109174:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109175:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109175:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109176:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109176:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109177:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109177:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109178:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109178:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109179:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109179:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109181:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109181:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109182:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109182:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109183:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109183:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109184:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109184:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109185:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109185:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109186:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109186:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109187:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109187:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109188:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109188:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109189:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109189:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109190:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109190:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109191:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109191:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109192:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109192:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109193:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109193:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109194:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109194:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109195:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109195:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109196:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109196:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109197:entry:Maximum"
      "1.3.6.1.4.1.25623.1.0.109197:1:entry:Maximum" },
    { "1.3.6.1.4.1.25623.1.0.109198:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109198:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109199:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109199:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109200:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109200:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109201:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109201:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109202:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109202:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109203:entry:Maximum"
      "1.3.6.1.4.1.25623.1.0.109203:1:entry:Maximum" },
    { "1.3.6.1.4.1.25623.1.0.109204:entry:Text"
      "1.3.6.1.4.1.25623.1.0.109204:1:entry:Text" },
    { "1.3.6.1.4.1.25623.1.0.109205:entry:Text"
      "1.3.6.1.4.1.25623.1.0.109205:1:entry:Text" },
    { "1.3.6.1.4.1.25623.1.0.109206:entry:Maximum"
      "1.3.6.1.4.1.25623.1.0.109206:1:entry:Maximum" },
    { "1.3.6.1.4.1.25623.1.0.109207:entry:Minimum"
      "1.3.6.1.4.1.25623.1.0.109207:1:entry:Minimum" },
    { "1.3.6.1.4.1.25623.1.0.109207:entry:Maximum"
      "1.3.6.1.4.1.25623.1.0.109207:2:entry:Maximum" },
    { "1.3.6.1.4.1.25623.1.0.109208:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109208:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109209:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109209:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109210:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109210:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109211:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109211:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109212:entry:Maximum"
      "1.3.6.1.4.1.25623.1.0.109212:1:entry:Maximum" },
    { "1.3.6.1.4.1.25623.1.0.109213:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109213:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109214:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109214:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109215:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109215:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109216:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109216:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109217:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109217:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109218:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109218:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109219:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109219:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109220:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109220:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109221:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109221:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109222:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109222:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109223:entry:Paths"
      "1.3.6.1.4.1.25623.1.0.109223:1:entry:Paths" },
    { "1.3.6.1.4.1.25623.1.0.109224:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109224:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109225:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109225:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109226:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109226:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109227:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109227:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109228:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109228:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109229:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109229:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109230:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109230:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109231:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109231:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109232:radio:DES-CBC-CRC"
      "1.3.6.1.4.1.25623.1.0.109232:1:radio:DES-CBC-CRC" },
    { "1.3.6.1.4.1.25623.1.0.109232:radio:DES-CBC-MD5"
      "1.3.6.1.4.1.25623.1.0.109232:2:radio:DES-CBC-MD5" },
    { "1.3.6.1.4.1.25623.1.0.109232:radio:RC4-HMAC"
      "1.3.6.1.4.1.25623.1.0.109232:3:radio:RC4-HMAC" },
    { "1.3.6.1.4.1.25623.1.0.109232:radio:AES128-CTS-HMAC-SHA1-96"
      "1.3.6.1.4.1.25623.1.0.109232:4:radio:AES128-CTS-HMAC-SHA1-96" },
    { "1.3.6.1.4.1.25623.1.0.109232:radio:AES256-CTS-HMAC-SHA1-96"
      "1.3.6.1.4.1.25623.1.0.109232:5:radio:AES256-CTS-HMAC-SHA1-96" },
    { "1.3.6.1.4.1.25623.1.0.109232:radio:Future encryption types"
      "1.3.6.1.4.1.25623.1.0.109232:6:radio:Future encryption types" },
    { "1.3.6.1.4.1.25623.1.0.109233:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109233:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109234:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109234:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109235:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109235:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109236:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109236:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109237:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109237:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109238:radio:Minimum"
      "1.3.6.1.4.1.25623.1.0.109238:1:radio:Minimum" },
    { "1.3.6.1.4.1.25623.1.0.109239:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109239:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109240:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109240:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109241:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109241:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109242:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109242:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109243:radio:Minimum"
      "1.3.6.1.4.1.25623.1.0.109243:1:radio:Minimum" },
    { "1.3.6.1.4.1.25623.1.0.109243:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109243:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109244:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109244:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109245:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109245:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109246:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109246:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109247:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109247:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109248:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109248:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109249:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109249:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109250:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109250:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109251:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109251:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109252:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109252:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109253:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109253:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109254:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109254:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109255:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109255:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109256:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109256:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109257:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109257:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109258:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109258:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109259:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109259:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109260:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109260:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109261:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109261:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109262:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109262:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109263:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109263:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109264:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109264:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109265:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109265:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109266:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109266:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109267:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109267:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109268:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109268:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109269:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109269:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109270:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109270:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109271:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109271:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109272:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109272:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109273:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109273:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109274:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109274:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109275:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109275:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109276:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109276:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109277:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109277:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109278:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109278:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109279:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109279:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109280:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109280:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109281:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109281:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109282:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109282:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109283:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109283:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109284:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109284:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109285:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109285:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109286:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109286:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109287:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109287:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109288:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109288:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109289:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109289:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109290:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109290:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109291:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109291:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109292:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109292:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109293:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109293:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109294:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109294:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109295:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109295:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109296:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109296:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109297:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109297:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109298:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109298:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109299:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109299:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109300:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109300:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109301:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109301:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109302:entry:Minimum"
      "1.3.6.1.4.1.25623.1.0.109302:1:entry:Minimum" },
    { "1.3.6.1.4.1.25623.1.0.109303:entry:Maximum"
      "1.3.6.1.4.1.25623.1.0.109303:1:entry:Maximum" },
    { "1.3.6.1.4.1.25623.1.0.109304:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109304:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109305:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109305:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109306:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109306:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109307:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109307:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109308:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109308:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109309:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109309:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109310:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109310:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109311:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109311:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109312:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109312:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109313:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109313:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109314:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109314:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109315:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109315:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109316:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109316:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109317:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109317:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109318:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109318:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109319:entry:Max"
      "1.3.6.1.4.1.25623.1.0.109319:1:entry:Max" },
    { "1.3.6.1.4.1.25623.1.0.109320:entry:Max"
      "1.3.6.1.4.1.25623.1.0.109320:1:entry:Max" },
    { "1.3.6.1.4.1.25623.1.0.109321:entry:Max"
      "1.3.6.1.4.1.25623.1.0.109321:1:entry:Max" },
    { "1.3.6.1.4.1.25623.1.0.109322:entry:Max"
      "1.3.6.1.4.1.25623.1.0.109322:1:entry:Max" },
    { "1.3.6.1.4.1.25623.1.0.109323:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109323:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109324:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109324:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109325:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109325:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109326:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109326:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109327:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109327:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109328:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109328:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109329:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109329:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109330:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109330:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109331:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109331:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109332:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109332:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109333:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109333:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109334:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109334:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109335:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109335:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109336:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109336:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109337:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109337:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109338:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109338:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109339:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109339:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109340:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109340:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109341:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109341:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109342:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109342:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109343:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109343:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109344:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109344:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109345:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109345:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109346:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109346:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109347:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109347:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109348:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109348:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109349:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109349:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109350:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109350:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109351:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109351:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109352:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109352:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109353:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109353:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109354:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109354:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109355:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109355:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109356:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109356:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109357:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109357:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109358:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109358:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109359:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109359:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109360:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109360:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109361:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109361:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109362:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109362:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109363:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109363:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109364:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109364:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109365:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109365:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109366:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109366:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109367:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109367:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109368:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109368:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109369:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109369:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109370:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109370:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109371:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109371:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109372:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109372:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109373:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109373:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109374:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109374:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109375:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109375:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109376:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109376:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109377:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109377:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109378:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109378:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109379:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109379:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109380:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109380:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109381:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109381:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109382:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109382:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109383:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109383:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109384:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109384:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109385:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109385:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109386:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109386:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109387:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109387:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109388:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109388:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109389:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109389:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109390:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109390:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109391:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109391:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109392:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109392:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109393:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109393:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109394:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109394:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109395:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109395:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109396:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109396:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109397:entry:Minimum"
      "1.3.6.1.4.1.25623.1.0.109397:1:entry:Minimum" },
    { "1.3.6.1.4.1.25623.1.0.109398:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109398:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109399:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109399:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109400:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109400:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109401:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109401:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109402:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109402:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109403:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109403:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109404:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109404:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109405:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109405:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109406:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109406:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109407:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109407:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109408:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109408:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109409:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109409:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109410:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109410:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109411:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109411:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109412:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109412:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109413:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109413:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109414:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109414:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109415:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109415:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109416:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109416:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109417:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109417:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109418:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109418:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109419:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109419:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109420:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109420:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109421:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109421:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109422:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109422:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109423:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109423:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109424:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109424:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109425:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109425:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109426:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109426:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109427:radio:operating system drives"
      "1.3.6.1.4.1.25623.1.0.109427:1:radio:operating system drives" },
    { "1.3.6.1.4.1.25623.1.0.109427:radio:fixed data drives"
      "1.3.6.1.4.1.25623.1.0.109427:2:radio:fixed data drives" },
    { "1.3.6.1.4.1.25623.1.0.109427:radio:removable data drives"
      "1.3.6.1.4.1.25623.1.0.109427:3:radio:removable data drives" },
    { "1.3.6.1.4.1.25623.1.0.109428:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109428:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109429:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109429:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109430:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109430:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109431:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109431:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109432:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109432:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109433:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109433:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109434:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109434:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109435:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109435:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109436:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109436:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109437:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109437:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109438:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109438:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109439:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109439:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109440:entry:Minimum"
      "1.3.6.1.4.1.25623.1.0.109440:1:entry:Minimum" },
    { "1.3.6.1.4.1.25623.1.0.109441:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109441:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109442:entry:Minimum"
      "1.3.6.1.4.1.25623.1.0.109442:1:entry:Minimum" },
    { "1.3.6.1.4.1.25623.1.0.109443:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109443:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109444:entry:Minimum"
      "1.3.6.1.4.1.25623.1.0.109444:1:entry:Minimum" },
    { "1.3.6.1.4.1.25623.1.0.109445:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109445:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109446:entry:Minimum"
      "1.3.6.1.4.1.25623.1.0.109446:1:entry:Minimum" },
    { "1.3.6.1.4.1.25623.1.0.109447:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109447:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109448:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109448:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109449:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109449:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109450:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109450:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109451:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109451:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109452:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109452:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109453:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109453:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109454:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109454:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109455:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109455:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109456:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109456:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109457:radio:Maximum"
      "1.3.6.1.4.1.25623.1.0.109457:1:radio:Maximum" },
    { "1.3.6.1.4.1.25623.1.0.109458:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109458:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109459:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109459:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109460:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109460:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109461:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109461:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109462:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109462:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109463:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109463:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109464:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109464:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109465:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109465:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109466:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109466:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109467:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109467:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109468:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109468:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109469:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109469:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109470:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109470:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109471:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109471:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109472:entry:Maximum"
      "1.3.6.1.4.1.25623.1.0.109472:1:entry:Maximum" },
    { "1.3.6.1.4.1.25623.1.0.109473:entry:Maximum"
      "1.3.6.1.4.1.25623.1.0.109473:1:entry:Maximum" },
    { "1.3.6.1.4.1.25623.1.0.109474:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109474:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109475:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109475:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109476:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109476:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109477:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109477:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109478:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109478:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109479:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109479:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109480:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109480:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109481:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109481:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109482:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109482:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109483:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109483:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109484:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109484:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109485:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109485:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109486:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109486:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109487:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109487:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109488:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109488:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109489:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109489:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109490:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109490:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109491:radio:Maximum"
      "1.3.6.1.4.1.25623.1.0.109491:1:radio:Maximum" },
    { "1.3.6.1.4.1.25623.1.0.109492:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109492:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109493:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109493:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109494:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109494:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109495:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109495:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109496:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109496:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109497:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109497:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109498:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109498:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109499:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109499:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109500:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109500:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109501:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109501:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109502:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109502:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109503:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109503:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109504:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109504:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109505:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109505:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109506:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109506:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109507:radio:DeferFeatureUpdates"
      "1.3.6.1.4.1.25623.1.0.109507:1:radio:DeferFeatureUpdates" },
    { "1.3.6.1.4.1.25623.1.0.109507:radio:BranchReadinessLevel"
      "1.3.6.1.4.1.25623.1.0.109507:2:radio:BranchReadinessLevel" },
    { "1.3.6.1.4.1.25623.1.0.109507:entry:DeferFeatureUpdatesPeriodInDays"
      "1.3.6.1.4.1.25623.1.0.109507:3:entry:DeferFeatureUpdatesPeriodInDays" },
    { "1.3.6.1.4.1.25623.1.0.109508:radio:DeferQualityUpdates"
      "1.3.6.1.4.1.25623.1.0.109508:1:radio:DeferQualityUpdates" },
    { "1.3.6.1.4.1.25623.1.0.109508:entry:DeferQualityUpdatesPeriodInDays"
      "1.3.6.1.4.1.25623.1.0.109508:2:entry:DeferQualityUpdatesPeriodInDays" },
    { "1.3.6.1.4.1.25623.1.0.109509:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109509:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109510:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109510:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109511:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109511:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109512:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109512:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109513:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109513:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109514:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109514:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109515:entry:Maximum"
      "1.3.6.1.4.1.25623.1.0.109515:1:entry:Maximum" },
    { "1.3.6.1.4.1.25623.1.0.109516:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109516:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109517:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109517:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109518:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109518:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109519:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109519:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109520:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109520:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109521:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109521:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109522:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109522:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109523:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109523:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109524:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109524:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109525:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109525:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109526:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109526:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109527:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109527:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109528:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109528:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109529:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109529:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109530:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109530:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109531:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109531:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109532:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109532:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109533:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109533:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109534:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109534:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109535:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109535:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109536:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109536:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109537:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109537:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109538:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109538:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109539:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109539:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109540:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109540:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109541:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109541:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109542:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109542:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109543:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109543:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109544:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109544:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109545:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109545:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109546:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109546:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109547:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109547:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109548:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109548:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109549:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109549:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109550:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109550:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109551:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109551:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109552:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109552:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109553:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109553:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109554:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109554:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109555:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109555:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109556:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109556:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109557:entry:Minimum"
      "1.3.6.1.4.1.25623.1.0.109557:1:entry:Minimum" },
    { "1.3.6.1.4.1.25623.1.0.109558:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109558:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109559:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109559:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109560:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109560:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109561:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109561:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109562:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109562:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109563:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109563:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109564:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109564:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109565:entry:Minimum"
      "1.3.6.1.4.1.25623.1.0.109565:1:entry:Minimum" },
    { "1.3.6.1.4.1.25623.1.0.109566:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109566:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109567:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109567:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109568:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109568:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109569:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109569:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109570:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109570:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109571:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109571:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109572:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109572:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109573:entry:Minimum"
      "1.3.6.1.4.1.25623.1.0.109573:1:entry:Minimum" },
    { "1.3.6.1.4.1.25623.1.0.109574:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109574:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109575:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109575:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109576:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109576:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109577:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109577:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109578:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109578:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109579:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109579:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109580:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109580:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109581:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109581:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109582:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109582:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109583:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109583:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109584:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109584:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109585:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109585:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109586:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109586:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109587:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109587:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109588:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109588:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109589:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109589:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109590:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109590:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109591:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109591:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109592:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109592:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109593:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109593:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109594:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109594:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109595:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109595:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109596:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109596:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109597:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109597:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109598:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109598:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109599:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109599:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109600:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109600:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109601:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109601:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109602:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109602:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109603:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109603:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109604:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109604:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109605:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109605:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109606:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109606:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109607:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109607:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109608:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109608:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109609:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109609:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109610:entry:Proxy"
      "1.3.6.1.4.1.25623.1.0.109610:1:entry:Proxy" },
    { "1.3.6.1.4.1.25623.1.0.109611:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109611:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109612:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109612:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109613:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109613:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109614:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109614:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109615:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109615:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109616:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109616:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109617:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109617:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109618:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109618:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109619:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109619:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109620:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109620:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109621:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109621:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109622:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109622:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109623:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109623:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109624:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109624:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109625:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109625:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109626:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109626:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109627:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109627:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109628:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109628:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109629:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109629:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109630:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109630:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109631:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109631:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109632:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109632:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109633:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109633:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109634:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109634:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109635:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109635:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109636:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109636:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109637:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109637:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109638:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109638:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109639:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109639:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109640:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109640:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109641:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109641:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109642:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109642:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109643:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109643:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109644:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109644:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109645:entry:Office Applications"
      "1.3.6.1.4.1.25623.1.0.109645:1:entry:Office Applications" },
    { "1.3.6.1.4.1.25623.1.0.109645:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109645:2:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109646:entry:Office Applications"
      "1.3.6.1.4.1.25623.1.0.109646:1:entry:Office Applications" },
    { "1.3.6.1.4.1.25623.1.0.109646:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109646:2:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109647:entry:Office Applications"
      "1.3.6.1.4.1.25623.1.0.109647:1:entry:Office Applications" },
    { "1.3.6.1.4.1.25623.1.0.109647:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109647:2:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109648:entry:Office Applications"
      "1.3.6.1.4.1.25623.1.0.109648:1:entry:Office Applications" },
    { "1.3.6.1.4.1.25623.1.0.109648:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109648:2:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109649:entry:Office Applications"
      "1.3.6.1.4.1.25623.1.0.109649:1:entry:Office Applications" },
    { "1.3.6.1.4.1.25623.1.0.109649:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109649:2:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109650:entry:Office Applications"
      "1.3.6.1.4.1.25623.1.0.109650:1:entry:Office Applications" },
    { "1.3.6.1.4.1.25623.1.0.109650:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109650:2:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109651:entry:Office Applications"
      "1.3.6.1.4.1.25623.1.0.109651:1:entry:Office Applications" },
    { "1.3.6.1.4.1.25623.1.0.109651:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109651:2:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109652:entry:Office Applications"
      "1.3.6.1.4.1.25623.1.0.109652:1:entry:Office Applications" },
    { "1.3.6.1.4.1.25623.1.0.109652:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109652:2:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109653:entry:Office Applications"
      "1.3.6.1.4.1.25623.1.0.109653:1:entry:Office Applications" },
    { "1.3.6.1.4.1.25623.1.0.109653:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109653:2:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109654:entry:Office Applications"
      "1.3.6.1.4.1.25623.1.0.109654:1:entry:Office Applications" },
    { "1.3.6.1.4.1.25623.1.0.109654:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109654:2:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109655:entry:Office Applications"
      "1.3.6.1.4.1.25623.1.0.109655:1:entry:Office Applications" },
    { "1.3.6.1.4.1.25623.1.0.109655:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109655:2:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109656:entry:Office Applications"
      "1.3.6.1.4.1.25623.1.0.109656:1:entry:Office Applications" },
    { "1.3.6.1.4.1.25623.1.0.109656:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109656:2:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109657:entry:Office Applications"
      "1.3.6.1.4.1.25623.1.0.109657:1:entry:Office Applications" },
    { "1.3.6.1.4.1.25623.1.0.109657:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109657:2:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109658:entry:Office Applications"
      "1.3.6.1.4.1.25623.1.0.109658:1:entry:Office Applications" },
    { "1.3.6.1.4.1.25623.1.0.109658:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109658:2:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109659:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109659:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109660:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109660:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109661:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109661:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109662:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109662:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109663:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109663:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109664:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109664:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109665:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109665:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109666:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109666:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109667:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109667:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109668:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109668:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109669:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109669:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109670:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109670:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109671:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109671:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109672:entry:files"
      "1.3.6.1.4.1.25623.1.0.109672:1:entry:files" },
    { "1.3.6.1.4.1.25623.1.0.109672:entry:user/group ownership"
      "1.3.6.1.4.1.25623.1.0.109672:2:entry:user/group ownership" },
    { "1.3.6.1.4.1.25623.1.0.109673:entry:files"
      "1.3.6.1.4.1.25623.1.0.109673:1:entry:files" },
    { "1.3.6.1.4.1.25623.1.0.109673:entry:permissions"
      "1.3.6.1.4.1.25623.1.0.109673:2:entry:permissions" },
    { "1.3.6.1.4.1.25623.1.0.109674:radio:algorithm"
      "1.3.6.1.4.1.25623.1.0.109674:1:radio:algorithm" },
    { "1.3.6.1.4.1.25623.1.0.109675:entry:maximum"
      "1.3.6.1.4.1.25623.1.0.109675:1:entry:maximum" },
    { "1.3.6.1.4.1.25623.1.0.109676:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109676:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109677:radio:token provider"
      "1.3.6.1.4.1.25623.1.0.109677:1:radio:token provider" },
    { "1.3.6.1.4.1.25623.1.0.109678:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109678:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109679:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109679:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109680:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109680:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109681:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109681:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109682:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109682:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109683:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109683:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109684:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109684:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109685:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109685:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109686:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109686:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109687:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109687:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109688:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109688:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109689:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109689:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109690:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109690:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109691:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109691:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109692:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109692:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109693:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109693:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109694:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109694:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109695:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109695:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109696:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109696:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109697:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109697:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109698:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109698:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109699:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109699:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109700:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109700:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109701:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109701:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109702:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109702:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109703:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109703:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109704:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109704:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109705:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109705:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109706:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109706:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109707:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109707:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109708:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109708:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109709:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109709:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109710:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109710:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109711:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109711:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109712:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109712:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109714:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109714:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109715:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109715:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109716:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109716:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109717:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109717:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109718:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109718:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109719:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109719:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109720:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109720:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109721:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109721:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109722:radio:Separate partition"
      "1.3.6.1.4.1.25623.1.0.109722:1:radio:Separate partition" },
    { "1.3.6.1.4.1.25623.1.0.109722:entry:Options"
      "1.3.6.1.4.1.25623.1.0.109722:2:entry:Options" },
    { "1.3.6.1.4.1.25623.1.0.109723:radio:Separate partition"
      "1.3.6.1.4.1.25623.1.0.109723:1:radio:Separate partition" },
    { "1.3.6.1.4.1.25623.1.0.109724:radio:Separate partition"
      "1.3.6.1.4.1.25623.1.0.109724:1:radio:Separate partition" },
    { "1.3.6.1.4.1.25623.1.0.109724:entry:Options"
      "1.3.6.1.4.1.25623.1.0.109724:2:entry:Options" },
    { "1.3.6.1.4.1.25623.1.0.109725:radio:Separate partition"
      "1.3.6.1.4.1.25623.1.0.109725:1:radio:Separate partition" },
    { "1.3.6.1.4.1.25623.1.0.109726:radio:Separate partition"
      "1.3.6.1.4.1.25623.1.0.109726:1:radio:Separate partition" },
    { "1.3.6.1.4.1.25623.1.0.109727:radio:Separate partition"
      "1.3.6.1.4.1.25623.1.0.109727:1:radio:Separate partition" },
    { "1.3.6.1.4.1.25623.1.0.109727:entry:Options"
      "1.3.6.1.4.1.25623.1.0.109727:2:entry:Options" },
    { "1.3.6.1.4.1.25623.1.0.109728:radio:Separate partition"
      "1.3.6.1.4.1.25623.1.0.109728:1:radio:Separate partition" },
    { "1.3.6.1.4.1.25623.1.0.109728:entry:Options"
      "1.3.6.1.4.1.25623.1.0.109728:2:entry:Options" },
    { "1.3.6.1.4.1.25623.1.0.109730:radio:Automounting"
      "1.3.6.1.4.1.25623.1.0.109730:1:radio:Automounting" },
    { "1.3.6.1.4.1.25623.1.0.109731:radio:Schedule"
      "1.3.6.1.4.1.25623.1.0.109731:1:radio:Schedule" },
    { "1.3.6.1.4.1.25623.1.0.109732:entry:Uid"
      "1.3.6.1.4.1.25623.1.0.109732:1:entry:Uid" },
    { "1.3.6.1.4.1.25623.1.0.109732:entry:Gid"
      "1.3.6.1.4.1.25623.1.0.109732:2:entry:Gid" },
    { "1.3.6.1.4.1.25623.1.0.109732:entry:Permissions"
      "1.3.6.1.4.1.25623.1.0.109732:3:entry:Permissions" },
    { "1.3.6.1.4.1.25623.1.0.109733:radio:Password protection"
      "1.3.6.1.4.1.25623.1.0.109733:1:radio:Password protection" },
    { "1.3.6.1.4.1.25623.1.0.109734:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109734:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109735:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109735:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109736:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109736:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109737:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109737:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109738:entry:Blacklisted packages"
      "1.3.6.1.4.1.25623.1.0.109738:1:entry:Blacklisted packages" },
    { "1.3.6.1.4.1.25623.1.0.109739:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109739:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109740:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109740:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109741:entry:Policy configuration"
      "1.3.6.1.4.1.25623.1.0.109741:1:entry:Policy configuration" },
    { "1.3.6.1.4.1.25623.1.0.109743:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109743:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109745:radio:SELinux"
      "1.3.6.1.4.1.25623.1.0.109745:1:radio:SELinux" },
    { "1.3.6.1.4.1.25623.1.0.109745:radio:AppArmor"
      "1.3.6.1.4.1.25623.1.0.109745:2:radio:AppArmor" },
    { "1.3.6.1.4.1.25623.1.0.109746:radio:Allow OS information"
      "1.3.6.1.4.1.25623.1.0.109746:1:radio:Allow OS information" },
    { "1.3.6.1.4.1.25623.1.0.109746:entry:Uid"
      "1.3.6.1.4.1.25623.1.0.109746:2:entry:Uid" },
    { "1.3.6.1.4.1.25623.1.0.109746:entry:Gid"
      "1.3.6.1.4.1.25623.1.0.109746:3:entry:Gid" },
    { "1.3.6.1.4.1.25623.1.0.109746:entry:Permissions"
      "1.3.6.1.4.1.25623.1.0.109746:4:entry:Permissions" },
    { "1.3.6.1.4.1.25623.1.0.109747:radio:Allow OS information"
      "1.3.6.1.4.1.25623.1.0.109747:1:radio:Allow OS information" },
    { "1.3.6.1.4.1.25623.1.0.109747:entry:Uid"
      "1.3.6.1.4.1.25623.1.0.109747:2:entry:Uid" },
    { "1.3.6.1.4.1.25623.1.0.109747:entry:Gid"
      "1.3.6.1.4.1.25623.1.0.109747:3:entry:Gid" },
    { "1.3.6.1.4.1.25623.1.0.109747:entry:Permissions"
      "1.3.6.1.4.1.25623.1.0.109747:4:entry:Permissions" },
    { "1.3.6.1.4.1.25623.1.0.109748:radio:Allow OS information"
      "1.3.6.1.4.1.25623.1.0.109748:1:radio:Allow OS information" },
    { "1.3.6.1.4.1.25623.1.0.109748:entry:Uid"
      "1.3.6.1.4.1.25623.1.0.109748:2:entry:Uid" },
    { "1.3.6.1.4.1.25623.1.0.109748:entry:Gid"
      "1.3.6.1.4.1.25623.1.0.109748:3:entry:Gid" },
    { "1.3.6.1.4.1.25623.1.0.109748:entry:Permissions"
      "1.3.6.1.4.1.25623.1.0.109748:4:entry:Permissions" },
    { "1.3.6.1.4.1.25623.1.0.109749:radio:GDM login banner enabled"
      "1.3.6.1.4.1.25623.1.0.109749:1:radio:GDM login banner enabled" },
    { "1.3.6.1.4.1.25623.1.0.109751:entry:Services"
      "1.3.6.1.4.1.25623.1.0.109751:1:entry:Services" },
    { "1.3.6.1.4.1.25623.1.0.109752:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109752:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109754:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109754:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109755:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109755:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109756:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109756:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109757:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109757:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109758:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109758:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109759:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109759:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109760:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109760:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109761:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109761:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109762:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109762:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109763:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109763:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109764:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109764:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109765:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109765:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109766:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109766:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109767:radio:Status"
      "1.3.6.1.4.1.25623.1.0.109767:1:radio:Status" },
    { "1.3.6.1.4.1.25623.1.0.109768:radio:Deny all hosts (ALL:ALL)"
      "1.3.6.1.4.1.25623.1.0.109768:1:radio:Deny all hosts (ALL:ALL)" },
    { "1.3.6.1.4.1.25623.1.0.109768:entry:Permissions"
      "1.3.6.1.4.1.25623.1.0.109768:2:entry:Permissions" },
    { "1.3.6.1.4.1.25623.1.0.109768:entry:Gid"
      "1.3.6.1.4.1.25623.1.0.109768:3:entry:Gid" },
    { "1.3.6.1.4.1.25623.1.0.109768:entry:Uid"
      "1.3.6.1.4.1.25623.1.0.109768:4:entry:Uid" },
    { "1.3.6.1.4.1.25623.1.0.109769:entry:Network protocols"
      "1.3.6.1.4.1.25623.1.0.109769:1:entry:Network protocols" },
    { "1.3.6.1.4.1.25623.1.0.109773:entry:Max logfile size"
      "1.3.6.1.4.1.25623.1.0.109773:1:entry:Max logfile size" },
    { "1.3.6.1.4.1.25623.1.0.109773:radio:Max logfile size reached action"
      "1.3.6.1.4.1.25623.1.0.109773:2:radio:Max logfile size reached action" },
    { "1.3.6.1.4.1.25623.1.0.109773:radio:Disk space getting low action"
      "1.3.6.1.4.1.25623.1.0.109773:3:radio:Disk space getting low action" },
    { "1.3.6.1.4.1.25623.1.0.109773:radio:Disk space low action"
      "1.3.6.1.4.1.25623.1.0.109773:4:radio:Disk space low action" },
    { "1.3.6.1.4.1.25623.1.0.109788:radio:Mutable"
      "1.3.6.1.4.1.25623.1.0.109788:1:radio:Mutable" },
    { "1.3.6.1.4.1.25623.1.0.109789:entry:File permissions"
      "1.3.6.1.4.1.25623.1.0.109789:1:entry:File permissions" },
    { "1.3.6.1.4.1.25623.1.0.109789:entry:Remote log host"
      "1.3.6.1.4.1.25623.1.0.109789:2:entry:Remote log host" },
    { "1.3.6.1.4.1.25623.1.0.109789:radio:Accept remote rsyslog messages"
      "1.3.6.1.4.1.25623.1.0.109789:3:radio:Accept remote rsyslog messages" },
    { "1.3.6.1.4.1.25623.1.0.109792:radio:Policy"
      "1.3.6.1.4.1.25623.1.0.109792:1:radio:Policy" },
    { "1.3.6.1.4.1.25623.1.0.109793:entry:Uid"
      "1.3.6.1.4.1.25623.1.0.109793:1:entry:Uid" },
    { "1.3.6.1.4.1.25623.1.0.109793:entry:Gid"
      "1.3.6.1.4.1.25623.1.0.109793:2:entry:Gid" },
    { "1.3.6.1.4.1.25623.1.0.109793:entry:Permissions"
      "1.3.6.1.4.1.25623.1.0.109793:3:entry:Permissions" },
    { "1.3.6.1.4.1.25623.1.0.109794:radio:Protocol"
      "1.3.6.1.4.1.25623.1.0.109794:1:radio:Protocol" },
    { "1.3.6.1.4.1.25623.1.0.109794:radio:Loglevel"
      "1.3.6.1.4.1.25623.1.0.109794:2:radio:Loglevel" },
    { "1.3.6.1.4.1.25623.1.0.109794:radio:X11Forwarding"
      "1.3.6.1.4.1.25623.1.0.109794:3:radio:X11Forwarding" },
    { "1.3.6.1.4.1.25623.1.0.109794:entry:MaxAuthTries"
      "1.3.6.1.4.1.25623.1.0.109794:4:entry:MaxAuthTries" },
    { "1.3.6.1.4.1.25623.1.0.109794:radio:IgnoreRhosts"
      "1.3.6.1.4.1.25623.1.0.109794:5:radio:IgnoreRhosts" },
    { "1.3.6.1.4.1.25623.1.0.109794:radio:HostbasedAuthentication"
      "1.3.6.1.4.1.25623.1.0.109794:6:radio:HostbasedAuthentication" },
    { "1.3.6.1.4.1.25623.1.0.109794:radio:PermitRootLogin"
      "1.3.6.1.4.1.25623.1.0.109794:7:radio:PermitRootLogin" },
    { "1.3.6.1.4.1.25623.1.0.109794:radio:PermitEmptyPasswords"
      "1.3.6.1.4.1.25623.1.0.109794:8:radio:PermitEmptyPasswords" },
    { "1.3.6.1.4.1.25623.1.0.109794:radio:PermitUserEnvironment"
      "1.3.6.1.4.1.25623.1.0.109794:9:radio:PermitUserEnvironment" },
    { "1.3.6.1.4.1.25623.1.0.109794:entry:ClientAliveInterval"
      "1.3.6.1.4.1.25623.1.0.109794:10:entry:ClientAliveInterval" },
    { "1.3.6.1.4.1.25623.1.0.109794:entry:ClientAliveCountMax"
      "1.3.6.1.4.1.25623.1.0.109794:11:entry:ClientAliveCountMax" },
    { "1.3.6.1.4.1.25623.1.0.109794:entry:LoginGraceTime"
      "1.3.6.1.4.1.25623.1.0.109794:12:entry:LoginGraceTime" },
    { "1.3.6.1.4.1.25623.1.0.109794:entry:Banner"
      "1.3.6.1.4.1.25623.1.0.109794:13:entry:Banner" },
    { "1.3.6.1.4.1.25623.1.0.109795:entry:MAC algorithms"
      "1.3.6.1.4.1.25623.1.0.109795:1:entry:MAC algorithms" },
    { "1.3.6.1.4.1.25623.1.0.109796:entry:AllowUsers"
      "1.3.6.1.4.1.25623.1.0.109796:1:entry:AllowUsers" },
    { "1.3.6.1.4.1.25623.1.0.109796:entry:DenyUsers"
      "1.3.6.1.4.1.25623.1.0.109796:2:entry:DenyUsers" },
    { "1.3.6.1.4.1.25623.1.0.109796:entry:AllowGroups"
      "1.3.6.1.4.1.25623.1.0.109796:3:entry:AllowGroups" },
    { "1.3.6.1.4.1.25623.1.0.109796:entry:DenyGroups"
      "1.3.6.1.4.1.25623.1.0.109796:4:entry:DenyGroups" },
    { "1.3.6.1.4.1.25623.1.0.109797:radio:Load pam_pwquality.so module"
      "1.3.6.1.4.1.25623.1.0.109797:1:radio:Load pam_pwquality.so module" },
    { "1.3.6.1.4.1.25623.1.0.109797:radio:try_first_pass option"
      "1.3.6.1.4.1.25623.1.0.109797:2:radio:try_first_pass option" },
    { "1.3.6.1.4.1.25623.1.0.109797:entry:retry option"
      "1.3.6.1.4.1.25623.1.0.109797:3:entry:retry option" },
    { "1.3.6.1.4.1.25623.1.0.109797:entry:minlen"
      "1.3.6.1.4.1.25623.1.0.109797:4:entry:minlen" },
    { "1.3.6.1.4.1.25623.1.0.109797:entry:dcredit"
      "1.3.6.1.4.1.25623.1.0.109797:5:entry:dcredit" },
    { "1.3.6.1.4.1.25623.1.0.109797:entry:ucredit"
      "1.3.6.1.4.1.25623.1.0.109797:6:entry:ucredit" },
    { "1.3.6.1.4.1.25623.1.0.109797:entry:ocredit"
      "1.3.6.1.4.1.25623.1.0.109797:7:entry:ocredit" },
    { "1.3.6.1.4.1.25623.1.0.109797:entry:lcredit"
      "1.3.6.1.4.1.25623.1.0.109797:8:entry:lcredit" },
    { "1.3.6.1.4.1.25623.1.0.109798:entry:Deny"
      "1.3.6.1.4.1.25623.1.0.109798:1:entry:Deny" },
    { "1.3.6.1.4.1.25623.1.0.109798:entry:Unlock time"
      "1.3.6.1.4.1.25623.1.0.109798:2:entry:Unlock time" },
    { "1.3.6.1.4.1.25623.1.0.109799:entry:Password history"
      "1.3.6.1.4.1.25623.1.0.109799:1:entry:Password history" },
    { "1.3.6.1.4.1.25623.1.0.109799:radio:Hashing algorithm"
      "1.3.6.1.4.1.25623.1.0.109799:2:radio:Hashing algorithm" },
    { "1.3.6.1.4.1.25623.1.0.109800:entry:Password expiration"
      "1.3.6.1.4.1.25623.1.0.109800:1:entry:Password expiration" },
    { "1.3.6.1.4.1.25623.1.0.109800:entry:Min password age"
      "1.3.6.1.4.1.25623.1.0.109800:2:entry:Min password age" },
    { "1.3.6.1.4.1.25623.1.0.109800:entry:Warn before"
      "1.3.6.1.4.1.25623.1.0.109800:3:entry:Warn before" },
    { "1.3.6.1.4.1.25623.1.0.109801:entry:Days"
      "1.3.6.1.4.1.25623.1.0.109801:1:entry:Days" },
    { "1.3.6.1.4.1.25623.1.0.109804:radio:reporting format"
      "1.3.6.1.4.1.25623.1.0.109804:1:radio:reporting format" },
    { "1.3.6.1.4.1.25623.1.0.109805:radio:reporting format"
      "1.3.6.1.4.1.25623.1.0.109805:1:radio:reporting format" },
    { "1.3.6.1.4.1.25623.1.0.109806:entry:Default umask"
      "1.3.6.1.4.1.25623.1.0.109806:1:entry:Default umask" },
    { "1.3.6.1.4.1.25623.1.0.109807:entry:Default timeout"
      "1.3.6.1.4.1.25623.1.0.109807:1:entry:Default timeout" },
    { "1.3.6.1.4.1.25623.1.0.109808:radio:Allow root login from devices"
      "1.3.6.1.4.1.25623.1.0.109808:1:radio:Allow root login from devices" },
    { "1.3.6.1.4.1.25623.1.0.109808:entry:Define allowed devices"
      "1.3.6.1.4.1.25623.1.0.109808:2:entry:Define allowed devices" },
    { "1.3.6.1.4.1.25623.1.0.109809:entry:User list (semi-colon separated)"
      "1.3.6.1.4.1.25623.1.0.109809:1:entry:User list (semi-colon separated)" },
    { "1.3.6.1.4.1.25623.1.0.109810:entry:Uid"
      "1.3.6.1.4.1.25623.1.0.109810:1:entry:Uid" },
    { "1.3.6.1.4.1.25623.1.0.109810:entry:Gid"
      "1.3.6.1.4.1.25623.1.0.109810:2:entry:Gid" },
    { "1.3.6.1.4.1.25623.1.0.109810:entry:Permissions"
      "1.3.6.1.4.1.25623.1.0.109810:3:entry:Permissions" },
    { "1.3.6.1.4.1.25623.1.0.109811:entry:Uid"
      "1.3.6.1.4.1.25623.1.0.109811:1:entry:Uid" },
    { "1.3.6.1.4.1.25623.1.0.109811:entry:Gid"
      "1.3.6.1.4.1.25623.1.0.109811:2:entry:Gid" },
    { "1.3.6.1.4.1.25623.1.0.109811:entry:Permissions"
      "1.3.6.1.4.1.25623.1.0.109811:3:entry:Permissions" },
    { "1.3.6.1.4.1.25623.1.0.109812:entry:Uid"
      "1.3.6.1.4.1.25623.1.0.109812:1:entry:Uid" },
    { "1.3.6.1.4.1.25623.1.0.109812:entry:Gid"
      "1.3.6.1.4.1.25623.1.0.109812:2:entry:Gid" },
    { "1.3.6.1.4.1.25623.1.0.109812:entry:Permissions"
      "1.3.6.1.4.1.25623.1.0.109812:3:entry:Permissions" },
    { "1.3.6.1.4.1.25623.1.0.109813:entry:Uid"
      "1.3.6.1.4.1.25623.1.0.109813:1:entry:Uid" },
    { "1.3.6.1.4.1.25623.1.0.109813:entry:Gid"
      "1.3.6.1.4.1.25623.1.0.109813:2:entry:Gid" },
    { "1.3.6.1.4.1.25623.1.0.109813:entry:Permissions"
      "1.3.6.1.4.1.25623.1.0.109813:3:entry:Permissions" },
    { "1.3.6.1.4.1.25623.1.0.109814:entry:Uid"
      "1.3.6.1.4.1.25623.1.0.109814:1:entry:Uid" },
    { "1.3.6.1.4.1.25623.1.0.109814:entry:Gid"
      "1.3.6.1.4.1.25623.1.0.109814:2:entry:Gid" },
    { "1.3.6.1.4.1.25623.1.0.109814:entry:Permissions"
      "1.3.6.1.4.1.25623.1.0.109814:3:entry:Permissions" },
    { "1.3.6.1.4.1.25623.1.0.109815:entry:Uid"
      "1.3.6.1.4.1.25623.1.0.109815:1:entry:Uid" },
    { "1.3.6.1.4.1.25623.1.0.109815:entry:Gid"
      "1.3.6.1.4.1.25623.1.0.109815:2:entry:Gid" },
    { "1.3.6.1.4.1.25623.1.0.109815:entry:Permissions"
      "1.3.6.1.4.1.25623.1.0.109815:3:entry:Permissions" },
    { "1.3.6.1.4.1.25623.1.0.109816:entry:Uid"
      "1.3.6.1.4.1.25623.1.0.109816:1:entry:Uid" },
    { "1.3.6.1.4.1.25623.1.0.109816:entry:Gid"
      "1.3.6.1.4.1.25623.1.0.109816:2:entry:Gid" },
    { "1.3.6.1.4.1.25623.1.0.109816:entry:Permissions"
      "1.3.6.1.4.1.25623.1.0.109816:3:entry:Permissions" },
    { "1.3.6.1.4.1.25623.1.0.109817:entry:Uid"
      "1.3.6.1.4.1.25623.1.0.109817:1:entry:Uid" },
    { "1.3.6.1.4.1.25623.1.0.109817:entry:Gid"
      "1.3.6.1.4.1.25623.1.0.109817:2:entry:Gid" },
    { "1.3.6.1.4.1.25623.1.0.109817:entry:Permissions"
      "1.3.6.1.4.1.25623.1.0.109817:3:entry:Permissions" },
    { "1.3.6.1.4.1.25623.1.0.109821:entry:Files with SUID"
      "1.3.6.1.4.1.25623.1.0.109821:1:entry:Files with SUID" },
    { "1.3.6.1.4.1.25623.1.0.109822:entry:Files with SGID"
      "1.3.6.1.4.1.25623.1.0.109822:1:entry:Files with SGID" },
    { "1.3.6.1.4.1.25623.1.0.109823:entry:Users with empty password"
      "1.3.6.1.4.1.25623.1.0.109823:1:entry:Users with empty password" },
    { "1.3.6.1.4.1.25623.1.0.109837:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109837:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109843:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109843:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109844:checkbox:Perform check"
      "1.3.6.1.4.1.25623.1.0.109844:1:checkbox:Perform check" },
    { "1.3.6.1.4.1.25623.1.0.109844:checkbox:Report passed tests"
      "1.3.6.1.4.1.25623.1.0.109844:2:checkbox:Report passed tests" },
    { "1.3.6.1.4.1.25623.1.0.109844:entry:Cipher suites SSLv2"
      "1.3.6.1.4.1.25623.1.0.109844:3:entry:Cipher suites SSLv2" },
    { "1.3.6.1.4.1.25623.1.0.109844:entry:Cipher suites SSLv3"
      "1.3.6.1.4.1.25623.1.0.109844:4:entry:Cipher suites SSLv3" },
    { "1.3.6.1.4.1.25623.1.0.109844:entry:Cipher suites TLSv1.0"
      "1.3.6.1.4.1.25623.1.0.109844:5:entry:Cipher suites TLSv1.0" },
    { "1.3.6.1.4.1.25623.1.0.109844:entry:Cipher suites TLSv1.1"
      "1.3.6.1.4.1.25623.1.0.109844:6:entry:Cipher suites TLSv1.1" },
    { "1.3.6.1.4.1.25623.1.0.109844:entry:Cipher suites TLSv1.2"
      "1.3.6.1.4.1.25623.1.0.109844:7:entry:Cipher suites TLSv1.2" },
    { "1.3.6.1.4.1.25623.1.0.109844:entry:Cipher suites TLSv1.3"
      "1.3.6.1.4.1.25623.1.0.109844:8:entry:Cipher suites TLSv1.3" },
    { "1.3.6.1.4.1.25623.1.0.109848:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109848:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109849:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109849:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109850:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109850:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109851:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109851:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109852:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109852:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109853:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109853:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109854:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109854:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109855:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109855:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109856:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109856:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109857:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109857:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109858:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109858:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109859:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109859:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109860:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109860:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109861:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109861:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109862:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109862:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109863:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109863:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109864:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109864:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109865:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109865:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109866:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109866:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109867:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109867:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109868:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109868:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109869:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109869:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109870:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109870:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109871:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109871:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109872:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109872:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109873:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109873:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109874:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109874:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109875:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109875:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109876:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109876:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109877:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109877:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109878:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109878:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109879:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109879:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109880:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109880:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109881:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109881:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109882:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109882:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109883:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109883:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109884:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109884:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109885:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109885:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109886:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109886:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109887:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109887:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109888:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109888:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109889:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109889:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109890:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109890:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109891:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109891:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109892:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109892:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109893:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109893:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109894:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109894:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109895:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109895:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109897:radio:DHCP"
      "1.3.6.1.4.1.25623.1.0.109897:1:radio:DHCP" },
    { "1.3.6.1.4.1.25623.1.0.109898:radio:RouterDiscovery"
      "1.3.6.1.4.1.25623.1.0.109898:1:radio:RouterDiscovery" },
    { "1.3.6.1.4.1.25623.1.0.109899:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109899:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109900:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109900:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109901:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109901:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109902:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109902:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109903:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109903:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109904:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109904:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109905:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109905:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109906:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109906:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109907:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109907:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109908:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109908:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109909:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109909:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109910:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109910:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109911:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109911:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109912:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109912:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109913:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109913:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109914:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109914:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109915:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109915:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109916:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109916:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109917:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109917:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109918:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109918:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109919:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109919:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109920:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109920:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109921:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109921:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109922:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109922:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109923:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109923:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109924:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109924:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109925:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109925:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109926:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109926:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109927:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109927:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109928:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109928:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109929:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109929:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109930:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109930:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109931:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109931:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109932:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109932:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109933:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109933:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109934:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109934:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109935:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109935:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109936:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109936:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109937:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109937:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109938:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109938:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109939:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109939:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109940:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109940:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109941:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109941:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109942:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109942:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109943:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109943:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109944:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109944:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109945:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109945:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109946:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109946:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109947:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109947:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109948:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109948:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109949:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109949:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109950:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109950:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109951:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109951:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109952:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109952:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109953:entry:Value"
      "1.3.6.1.4.1.25623.1.0.109953:1:entry:Value" },
    { "1.3.6.1.4.1.25623.1.0.109954:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109954:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109955:radio:Value"
      "1.3.6.1.4.1.25623.1.0.109955:1:radio:Value" },
    { "1.3.6.1.4.1.25623.1.0.109956:entry:Maximum"
      "1.3.6.1.4.1.25623.1.0.109956:1:entry:Maximum" },
    { "1.3.6.1.4.1.25623.1.0.109957:entry:Maximum"
      "1.3.6.1.4.1.25623.1.0.109957:1:entry:Maximum" },
    { "1.3.6.1.4.1.25623.1.0.109958:entry:Maximum"
      "1.3.6.1.4.1.25623.1.0.109958:1:entry:Maximum" },
    { "1.3.6.1.4.1.25623.1.0.109959:entry:Maximum"
      "1.3.6.1.4.1.25623.1.0.109959:1:entry:Maximum" },
    { "1.3.6.1.4.1.25623.1.0.109960:radio:Required"
      "1.3.6.1.4.1.25623.1.0.109960:1:radio:Required" },
    { "1.3.6.1.4.1.25623.1.0.109961:radio:Required"
      "1.3.6.1.4.1.25623.1.0.109961:1:radio:Required" },
    { "1.3.6.1.4.1.25623.1.0.111013:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.111013:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.111022:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.111022:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.111038:entry:Maximum number of items shown for each list"
      "1.3.6.1.4.1.25623.1.0.111038:1:entry:Maximum number of items shown for each list" },
    { "1.3.6.1.4.1.25623.1.0.111084:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.111084:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.111091:checkbox:Report NVT debug logs"
      "1.3.6.1.4.1.25623.1.0.111091:1:checkbox:Report NVT debug logs" },
    { "1.3.6.1.4.1.25623.1.0.111108:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.111108:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.112060:checkbox:Collect and report Microsoft Windows DNS Cache"
      "1.3.6.1.4.1.25623.1.0.112060:1:checkbox:Collect and report Microsoft Windows DNS Cache" },
    { "1.3.6.1.4.1.25623.1.0.113120:entry:API Username"
      "1.3.6.1.4.1.25623.1.0.113120:1:entry:API Username" },
    { "1.3.6.1.4.1.25623.1.0.113120:password:API Password"
      "1.3.6.1.4.1.25623.1.0.113120:2:password:API Password" },
    { "1.3.6.1.4.1.25623.1.0.140038:checkbox:Perform check:"
      "1.3.6.1.4.1.25623.1.0.140038:1:checkbox:Perform check:" },
    { "1.3.6.1.4.1.25623.1.0.140038:entry:Certificate Issuer"
      "1.3.6.1.4.1.25623.1.0.140038:2:entry:Certificate Issuer" },
    { "1.3.6.1.4.1.25623.1.0.140038:checkbox:Report passed tests:"
      "1.3.6.1.4.1.25623.1.0.140038:3:checkbox:Report passed tests:" },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:Perform check:"
      "1.3.6.1.4.1.25623.1.0.140121:1:checkbox:Perform check:" },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:Report passed tests:"
      "1.3.6.1.4.1.25623.1.0.140121:2:checkbox:Report passed tests:" },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:Report failed tests:"
      "1.3.6.1.4.1.25623.1.0.140121:3:checkbox:Report failed tests:" },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:Report errors:"
      "1.3.6.1.4.1.25623.1.0.140121:4:checkbox:Report errors:" },
    { "1.3.6.1.4.1.25623.1.0.140121:entry:Minimum docker version for test 1.1:"
      "1.3.6.1.4.1.25623.1.0.140121:5:entry:Minimum docker version for test 1.1:" },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:Report skipped tests:"
      "1.3.6.1.4.1.25623.1.0.140121:6:checkbox:Report skipped tests:" },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:1.1 Use Linux Kernel >= 3.10."
      "1.3.6.1.4.1.25623.1.0.140121:7:checkbox:1.1 Use Linux Kernel >= 3.10." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:2.5 Disable legacy registry v1."
      "1.3.6.1.4.1.25623.1.0.140121:8:checkbox:2.5 Disable legacy registry v1." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:3.9 Sensitive host system directories should not be mounted in containers."
      "1.3.6.1.4.1.25623.1.0.140121:9:checkbox:3.9 Sensitive host system directories should not be mounted in containers." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:5.0 Do not use propagation mode \"shared\" for mounts."
      "1.3.6.1.4.1.25623.1.0.140121:10:checkbox:5.0 Do not use propagation mode \"shared\" for mounts." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:1.2 Use a up to date Docker version."
      "1.3.6.1.4.1.25623.1.0.140121:11:checkbox:1.2 Use a up to date Docker version." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:2.6 Enable live restore."
      "1.3.6.1.4.1.25623.1.0.140121:12:checkbox:2.6 Enable live restore." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:5.1 Isolate the containers from the hosts UTS namespace."
      "1.3.6.1.4.1.25623.1.0.140121:13:checkbox:5.1 Isolate the containers from the hosts UTS namespace." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:1.3 Do not use lxc execution driver."
      "1.3.6.1.4.1.25623.1.0.140121:14:checkbox:1.3 Do not use lxc execution driver." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:2.7 Do not use Userland Proxy"
      "1.3.6.1.4.1.25623.1.0.140121:15:checkbox:2.7 Do not use Userland Proxy" },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:5.2 Do not disable default seccomp profile."
      "1.3.6.1.4.1.25623.1.0.140121:16:checkbox:5.2 Do not disable default seccomp profile." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:1.4 Restrict network traffic between containers."
      "1.3.6.1.4.1.25623.1.0.140121:17:checkbox:1.4 Restrict network traffic between containers." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:2.8 docker.service file ownership must set to root:root"
      "1.3.6.1.4.1.25623.1.0.140121:18:checkbox:2.8 docker.service file ownership must set to root:root" },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:5.3 Confirm cgroup usage."
      "1.3.6.1.4.1.25623.1.0.140121:19:checkbox:5.3 Confirm cgroup usage." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:1.5 Set the logging level to \"info\"."
      "1.3.6.1.4.1.25623.1.0.140121:20:checkbox:1.5 Set the logging level to \"info\"." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:2.9 docker.service file permissions must set to 644 or more restrictive."
      "1.3.6.1.4.1.25623.1.0.140121:21:checkbox:2.9 docker.service file permissions must set to 644 or more restrictive." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:4.0 Do not run sshd within containers"
      "1.3.6.1.4.1.25623.1.0.140121:22:checkbox:4.0 Do not run sshd within containers" },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:5.4 Set no-new-privileges for Container."
      "1.3.6.1.4.1.25623.1.0.140121:23:checkbox:5.4 Set no-new-privileges for Container." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:1.6 Allow Docker to make changes to iptables."
      "1.3.6.1.4.1.25623.1.0.140121:24:checkbox:1.6 Allow Docker to make changes to iptables." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:4.1 Container ports mapped to a privileged port."
      "1.3.6.1.4.1.25623.1.0.140121:25:checkbox:4.1 Container ports mapped to a privileged port." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:5.5 Do not share the hosts user namespaces."
      "1.3.6.1.4.1.25623.1.0.140121:26:checkbox:5.5 Do not share the hosts user namespaces." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:1.7 Do not use insecure registries"
      "1.3.6.1.4.1.25623.1.0.140121:27:checkbox:1.7 Do not use insecure registries" },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:4.2 Do not skip placing the container inside a separate network stack."
      "1.3.6.1.4.1.25623.1.0.140121:28:checkbox:4.2 Do not skip placing the container inside a separate network stack." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:5.6 Docker socket must not mount inside any containers."
      "1.3.6.1.4.1.25623.1.0.140121:29:checkbox:5.6 Docker socket must not mount inside any containers." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:1.8 Do not use the \"aufs\" storage driver."
      "1.3.6.1.4.1.25623.1.0.140121:30:checkbox:1.8 Do not use the \"aufs\" storage driver." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:4.3 Use memory limit for container."
      "1.3.6.1.4.1.25623.1.0.140121:31:checkbox:4.3 Use memory limit for container." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:5.7 Avoid image sprawl."
      "1.3.6.1.4.1.25623.1.0.140121:32:checkbox:5.7 Avoid image sprawl." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:1.9 Configure TLS authentication."
      "1.3.6.1.4.1.25623.1.0.140121:33:checkbox:1.9 Configure TLS authentication." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:3.0 docker.socket file ownership must set to root:root"
      "1.3.6.1.4.1.25623.1.0.140121:34:checkbox:3.0 docker.socket file ownership must set to root:root" },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:4.4 Use CPU priority for container."
      "1.3.6.1.4.1.25623.1.0.140121:35:checkbox:4.4 Use CPU priority for container." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:5.8 Avoid container sprawl."
      "1.3.6.1.4.1.25623.1.0.140121:36:checkbox:5.8 Avoid container sprawl." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:3.1 docker.socket file permissions must set to 644 or more restrictive."
      "1.3.6.1.4.1.25623.1.0.140121:37:checkbox:3.1 docker.socket file permissions must set to 644 or more restrictive." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:4.5 Containers root filesystem should mounted as read only."
      "1.3.6.1.4.1.25623.1.0.140121:38:checkbox:4.5 Containers root filesystem should mounted as read only." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:3.2 /etc/docker directory ownership must set to root:root."
      "1.3.6.1.4.1.25623.1.0.140121:39:checkbox:3.2 /etc/docker directory ownership must set to root:root." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:4.6 Bind incoming container traffic to a specific host interface."
      "1.3.6.1.4.1.25623.1.0.140121:40:checkbox:4.6 Bind incoming container traffic to a specific host interface." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:3.3 /etc/docker directory permissions must set to 755 or more restrictive"
      "1.3.6.1.4.1.25623.1.0.140121:41:checkbox:3.3 /etc/docker directory permissions must set to 755 or more restrictive" },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:4.7 Set the \"on-failure\" container restart policy to 5 or less."
      "1.3.6.1.4.1.25623.1.0.140121:42:checkbox:4.7 Set the \"on-failure\" container restart policy to 5 or less." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:2.0 Enable a default ulimit as appropriate."
      "1.3.6.1.4.1.25623.1.0.140121:43:checkbox:2.0 Enable a default ulimit as appropriate." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:3.4 Docker socket file ownership must set to root:docker."
      "1.3.6.1.4.1.25623.1.0.140121:44:checkbox:3.4 Docker socket file ownership must set to root:docker." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:4.8 Isolate the containers from the hosts process namespace."
      "1.3.6.1.4.1.25623.1.0.140121:45:checkbox:4.8 Isolate the containers from the hosts process namespace." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:2.1 Enable user namespace support."
      "1.3.6.1.4.1.25623.1.0.140121:46:checkbox:2.1 Enable user namespace support." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:3.5 Docker socket file permissions must set to 660 or more restrictive."
      "1.3.6.1.4.1.25623.1.0.140121:47:checkbox:3.5 Docker socket file permissions must set to 660 or more restrictive." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:4.9 Isolate the containers from the hosts IPC namespace."
      "1.3.6.1.4.1.25623.1.0.140121:48:checkbox:4.9 Isolate the containers from the hosts IPC namespace." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:2.2 Check default cgroup usage."
      "1.3.6.1.4.1.25623.1.0.140121:49:checkbox:2.2 Check default cgroup usage." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:3.6 Do not use user root for container."
      "1.3.6.1.4.1.25623.1.0.140121:50:checkbox:3.6 Do not use user root for container." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:2.3 Do not increase base device size if not needed."
      "1.3.6.1.4.1.25623.1.0.140121:51:checkbox:2.3 Do not increase base device size if not needed." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:3.7 Use HEALTHCHECK for the container image."
      "1.3.6.1.4.1.25623.1.0.140121:52:checkbox:3.7 Use HEALTHCHECK for the container image." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:1.0 Use a separate partition for containers."
      "1.3.6.1.4.1.25623.1.0.140121:53:checkbox:1.0 Use a separate partition for containers." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:2.4 Make use of authorization plugins."
      "1.3.6.1.4.1.25623.1.0.140121:54:checkbox:2.4 Make use of authorization plugins." },
    { "1.3.6.1.4.1.25623.1.0.140121:checkbox:3.8 Do not use privileged containers."
      "1.3.6.1.4.1.25623.1.0.140121:55:checkbox:3.8 Do not use privileged containers." },
    { "1.3.6.1.4.1.25623.1.0.801237:entry:smbusername :"
      "1.3.6.1.4.1.25623.1.0.801237:1:entry:smbusername :" },
    { "1.3.6.1.4.1.25623.1.0.801237:entry:smbpassword :"
      "1.3.6.1.4.1.25623.1.0.801237:2:entry:smbpassword :" },
    { "1.3.6.1.4.1.25623.1.0.801237:entry:smbdomain :"
      "1.3.6.1.4.1.25623.1.0.801237:3:entry:smbdomain :" },
    { "1.3.6.1.4.1.25623.1.0.801237:entry:smbport :"
      "1.3.6.1.4.1.25623.1.0.801237:4:entry:smbport :" },
    { "1.3.6.1.4.1.25623.1.0.801237:entry:smbtype :"
      "1.3.6.1.4.1.25623.1.0.801237:5:entry:smbtype :" },
    { "1.3.6.1.4.1.25623.1.0.801237:entry:smbnoguest :"
      "1.3.6.1.4.1.25623.1.0.801237:6:entry:smbnoguest :" },
    { "1.3.6.1.4.1.25623.1.0.801237:entry:smbhash :"
      "1.3.6.1.4.1.25623.1.0.801237:7:entry:smbhash :" },
    { "1.3.6.1.4.1.25623.1.0.801237:entry:smbbasic :"
      "1.3.6.1.4.1.25623.1.0.801237:8:entry:smbbasic :" },
    { "1.3.6.1.4.1.25623.1.0.801237:entry:smbsign :"
      "1.3.6.1.4.1.25623.1.0.801237:9:entry:smbsign :" },
    { "1.3.6.1.4.1.25623.1.0.801237:entry:randomseed :"
      "1.3.6.1.4.1.25623.1.0.801237:10:entry:randomseed :" },
    { "1.3.6.1.4.1.25623.1.0.801241:entry:limit :"
      "1.3.6.1.4.1.25623.1.0.801241:1:entry:limit :" },
    { "1.3.6.1.4.1.25623.1.0.801241:entry:passlimit :"
      "1.3.6.1.4.1.25623.1.0.801241:2:entry:passlimit :" },
    { "1.3.6.1.4.1.25623.1.0.801241:entry:userlimit :"
      "1.3.6.1.4.1.25623.1.0.801241:3:entry:userlimit :" },
    { "1.3.6.1.4.1.25623.1.0.801241:entry:userdb :"
      "1.3.6.1.4.1.25623.1.0.801241:4:entry:userdb :" },
    { "1.3.6.1.4.1.25623.1.0.801241:entry:passdb :"
      "1.3.6.1.4.1.25623.1.0.801241:5:entry:passdb :" },
    { "1.3.6.1.4.1.25623.1.0.801241:entry:unpwdb.passlimit :"
      "1.3.6.1.4.1.25623.1.0.801241:6:entry:unpwdb.passlimit :" },
    { "1.3.6.1.4.1.25623.1.0.801241:entry:unpwdb.timelimit :"
      "1.3.6.1.4.1.25623.1.0.801241:7:entry:unpwdb.timelimit :" },
    { "1.3.6.1.4.1.25623.1.0.801241:entry:unpwdb.userlimit :"
      "1.3.6.1.4.1.25623.1.0.801241:8:entry:unpwdb.userlimit :" },
    { "1.3.6.1.4.1.25623.1.0.801254:entry:Base Folder :"
      "1.3.6.1.4.1.25623.1.0.801254:1:entry:Base Folder :" },
    { "1.3.6.1.4.1.25623.1.0.801254:entry:Folder db :"
      "1.3.6.1.4.1.25623.1.0.801254:2:entry:Folder db :" },
    { "1.3.6.1.4.1.25623.1.0.801254:entry:Webdav Folder :"
      "1.3.6.1.4.1.25623.1.0.801254:3:entry:Webdav Folder :" },
    { "1.3.6.1.4.1.25623.1.0.801254:entry:http-max-cache-size :"
      "1.3.6.1.4.1.25623.1.0.801254:4:entry:http-max-cache-size :" },
    { "1.3.6.1.4.1.25623.1.0.801254:entry:pipeline :"
      "1.3.6.1.4.1.25623.1.0.801254:5:entry:pipeline :" },
    { "1.3.6.1.4.1.25623.1.0.801259:entry:http-max-cache-size :"
      "1.3.6.1.4.1.25623.1.0.801259:1:entry:http-max-cache-size :" },
    { "1.3.6.1.4.1.25623.1.0.801259:entry:pipeline :"
      "1.3.6.1.4.1.25623.1.0.801259:2:entry:pipeline :" },
    { "1.3.6.1.4.1.25623.1.0.801261:entry:ftp-bounce.username :"
      "1.3.6.1.4.1.25623.1.0.801261:1:entry:ftp-bounce.username :" },
    { "1.3.6.1.4.1.25623.1.0.801261:entry:ftp-bounce.password :"
      "1.3.6.1.4.1.25623.1.0.801261:2:entry:ftp-bounce.password :" },
    { "1.3.6.1.4.1.25623.1.0.801262:entry:smbusername :"
      "1.3.6.1.4.1.25623.1.0.801262:1:entry:smbusername :" },
    { "1.3.6.1.4.1.25623.1.0.801262:entry:smbpassword :"
      "1.3.6.1.4.1.25623.1.0.801262:2:entry:smbpassword :" },
    { "1.3.6.1.4.1.25623.1.0.801262:entry:smbdomain :"
      "1.3.6.1.4.1.25623.1.0.801262:3:entry:smbdomain :" },
    { "1.3.6.1.4.1.25623.1.0.801262:entry:smbport :"
      "1.3.6.1.4.1.25623.1.0.801262:4:entry:smbport :" },
    { "1.3.6.1.4.1.25623.1.0.801262:entry:smbtype :"
      "1.3.6.1.4.1.25623.1.0.801262:5:entry:smbtype :" },
    { "1.3.6.1.4.1.25623.1.0.801262:entry:smbnoguest :"
      "1.3.6.1.4.1.25623.1.0.801262:6:entry:smbnoguest :" },
    { "1.3.6.1.4.1.25623.1.0.801262:entry:smbhash :"
      "1.3.6.1.4.1.25623.1.0.801262:7:entry:smbhash :" },
    { "1.3.6.1.4.1.25623.1.0.801262:entry:smbbasic :"
      "1.3.6.1.4.1.25623.1.0.801262:8:entry:smbbasic :" },
    { "1.3.6.1.4.1.25623.1.0.801262:entry:smbsign :"
      "1.3.6.1.4.1.25623.1.0.801262:9:entry:smbsign :" },
    { "1.3.6.1.4.1.25623.1.0.801262:entry:randomseed :"
      "1.3.6.1.4.1.25623.1.0.801262:10:entry:randomseed :" },
    { "1.3.6.1.4.1.25623.1.0.801265:checkbox:displayall :"
      "1.3.6.1.4.1.25623.1.0.801265:1:checkbox:displayall :" },
    { "1.3.6.1.4.1.25623.1.0.801265:checkbox:variations :"
      "1.3.6.1.4.1.25623.1.0.801265:2:checkbox:variations :" },
    { "1.3.6.1.4.1.25623.1.0.801265:entry:path :"
      "1.3.6.1.4.1.25623.1.0.801265:3:entry:path :" },
    { "1.3.6.1.4.1.25623.1.0.801265:entry:limit :"
      "1.3.6.1.4.1.25623.1.0.801265:4:entry:limit :" },
    { "1.3.6.1.4.1.25623.1.0.801265:entry:fingerprints :"
      "1.3.6.1.4.1.25623.1.0.801265:5:entry:fingerprints :" },
    { "1.3.6.1.4.1.25623.1.0.801265:entry:http-max-cache-size :"
      "1.3.6.1.4.1.25623.1.0.801265:6:entry:http-max-cache-size :" },
    { "1.3.6.1.4.1.25623.1.0.801265:entry:pipeline :"
      "1.3.6.1.4.1.25623.1.0.801265:7:entry:pipeline :" },
    { "1.3.6.1.4.1.25623.1.0.801265:entry:http-enum.basepath :"
      "1.3.6.1.4.1.25623.1.0.801265:8:entry:http-enum.basepath :" },
    { "1.3.6.1.4.1.25623.1.0.801265:checkbox:http-enum.displayall :"
      "1.3.6.1.4.1.25623.1.0.801265:9:checkbox:http-enum.displayall :" },
    { "1.3.6.1.4.1.25623.1.0.801265:entry:http-enum.fingerprintfile :"
      "1.3.6.1.4.1.25623.1.0.801265:10:entry:http-enum.fingerprintfile :" },
    { "1.3.6.1.4.1.25623.1.0.801265:entry:http-enum.category :"
      "1.3.6.1.4.1.25623.1.0.801265:11:entry:http-enum.category :" },
    { "1.3.6.1.4.1.25623.1.0.801268:checkbox:smblockout :"
      "1.3.6.1.4.1.25623.1.0.801268:1:checkbox:smblockout :" },
    { "1.3.6.1.4.1.25623.1.0.801268:entry:canaries :"
      "1.3.6.1.4.1.25623.1.0.801268:2:entry:canaries :" },
    { "1.3.6.1.4.1.25623.1.0.801268:entry:brutelimit :"
      "1.3.6.1.4.1.25623.1.0.801268:3:entry:brutelimit :" },
    { "1.3.6.1.4.1.25623.1.0.801268:entry:userdb :"
      "1.3.6.1.4.1.25623.1.0.801268:4:entry:userdb :" },
    { "1.3.6.1.4.1.25623.1.0.801268:entry:passdb :"
      "1.3.6.1.4.1.25623.1.0.801268:5:entry:passdb :" },
    { "1.3.6.1.4.1.25623.1.0.801268:entry:unpwdb.passlimit :"
      "1.3.6.1.4.1.25623.1.0.801268:6:entry:unpwdb.passlimit :" },
    { "1.3.6.1.4.1.25623.1.0.801268:entry:unpwdb.timelimit :"
      "1.3.6.1.4.1.25623.1.0.801268:7:entry:unpwdb.timelimit :" },
    { "1.3.6.1.4.1.25623.1.0.801268:entry:unpwdb.userlimit :"
      "1.3.6.1.4.1.25623.1.0.801268:8:entry:unpwdb.userlimit :" },
    { "1.3.6.1.4.1.25623.1.0.801268:entry:smbusername :"
      "1.3.6.1.4.1.25623.1.0.801268:9:entry:smbusername :" },
    { "1.3.6.1.4.1.25623.1.0.801268:entry:smbpassword :"
      "1.3.6.1.4.1.25623.1.0.801268:10:entry:smbpassword :" },
    { "1.3.6.1.4.1.25623.1.0.801268:entry:smbdomain :"
      "1.3.6.1.4.1.25623.1.0.801268:11:entry:smbdomain :" },
    { "1.3.6.1.4.1.25623.1.0.801268:entry:smbport :"
      "1.3.6.1.4.1.25623.1.0.801268:12:entry:smbport :" },
    { "1.3.6.1.4.1.25623.1.0.801268:entry:smbtype :"
      "1.3.6.1.4.1.25623.1.0.801268:13:entry:smbtype :" },
    { "1.3.6.1.4.1.25623.1.0.801268:entry:smbnoguest :"
      "1.3.6.1.4.1.25623.1.0.801268:14:entry:smbnoguest :" },
    { "1.3.6.1.4.1.25623.1.0.801268:entry:smbhash :"
      "1.3.6.1.4.1.25623.1.0.801268:15:entry:smbhash :" },
    { "1.3.6.1.4.1.25623.1.0.801268:entry:smbbasic :"
      "1.3.6.1.4.1.25623.1.0.801268:16:entry:smbbasic :" },
    { "1.3.6.1.4.1.25623.1.0.801268:entry:smbsign :"
      "1.3.6.1.4.1.25623.1.0.801268:17:entry:smbsign :" },
    { "1.3.6.1.4.1.25623.1.0.801268:entry:randomseed :"
      "1.3.6.1.4.1.25623.1.0.801268:18:entry:randomseed :" },
    { "1.3.6.1.4.1.25623.1.0.801270:entry:smbusername :"
      "1.3.6.1.4.1.25623.1.0.801270:1:entry:smbusername :" },
    { "1.3.6.1.4.1.25623.1.0.801270:entry:smbpassword :"
      "1.3.6.1.4.1.25623.1.0.801270:2:entry:smbpassword :" },
    { "1.3.6.1.4.1.25623.1.0.801270:entry:smbdomain :"
      "1.3.6.1.4.1.25623.1.0.801270:3:entry:smbdomain :" },
    { "1.3.6.1.4.1.25623.1.0.801270:entry:smbport :"
      "1.3.6.1.4.1.25623.1.0.801270:4:entry:smbport :" },
    { "1.3.6.1.4.1.25623.1.0.801270:entry:smbtype :"
      "1.3.6.1.4.1.25623.1.0.801270:5:entry:smbtype :" },
    { "1.3.6.1.4.1.25623.1.0.801270:entry:smbnoguest :"
      "1.3.6.1.4.1.25623.1.0.801270:6:entry:smbnoguest :" },
    { "1.3.6.1.4.1.25623.1.0.801270:entry:smbhash :"
      "1.3.6.1.4.1.25623.1.0.801270:7:entry:smbhash :" },
    { "1.3.6.1.4.1.25623.1.0.801270:entry:smbbasic :"
      "1.3.6.1.4.1.25623.1.0.801270:8:entry:smbbasic :" },
    { "1.3.6.1.4.1.25623.1.0.801270:entry:smbsign :"
      "1.3.6.1.4.1.25623.1.0.801270:9:entry:smbsign :" },
    { "1.3.6.1.4.1.25623.1.0.801270:entry:randomseed :"
      "1.3.6.1.4.1.25623.1.0.801270:10:entry:randomseed :" },
    { "1.3.6.1.4.1.25623.1.0.801271:checkbox:samronly :"
      "1.3.6.1.4.1.25623.1.0.801271:1:checkbox:samronly :" },
    { "1.3.6.1.4.1.25623.1.0.801271:checkbox:lsaonly :"
      "1.3.6.1.4.1.25623.1.0.801271:2:checkbox:lsaonly :" },
    { "1.3.6.1.4.1.25623.1.0.801271:entry:smbusername :"
      "1.3.6.1.4.1.25623.1.0.801271:3:entry:smbusername :" },
    { "1.3.6.1.4.1.25623.1.0.801271:entry:smbpassword :"
      "1.3.6.1.4.1.25623.1.0.801271:4:entry:smbpassword :" },
    { "1.3.6.1.4.1.25623.1.0.801271:entry:smbdomain :"
      "1.3.6.1.4.1.25623.1.0.801271:5:entry:smbdomain :" },
    { "1.3.6.1.4.1.25623.1.0.801271:entry:smbport :"
      "1.3.6.1.4.1.25623.1.0.801271:6:entry:smbport :" },
    { "1.3.6.1.4.1.25623.1.0.801271:entry:smbtype :"
      "1.3.6.1.4.1.25623.1.0.801271:7:entry:smbtype :" },
    { "1.3.6.1.4.1.25623.1.0.801271:entry:smbnoguest :"
      "1.3.6.1.4.1.25623.1.0.801271:8:entry:smbnoguest :" },
    { "1.3.6.1.4.1.25623.1.0.801271:entry:smbhash :"
      "1.3.6.1.4.1.25623.1.0.801271:9:entry:smbhash :" },
    { "1.3.6.1.4.1.25623.1.0.801271:entry:smbbasic :"
      "1.3.6.1.4.1.25623.1.0.801271:10:entry:smbbasic :" },
    { "1.3.6.1.4.1.25623.1.0.801271:entry:smbsign :"
      "1.3.6.1.4.1.25623.1.0.801271:11:entry:smbsign :" },
    { "1.3.6.1.4.1.25623.1.0.801271:entry:randomseed :"
      "1.3.6.1.4.1.25623.1.0.801271:12:entry:randomseed :" },
    { "1.3.6.1.4.1.25623.1.0.801276:entry:smbusername :"
      "1.3.6.1.4.1.25623.1.0.801276:1:entry:smbusername :" },
    { "1.3.6.1.4.1.25623.1.0.801276:entry:smbpassword :"
      "1.3.6.1.4.1.25623.1.0.801276:2:entry:smbpassword :" },
    { "1.3.6.1.4.1.25623.1.0.801276:entry:smbdomain :"
      "1.3.6.1.4.1.25623.1.0.801276:3:entry:smbdomain :" },
    { "1.3.6.1.4.1.25623.1.0.801276:entry:smbport :"
      "1.3.6.1.4.1.25623.1.0.801276:4:entry:smbport :" },
    { "1.3.6.1.4.1.25623.1.0.801276:entry:smbtype :"
      "1.3.6.1.4.1.25623.1.0.801276:5:entry:smbtype :" },
    { "1.3.6.1.4.1.25623.1.0.801276:entry:smbnoguest :"
      "1.3.6.1.4.1.25623.1.0.801276:6:entry:smbnoguest :" },
    { "1.3.6.1.4.1.25623.1.0.801276:entry:smbhash :"
      "1.3.6.1.4.1.25623.1.0.801276:7:entry:smbhash :" },
    { "1.3.6.1.4.1.25623.1.0.801276:entry:smbbasic :"
      "1.3.6.1.4.1.25623.1.0.801276:8:entry:smbbasic :" },
    { "1.3.6.1.4.1.25623.1.0.801276:entry:smbsign :"
      "1.3.6.1.4.1.25623.1.0.801276:9:entry:smbsign :" },
    { "1.3.6.1.4.1.25623.1.0.801276:entry:randomseed :"
      "1.3.6.1.4.1.25623.1.0.801276:10:entry:randomseed :" },
    { "1.3.6.1.4.1.25623.1.0.801277:entry:smbusername :"
      "1.3.6.1.4.1.25623.1.0.801277:1:entry:smbusername :" },
    { "1.3.6.1.4.1.25623.1.0.801277:entry:smbpassword :"
      "1.3.6.1.4.1.25623.1.0.801277:2:entry:smbpassword :" },
    { "1.3.6.1.4.1.25623.1.0.801277:entry:smbdomain :"
      "1.3.6.1.4.1.25623.1.0.801277:3:entry:smbdomain :" },
    { "1.3.6.1.4.1.25623.1.0.801277:entry:smbport :"
      "1.3.6.1.4.1.25623.1.0.801277:4:entry:smbport :" },
    { "1.3.6.1.4.1.25623.1.0.801277:entry:smbtype :"
      "1.3.6.1.4.1.25623.1.0.801277:5:entry:smbtype :" },
    { "1.3.6.1.4.1.25623.1.0.801277:entry:smbnoguest :"
      "1.3.6.1.4.1.25623.1.0.801277:6:entry:smbnoguest :" },
    { "1.3.6.1.4.1.25623.1.0.801277:entry:smbhash :"
      "1.3.6.1.4.1.25623.1.0.801277:7:entry:smbhash :" },
    { "1.3.6.1.4.1.25623.1.0.801277:entry:smbbasic :"
      "1.3.6.1.4.1.25623.1.0.801277:8:entry:smbbasic :" },
    { "1.3.6.1.4.1.25623.1.0.801277:entry:smbsign :"
      "1.3.6.1.4.1.25623.1.0.801277:9:entry:smbsign :" },
    { "1.3.6.1.4.1.25623.1.0.801277:entry:randomseed :"
      "1.3.6.1.4.1.25623.1.0.801277:10:entry:randomseed :" },
    { "1.3.6.1.4.1.25623.1.0.801287:checkbox:safe :"
      "1.3.6.1.4.1.25623.1.0.801287:1:checkbox:safe :" },
    { "1.3.6.1.4.1.25623.1.0.801287:checkbox:unsafe :"
      "1.3.6.1.4.1.25623.1.0.801287:2:checkbox:unsafe :" },
    { "1.3.6.1.4.1.25623.1.0.801287:entry:smbusername :"
      "1.3.6.1.4.1.25623.1.0.801287:3:entry:smbusername :" },
    { "1.3.6.1.4.1.25623.1.0.801287:entry:smbpassword :"
      "1.3.6.1.4.1.25623.1.0.801287:4:entry:smbpassword :" },
    { "1.3.6.1.4.1.25623.1.0.801287:entry:smbdomain :"
      "1.3.6.1.4.1.25623.1.0.801287:5:entry:smbdomain :" },
    { "1.3.6.1.4.1.25623.1.0.801287:entry:smbport :"
      "1.3.6.1.4.1.25623.1.0.801287:6:entry:smbport :" },
    { "1.3.6.1.4.1.25623.1.0.801287:entry:smbtype :"
      "1.3.6.1.4.1.25623.1.0.801287:7:entry:smbtype :" },
    { "1.3.6.1.4.1.25623.1.0.801287:entry:smbnoguest :"
      "1.3.6.1.4.1.25623.1.0.801287:8:entry:smbnoguest :" },
    { "1.3.6.1.4.1.25623.1.0.801287:entry:smbhash :"
      "1.3.6.1.4.1.25623.1.0.801287:9:entry:smbhash :" },
    { "1.3.6.1.4.1.25623.1.0.801287:entry:smbbasic :"
      "1.3.6.1.4.1.25623.1.0.801287:10:entry:smbbasic :" },
    { "1.3.6.1.4.1.25623.1.0.801287:entry:smbsign :"
      "1.3.6.1.4.1.25623.1.0.801287:11:entry:smbsign :" },
    { "1.3.6.1.4.1.25623.1.0.801287:entry:randomseed :"
      "1.3.6.1.4.1.25623.1.0.801287:12:entry:randomseed :" },
    { "1.3.6.1.4.1.25623.1.0.801291:entry:smbusername :"
      "1.3.6.1.4.1.25623.1.0.801291:1:entry:smbusername :" },
    { "1.3.6.1.4.1.25623.1.0.801291:entry:smbpassword :"
      "1.3.6.1.4.1.25623.1.0.801291:2:entry:smbpassword :" },
    { "1.3.6.1.4.1.25623.1.0.801291:entry:smbdomain :"
      "1.3.6.1.4.1.25623.1.0.801291:3:entry:smbdomain :" },
    { "1.3.6.1.4.1.25623.1.0.801291:entry:smbport :"
      "1.3.6.1.4.1.25623.1.0.801291:4:entry:smbport :" },
    { "1.3.6.1.4.1.25623.1.0.801291:entry:smbtype :"
      "1.3.6.1.4.1.25623.1.0.801291:5:entry:smbtype :" },
    { "1.3.6.1.4.1.25623.1.0.801291:entry:smbnoguest :"
      "1.3.6.1.4.1.25623.1.0.801291:6:entry:smbnoguest :" },
    { "1.3.6.1.4.1.25623.1.0.801291:entry:smbhash :"
      "1.3.6.1.4.1.25623.1.0.801291:7:entry:smbhash :" },
    { "1.3.6.1.4.1.25623.1.0.801291:entry:smbbasic :"
      "1.3.6.1.4.1.25623.1.0.801291:8:entry:smbbasic :" },
    { "1.3.6.1.4.1.25623.1.0.801291:entry:smbsign :"
      "1.3.6.1.4.1.25623.1.0.801291:9:entry:smbsign :" },
    { "1.3.6.1.4.1.25623.1.0.801291:entry:randomseed :"
      "1.3.6.1.4.1.25623.1.0.801291:10:entry:randomseed :" },
    { "1.3.6.1.4.1.25623.1.0.801292:entry:smbusername :"
      "1.3.6.1.4.1.25623.1.0.801292:1:entry:smbusername :" },
    { "1.3.6.1.4.1.25623.1.0.801292:entry:smbpassword :"
      "1.3.6.1.4.1.25623.1.0.801292:2:entry:smbpassword :" },
    { "1.3.6.1.4.1.25623.1.0.801292:entry:smbdomain :"
      "1.3.6.1.4.1.25623.1.0.801292:3:entry:smbdomain :" },
    { "1.3.6.1.4.1.25623.1.0.801292:entry:smbport :"
      "1.3.6.1.4.1.25623.1.0.801292:4:entry:smbport :" },
    { "1.3.6.1.4.1.25623.1.0.801292:entry:smbtype :"
      "1.3.6.1.4.1.25623.1.0.801292:5:entry:smbtype :" },
    { "1.3.6.1.4.1.25623.1.0.801292:entry:smbnoguest :"
      "1.3.6.1.4.1.25623.1.0.801292:6:entry:smbnoguest :" },
    { "1.3.6.1.4.1.25623.1.0.801292:entry:smbhash :"
      "1.3.6.1.4.1.25623.1.0.801292:7:entry:smbhash :" },
    { "1.3.6.1.4.1.25623.1.0.801292:entry:smbbasic :"
      "1.3.6.1.4.1.25623.1.0.801292:8:entry:smbbasic :" },
    { "1.3.6.1.4.1.25623.1.0.801292:entry:smbsign :"
      "1.3.6.1.4.1.25623.1.0.801292:9:entry:smbsign :" },
    { "1.3.6.1.4.1.25623.1.0.801292:entry:randomseed :"
      "1.3.6.1.4.1.25623.1.0.801292:10:entry:randomseed :" },
    { "1.3.6.1.4.1.25623.1.0.801294:entry:smbusername :"
      "1.3.6.1.4.1.25623.1.0.801294:1:entry:smbusername :" },
    { "1.3.6.1.4.1.25623.1.0.801294:entry:smbpassword :"
      "1.3.6.1.4.1.25623.1.0.801294:2:entry:smbpassword :" },
    { "1.3.6.1.4.1.25623.1.0.801294:entry:smbdomain :"
      "1.3.6.1.4.1.25623.1.0.801294:3:entry:smbdomain :" },
    { "1.3.6.1.4.1.25623.1.0.801294:entry:smbport :"
      "1.3.6.1.4.1.25623.1.0.801294:4:entry:smbport :" },
    { "1.3.6.1.4.1.25623.1.0.801294:entry:smbtype :"
      "1.3.6.1.4.1.25623.1.0.801294:5:entry:smbtype :" },
    { "1.3.6.1.4.1.25623.1.0.801294:entry:smbnoguest :"
      "1.3.6.1.4.1.25623.1.0.801294:6:entry:smbnoguest :" },
    { "1.3.6.1.4.1.25623.1.0.801294:entry:smbhash :"
      "1.3.6.1.4.1.25623.1.0.801294:7:entry:smbhash :" },
    { "1.3.6.1.4.1.25623.1.0.801294:entry:smbbasic :"
      "1.3.6.1.4.1.25623.1.0.801294:8:entry:smbbasic :" },
    { "1.3.6.1.4.1.25623.1.0.801294:entry:smbsign :"
      "1.3.6.1.4.1.25623.1.0.801294:9:entry:smbsign :" },
    { "1.3.6.1.4.1.25623.1.0.801294:entry:randomseed :"
      "1.3.6.1.4.1.25623.1.0.801294:10:entry:randomseed :" },
    { "1.3.6.1.4.1.25623.1.0.801295:entry:smbusername :"
      "1.3.6.1.4.1.25623.1.0.801295:1:entry:smbusername :" },
    { "1.3.6.1.4.1.25623.1.0.801295:entry:smbpassword :"
      "1.3.6.1.4.1.25623.1.0.801295:2:entry:smbpassword :" },
    { "1.3.6.1.4.1.25623.1.0.801295:entry:smbdomain :"
      "1.3.6.1.4.1.25623.1.0.801295:3:entry:smbdomain :" },
    { "1.3.6.1.4.1.25623.1.0.801295:entry:smbport :"
      "1.3.6.1.4.1.25623.1.0.801295:4:entry:smbport :" },
    { "1.3.6.1.4.1.25623.1.0.801295:entry:smbtype :"
      "1.3.6.1.4.1.25623.1.0.801295:5:entry:smbtype :" },
    { "1.3.6.1.4.1.25623.1.0.801295:entry:smbnoguest :"
      "1.3.6.1.4.1.25623.1.0.801295:6:entry:smbnoguest :" },
    { "1.3.6.1.4.1.25623.1.0.801295:entry:smbhash :"
      "1.3.6.1.4.1.25623.1.0.801295:7:entry:smbhash :" },
    { "1.3.6.1.4.1.25623.1.0.801295:entry:smbbasic :"
      "1.3.6.1.4.1.25623.1.0.801295:8:entry:smbbasic :" },
    { "1.3.6.1.4.1.25623.1.0.801295:entry:smbsign :"
      "1.3.6.1.4.1.25623.1.0.801295:9:entry:smbsign :" },
    { "1.3.6.1.4.1.25623.1.0.801295:entry:randomseed :"
      "1.3.6.1.4.1.25623.1.0.801295:10:entry:randomseed :" },
    { "1.3.6.1.4.1.25623.1.0.801296:entry:smbusername :"
      "1.3.6.1.4.1.25623.1.0.801296:1:entry:smbusername :" },
    { "1.3.6.1.4.1.25623.1.0.801296:entry:smbpassword :"
      "1.3.6.1.4.1.25623.1.0.801296:2:entry:smbpassword :" },
    { "1.3.6.1.4.1.25623.1.0.801296:entry:smbdomain :"
      "1.3.6.1.4.1.25623.1.0.801296:3:entry:smbdomain :" },
    { "1.3.6.1.4.1.25623.1.0.801296:entry:smbport :"
      "1.3.6.1.4.1.25623.1.0.801296:4:entry:smbport :" },
    { "1.3.6.1.4.1.25623.1.0.801296:entry:smbtype :"
      "1.3.6.1.4.1.25623.1.0.801296:5:entry:smbtype :" },
    { "1.3.6.1.4.1.25623.1.0.801296:entry:smbnoguest :"
      "1.3.6.1.4.1.25623.1.0.801296:6:entry:smbnoguest :" },
    { "1.3.6.1.4.1.25623.1.0.801296:entry:smbhash :"
      "1.3.6.1.4.1.25623.1.0.801296:7:entry:smbhash :" },
    { "1.3.6.1.4.1.25623.1.0.801296:entry:smbbasic :"
      "1.3.6.1.4.1.25623.1.0.801296:8:entry:smbbasic :" },
    { "1.3.6.1.4.1.25623.1.0.801296:entry:smbsign :"
      "1.3.6.1.4.1.25623.1.0.801296:9:entry:smbsign :" },
    { "1.3.6.1.4.1.25623.1.0.801296:entry:randomseed :"
      "1.3.6.1.4.1.25623.1.0.801296:10:entry:randomseed :" },
    { "1.3.6.1.4.1.25623.1.0.801297:entry:http-max-cache-size :"
      "1.3.6.1.4.1.25623.1.0.801297:1:entry:http-max-cache-size :" },
    { "1.3.6.1.4.1.25623.1.0.801297:entry:pipeline :"
      "1.3.6.1.4.1.25623.1.0.801297:2:entry:pipeline :" },
    { "1.3.6.1.4.1.25623.1.0.801298:entry:smtp-commands.domain :"
      "1.3.6.1.4.1.25623.1.0.801298:1:entry:smtp-commands.domain :" },
    { "1.3.6.1.4.1.25623.1.0.801601:entry:smtp-open-relay.ip :"
      "1.3.6.1.4.1.25623.1.0.801601:1:entry:smtp-open-relay.ip :" },
    { "1.3.6.1.4.1.25623.1.0.801601:entry:smtp-open-relay.to :"
      "1.3.6.1.4.1.25623.1.0.801601:2:entry:smtp-open-relay.to :" },
    { "1.3.6.1.4.1.25623.1.0.801601:entry:smtp-open-relay.domain :"
      "1.3.6.1.4.1.25623.1.0.801601:3:entry:smtp-open-relay.domain :" },
    { "1.3.6.1.4.1.25623.1.0.801601:entry:smtp-open-relay.from :"
      "1.3.6.1.4.1.25623.1.0.801601:4:entry:smtp-open-relay.from :" },
    { "1.3.6.1.4.1.25623.1.0.801602:entry:pop3loginmethod :"
      "1.3.6.1.4.1.25623.1.0.801602:1:entry:pop3loginmethod :" },
    { "1.3.6.1.4.1.25623.1.0.801602:entry:userdb :"
      "1.3.6.1.4.1.25623.1.0.801602:2:entry:userdb :" },
    { "1.3.6.1.4.1.25623.1.0.801602:entry:passdb :"
      "1.3.6.1.4.1.25623.1.0.801602:3:entry:passdb :" },
    { "1.3.6.1.4.1.25623.1.0.801602:entry:unpwdb.passlimit :"
      "1.3.6.1.4.1.25623.1.0.801602:4:entry:unpwdb.passlimit :" },
    { "1.3.6.1.4.1.25623.1.0.801602:entry:unpwdb.timelimit :"
      "1.3.6.1.4.1.25623.1.0.801602:5:entry:unpwdb.timelimit :" },
    { "1.3.6.1.4.1.25623.1.0.801602:entry:unpwdb.userlimit :"
      "1.3.6.1.4.1.25623.1.0.801602:6:entry:unpwdb.userlimit :" },
    { "1.3.6.1.4.1.25623.1.0.801608:entry:http-max-cache-size :"
      "1.3.6.1.4.1.25623.1.0.801608:1:entry:http-max-cache-size :" },
    { "1.3.6.1.4.1.25623.1.0.801608:entry:pipeline :"
      "1.3.6.1.4.1.25623.1.0.801608:2:entry:pipeline :" },
    { "1.3.6.1.4.1.25623.1.0.801610:entry:http-max-cache-size :"
      "1.3.6.1.4.1.25623.1.0.801610:1:entry:http-max-cache-size :" },
    { "1.3.6.1.4.1.25623.1.0.801610:entry:pipeline :"
      "1.3.6.1.4.1.25623.1.0.801610:2:entry:pipeline :" },
    { "1.3.6.1.4.1.25623.1.0.801611:entry:useget :"
      "1.3.6.1.4.1.25623.1.0.801611:1:entry:useget :" },
    { "1.3.6.1.4.1.25623.1.0.801611:entry:path :"
      "1.3.6.1.4.1.25623.1.0.801611:2:entry:path :" },
    { "1.3.6.1.4.1.25623.1.0.801611:entry:http-max-cache-size :"
      "1.3.6.1.4.1.25623.1.0.801611:3:entry:http-max-cache-size :" },
    { "1.3.6.1.4.1.25623.1.0.801611:entry:pipeline :"
      "1.3.6.1.4.1.25623.1.0.801611:4:entry:pipeline :" },
    { "1.3.6.1.4.1.25623.1.0.801619:entry:favicon.root :"
      "1.3.6.1.4.1.25623.1.0.801619:1:entry:favicon.root :" },
    { "1.3.6.1.4.1.25623.1.0.801619:entry:favicon.uri :"
      "1.3.6.1.4.1.25623.1.0.801619:2:entry:favicon.uri :" },
    { "1.3.6.1.4.1.25623.1.0.801619:entry:http-max-cache-size :"
      "1.3.6.1.4.1.25623.1.0.801619:3:entry:http-max-cache-size :" },
    { "1.3.6.1.4.1.25623.1.0.801619:entry:pipeline :"
      "1.3.6.1.4.1.25623.1.0.801619:4:entry:pipeline :" },
    { "1.3.6.1.4.1.25623.1.0.801620:entry:http-max-cache-size :"
      "1.3.6.1.4.1.25623.1.0.801620:1:entry:http-max-cache-size :" },
    { "1.3.6.1.4.1.25623.1.0.801620:entry:pipeline :"
      "1.3.6.1.4.1.25623.1.0.801620:2:entry:pipeline :" },
    { "1.3.6.1.4.1.25623.1.0.801620:entry:http-passwd.root :"
      "1.3.6.1.4.1.25623.1.0.801620:3:entry:http-passwd.root :" },
    { "1.3.6.1.4.1.25623.1.0.801621:entry:proxy.url :"
      "1.3.6.1.4.1.25623.1.0.801621:1:entry:proxy.url :" },
    { "1.3.6.1.4.1.25623.1.0.801621:entry:proxy.pattern :"
      "1.3.6.1.4.1.25623.1.0.801621:2:entry:proxy.pattern :" },
    { "1.3.6.1.4.1.25623.1.0.801633:radio:ssh_hostkey :"
      "1.3.6.1.4.1.25623.1.0.801633:1:radio:ssh_hostkey :" },
    { "1.3.6.1.4.1.25623.1.0.801649:entry:dns :"
      "1.3.6.1.4.1.25623.1.0.801649:1:entry:dns :" },
    { "1.3.6.1.4.1.25623.1.0.801670:entry:userdb :"
      "1.3.6.1.4.1.25623.1.0.801670:1:entry:userdb :" },
    { "1.3.6.1.4.1.25623.1.0.801670:entry:passdb :"
      "1.3.6.1.4.1.25623.1.0.801670:2:entry:passdb :" },
    { "1.3.6.1.4.1.25623.1.0.801670:entry:unpwdb.passlimit :"
      "1.3.6.1.4.1.25623.1.0.801670:3:entry:unpwdb.passlimit :" },
    { "1.3.6.1.4.1.25623.1.0.801670:entry:unpwdb.timelimit :"
      "1.3.6.1.4.1.25623.1.0.801670:4:entry:unpwdb.timelimit :" },
    { "1.3.6.1.4.1.25623.1.0.801670:entry:unpwdb.userlimit :"
      "1.3.6.1.4.1.25623.1.0.801670:5:entry:unpwdb.userlimit :" },
    { "1.3.6.1.4.1.25623.1.0.801691:entry:dns-zone-transfer.port :"
      "1.3.6.1.4.1.25623.1.0.801691:1:entry:dns-zone-transfer.port :" },
    { "1.3.6.1.4.1.25623.1.0.801691:entry:dns-zone-transfer.server :"
      "1.3.6.1.4.1.25623.1.0.801691:2:entry:dns-zone-transfer.server :" },
    { "1.3.6.1.4.1.25623.1.0.801691:entry:dns-zone-transfer.domain :"
      "1.3.6.1.4.1.25623.1.0.801691:3:entry:dns-zone-transfer.domain :" },
    { "1.3.6.1.4.1.25623.1.0.801693:entry:randomize_mac :"
      "1.3.6.1.4.1.25623.1.0.801693:1:entry:randomize_mac :" },
    { "1.3.6.1.4.1.25623.1.0.801693:entry:fake_requests :"
      "1.3.6.1.4.1.25623.1.0.801693:2:entry:fake_requests :" },
    { "1.3.6.1.4.1.25623.1.0.801693:entry:requests :"
      "1.3.6.1.4.1.25623.1.0.801693:3:entry:requests :" },
    { "1.3.6.1.4.1.25623.1.0.801693:entry:dhcptype :"
      "1.3.6.1.4.1.25623.1.0.801693:4:entry:dhcptype :" },
    { "1.3.6.1.4.1.25623.1.0.801695:entry:http-max-cache-size :"
      "1.3.6.1.4.1.25623.1.0.801695:1:entry:http-max-cache-size :" },
    { "1.3.6.1.4.1.25623.1.0.801695:entry:http.pipeline :"
      "1.3.6.1.4.1.25623.1.0.801695:2:entry:http.pipeline :" },
    { "1.3.6.1.4.1.25623.1.0.801696:entry:http-max-cache-size :"
      "1.3.6.1.4.1.25623.1.0.801696:1:entry:http-max-cache-size :" },
    { "1.3.6.1.4.1.25623.1.0.801696:entry:http.pipeline :"
      "1.3.6.1.4.1.25623.1.0.801696:2:entry:http.pipeline :" },
    { "1.3.6.1.4.1.25623.1.0.801699:entry:upnp-info.override :"
      "1.3.6.1.4.1.25623.1.0.801699:1:entry:upnp-info.override :" },
    { "1.3.6.1.4.1.25623.1.0.801699:entry:max-newtargets :"
      "1.3.6.1.4.1.25623.1.0.801699:2:entry:max-newtargets :" },
    { "1.3.6.1.4.1.25623.1.0.801699:entry:newtargets :"
      "1.3.6.1.4.1.25623.1.0.801699:3:entry:newtargets :" },
    { "1.3.6.1.4.1.25623.1.0.801699:entry:http-max-cache-size :"
      "1.3.6.1.4.1.25623.1.0.801699:4:entry:http-max-cache-size :" },
    { "1.3.6.1.4.1.25623.1.0.801699:entry:http.pipeline :"
      "1.3.6.1.4.1.25623.1.0.801699:5:entry:http.pipeline :" },
    { "1.3.6.1.4.1.25623.1.0.801801:entry:snmpcommunity :"
      "1.3.6.1.4.1.25623.1.0.801801:1:entry:snmpcommunity :" },
    { "1.3.6.1.4.1.25623.1.0.801802:entry:snmplist :"
      "1.3.6.1.4.1.25623.1.0.801802:1:entry:snmplist :" },
    { "1.3.6.1.4.1.25623.1.0.801802:entry:snmpcommunity :"
      "1.3.6.1.4.1.25623.1.0.801802:2:entry:snmpcommunity :" },
    { "1.3.6.1.4.1.25623.1.0.801803:entry:proxy.url :"
      "1.3.6.1.4.1.25623.1.0.801803:1:entry:proxy.url :" },
    { "1.3.6.1.4.1.25623.1.0.801803:entry:proxy.pattern :"
      "1.3.6.1.4.1.25623.1.0.801803:2:entry:proxy.pattern :" },
    { "1.3.6.1.4.1.25623.1.0.801804:entry:sql-injection.maxdepth :"
      "1.3.6.1.4.1.25623.1.0.801804:1:entry:sql-injection.maxdepth :" },
    { "1.3.6.1.4.1.25623.1.0.801804:entry:sql-injection.start :"
      "1.3.6.1.4.1.25623.1.0.801804:2:entry:sql-injection.start :" },
    { "1.3.6.1.4.1.25623.1.0.801804:entry:http-max-cache-size :"
      "1.3.6.1.4.1.25623.1.0.801804:3:entry:http-max-cache-size :" },
    { "1.3.6.1.4.1.25623.1.0.801804:entry:http.pipeline :"
      "1.3.6.1.4.1.25623.1.0.801804:4:entry:http.pipeline :" },
    { "1.3.6.1.4.1.25623.1.0.801811:entry:pjl_ready_message :"
      "1.3.6.1.4.1.25623.1.0.801811:1:entry:pjl_ready_message :" },
    { "1.3.6.1.4.1.25623.1.0.801813:entry:mssql.timeout :"
      "1.3.6.1.4.1.25623.1.0.801813:1:entry:mssql.timeout :" },
    { "1.3.6.1.4.1.25623.1.0.801815:entry:oraclesids :"
      "1.3.6.1.4.1.25623.1.0.801815:1:entry:oraclesids :" },
    { "1.3.6.1.4.1.25623.1.0.801816:checkbox:checkall :"
      "1.3.6.1.4.1.25623.1.0.801816:1:checkbox:checkall :" },
    { "1.3.6.1.4.1.25623.1.0.801816:checkbox:checkconficker :"
      "1.3.6.1.4.1.25623.1.0.801816:2:checkbox:checkconficker :" },
    { "1.3.6.1.4.1.25623.1.0.801816:entry:realip :"
      "1.3.6.1.4.1.25623.1.0.801816:3:entry:realip :" },
    { "1.3.6.1.4.1.25623.1.0.801816:entry:smbusername :"
      "1.3.6.1.4.1.25623.1.0.801816:4:entry:smbusername :" },
    { "1.3.6.1.4.1.25623.1.0.801816:entry:smbpassword :"
      "1.3.6.1.4.1.25623.1.0.801816:5:entry:smbpassword :" },
    { "1.3.6.1.4.1.25623.1.0.801816:entry:smbdomain :"
      "1.3.6.1.4.1.25623.1.0.801816:6:entry:smbdomain :" },
    { "1.3.6.1.4.1.25623.1.0.801816:entry:smbport :"
      "1.3.6.1.4.1.25623.1.0.801816:7:entry:smbport :" },
    { "1.3.6.1.4.1.25623.1.0.801816:entry:smbtype :"
      "1.3.6.1.4.1.25623.1.0.801816:8:entry:smbtype :" },
    { "1.3.6.1.4.1.25623.1.0.801816:entry:smbnoguest :"
      "1.3.6.1.4.1.25623.1.0.801816:9:entry:smbnoguest :" },
    { "1.3.6.1.4.1.25623.1.0.801816:entry:smbhash :"
      "1.3.6.1.4.1.25623.1.0.801816:10:entry:smbhash :" },
    { "1.3.6.1.4.1.25623.1.0.801816:entry:smbbasic :"
      "1.3.6.1.4.1.25623.1.0.801816:11:entry:smbbasic :" },
    { "1.3.6.1.4.1.25623.1.0.801816:entry:smbsign :"
      "1.3.6.1.4.1.25623.1.0.801816:12:entry:smbsign :" },
    { "1.3.6.1.4.1.25623.1.0.801816:entry:randomseed :"
      "1.3.6.1.4.1.25623.1.0.801816:13:entry:randomseed :" },
    { "1.3.6.1.4.1.25623.1.0.801817:checkbox:nohide :"
      "1.3.6.1.4.1.25623.1.0.801817:1:checkbox:nohide :" },
    { "1.3.6.1.4.1.25623.1.0.801817:checkbox:cleanup :"
      "1.3.6.1.4.1.25623.1.0.801817:2:checkbox:cleanup :" },
    { "1.3.6.1.4.1.25623.1.0.801817:checkbox:nocipher :"
      "1.3.6.1.4.1.25623.1.0.801817:3:checkbox:nocipher :" },
    { "1.3.6.1.4.1.25623.1.0.801817:checkbox:nocleanup :"
      "1.3.6.1.4.1.25623.1.0.801817:4:checkbox:nocleanup :" },
    { "1.3.6.1.4.1.25623.1.0.801817:entry:sharepath :"
      "1.3.6.1.4.1.25623.1.0.801817:5:entry:sharepath :" },
    { "1.3.6.1.4.1.25623.1.0.801817:entry:config :"
      "1.3.6.1.4.1.25623.1.0.801817:6:entry:config :" },
    { "1.3.6.1.4.1.25623.1.0.801817:entry:time :"
      "1.3.6.1.4.1.25623.1.0.801817:7:entry:time :" },
    { "1.3.6.1.4.1.25623.1.0.801817:entry:key :"
      "1.3.6.1.4.1.25623.1.0.801817:8:entry:key :" },
    { "1.3.6.1.4.1.25623.1.0.801817:entry:share :"
      "1.3.6.1.4.1.25623.1.0.801817:9:entry:share :" },
    { "1.3.6.1.4.1.25623.1.0.801817:entry:smbusername :"
      "1.3.6.1.4.1.25623.1.0.801817:10:entry:smbusername :" },
    { "1.3.6.1.4.1.25623.1.0.801817:entry:smbpassword :"
      "1.3.6.1.4.1.25623.1.0.801817:11:entry:smbpassword :" },
    { "1.3.6.1.4.1.25623.1.0.801817:entry:smbdomain :"
      "1.3.6.1.4.1.25623.1.0.801817:12:entry:smbdomain :" },
    { "1.3.6.1.4.1.25623.1.0.801817:entry:smbport :"
      "1.3.6.1.4.1.25623.1.0.801817:13:entry:smbport :" },
    { "1.3.6.1.4.1.25623.1.0.801817:entry:smbtype :"
      "1.3.6.1.4.1.25623.1.0.801817:14:entry:smbtype :" },
    { "1.3.6.1.4.1.25623.1.0.801817:entry:smbnoguest :"
      "1.3.6.1.4.1.25623.1.0.801817:15:entry:smbnoguest :" },
    { "1.3.6.1.4.1.25623.1.0.801817:entry:smbhash :"
      "1.3.6.1.4.1.25623.1.0.801817:16:entry:smbhash :" },
    { "1.3.6.1.4.1.25623.1.0.801817:entry:smbbasic :"
      "1.3.6.1.4.1.25623.1.0.801817:17:entry:smbbasic :" },
    { "1.3.6.1.4.1.25623.1.0.801817:entry:smbsign :"
      "1.3.6.1.4.1.25623.1.0.801817:18:entry:smbsign :" },
    { "1.3.6.1.4.1.25623.1.0.801817:entry:randomseed :"
      "1.3.6.1.4.1.25623.1.0.801817:19:entry:randomseed :" },
    { "1.3.6.1.4.1.25623.1.0.801818:entry:userdb :"
      "1.3.6.1.4.1.25623.1.0.801818:1:entry:userdb :" },
    { "1.3.6.1.4.1.25623.1.0.801818:entry:passdb :"
      "1.3.6.1.4.1.25623.1.0.801818:2:entry:passdb :" },
    { "1.3.6.1.4.1.25623.1.0.801818:entry:ntdomain :"
      "1.3.6.1.4.1.25623.1.0.801818:3:entry:ntdomain :" },
    { "1.3.6.1.4.1.25623.1.0.801818:entry:unpwdb.passlimit :"
      "1.3.6.1.4.1.25623.1.0.801818:4:entry:unpwdb.passlimit :" },
    { "1.3.6.1.4.1.25623.1.0.801818:entry:unpwdb.timelimit :"
      "1.3.6.1.4.1.25623.1.0.801818:5:entry:unpwdb.timelimit :" },
    { "1.3.6.1.4.1.25623.1.0.801818:entry:unpwdb.userlimit :"
      "1.3.6.1.4.1.25623.1.0.801818:6:entry:unpwdb.userlimit :" },
    { "1.3.6.1.4.1.25623.1.0.801818:entry:http-max-cache-size :"
      "1.3.6.1.4.1.25623.1.0.801818:7:entry:http-max-cache-size :" },
    { "1.3.6.1.4.1.25623.1.0.801818:entry:http.pipeline :"
      "1.3.6.1.4.1.25623.1.0.801818:8:entry:http.pipeline :" },
    { "1.3.6.1.4.1.25623.1.0.801820:entry:http-max-cache-size :"
      "1.3.6.1.4.1.25623.1.0.801820:1:entry:http-max-cache-size :" },
    { "1.3.6.1.4.1.25623.1.0.801820:entry:http.pipeline :"
      "1.3.6.1.4.1.25623.1.0.801820:2:entry:http.pipeline :" },
    { "1.3.6.1.4.1.25623.1.0.801822:entry:http-max-cache-size :"
      "1.3.6.1.4.1.25623.1.0.801822:1:entry:http-max-cache-size :" },
    { "1.3.6.1.4.1.25623.1.0.801822:entry:http.pipeline :"
      "1.3.6.1.4.1.25623.1.0.801822:2:entry:http.pipeline :" },
    { "1.3.6.1.4.1.25623.1.0.802042:checkbox:Create OVAL System Characteristics for NIST Windows OVAL Definitions"
      "1.3.6.1.4.1.25623.1.0.802042:1:checkbox:Create OVAL System Characteristics for NIST Windows OVAL Definitions" },
    { "1.3.6.1.4.1.25623.1.0.802067:checkbox:Report timeout"
      "1.3.6.1.4.1.25623.1.0.802067:1:checkbox:Report timeout" },
    { "1.3.6.1.4.1.25623.1.0.803500:entry:userdb"
      "1.3.6.1.4.1.25623.1.0.803500:1:entry:userdb" },
    { "1.3.6.1.4.1.25623.1.0.803500:entry:unpwdb.timelimit"
      "1.3.6.1.4.1.25623.1.0.803500:2:entry:unpwdb.timelimit" },
    { "1.3.6.1.4.1.25623.1.0.803500:entry:unpwdb.userlimit"
      "1.3.6.1.4.1.25623.1.0.803500:3:entry:unpwdb.userlimit" },
    { "1.3.6.1.4.1.25623.1.0.803500:entry:passdb"
      "1.3.6.1.4.1.25623.1.0.803500:4:entry:passdb" },
    { "1.3.6.1.4.1.25623.1.0.803500:entry:passlimit"
      "1.3.6.1.4.1.25623.1.0.803500:5:entry:passlimit" },
    { "1.3.6.1.4.1.25623.1.0.803500:entry:userlimit"
      "1.3.6.1.4.1.25623.1.0.803500:6:entry:userlimit" },
    { "1.3.6.1.4.1.25623.1.0.803500:entry:limit"
      "1.3.6.1.4.1.25623.1.0.803500:7:entry:limit" },
    { "1.3.6.1.4.1.25623.1.0.803500:entry:unpwdb.passlimit"
      "1.3.6.1.4.1.25623.1.0.803500:8:entry:unpwdb.passlimit" },
    { "1.3.6.1.4.1.25623.1.0.803501:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.803501:1:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.803501:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.803501:2:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.803501:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.803501:3:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.803501:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.803501:4:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.803502:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.803502:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.803502:entry:http-auth.path"
      "1.3.6.1.4.1.25623.1.0.803502:2:entry:http-auth.path" },
    { "1.3.6.1.4.1.25623.1.0.803502:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.803502:3:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.803503:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.803503:1:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.803503:entry:checkall"
      "1.3.6.1.4.1.25623.1.0.803503:2:entry:checkall" },
    { "1.3.6.1.4.1.25623.1.0.803503:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.803503:3:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.803503:entry:checkconficker"
      "1.3.6.1.4.1.25623.1.0.803503:4:entry:checkconficker" },
    { "1.3.6.1.4.1.25623.1.0.803503:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.803503:5:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.803503:entry:realip"
      "1.3.6.1.4.1.25623.1.0.803503:6:entry:realip" },
    { "1.3.6.1.4.1.25623.1.0.803503:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.803503:7:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.803504:entry:nfs.version"
      "1.3.6.1.4.1.25623.1.0.803504:1:entry:nfs.version" },
    { "1.3.6.1.4.1.25623.1.0.803504:entry:mount.version"
      "1.3.6.1.4.1.25623.1.0.803504:2:entry:mount.version" },
    { "1.3.6.1.4.1.25623.1.0.803504:entry:rpc.protocol"
      "1.3.6.1.4.1.25623.1.0.803504:3:entry:rpc.protocol" },
    { "1.3.6.1.4.1.25623.1.0.803507:entry:dns-zone-transfer.server"
      "1.3.6.1.4.1.25623.1.0.803507:1:entry:dns-zone-transfer.server" },
    { "1.3.6.1.4.1.25623.1.0.803507:entry:dns-zone-transfer.addall"
      "1.3.6.1.4.1.25623.1.0.803507:2:entry:dns-zone-transfer.addall" },
    { "1.3.6.1.4.1.25623.1.0.803507:entry:dns-zone-transfer.port"
      "1.3.6.1.4.1.25623.1.0.803507:3:entry:dns-zone-transfer.port" },
    { "1.3.6.1.4.1.25623.1.0.803507:entry:dns-zone-transfer.domain"
      "1.3.6.1.4.1.25623.1.0.803507:4:entry:dns-zone-transfer.domain" },
    { "1.3.6.1.4.1.25623.1.0.803509:entry:userdb"
      "1.3.6.1.4.1.25623.1.0.803509:1:entry:userdb" },
    { "1.3.6.1.4.1.25623.1.0.803509:entry:brutelimit"
      "1.3.6.1.4.1.25623.1.0.803509:2:entry:brutelimit" },
    { "1.3.6.1.4.1.25623.1.0.803509:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.803509:3:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.803509:entry:unpwdb.timelimit"
      "1.3.6.1.4.1.25623.1.0.803509:4:entry:unpwdb.timelimit" },
    { "1.3.6.1.4.1.25623.1.0.803509:entry:unpwdb.userlimit"
      "1.3.6.1.4.1.25623.1.0.803509:5:entry:unpwdb.userlimit" },
    { "1.3.6.1.4.1.25623.1.0.803509:entry:smblockout"
      "1.3.6.1.4.1.25623.1.0.803509:6:entry:smblockout" },
    { "1.3.6.1.4.1.25623.1.0.803509:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.803509:7:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.803509:entry:passdb"
      "1.3.6.1.4.1.25623.1.0.803509:8:entry:passdb" },
    { "1.3.6.1.4.1.25623.1.0.803509:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.803509:9:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.803509:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.803509:10:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.803509:entry:canaries"
      "1.3.6.1.4.1.25623.1.0.803509:11:entry:canaries" },
    { "1.3.6.1.4.1.25623.1.0.803509:entry:unpwdb.passlimit"
      "1.3.6.1.4.1.25623.1.0.803509:12:entry:unpwdb.passlimit" },
    { "1.3.6.1.4.1.25623.1.0.803510:entry:pjl_ready_message"
      "1.3.6.1.4.1.25623.1.0.803510:1:entry:pjl_ready_message" },
    { "1.3.6.1.4.1.25623.1.0.803512:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.803512:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.803512:entry:path"
      "1.3.6.1.4.1.25623.1.0.803512:2:entry:path" },
    { "1.3.6.1.4.1.25623.1.0.803512:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.803512:3:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.803512:entry:useget"
      "1.3.6.1.4.1.25623.1.0.803512:4:entry:useget" },
    { "1.3.6.1.4.1.25623.1.0.803513:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.803513:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.803513:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.803513:2:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.803514:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.803514:1:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.803514:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.803514:2:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.803514:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.803514:3:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.803514:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.803514:4:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.803515:entry:userdb"
      "1.3.6.1.4.1.25623.1.0.803515:1:entry:userdb" },
    { "1.3.6.1.4.1.25623.1.0.803515:entry:unpwdb.passlimit"
      "1.3.6.1.4.1.25623.1.0.803515:2:entry:unpwdb.passlimit" },
    { "1.3.6.1.4.1.25623.1.0.803515:entry:passdb"
      "1.3.6.1.4.1.25623.1.0.803515:3:entry:passdb" },
    { "1.3.6.1.4.1.25623.1.0.803515:entry:unpwdb.userlimit"
      "1.3.6.1.4.1.25623.1.0.803515:4:entry:unpwdb.userlimit" },
    { "1.3.6.1.4.1.25623.1.0.803515:entry:unpwdb.timelimit"
      "1.3.6.1.4.1.25623.1.0.803515:5:entry:unpwdb.timelimit" },
    { "1.3.6.1.4.1.25623.1.0.803519:entry:dns"
      "1.3.6.1.4.1.25623.1.0.803519:1:entry:dns" },
    { "1.3.6.1.4.1.25623.1.0.803520:entry:ftp-bounce.username"
      "1.3.6.1.4.1.25623.1.0.803520:1:entry:ftp-bounce.username" },
    { "1.3.6.1.4.1.25623.1.0.803520:entry:ftp-bounce.password"
      "1.3.6.1.4.1.25623.1.0.803520:2:entry:ftp-bounce.password" },
    { "1.3.6.1.4.1.25623.1.0.803521:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.803521:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.803521:entry:whodb"
      "1.3.6.1.4.1.25623.1.0.803521:2:entry:whodb" },
    { "1.3.6.1.4.1.25623.1.0.803521:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.803521:3:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.803522:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.803522:1:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.803522:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.803522:2:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.803522:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.803522:3:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.803522:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.803522:4:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.803524:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.803524:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.803524:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.803524:2:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.803525:entry:nfs.version"
      "1.3.6.1.4.1.25623.1.0.803525:1:entry:nfs.version" },
    { "1.3.6.1.4.1.25623.1.0.803525:entry:mount.version"
      "1.3.6.1.4.1.25623.1.0.803525:2:entry:mount.version" },
    { "1.3.6.1.4.1.25623.1.0.803525:entry:rpc.protocol"
      "1.3.6.1.4.1.25623.1.0.803525:3:entry:rpc.protocol" },
    { "1.3.6.1.4.1.25623.1.0.803526:entry:smtp-open-relay.ip"
      "1.3.6.1.4.1.25623.1.0.803526:1:entry:smtp-open-relay.ip" },
    { "1.3.6.1.4.1.25623.1.0.803526:entry:smtp.domain"
      "1.3.6.1.4.1.25623.1.0.803526:2:entry:smtp.domain" },
    { "1.3.6.1.4.1.25623.1.0.803526:entry:smtp-open-relay.to"
      "1.3.6.1.4.1.25623.1.0.803526:3:entry:smtp-open-relay.to" },
    { "1.3.6.1.4.1.25623.1.0.803526:entry:smtp-open-relay.from"
      "1.3.6.1.4.1.25623.1.0.803526:4:entry:smtp-open-relay.from" },
    { "1.3.6.1.4.1.25623.1.0.803527:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.803527:1:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.803527:entry:str"
      "1.3.6.1.4.1.25623.1.0.803527:2:entry:str" },
    { "1.3.6.1.4.1.25623.1.0.803527:entry:nocipher"
      "1.3.6.1.4.1.25623.1.0.803527:3:entry:nocipher" },
    { "1.3.6.1.4.1.25623.1.0.803527:entry:nocleanup"
      "1.3.6.1.4.1.25623.1.0.803527:4:entry:nocleanup" },
    { "1.3.6.1.4.1.25623.1.0.803527:entry:share"
      "1.3.6.1.4.1.25623.1.0.803527:5:entry:share" },
    { "1.3.6.1.4.1.25623.1.0.803527:entry:sharepath"
      "1.3.6.1.4.1.25623.1.0.803527:6:entry:sharepath" },
    { "1.3.6.1.4.1.25623.1.0.803527:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.803527:7:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.803527:entry:nohide"
      "1.3.6.1.4.1.25623.1.0.803527:8:entry:nohide" },
    { "1.3.6.1.4.1.25623.1.0.803527:entry:key"
      "1.3.6.1.4.1.25623.1.0.803527:9:entry:key" },
    { "1.3.6.1.4.1.25623.1.0.803527:entry:time"
      "1.3.6.1.4.1.25623.1.0.803527:10:entry:time" },
    { "1.3.6.1.4.1.25623.1.0.803527:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.803527:11:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.803527:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.803527:12:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.803527:entry:config"
      "1.3.6.1.4.1.25623.1.0.803527:13:entry:config" },
    { "1.3.6.1.4.1.25623.1.0.803527:entry:cleanup"
      "1.3.6.1.4.1.25623.1.0.803527:14:entry:cleanup" },
    { "1.3.6.1.4.1.25623.1.0.803529:entry:snmpcommunity"
      "1.3.6.1.4.1.25623.1.0.803529:1:entry:snmpcommunity" },
    { "1.3.6.1.4.1.25623.1.0.803530:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.803530:1:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.803530:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.803530:2:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.803530:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.803530:3:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.803530:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.803530:4:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.803531:entry:userdir.users"
      "1.3.6.1.4.1.25623.1.0.803531:1:entry:userdir.users" },
    { "1.3.6.1.4.1.25623.1.0.803531:entry:limit"
      "1.3.6.1.4.1.25623.1.0.803531:2:entry:limit" },
    { "1.3.6.1.4.1.25623.1.0.803531:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.803531:3:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.803531:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.803531:4:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.803533:entry:smtp.domain"
      "1.3.6.1.4.1.25623.1.0.803533:1:entry:smtp.domain" },
    { "1.3.6.1.4.1.25623.1.0.803534:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.803534:1:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.803534:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.803534:2:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.803534:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.803534:3:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.803534:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.803534:4:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.803535:entry:upnp-info.override"
      "1.3.6.1.4.1.25623.1.0.803535:1:entry:upnp-info.override" },
    { "1.3.6.1.4.1.25623.1.0.803536:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.803536:1:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.803536:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.803536:2:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.803536:entry:lsaonly"
      "1.3.6.1.4.1.25623.1.0.803536:3:entry:lsaonly" },
    { "1.3.6.1.4.1.25623.1.0.803536:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.803536:4:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.803536:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.803536:5:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.803536:entry:samronly"
      "1.3.6.1.4.1.25623.1.0.803536:6:entry:samronly" },
    { "1.3.6.1.4.1.25623.1.0.803537:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.803537:1:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.803537:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.803537:2:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.803537:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.803537:3:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.803537:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.803537:4:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.803538:entry:userdb"
      "1.3.6.1.4.1.25623.1.0.803538:1:entry:userdb" },
    { "1.3.6.1.4.1.25623.1.0.803538:entry:pop3loginmethod"
      "1.3.6.1.4.1.25623.1.0.803538:2:entry:pop3loginmethod" },
    { "1.3.6.1.4.1.25623.1.0.803538:entry:unpwdb.passlimit"
      "1.3.6.1.4.1.25623.1.0.803538:3:entry:unpwdb.passlimit" },
    { "1.3.6.1.4.1.25623.1.0.803538:entry:unpwdb.userlimit"
      "1.3.6.1.4.1.25623.1.0.803538:4:entry:unpwdb.userlimit" },
    { "1.3.6.1.4.1.25623.1.0.803538:entry:unpwdb.timelimit"
      "1.3.6.1.4.1.25623.1.0.803538:5:entry:unpwdb.timelimit" },
    { "1.3.6.1.4.1.25623.1.0.803538:entry:passdb"
      "1.3.6.1.4.1.25623.1.0.803538:6:entry:passdb" },
    { "1.3.6.1.4.1.25623.1.0.803539:entry:userdb"
      "1.3.6.1.4.1.25623.1.0.803539:1:entry:userdb" },
    { "1.3.6.1.4.1.25623.1.0.803539:entry:unpwdb.passlimit"
      "1.3.6.1.4.1.25623.1.0.803539:2:entry:unpwdb.passlimit" },
    { "1.3.6.1.4.1.25623.1.0.803539:entry:passdb"
      "1.3.6.1.4.1.25623.1.0.803539:3:entry:passdb" },
    { "1.3.6.1.4.1.25623.1.0.803539:entry:unpwdb.userlimit"
      "1.3.6.1.4.1.25623.1.0.803539:4:entry:unpwdb.userlimit" },
    { "1.3.6.1.4.1.25623.1.0.803539:entry:unpwdb.timelimit"
      "1.3.6.1.4.1.25623.1.0.803539:5:entry:unpwdb.timelimit" },
    { "1.3.6.1.4.1.25623.1.0.803541:entry:httpspider.withinhost"
      "1.3.6.1.4.1.25623.1.0.803541:1:entry:httpspider.withinhost" },
    { "1.3.6.1.4.1.25623.1.0.803541:entry:httpspider.maxpagecount"
      "1.3.6.1.4.1.25623.1.0.803541:2:entry:httpspider.maxpagecount" },
    { "1.3.6.1.4.1.25623.1.0.803541:entry:httpspider.withindomain"
      "1.3.6.1.4.1.25623.1.0.803541:3:entry:httpspider.withindomain" },
    { "1.3.6.1.4.1.25623.1.0.803541:entry:httpspider.maxdepth"
      "1.3.6.1.4.1.25623.1.0.803541:4:entry:httpspider.maxdepth" },
    { "1.3.6.1.4.1.25623.1.0.803541:entry:httpspider.url"
      "1.3.6.1.4.1.25623.1.0.803541:5:entry:httpspider.url" },
    { "1.3.6.1.4.1.25623.1.0.803541:entry:sql-injection.start"
      "1.3.6.1.4.1.25623.1.0.803541:6:entry:sql-injection.start" },
    { "1.3.6.1.4.1.25623.1.0.803541:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.803541:7:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.803541:entry:sql-injection.maxdepth"
      "1.3.6.1.4.1.25623.1.0.803541:8:entry:sql-injection.maxdepth" },
    { "1.3.6.1.4.1.25623.1.0.803541:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.803541:9:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.803541:entry:httpspider.noblacklist"
      "1.3.6.1.4.1.25623.1.0.803541:10:entry:httpspider.noblacklist" },
    { "1.3.6.1.4.1.25623.1.0.803542:entry:userdb"
      "1.3.6.1.4.1.25623.1.0.803542:1:entry:userdb" },
    { "1.3.6.1.4.1.25623.1.0.803542:entry:snmpcommunity"
      "1.3.6.1.4.1.25623.1.0.803542:2:entry:snmpcommunity" },
    { "1.3.6.1.4.1.25623.1.0.803542:entry:passdb"
      "1.3.6.1.4.1.25623.1.0.803542:3:entry:passdb" },
    { "1.3.6.1.4.1.25623.1.0.803542:entry:snmp-brute.communitiesdb"
      "1.3.6.1.4.1.25623.1.0.803542:4:entry:snmp-brute.communitiesdb" },
    { "1.3.6.1.4.1.25623.1.0.803542:entry:unpwdb.passlimit"
      "1.3.6.1.4.1.25623.1.0.803542:5:entry:unpwdb.passlimit" },
    { "1.3.6.1.4.1.25623.1.0.803542:entry:unpwdb.userlimit"
      "1.3.6.1.4.1.25623.1.0.803542:6:entry:unpwdb.userlimit" },
    { "1.3.6.1.4.1.25623.1.0.803542:entry:unpwdb.timelimit"
      "1.3.6.1.4.1.25623.1.0.803542:7:entry:unpwdb.timelimit" },
    { "1.3.6.1.4.1.25623.1.0.803543:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.803543:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.803543:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.803543:2:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.803544:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.803544:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.803544:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.803544:2:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.803544:entry:favicon.root"
      "1.3.6.1.4.1.25623.1.0.803544:3:entry:favicon.root" },
    { "1.3.6.1.4.1.25623.1.0.803544:entry:favicon.uri"
      "1.3.6.1.4.1.25623.1.0.803544:4:entry:favicon.uri" },
    { "1.3.6.1.4.1.25623.1.0.803545:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.803545:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.803545:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.803545:2:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.803545:entry:http-passwd.root"
      "1.3.6.1.4.1.25623.1.0.803545:3:entry:http-passwd.root" },
    { "1.3.6.1.4.1.25623.1.0.803546:entry:oraclesids"
      "1.3.6.1.4.1.25623.1.0.803546:1:entry:oraclesids" },
    { "1.3.6.1.4.1.25623.1.0.803548:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.803548:1:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.803548:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.803548:2:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.803548:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.803548:3:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.803548:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.803548:4:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.803551:entry:proxy.url"
      "1.3.6.1.4.1.25623.1.0.803551:1:entry:proxy.url" },
    { "1.3.6.1.4.1.25623.1.0.803551:entry:proxy.pattern"
      "1.3.6.1.4.1.25623.1.0.803551:2:entry:proxy.pattern" },
    { "1.3.6.1.4.1.25623.1.0.803553:entry:ssh_hostkey"
      "1.3.6.1.4.1.25623.1.0.803553:1:entry:ssh_hostkey" },
    { "1.3.6.1.4.1.25623.1.0.803554:entry:http-enum.basepath"
      "1.3.6.1.4.1.25623.1.0.803554:1:entry:http-enum.basepath" },
    { "1.3.6.1.4.1.25623.1.0.803554:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.803554:2:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.803554:entry:http-enum.category"
      "1.3.6.1.4.1.25623.1.0.803554:3:entry:http-enum.category" },
    { "1.3.6.1.4.1.25623.1.0.803554:entry:http-enum.displayall"
      "1.3.6.1.4.1.25623.1.0.803554:4:entry:http-enum.displayall" },
    { "1.3.6.1.4.1.25623.1.0.803554:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.803554:5:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.803555:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.803555:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.803555:entry:basefolder"
      "1.3.6.1.4.1.25623.1.0.803555:2:entry:basefolder" },
    { "1.3.6.1.4.1.25623.1.0.803555:entry:folderdb"
      "1.3.6.1.4.1.25623.1.0.803555:3:entry:folderdb" },
    { "1.3.6.1.4.1.25623.1.0.803555:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.803555:4:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.803555:entry:webdavfolder"
      "1.3.6.1.4.1.25623.1.0.803555:5:entry:webdavfolder" },
    { "1.3.6.1.4.1.25623.1.0.803556:entry:http-trace.path"
      "1.3.6.1.4.1.25623.1.0.803556:1:entry:http-trace.path" },
    { "1.3.6.1.4.1.25623.1.0.803556:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.803556:2:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.803556:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.803556:3:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.803557:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.803557:1:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.803557:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.803557:2:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.803557:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.803557:3:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.803557:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.803557:4:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.803558:entry:ftp-anon.maxlist"
      "1.3.6.1.4.1.25623.1.0.803558:1:entry:ftp-anon.maxlist" },
    { "1.3.6.1.4.1.25623.1.0.803560:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.803560:1:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.803560:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.803560:2:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.803560:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.803560:3:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.803560:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.803560:4:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.803563:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.803563:1:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.803563:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.803563:2:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.803563:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.803563:3:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.803563:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.803563:4:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.803568:entry:requests"
      "1.3.6.1.4.1.25623.1.0.803568:1:entry:requests" },
    { "1.3.6.1.4.1.25623.1.0.803568:entry:randomize_mac"
      "1.3.6.1.4.1.25623.1.0.803568:2:entry:randomize_mac" },
    { "1.3.6.1.4.1.25623.1.0.803568:entry:dhcptype"
      "1.3.6.1.4.1.25623.1.0.803568:3:entry:dhcptype" },
    { "1.3.6.1.4.1.25623.1.0.803571:entry:smbport"
      "1.3.6.1.4.1.25623.1.0.803571:1:entry:smbport" },
    { "1.3.6.1.4.1.25623.1.0.803571:entry:randomseed"
      "1.3.6.1.4.1.25623.1.0.803571:2:entry:randomseed" },
    { "1.3.6.1.4.1.25623.1.0.803571:entry:smbbasic"
      "1.3.6.1.4.1.25623.1.0.803571:3:entry:smbbasic" },
    { "1.3.6.1.4.1.25623.1.0.803571:entry:smbsign"
      "1.3.6.1.4.1.25623.1.0.803571:4:entry:smbsign" },
    { "1.3.6.1.4.1.25623.1.0.803571:entry:safe"
      "1.3.6.1.4.1.25623.1.0.803571:5:entry:safe" },
    { "1.3.6.1.4.1.25623.1.0.803571:entry:unsafe"
      "1.3.6.1.4.1.25623.1.0.803571:6:entry:unsafe" },
    { "1.3.6.1.4.1.25623.1.0.803572:entry:mssql.instance-name"
      "1.3.6.1.4.1.25623.1.0.803572:1:entry:mssql.instance-name" },
    { "1.3.6.1.4.1.25623.1.0.803572:entry:mssql.instance-all"
      "1.3.6.1.4.1.25623.1.0.803572:2:entry:mssql.instance-all" },
    { "1.3.6.1.4.1.25623.1.0.803572:entry:mssql.password"
      "1.3.6.1.4.1.25623.1.0.803572:3:entry:mssql.password" },
    { "1.3.6.1.4.1.25623.1.0.803572:entry:mssql.username"
      "1.3.6.1.4.1.25623.1.0.803572:4:entry:mssql.username" },
    { "1.3.6.1.4.1.25623.1.0.803572:entry:mssql.protocol"
      "1.3.6.1.4.1.25623.1.0.803572:5:entry:mssql.protocol" },
    { "1.3.6.1.4.1.25623.1.0.803572:entry:mssql.scanned-ports-only"
      "1.3.6.1.4.1.25623.1.0.803572:6:entry:mssql.scanned-ports-only" },
    { "1.3.6.1.4.1.25623.1.0.803572:entry:mssql.instance-port"
      "1.3.6.1.4.1.25623.1.0.803572:7:entry:mssql.instance-port" },
    { "1.3.6.1.4.1.25623.1.0.803572:entry:mssql.timeout"
      "1.3.6.1.4.1.25623.1.0.803572:8:entry:mssql.timeout" },
    { "1.3.6.1.4.1.25623.1.0.803572:entry:mssql.domain"
      "1.3.6.1.4.1.25623.1.0.803572:9:entry:mssql.domain" },
    { "1.3.6.1.4.1.25623.1.0.803574:entry:http.pipeline"
      "1.3.6.1.4.1.25623.1.0.803574:1:entry:http.pipeline" },
    { "1.3.6.1.4.1.25623.1.0.803574:entry:http-max-cache-size"
      "1.3.6.1.4.1.25623.1.0.803574:2:entry:http-max-cache-size" },
    { "1.3.6.1.4.1.25623.1.0.803575:entry:proxy.url"
      "1.3.6.1.4.1.25623.1.0.803575:1:entry:proxy.url" },
    { "1.3.6.1.4.1.25623.1.0.803575:entry:proxy.pattern"
      "1.3.6.1.4.1.25623.1.0.803575:2:entry:proxy.pattern" },
    { "1.3.6.1.4.1.25623.1.0.804489:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.804489:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.804489:checkbox:Shellshock: Check CGIs in KB:"
      "1.3.6.1.4.1.25623.1.0.804489:1:checkbox:Shellshock: Check CGIs in KB:" },
    { "1.3.6.1.4.1.25623.1.0.804786:checkbox:Automatically enable the Remote Registry service (please see NOTE)"
      "1.3.6.1.4.1.25623.1.0.804786:1:checkbox:Automatically enable the Remote Registry service (please see NOTE)" },
    { "1.3.6.1.4.1.25623.1.0.810000:checkbox:Silent tool check"
      "1.3.6.1.4.1.25623.1.0.810000:1:checkbox:Silent tool check" },
    { "1.3.6.1.4.1.25623.1.0.810000:checkbox:Silent tool check on Greenbone OS (GOS)"
      "1.3.6.1.4.1.25623.1.0.810000:2:checkbox:Silent tool check on Greenbone OS (GOS)" },
    { "1.3.6.1.4.1.25623.1.0.810001:file:KB file to import"
      "1.3.6.1.4.1.25623.1.0.810001:1:file:KB file to import" },
    { "1.3.6.1.4.1.25623.1.0.810010:checkbox:Launch Nmap NSE Tests"
      "1.3.6.1.4.1.25623.1.0.810010:1:checkbox:Launch Nmap NSE Tests" },
    { "1.3.6.1.4.1.25623.1.0.900234:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.900234:0:entry:timeout" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_RC4_128_MD5"
      "1.3.6.1.4.1.25623.1.0.900238:1:radio:TLS_RSA_WITH_RC4_128_MD5" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_anon_WITH_RC4_128_MD5"
      "1.3.6.1.4.1.25623.1.0.900238:2:radio:TLS_DH_anon_WITH_RC4_128_MD5" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_KRB5_WITH_RC4_128_MD5"
      "1.3.6.1.4.1.25623.1.0.900238:3:radio:TLS_KRB5_WITH_RC4_128_MD5" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_KRB5_EXPORT_WITH_DES_CBC_40_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:4:radio:TLS_KRB5_EXPORT_WITH_DES_CBC_40_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_KRB5_EXPORT_WITH_RC2_CBC_40_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:5:radio:TLS_KRB5_EXPORT_WITH_RC2_CBC_40_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_anon_EXPORT_WITH_DES40_CBC_SHA (Draft2)"
      "1.3.6.1.4.1.25623.1.0.900238:6:radio:TLS_ECDH_anon_EXPORT_WITH_DES40_CBC_SHA (Draft2)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_anon_EXPORT_WITH_RC4_40_SHA (Draft2)"
      "1.3.6.1.4.1.25623.1.0.900238:7:radio:TLS_ECDH_anon_EXPORT_WITH_RC4_40_SHA (Draft2)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_CHACHA20_POLY1305_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:8:radio:TLS_CHACHA20_POLY1305_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:9:radio:TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:10:radio:TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:11:radio:TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_CHACHA20_POLY1305_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:12:radio:TLS_PSK_WITH_CHACHA20_POLY1305_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_PSK_WITH_CHACHA20_POLY1305_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:13:radio:TLS_ECDHE_PSK_WITH_CHACHA20_POLY1305_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_PSK_WITH_CHACHA20_POLY1305_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:14:radio:TLS_DHE_PSK_WITH_CHACHA20_POLY1305_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_PSK_WITH_CHACHA20_POLY1305_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:15:radio:TLS_RSA_PSK_WITH_CHACHA20_POLY1305_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_ECDSA_WITH_DES_CBC_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:16:radio:TLS_ECDH_ECDSA_WITH_DES_CBC_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:17:radio:TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_RSA_WITH_DES_CBC_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:18:radio:TLS_ECDH_RSA_WITH_DES_CBC_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA (Draft) or TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:19:radio:TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA (Draft) or TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_RSA_WITH_AES_128_CBC_SHA (Draft) or TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:20:radio:TLS_ECDH_RSA_WITH_AES_128_CBC_SHA (Draft) or TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_RSA_WITH_AES_256_CBC_SHA (Draft) or TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:21:radio:TLS_ECDH_RSA_WITH_AES_256_CBC_SHA (Draft) or TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_anon_WITH_DES_CBC_SHA (Draft) or TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:22:radio:TLS_ECDH_anon_WITH_DES_CBC_SHA (Draft) or TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA (Draft) or TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:23:radio:TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA (Draft) or TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_KRB5_WITH_3DES_EDE_CBC_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:24:radio:TLS_KRB5_WITH_3DES_EDE_CBC_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_KRB5_WITH_3DES_EDE_CBC_MD5 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:25:radio:TLS_KRB5_WITH_3DES_EDE_CBC_MD5 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_KRB5_WITH_DES_CBC_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:26:radio:TLS_KRB5_WITH_DES_CBC_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_KRB5_WITH_DES_CBC_MD5 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:27:radio:TLS_KRB5_WITH_DES_CBC_MD5 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_AES_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:28:radio:TLS_AES_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECCPWD_WITH_AES_128_GCM_SHA256 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:29:radio:TLS_ECCPWD_WITH_AES_128_GCM_SHA256 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECCPWD_WITH_AES_128_CCM_SHA256 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:30:radio:TLS_ECCPWD_WITH_AES_128_CCM_SHA256 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECCPWD_WITH_AES_256_CCM_SHA384 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:31:radio:TLS_ECCPWD_WITH_AES_256_CCM_SHA384 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_PSK_WITH_AES_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:32:radio:TLS_ECDHE_PSK_WITH_AES_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_ESTREAM_SALSA20_SHA1 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:33:radio:TLS_RSA_WITH_ESTREAM_SALSA20_SHA1 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_SALSA20_SHA1 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:34:radio:TLS_RSA_WITH_SALSA20_SHA1 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_RSA_WITH_ESTREAM_SALSA20_SHA1 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:35:radio:TLS_ECDHE_RSA_WITH_ESTREAM_SALSA20_SHA1 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_RSA_WITH_SALSA20_SHA1 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:36:radio:TLS_ECDHE_RSA_WITH_SALSA20_SHA1 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_ECDSA_WITH_ESTREAM_SALSA20_SHA1 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:37:radio:TLS_ECDHE_ECDSA_WITH_ESTREAM_SALSA20_SHA1 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_ECDSA_WITH_SALSA20_SHA1 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:38:radio:TLS_ECDHE_ECDSA_WITH_SALSA20_SHA1 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_ESTREAM_SALSA20_SHA1 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:39:radio:TLS_PSK_WITH_ESTREAM_SALSA20_SHA1 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_SALSA20_SHA1 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:40:radio:TLS_PSK_WITH_SALSA20_SHA1 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_PSK_WITH_ESTREAM_SALSA20_SHA1 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:41:radio:TLS_ECDHE_PSK_WITH_ESTREAM_SALSA20_SHA1 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_PSK_WITH_SALSA20_SHA1 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:42:radio:TLS_ECDHE_PSK_WITH_SALSA20_SHA1 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_PSK_WITH_ESTREAM_SALSA20_SHA1 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:43:radio:TLS_RSA_PSK_WITH_ESTREAM_SALSA20_SHA1 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_PSK_WITH_SALSA20_SHA1 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:44:radio:TLS_RSA_PSK_WITH_SALSA20_SHA1 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_PSK_WITH_ESTREAM_SALSA20_SHA1 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:45:radio:TLS_DHE_PSK_WITH_ESTREAM_SALSA20_SHA1 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_PSK_WITH_SALSA20_SHA1 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:46:radio:TLS_DHE_PSK_WITH_SALSA20_SHA1 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_ESTREAM_SALSA20_SHA1 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:47:radio:TLS_DHE_RSA_WITH_ESTREAM_SALSA20_SHA1 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_SALSA20_SHA1 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:48:radio:TLS_DHE_RSA_WITH_SALSA20_SHA1 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_FIPS_WITH_DES_CBC_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:49:radio:TLS_RSA_FIPS_WITH_DES_CBC_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_FIPS_WITH_3DES_EDE_CBC_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:50:radio:TLS_RSA_FIPS_WITH_3DES_EDE_CBC_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_FIPS_WITH_3DES_EDE_CBC_SHA_2 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:51:radio:TLS_RSA_FIPS_WITH_3DES_EDE_CBC_SHA_2 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_FIPS_WITH_DES_CBC_SHA_2 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:52:radio:TLS_RSA_FIPS_WITH_DES_CBC_SHA_2 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_DES_CBC_MD5 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:53:radio:TLS_RSA_WITH_DES_CBC_MD5 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_3DES_EDE_CBC_MD5 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:54:radio:TLS_RSA_WITH_3DES_EDE_CBC_MD5 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_DSS_WITH_AES_256_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:55:radio:TLS_DH_DSS_WITH_AES_256_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_RSA_WITH_AES_256_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:56:radio:TLS_DH_RSA_WITH_AES_256_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_DSS_WITH_AES_256_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:57:radio:TLS_DHE_DSS_WITH_AES_256_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_AES_256_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:58:radio:TLS_DHE_RSA_WITH_AES_256_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_anon_WITH_AES_256_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:59:radio:TLS_DH_anon_WITH_AES_256_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_anon_EXPORT_WITH_DES40_CBC_SHA (Draft1)"
      "1.3.6.1.4.1.25623.1.0.900238:60:radio:TLS_ECDH_anon_EXPORT_WITH_DES40_CBC_SHA (Draft1)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_anon_EXPORT_WITH_RC4_40_SHA (Draft1)"
      "1.3.6.1.4.1.25623.1.0.900238:61:radio:TLS_ECDH_anon_EXPORT_WITH_RC4_40_SHA (Draft1)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_NULL_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:62:radio:TLS_RSA_WITH_NULL_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_EXPORT1024_WITH_RC4_56_MD5"
      "1.3.6.1.4.1.25623.1.0.900238:63:radio:TLS_RSA_EXPORT1024_WITH_RC4_56_MD5" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_EXPORT1024_WITH_RC2_CBC_56_MD5"
      "1.3.6.1.4.1.25623.1.0.900238:64:radio:TLS_RSA_EXPORT1024_WITH_RC2_CBC_56_MD5" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_EXPORT1024_WITH_DES_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:65:radio:TLS_RSA_EXPORT1024_WITH_DES_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_DSS_EXPORT1024_WITH_DES_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:66:radio:TLS_DHE_DSS_EXPORT1024_WITH_DES_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_EXPORT1024_WITH_RC4_56_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:67:radio:TLS_RSA_EXPORT1024_WITH_RC4_56_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_DSS_EXPORT1024_WITH_RC4_56_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:68:radio:TLS_DHE_DSS_EXPORT1024_WITH_RC4_56_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_NULL_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:69:radio:TLS_PSK_WITH_NULL_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_PSK_WITH_NULL_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:70:radio:TLS_DHE_PSK_WITH_NULL_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_PSK_WITH_NULL_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:71:radio:TLS_RSA_PSK_WITH_NULL_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_PSK_WITH_NULL_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:72:radio:TLS_ECDHE_PSK_WITH_NULL_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_EXPORT_WITH_RC2_CBC_40_MD5"
      "1.3.6.1.4.1.25623.1.0.900238:73:radio:TLS_RSA_EXPORT_WITH_RC2_CBC_40_MD5" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_KRB5_EXPORT_WITH_DES_CBC_40_MD5"
      "1.3.6.1.4.1.25623.1.0.900238:74:radio:TLS_KRB5_EXPORT_WITH_DES_CBC_40_MD5" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_KRB5_EXPORT_WITH_RC2_CBC_40_MD5"
      "1.3.6.1.4.1.25623.1.0.900238:75:radio:TLS_KRB5_EXPORT_WITH_RC2_CBC_40_MD5" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_GOSTR341094_WITH_28147_CNT_IMIT (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:76:radio:TLS_GOSTR341094_WITH_28147_CNT_IMIT (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_GOSTR341001_WITH_28147_CNT_IMIT (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:77:radio:TLS_GOSTR341001_WITH_28147_CNT_IMIT (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECCPWD_WITH_AES_256_GCM_SHA384 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:78:radio:TLS_ECCPWD_WITH_AES_256_GCM_SHA384 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:79:radio:TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:80:radio:TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:81:radio:TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_AES_256_CCM"
      "1.3.6.1.4.1.25623.1.0.900238:82:radio:TLS_RSA_WITH_AES_256_CCM" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_AES_256_CCM"
      "1.3.6.1.4.1.25623.1.0.900238:83:radio:TLS_DHE_RSA_WITH_AES_256_CCM" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_AES_256_CCM"
      "1.3.6.1.4.1.25623.1.0.900238:84:radio:TLS_PSK_WITH_AES_256_CCM" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_PSK_WITH_AES_256_CCM"
      "1.3.6.1.4.1.25623.1.0.900238:85:radio:TLS_DHE_PSK_WITH_AES_256_CCM" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_ECDSA_WITH_AES_256_CCM"
      "1.3.6.1.4.1.25623.1.0.900238:86:radio:TLS_ECDHE_ECDSA_WITH_AES_256_CCM" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_KRB5_EXPORT_WITH_RC4_40_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:87:radio:TLS_KRB5_EXPORT_WITH_RC4_40_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_ECDSA_WITH_RC4_128_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:88:radio:TLS_ECDH_ECDSA_WITH_RC4_128_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA (Draft) or TLS_ECDH_ECDSA_EXPORT_WITH_RC4_40_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:89:radio:TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA (Draft) or TLS_ECDH_ECDSA_EXPORT_WITH_RC4_40_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA (Draft) or TLS_ECDH_ECDSA_EXPORT_WITH_RC4_56_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:90:radio:TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA (Draft) or TLS_ECDH_ECDSA_EXPORT_WITH_RC4_56_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_RSA_WITH_RC4_128_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:91:radio:TLS_ECDH_RSA_WITH_RC4_128_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_RSA_EXPORT_WITH_RC4_40_SHA (Draft) or TLS_SRP_SHA_WITH_AES_128_CBC_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:92:radio:TLS_ECDH_RSA_EXPORT_WITH_RC4_40_SHA (Draft) or TLS_SRP_SHA_WITH_AES_128_CBC_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_RSA_EXPORT_WITH_RC4_56_SHA (Draft) or TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:93:radio:TLS_ECDH_RSA_EXPORT_WITH_RC4_56_SHA (Draft) or TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_anon_WITH_RC4_128_SHA (Draft) or TLS_SRP_SHA_WITH_AES_256_CBC_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:94:radio:TLS_ECDH_anon_WITH_RC4_128_SHA (Draft) or TLS_SRP_SHA_WITH_AES_256_CBC_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_KRB5_WITH_RC4_128_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:95:radio:TLS_KRB5_WITH_RC4_128_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_KRB5_WITH_RC4_128_MD5 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:96:radio:TLS_KRB5_WITH_RC4_128_MD5 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_KRB5_WITH_AES_128_CBC_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:97:radio:TLS_KRB5_WITH_AES_128_CBC_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_KRB5_WITH_AES_256_CBC_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:98:radio:TLS_KRB5_WITH_AES_256_CBC_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_NULL_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:99:radio:TLS_PSK_WITH_NULL_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_PSK_WITH_NULL_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:100:radio:TLS_DHE_PSK_WITH_NULL_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_PSK_WITH_NULL_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:101:radio:TLS_RSA_PSK_WITH_NULL_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_PSK_WITH_NULL_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:102:radio:TLS_ECDHE_PSK_WITH_NULL_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_SHA256_SHA256 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:103:radio:TLS_SHA256_SHA256 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_SHA384_SHA384 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:104:radio:TLS_SHA384_SHA384 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_RC2_CBC_MD5 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:105:radio:TLS_RSA_WITH_RC2_CBC_MD5 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_IDEA_CBC_MD5 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:106:radio:TLS_RSA_WITH_IDEA_CBC_MD5 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_NULL_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:107:radio:TLS_RSA_WITH_NULL_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_FORTEZZA_KEA_WITH_NULL_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:108:radio:TLS_FORTEZZA_KEA_WITH_NULL_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_NULL_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:109:radio:TLS_PSK_WITH_NULL_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_PSK_WITH_NULL_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:110:radio:TLS_DHE_PSK_WITH_NULL_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_PSK_WITH_NULL_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:111:radio:TLS_RSA_PSK_WITH_NULL_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_ECDSA_WITH_NULL_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:112:radio:TLS_ECDH_ECDSA_WITH_NULL_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_ECDSA_WITH_NULL_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:113:radio:TLS_ECDHE_ECDSA_WITH_NULL_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_RSA_WITH_NULL_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:114:radio:TLS_ECDH_RSA_WITH_NULL_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_RSA_WITH_NULL_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:115:radio:TLS_ECDHE_RSA_WITH_NULL_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_anon_WITH_NULL_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:116:radio:TLS_ECDH_anon_WITH_NULL_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_PSK_WITH_NULL_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:117:radio:TLS_ECDHE_PSK_WITH_NULL_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_ECDSA_WITH_NULL_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:118:radio:TLS_ECDH_ECDSA_WITH_NULL_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_RSA_WITH_NULL_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:119:radio:TLS_ECDH_RSA_WITH_NULL_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_anon_NULL_WITH_SHA (Draft) or TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:120:radio:TLS_ECDH_anon_NULL_WITH_SHA (Draft) or TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_KRB5_WITH_NULL_SHA (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:121:radio:TLS_KRB5_WITH_NULL_SHA (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_KRB5_WITH_NULL_MD5 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:122:radio:TLS_KRB5_WITH_NULL_MD5 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_GOSTR341094_WITH_NULL_GOSTR3411 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:123:radio:TLS_GOSTR341094_WITH_NULL_GOSTR3411 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_GOSTR341001_WITH_NULL_GOSTR3411 (Draft)"
      "1.3.6.1.4.1.25623.1.0.900238:124:radio:TLS_GOSTR341001_WITH_NULL_GOSTR3411 (Draft)" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_RC4_128_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:125:radio:TLS_RSA_WITH_RC4_128_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_KRB5_WITH_RC4_128_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:126:radio:TLS_KRB5_WITH_RC4_128_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_DSS_WITH_RC4_128_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:127:radio:TLS_DHE_DSS_WITH_RC4_128_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_RC4_128_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:128:radio:TLS_PSK_WITH_RC4_128_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_PSK_WITH_RC4_128_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:129:radio:TLS_DHE_PSK_WITH_RC4_128_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_PSK_WITH_RC4_128_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:130:radio:TLS_RSA_PSK_WITH_RC4_128_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_ECDSA_WITH_RC4_128_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:131:radio:TLS_ECDH_ECDSA_WITH_RC4_128_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_ECDSA_WITH_RC4_128_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:132:radio:TLS_ECDHE_ECDSA_WITH_RC4_128_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_RSA_WITH_RC4_128_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:133:radio:TLS_ECDH_RSA_WITH_RC4_128_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_RSA_WITH_RC4_128_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:134:radio:TLS_ECDHE_RSA_WITH_RC4_128_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_anon_WITH_RC4_128_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:135:radio:TLS_ECDH_anon_WITH_RC4_128_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_PSK_WITH_RC4_128_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:136:radio:TLS_ECDHE_PSK_WITH_RC4_128_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_NULL_WITH_NULL_NULL"
      "1.3.6.1.4.1.25623.1.0.900238:137:radio:TLS_NULL_WITH_NULL_NULL" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_EXPORT_WITH_RC4_40_MD5"
      "1.3.6.1.4.1.25623.1.0.900238:138:radio:TLS_RSA_EXPORT_WITH_RC4_40_MD5" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_anon_EXPORT_WITH_RC4_40_MD5"
      "1.3.6.1.4.1.25623.1.0.900238:139:radio:TLS_DH_anon_EXPORT_WITH_RC4_40_MD5" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_KRB5_WITH_DES_CBC_MD5"
      "1.3.6.1.4.1.25623.1.0.900238:140:radio:TLS_KRB5_WITH_DES_CBC_MD5" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_KRB5_WITH_3DES_EDE_CBC_MD5"
      "1.3.6.1.4.1.25623.1.0.900238:141:radio:TLS_KRB5_WITH_3DES_EDE_CBC_MD5" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_KRB5_WITH_IDEA_CBC_MD5"
      "1.3.6.1.4.1.25623.1.0.900238:142:radio:TLS_KRB5_WITH_IDEA_CBC_MD5" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_KRB5_EXPORT_WITH_RC4_40_MD5"
      "1.3.6.1.4.1.25623.1.0.900238:143:radio:TLS_KRB5_EXPORT_WITH_RC4_40_MD5" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_AES_128_CCM"
      "1.3.6.1.4.1.25623.1.0.900238:144:radio:TLS_RSA_WITH_AES_128_CCM" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_AES_128_CCM"
      "1.3.6.1.4.1.25623.1.0.900238:145:radio:TLS_DHE_RSA_WITH_AES_128_CCM" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_AES_128_CCM"
      "1.3.6.1.4.1.25623.1.0.900238:146:radio:TLS_PSK_WITH_AES_128_CCM" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_PSK_WITH_AES_128_CCM"
      "1.3.6.1.4.1.25623.1.0.900238:147:radio:TLS_DHE_PSK_WITH_AES_128_CCM" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_ECDSA_WITH_AES_128_CCM"
      "1.3.6.1.4.1.25623.1.0.900238:148:radio:TLS_ECDHE_ECDSA_WITH_AES_128_CCM" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_NULL_MD5"
      "1.3.6.1.4.1.25623.1.0.900238:149:radio:TLS_RSA_WITH_NULL_MD5" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_AES_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:150:radio:TLS_RSA_WITH_AES_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_AES_256_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:151:radio:TLS_RSA_WITH_AES_256_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_DSS_WITH_AES_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:152:radio:TLS_DH_DSS_WITH_AES_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_RSA_WITH_AES_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:153:radio:TLS_DH_RSA_WITH_AES_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_DSS_WITH_AES_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:154:radio:TLS_DHE_DSS_WITH_AES_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_AES_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:155:radio:TLS_DHE_RSA_WITH_AES_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_DSS_WITH_AES_256_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:156:radio:TLS_DH_DSS_WITH_AES_256_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_RSA_WITH_AES_256_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:157:radio:TLS_DH_RSA_WITH_AES_256_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_DSS_WITH_AES_256_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:158:radio:TLS_DHE_DSS_WITH_AES_256_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_AES_256_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:159:radio:TLS_DHE_RSA_WITH_AES_256_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_anon_WITH_AES_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:160:radio:TLS_DH_anon_WITH_AES_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_anon_WITH_AES_256_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:161:radio:TLS_DH_anon_WITH_AES_256_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_AES_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:162:radio:TLS_RSA_WITH_AES_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_AES_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:163:radio:TLS_DHE_RSA_WITH_AES_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_RSA_WITH_AES_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:164:radio:TLS_DH_RSA_WITH_AES_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_DSS_WITH_AES_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:165:radio:TLS_DHE_DSS_WITH_AES_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_DSS_WITH_AES_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:166:radio:TLS_DH_DSS_WITH_AES_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_anon_WITH_AES_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:167:radio:TLS_DH_anon_WITH_AES_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_AES_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:168:radio:TLS_PSK_WITH_AES_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_PSK_WITH_AES_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:169:radio:TLS_DHE_PSK_WITH_AES_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_PSK_WITH_AES_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:170:radio:TLS_RSA_PSK_WITH_AES_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_AES_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:171:radio:TLS_PSK_WITH_AES_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_PSK_WITH_AES_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:172:radio:TLS_DHE_PSK_WITH_AES_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_PSK_WITH_AES_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:173:radio:TLS_RSA_PSK_WITH_AES_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_CAMELLIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:174:radio:TLS_RSA_WITH_CAMELLIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:175:radio:TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:176:radio:TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:177:radio:TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:178:radio:TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:179:radio:TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_CAMELLIA_256_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:180:radio:TLS_RSA_WITH_CAMELLIA_256_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:181:radio:TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:182:radio:TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:183:radio:TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:184:radio:TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:185:radio:TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_AES_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:186:radio:TLS_AES_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_AES_128_CCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:187:radio:TLS_AES_128_CCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_AES_128_CCM_8_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:188:radio:TLS_AES_128_CCM_8_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:189:radio:TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:190:radio:TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:191:radio:TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:192:radio:TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:193:radio:TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:194:radio:TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:195:radio:TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:196:radio:TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:197:radio:TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_ARIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:198:radio:TLS_RSA_WITH_ARIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_DSS_WITH_ARIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:199:radio:TLS_DH_DSS_WITH_ARIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_RSA_WITH_ARIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:200:radio:TLS_DH_RSA_WITH_ARIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_DSS_WITH_ARIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:201:radio:TLS_DHE_DSS_WITH_ARIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_ARIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:202:radio:TLS_DHE_RSA_WITH_ARIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_anon_WITH_ARIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:203:radio:TLS_DH_anon_WITH_ARIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_ECDSA_WITH_ARIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:204:radio:TLS_ECDHE_ECDSA_WITH_ARIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_ECDSA_WITH_ARIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:205:radio:TLS_ECDH_ECDSA_WITH_ARIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_RSA_WITH_ARIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:206:radio:TLS_ECDHE_RSA_WITH_ARIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_RSA_WITH_ARIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:207:radio:TLS_ECDH_RSA_WITH_ARIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_ARIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:208:radio:TLS_RSA_WITH_ARIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_ARIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:209:radio:TLS_DHE_RSA_WITH_ARIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_RSA_WITH_ARIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:210:radio:TLS_DH_RSA_WITH_ARIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_DSS_WITH_ARIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:211:radio:TLS_DHE_DSS_WITH_ARIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_DSS_WITH_ARIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:212:radio:TLS_DH_DSS_WITH_ARIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_anon_WITH_ARIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:213:radio:TLS_DH_anon_WITH_ARIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_ECDSA_WITH_ARIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:214:radio:TLS_ECDHE_ECDSA_WITH_ARIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_ECDSA_WITH_ARIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:215:radio:TLS_ECDH_ECDSA_WITH_ARIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_RSA_WITH_ARIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:216:radio:TLS_ECDHE_RSA_WITH_ARIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_RSA_WITH_ARIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:217:radio:TLS_ECDH_RSA_WITH_ARIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_ARIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:218:radio:TLS_PSK_WITH_ARIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_PSK_WITH_ARIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:219:radio:TLS_DHE_PSK_WITH_ARIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_PSK_WITH_ARIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:220:radio:TLS_RSA_PSK_WITH_ARIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_ARIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:221:radio:TLS_PSK_WITH_ARIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_PSK_WITH_ARIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:222:radio:TLS_DHE_PSK_WITH_ARIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_PSK_WITH_ARIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:223:radio:TLS_RSA_PSK_WITH_ARIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_PSK_WITH_ARIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:224:radio:TLS_ECDHE_PSK_WITH_ARIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:225:radio:TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_ECDSA_WITH_CAMELLIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:226:radio:TLS_ECDH_ECDSA_WITH_CAMELLIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_RSA_WITH_CAMELLIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:227:radio:TLS_ECDHE_RSA_WITH_CAMELLIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_RSA_WITH_CAMELLIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:228:radio:TLS_ECDH_RSA_WITH_CAMELLIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_CAMELLIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:229:radio:TLS_RSA_WITH_CAMELLIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_CAMELLIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:230:radio:TLS_DHE_RSA_WITH_CAMELLIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_RSA_WITH_CAMELLIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:231:radio:TLS_DH_RSA_WITH_CAMELLIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_DSS_WITH_CAMELLIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:232:radio:TLS_DHE_DSS_WITH_CAMELLIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_DSS_WITH_CAMELLIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:233:radio:TLS_DH_DSS_WITH_CAMELLIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_anon_WITH_CAMELLIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:234:radio:TLS_DH_anon_WITH_CAMELLIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:235:radio:TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_ECDSA_WITH_CAMELLIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:236:radio:TLS_ECDH_ECDSA_WITH_CAMELLIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_RSA_WITH_CAMELLIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:237:radio:TLS_ECDHE_RSA_WITH_CAMELLIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_RSA_WITH_CAMELLIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:238:radio:TLS_ECDH_RSA_WITH_CAMELLIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_CAMELLIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:239:radio:TLS_PSK_WITH_CAMELLIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_PSK_WITH_CAMELLIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:240:radio:TLS_DHE_PSK_WITH_CAMELLIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_PSK_WITH_CAMELLIA_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:241:radio:TLS_RSA_PSK_WITH_CAMELLIA_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_CAMELLIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:242:radio:TLS_PSK_WITH_CAMELLIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_PSK_WITH_CAMELLIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:243:radio:TLS_DHE_PSK_WITH_CAMELLIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_PSK_WITH_CAMELLIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:244:radio:TLS_RSA_PSK_WITH_CAMELLIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_PSK_WITH_CAMELLIA_128_CBC_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:245:radio:TLS_ECDHE_PSK_WITH_CAMELLIA_128_CBC_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_PSK_WITH_AES_128_GCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:246:radio:TLS_ECDHE_PSK_WITH_AES_128_GCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_PSK_WITH_AES_128_CCM_8_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:247:radio:TLS_ECDHE_PSK_WITH_AES_128_CCM_8_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_PSK_WITH_AES_128_CCM_SHA256"
      "1.3.6.1.4.1.25623.1.0.900238:248:radio:TLS_ECDHE_PSK_WITH_AES_128_CCM_SHA256" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_EXPORT_WITH_DES40_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:249:radio:TLS_RSA_EXPORT_WITH_DES40_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_DSS_EXPORT_WITH_DES40_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:250:radio:TLS_DH_DSS_EXPORT_WITH_DES40_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_RSA_EXPORT_WITH_DES40_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:251:radio:TLS_DH_RSA_EXPORT_WITH_DES40_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:252:radio:TLS_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:253:radio:TLS_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_anon_EXPORT_WITH_DES40_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:254:radio:TLS_DH_anon_EXPORT_WITH_DES40_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_FORTEZZA_KEA_WITH_FORTEZZA_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:255:radio:TLS_FORTEZZA_KEA_WITH_FORTEZZA_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_FORTEZZA_KEA_WITH_RC4_128_SHA or TLS_KRB5_WITH_DES_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:256:radio:TLS_FORTEZZA_KEA_WITH_RC4_128_SHA or TLS_KRB5_WITH_DES_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_SEED_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:257:radio:TLS_RSA_WITH_SEED_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_AES_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:258:radio:TLS_RSA_WITH_AES_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_AES_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:259:radio:TLS_DHE_RSA_WITH_AES_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_RSA_WITH_AES_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:260:radio:TLS_DH_RSA_WITH_AES_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_DSS_WITH_AES_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:261:radio:TLS_DHE_DSS_WITH_AES_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_DSS_WITH_AES_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:262:radio:TLS_DH_DSS_WITH_AES_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_anon_WITH_AES_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:263:radio:TLS_DH_anon_WITH_AES_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_AES_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:264:radio:TLS_PSK_WITH_AES_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_PSK_WITH_AES_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:265:radio:TLS_DHE_PSK_WITH_AES_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_PSK_WITH_AES_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:266:radio:TLS_RSA_PSK_WITH_AES_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_AES_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:267:radio:TLS_PSK_WITH_AES_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_PSK_WITH_AES_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:268:radio:TLS_DHE_PSK_WITH_AES_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_PSK_WITH_AES_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:269:radio:TLS_RSA_PSK_WITH_AES_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:270:radio:TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:271:radio:TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:272:radio:TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:273:radio:TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:274:radio:TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:275:radio:TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:276:radio:TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:277:radio:TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:278:radio:TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_ARIA_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:279:radio:TLS_RSA_WITH_ARIA_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_DSS_WITH_ARIA_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:280:radio:TLS_DH_DSS_WITH_ARIA_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_RSA_WITH_ARIA_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:281:radio:TLS_DH_RSA_WITH_ARIA_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_DSS_WITH_ARIA_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:282:radio:TLS_DHE_DSS_WITH_ARIA_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_ARIA_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:283:radio:TLS_DHE_RSA_WITH_ARIA_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_anon_WITH_ARIA_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:284:radio:TLS_DH_anon_WITH_ARIA_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_ECDSA_WITH_ARIA_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:285:radio:TLS_ECDHE_ECDSA_WITH_ARIA_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_ECDSA_WITH_ARIA_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:286:radio:TLS_ECDH_ECDSA_WITH_ARIA_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_RSA_WITH_ARIA_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:287:radio:TLS_ECDHE_RSA_WITH_ARIA_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_RSA_WITH_ARIA_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:288:radio:TLS_ECDH_RSA_WITH_ARIA_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_ARIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:289:radio:TLS_RSA_WITH_ARIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_ARIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:290:radio:TLS_DHE_RSA_WITH_ARIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_RSA_WITH_ARIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:291:radio:TLS_DH_RSA_WITH_ARIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_DSS_WITH_ARIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:292:radio:TLS_DHE_DSS_WITH_ARIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_DSS_WITH_ARIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:293:radio:TLS_DH_DSS_WITH_ARIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_anon_WITH_ARIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:294:radio:TLS_DH_anon_WITH_ARIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_ECDSA_WITH_ARIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:295:radio:TLS_ECDHE_ECDSA_WITH_ARIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_ECDSA_WITH_ARIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:296:radio:TLS_ECDH_ECDSA_WITH_ARIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_RSA_WITH_ARIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:297:radio:TLS_ECDHE_RSA_WITH_ARIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_RSA_WITH_ARIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:298:radio:TLS_ECDH_RSA_WITH_ARIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_ARIA_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:299:radio:TLS_PSK_WITH_ARIA_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_PSK_WITH_ARIA_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:300:radio:TLS_DHE_PSK_WITH_ARIA_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_PSK_WITH_ARIA_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:301:radio:TLS_RSA_PSK_WITH_ARIA_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_ARIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:302:radio:TLS_PSK_WITH_ARIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_PSK_WITH_ARIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:303:radio:TLS_DHE_PSK_WITH_ARIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_PSK_WITH_ARIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:304:radio:TLS_RSA_PSK_WITH_ARIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_PSK_WITH_ARIA_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:305:radio:TLS_ECDHE_PSK_WITH_ARIA_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:306:radio:TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_ECDSA_WITH_CAMELLIA_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:307:radio:TLS_ECDH_ECDSA_WITH_CAMELLIA_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_RSA_WITH_CAMELLIA_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:308:radio:TLS_ECDHE_RSA_WITH_CAMELLIA_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_RSA_WITH_CAMELLIA_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:309:radio:TLS_ECDH_RSA_WITH_CAMELLIA_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_CAMELLIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:310:radio:TLS_RSA_WITH_CAMELLIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_CAMELLIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:311:radio:TLS_DHE_RSA_WITH_CAMELLIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_RSA_WITH_CAMELLIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:312:radio:TLS_DH_RSA_WITH_CAMELLIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_DSS_WITH_CAMELLIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:313:radio:TLS_DHE_DSS_WITH_CAMELLIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_DSS_WITH_CAMELLIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:314:radio:TLS_DH_DSS_WITH_CAMELLIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_anon_WITH_CAMELLIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:315:radio:TLS_DH_anon_WITH_CAMELLIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:316:radio:TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_ECDSA_WITH_CAMELLIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:317:radio:TLS_ECDH_ECDSA_WITH_CAMELLIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_RSA_WITH_CAMELLIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:318:radio:TLS_ECDHE_RSA_WITH_CAMELLIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_RSA_WITH_CAMELLIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:319:radio:TLS_ECDH_RSA_WITH_CAMELLIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_CAMELLIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:320:radio:TLS_PSK_WITH_CAMELLIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_PSK_WITH_CAMELLIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:321:radio:TLS_DHE_PSK_WITH_CAMELLIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_PSK_WITH_CAMELLIA_256_GCM_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:322:radio:TLS_RSA_PSK_WITH_CAMELLIA_256_GCM_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_CAMELLIA_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:323:radio:TLS_PSK_WITH_CAMELLIA_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_PSK_WITH_CAMELLIA_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:324:radio:TLS_DHE_PSK_WITH_CAMELLIA_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_PSK_WITH_CAMELLIA_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:325:radio:TLS_RSA_PSK_WITH_CAMELLIA_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_PSK_WITH_CAMELLIA_256_CBC_SHA384"
      "1.3.6.1.4.1.25623.1.0.900238:326:radio:TLS_ECDHE_PSK_WITH_CAMELLIA_256_CBC_SHA384" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_AES_128_CCM_8"
      "1.3.6.1.4.1.25623.1.0.900238:327:radio:TLS_RSA_WITH_AES_128_CCM_8" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_AES_256_CCM_8"
      "1.3.6.1.4.1.25623.1.0.900238:328:radio:TLS_RSA_WITH_AES_256_CCM_8" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_AES_128_CCM_8"
      "1.3.6.1.4.1.25623.1.0.900238:329:radio:TLS_DHE_RSA_WITH_AES_128_CCM_8" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_AES_256_CCM_8"
      "1.3.6.1.4.1.25623.1.0.900238:330:radio:TLS_DHE_RSA_WITH_AES_256_CCM_8" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_AES_128_CCM_8"
      "1.3.6.1.4.1.25623.1.0.900238:331:radio:TLS_PSK_WITH_AES_128_CCM_8" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_AES_256_CCM_8"
      "1.3.6.1.4.1.25623.1.0.900238:332:radio:TLS_PSK_WITH_AES_256_CCM_8" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_DHE_WITH_AES_128_CCM_8"
      "1.3.6.1.4.1.25623.1.0.900238:333:radio:TLS_PSK_DHE_WITH_AES_128_CCM_8" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_DHE_WITH_AES_256_CCM_8"
      "1.3.6.1.4.1.25623.1.0.900238:334:radio:TLS_PSK_DHE_WITH_AES_256_CCM_8" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_ECDSA_WITH_AES_128_CCM_8"
      "1.3.6.1.4.1.25623.1.0.900238:335:radio:TLS_ECDHE_ECDSA_WITH_AES_128_CCM_8" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_ECDSA_WITH_AES_256_CCM_8"
      "1.3.6.1.4.1.25623.1.0.900238:336:radio:TLS_ECDHE_ECDSA_WITH_AES_256_CCM_8" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_IDEA_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:337:radio:TLS_RSA_WITH_IDEA_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_DES_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:338:radio:TLS_RSA_WITH_DES_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_3DES_EDE_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:339:radio:TLS_RSA_WITH_3DES_EDE_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_DSS_WITH_DES_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:340:radio:TLS_DH_DSS_WITH_DES_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_DSS_WITH_3DES_EDE_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:341:radio:TLS_DH_DSS_WITH_3DES_EDE_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_RSA_WITH_DES_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:342:radio:TLS_DH_RSA_WITH_DES_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_RSA_WITH_3DES_EDE_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:343:radio:TLS_DH_RSA_WITH_3DES_EDE_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_DSS_WITH_DES_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:344:radio:TLS_DHE_DSS_WITH_DES_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:345:radio:TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_DES_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:346:radio:TLS_DHE_RSA_WITH_DES_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:347:radio:TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_anon_WITH_DES_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:348:radio:TLS_DH_anon_WITH_DES_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_anon_WITH_3DES_EDE_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:349:radio:TLS_DH_anon_WITH_3DES_EDE_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_KRB5_WITH_3DES_EDE_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:350:radio:TLS_KRB5_WITH_3DES_EDE_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_KRB5_WITH_IDEA_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:351:radio:TLS_KRB5_WITH_IDEA_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_AES_128_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:352:radio:TLS_RSA_WITH_AES_128_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_DSS_WITH_AES_128_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:353:radio:TLS_DH_DSS_WITH_AES_128_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_RSA_WITH_AES_128_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:354:radio:TLS_DH_RSA_WITH_AES_128_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_DSS_WITH_AES_128_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:355:radio:TLS_DHE_DSS_WITH_AES_128_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_AES_128_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:356:radio:TLS_DHE_RSA_WITH_AES_128_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_anon_WITH_AES_128_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:357:radio:TLS_DH_anon_WITH_AES_128_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_AES_256_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:358:radio:TLS_RSA_WITH_AES_256_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_CAMELLIA_128_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:359:radio:TLS_RSA_WITH_CAMELLIA_128_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:360:radio:TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:361:radio:TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:362:radio:TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:363:radio:TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:364:radio:TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_WITH_CAMELLIA_256_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:365:radio:TLS_RSA_WITH_CAMELLIA_256_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:366:radio:TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:367:radio:TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:368:radio:TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:369:radio:TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:370:radio:TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_3DES_EDE_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:371:radio:TLS_PSK_WITH_3DES_EDE_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_AES_128_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:372:radio:TLS_PSK_WITH_AES_128_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_PSK_WITH_AES_256_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:373:radio:TLS_PSK_WITH_AES_256_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_PSK_WITH_3DES_EDE_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:374:radio:TLS_DHE_PSK_WITH_3DES_EDE_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_PSK_WITH_AES_128_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:375:radio:TLS_DHE_PSK_WITH_AES_128_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_PSK_WITH_AES_256_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:376:radio:TLS_DHE_PSK_WITH_AES_256_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_PSK_WITH_3DES_EDE_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:377:radio:TLS_RSA_PSK_WITH_3DES_EDE_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_PSK_WITH_AES_128_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:378:radio:TLS_RSA_PSK_WITH_AES_128_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_RSA_PSK_WITH_AES_256_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:379:radio:TLS_RSA_PSK_WITH_AES_256_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_DSS_WITH_SEED_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:380:radio:TLS_DH_DSS_WITH_SEED_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_RSA_WITH_SEED_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:381:radio:TLS_DH_RSA_WITH_SEED_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_DSS_WITH_SEED_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:382:radio:TLS_DHE_DSS_WITH_SEED_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DHE_RSA_WITH_SEED_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:383:radio:TLS_DHE_RSA_WITH_SEED_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_DH_anon_WITH_SEED_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:384:radio:TLS_DH_anon_WITH_SEED_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:385:radio:TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:386:radio:TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:387:radio:TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:388:radio:TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:389:radio:TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:390:radio:TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:391:radio:TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_RSA_WITH_AES_128_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:392:radio:TLS_ECDH_RSA_WITH_AES_128_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_RSA_WITH_AES_256_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:393:radio:TLS_ECDH_RSA_WITH_AES_256_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:394:radio:TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:395:radio:TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:396:radio:TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:397:radio:TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_anon_WITH_AES_128_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:398:radio:TLS_ECDH_anon_WITH_AES_128_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDH_anon_WITH_AES_256_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:399:radio:TLS_ECDH_anon_WITH_AES_256_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:400:radio:TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:401:radio:TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:402:radio:TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_SRP_SHA_WITH_AES_128_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:403:radio:TLS_SRP_SHA_WITH_AES_128_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:404:radio:TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:405:radio:TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_SRP_SHA_WITH_AES_256_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:406:radio:TLS_SRP_SHA_WITH_AES_256_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:407:radio:TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:408:radio:TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_PSK_WITH_3DES_EDE_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:409:radio:TLS_ECDHE_PSK_WITH_3DES_EDE_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:410:radio:TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900238:radio:TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA"
      "1.3.6.1.4.1.25623.1.0.900238:411:radio:TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA" },
    { "1.3.6.1.4.1.25623.1.0.900239:checkbox:Silent"
      "1.3.6.1.4.1.25623.1.0.900239:1:checkbox:Silent" },
    { "1.3.6.1.4.1.25623.1.0.902269:entry:timeout"
      "1.3.6.1.4.1.25623.1.0.902269:0:entry:timeout" },
    { NULL, NULL }};
