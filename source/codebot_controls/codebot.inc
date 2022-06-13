{$ifndef fpc}
'This library requires the free pascal compiler'
{$endif}
{$if fpc_fullversion < 30000}
'This library requires the free pascal 3 or greater'
{$endif}

{$mode delphi}
{$modeswitch multihelpers}

{$z4}
{$macro on}
{$WARN 5024 off : Parameter "$1" not used}
{$WARN 6060 off : Case statement does not handle all possible cases}


{$ifdef windows}
	{$define apicall := stdcall}
{$else}
	{$define apicall := cdecl}
{$endif}