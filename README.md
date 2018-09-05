# AsyncLogging
Implement an asynchronous logging system, which uses ring buffer.

## Problem list
- Not crash safe now.
- When the current buffer of the frontend is not full, the backend thread won't flush any log.

## To do list
- Make it crash safe, so when program crashed for some reason, logmessage in current buffer and full buffer queue could be written into logfiles.
- Make it a roll log library. The current version cannot automaticly change the log filename, when the size of the logfile get incredible large.
