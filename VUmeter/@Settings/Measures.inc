[Variables]
WeatherCode=ROXX0003:1:RO
WeatherUnit=m
NetworkMaxUp=52428800
NetworkMaxDown=104857600
Substitute="&amp;":"&","&quot;":"","&Quot;":"","&lt;br&gt;":"","![CDATA[":"","]]":"","...":"","<":"",">":"","/PRE&gt;":"","PRE&gt;":"","&lt;":""
;Substitute="January":"Ianuarie", "February":"Februarie", "March":"Martie", "April":"Aprilie", "May":"Mai", "June":"Iunie", "July":"Iulie", "August":"August", "September":"Septembrie", "October":"Octombrie", "November":"Noiembrie", "December":"Decembrie", "Monday":"Luni", "Tuesday":"Marti", "Wednesday":"Miercuri", "Thursday":"Joi", "Friday":"Vineri", "Saturday":"Sambata", "Sunday":"Duminica"
Helv=HelveticaNew
100=255,255,255,255
50=255,255,255,128
25=255,255,255,64
hide=255,255,255,0
Drive1=C:
Drive2=D:
Drive3=F:
Drive4=H:
Swatch=swatch_ct_web-webfont
Colour1=255,255,255,255
Colour2=255,0,0,255
Colour3=255,255,255,64
Alpha=200

[TextStyle]
FontFace=#Helv#
FontColor=255,255,255,255
FontSize=9
InlineSetting=Weight | 400
AntiAlias=1

[TextStyle2]
FontFace=#Helv#
FontColor=255,255,255,96
FontSize=9
InlineSetting=Weight | 100
AntiAlias=1

[TextStyle3]
FontFace=#Swatch#
FontColor=255,255,255,192
FontSize=22
InlineSetting=Weight | 700
AntiAlias=1

[TextStyle4]
FontFace=#Helv#
FontColor=255,255,255,192
FontSize=9
InlineSetting=Weight | 400
AntiAlias=1

[MeasureAudio]
Measure=Plugin
Plugin=AudioLevel
Port=Output
Bands=45
FreqMin=22
FreqMax=22000
FFTSize=1024
FFTOverlap=512
FFTAttack=50
FFTDecay=150
RMSAttack=100
RMSDecay=300
RMSGain=1.05
PeakAttack=10
PeakDecay=200
PeakGain=0.935
Sensitivity=32
;RMSGain=2.06
;RMSGain=2.92
;RMSGain=1.46
;RMSGain=0.76
;PeakGain=1.84
;PeakGain=2.6
;PeakGain=1.3
;PeakGain=0.67

[MeasureHisto]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=0
Type=Peak

[MeasureHisto2]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=1
Type=Peak

[MeasureHisto3]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=4
Type=Peak

[MeasureHisto4]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=5
Type=Peak

[MeasureHisto5]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=2
Type=Peak

[MeasureLP]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=0
Type=Peak

[MeasureLP2]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=4
Type=Peak

[MeasureRP]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=1
Type=Peak

[MeasureRP2]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=5
Type=Peak

[MeasureL]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=0
Type=RMS

[MeasureR]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=1
Type=RMS

[MeasureC]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=2
Type=RMS

[MeasureLFE]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=3
Type=RMS

[MeasureSL]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=4
Type=RMS

[MeasureSR]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=5
Type=RMS

[MeasureBand0]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=0

[MeasureBand1]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=1

[MeasureBand2]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=2

[MeasureBand3]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=3

[MeasureBand4]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=4

[MeasureBand5]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=5

[MeasureBand6]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=6

[MeasureBand7]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=7

[MeasureBand8]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=8

[MeasureBand9]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=9

[MeasureBand10]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=10

[MeasureBand11]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=11

[MeasureBand12]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=12

[MeasureBand13]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=13

[MeasureBand14]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=14

[MeasureBand15]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=15

[MeasureBand16]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=16

[MeasureBand17]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=17

[MeasureBand18]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=18

[MeasureBand19]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=19

[MeasureBand20]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=20

[MeasureBand21]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=21

[MeasureBand22]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=22

[MeasureBand23]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=23

[MeasureBand24]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=24

[MeasureBand25]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=25

[MeasureBand26]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=26

[MeasureBand27]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=27

[MeasureBand28]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=28

[MeasureBand29]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=29

[MeasureBand30]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=30

[MeasureBand31]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=31

[MeasureBand32]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=32

[MeasureBand33]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=33

[MeasureBand34]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=34

[MeasureBand35]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=35

[MeasureBand36]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=36

[MeasureBand37]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=37

[MeasureBand38]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=38

[MeasureBand39]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=39

[MeasureBand40]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=40

[MeasureBand41]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=41

[MeasureBand42]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=42

[MeasureBand43]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=43

[MeasureBand44]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=44

[MasterVolume]
Measure=Plugin
Plugin=Win7AudioPlugin

[MeasureVolCalc]
Measure=Calc
Formula=MasterVolume
MinValue=0
MaxValue=100
IfAboveValue=0
IfAboveAction=[!HideMeter MeterVolumeOff]
IfEqualValue=0
IfEqualAction=[!ShowMeter MeterVolumeOff]
IfBelowValue=1
IfBelowAction=[!ShowMeter MeterVolumeOff]

[MeasureVolCalc2]
Measure=Calc
Formula=MasterVolume
MinValue=0
MaxValue=100
IfAboveValue=80
IfAboveAction=[!ShowMeter MeterVolumeOn]
IfEqualValue=80
IfEqualAction=[!ShowMeter MeterVolumeOn]
IfBelowValue=80
IfBelowAction=[!HideMeter MeterVolumeOn]

;SYSTEM INFORMATION

[ImageNumberCalc]
Measure=Loop
StartValue=1
EndValue=2
Increment=1
LoopCount=0
UpdateDivider=2

[MeasureWeatherRSS]
Measure=Plugin
Plugin=WebParser
UpdateRate=1000
Url=http://wxdata.weather.com/wxdata/weather/local/ROXX0003:1:RO?cc=*&unit=#WeatherUnit#&dayf=6
RegExp="(?siU)<weather ver=(.*)>(.*)<dnam>(.*)</dnam>(.*)<lat>(.*)</lat>(.*)<lon>(.*)</lon>(.*)<sunr>(.*)</sunr>(.*)<suns>(.*)</suns>(.*)<lsup>(.*)</lsup>(.*)<tmp>(.*)</tmp>(.*)<flik>(.*)</flik>(.*)<t>(.*)</t>(.*)<icon>(.*)</icon>(.*)<r>(.*)</r>(.*)<d>(.*)</d>(.*)<s>(.*)</s>(.*)<d>(.*)</d>(.*)<t>(.*)</t>(.*)<hmid>(.*)</hmid>(.*)<vis>(.*)</vis>(.*)<i>(.*)</i>(.*)<t>(.*)</t>(.*)<icon>(.*)</icon>(.*)<t>(.*)</t>(.*)<day d="1" t="(.*)" dt="(.*)">(.*)<hi>(.*)</hi>(.*)<low>(.*)</low>(.*)<icon>(.*)</icon>(.*)<t>(.*)</t>(.*)<ppcp>(.*)</ppcp>(.*)<day d="2" t="(.*)" dt="(.*)">(.*)<hi>(.*)</hi>(.*)<low>(.*)</low>(.*)<icon>(.*)</icon>(.*)<t>(.*)</t>(.*)<ppcp>(.*)</ppcp>(.*)<day d="3" t="(.*)" dt="(.*)">(.*)<hi>(.*)</hi>(.*)<low>(.*)</low>(.*)<icon>(.*)</icon>(.*)<t>(.*)</t>(.*)<ppcp>(.*)</ppcp>(.*)<day d="4" t="(.*)" dt="(.*)">(.*)<hi>(.*)</hi>(.*)<low>(.*)</low>(.*)<icon>(.*)</icon>(.*)<t>(.*)</t>(.*)<ppcp>(.*)</ppcp>(.*)"
StringIndex=1

;Today

[MeasureWeatherIcon]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureWeatherRSS]
StringIndex=21

[MeasureWeatherTemp]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureWeatherRSS]
StringIndex=15

[MeasureWeatherDesc]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureWeatherRSS]
StringIndex=19

;Next day 1

[MeasureWeatherDate1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureWeatherRSS]
StringIndex=45

[MeasureWeatherTemp1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureWeatherRSS]
StringIndex=48

[MeasureWeatherTemp1_Lo]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureWeatherRSS]
StringIndex=50

[MeasureWeatherIcon1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureWeatherRSS]
StringIndex=52

[MeasureWeatherDay1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureWeatherRSS]
StringIndex=54

;Next day 2

[MeasureWeatherDate2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureWeatherRSS]
StringIndex=58

[MeasureWeatherTemp2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureWeatherRSS]
StringIndex=61

[MeasureWeatherTemp2_Lo]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureWeatherRSS]
StringIndex=63

[MeasureWeatherIcon2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureWeatherRSS]
StringIndex=65

[MeasureWeatherDay2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureWeatherRSS]
StringIndex=67

;Next day 3

[MeasureWeatherDate3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureWeatherRSS]
StringIndex=71

[MeasureWeatherTemp3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureWeatherRSS]
StringIndex=74

[MeasureWeatherTemp3_Lo]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureWeatherRSS]
StringIndex=76

[MeasureWeatherIcon3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureWeatherRSS]
StringIndex=78

[MeasureWeatherDay3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureWeatherRSS]
StringIndex=80

;Network

[MeasureIP]
Measure=Plugin
Plugin=WebParser.dll
Url=http://checkip.dyndns.org
UpdateRate=1440
RegExp="(?siU)Address: (.*)</body>"
StringIndex=1
Substitute="":"N/A"

[MeasureNetIn]
Measure=NetIn
NetInSpeed=#maxDownload#
UpdateDivider=2

[MeasureNetOut]
Measure=NetOut
NetOutSpeed=#maxUpload#
UpdateDivider=2

[MeasureNetInTotal]
Measure=NetIn
Cumulative=1
UpdateDivider=4

[MeasureNetOutTotal]
Measure=NetOut
Cumulative=1
UpdateDivider=4

;Measure CPU

[MeasureCPU]
Measure=CPU
Processor=0
MinValue=0
MaxValue=100
UpdateDivider=2

[MeasureCPU2]
Measure=CPU
Processor=0
MinValue=0
MaxValue=100
InvertMeasure=1
UpdateDivider=2

;Measure Cores

[MeasureCore1]
Measure=CPU
Processor=1
MinValue=0
MaxValue=100
UpdateDivider=2

[MeasureCore2]
Measure=CPU
Processor=2
MinValue=0
MaxValue=100
UpdateDivider=2

[MeasureCore3]
Measure=CPU
Processor=3
MinValue=0
MaxValue=100
UpdateDivider=2

[MeasureCore4]
Measure=CPU
Processor=4
MinValue=0
MaxValue=100
UpdateDivider=2

[MeasureCPUName]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=CpuName
UpdateDivider=2

[MeasureCPUName2]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=HARDWARE\DESCRIPTION\System\CentralProcessor\0
RegValue=ProcessorNameString
RegExpSubstitute=1
SubStitute="\(R\)":"","\(TM\)":"","\(tm\)":""
UpdateDivider=2

[MeasureCPUSpeed]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=CpuSpeed
UpdateDivider=2

[MeasureCpuClockSpeed]
Measure=Plugin
Plugin=PowerPlugin
PowerState=MHz
UpdateDivider=2

[MeasureBusSpeed]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=BusSpeed
UpdateDivider=2

[MeasureCore1Temp]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=0
MinValue=0
MaxValue=100
IfAboveValue=60
IfAboveAction=[!SetOption CPU2Value3 FontColor 255,255,0][!UpdateMeter *][!Redraw]
IfBelowValue=60
IfBelowAction=[!SetOption CPU2Value3 FontColor 255,255,255][!UpdateMeter *][!Redraw]
IfAboveValue=80
IfAboveAction=[!SetOption CPU2Value3 FontColor 255,0,0][!UpdateMeter *][!Redraw]
IfBelowValue=80
IfBelowAction=[!SetOption CPU2Value3 FontColor 255,255,0][!UpdateMeter *][!Redraw]
UpdateDivider=2

[MeasureCore2Temp]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=1
MinValue=0
MaxValue=100
IfAboveValue=60
IfAboveAction=[!SetOption CPU4Value3 FontColor 255,255,0][!UpdateMeter *][!Redraw]
IfBelowValue=60
IfBelowAction=[!SetOption CPU4Value3 FontColor 255,255,255][!UpdateMeter *][!Redraw]
IfAboveValue=80
IfAboveAction=[!SetOption CPU4Value3 FontColor 255,0,0][!UpdateMeter *][!Redraw]
IfBelowValue=80
IfBelowAction=[!SetOption CPU4Value3 FontColor 255,255,0][!UpdateMeter *][!Redraw]
UpdateDivider=2

;Measure CPU

[MeasureCore1Temp0]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=0
MinValue=0
MaxValue=60
UpdateDivider=2

[MeasureCore2Temp0]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=1
MinValue=0
MaxValue=60
UpdateDivider=2

[MeasureCore1Temp6]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=0
MinValue=60
MaxValue=80
UpdateDivider=2

[MeasureCore2Temp6]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=1
MinValue=60
MaxValue=80
UpdateDivider=2

[MeasureCore1Temp8]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=0
MinValue=80
MaxValue=100
UpdateDivider=2

[MeasureCore2Temp8]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=1
MinValue=80
MaxValue=100
UpdateDivider=2

;Measure RAM

[MeasureRAM]
Measure=PhysicalMemory
UpdateDivider=2

[MeasureRAMFree]
Measure=PhysicalMemory
InvertMeasure=1
UpdateDivider=2

;Measure Discs

[MeasureDiskLabel]
Measure=FreeDiskSpace
Drive=#Drive1#
Label=1
UpdateDivider=-1

[MeasureDiskLabel2]
Measure=FreeDiskSpace
Drive=#Drive2#
Label=1
UpdateDivider=-1

[MeasureDiskLabel3]
Measure=FreeDiskSpace
Drive=#Drive3#
Label=1
UpdateDivider=-1

[MeasureDiskLabel4]
Measure=FreeDiskSpace
Drive=#Drive4#
Label=1
UpdateDivider=-1

[MeasureTotalDisk]
Measure=FreeDiskSpace
Drive=#Drive1#
Total=1
UpdateDivider=-1

[MeasureUsedDisk]
Measure=FreeDiskSpace
Drive=#Drive1#
InvertMeasure=1

[MeasureFreeDisk]
Measure=FreeDiskSpace
Drive=#Drive1#

[MeasureUsedDisk%]
Measure=FreeDiskSpace
Drive="Drive1"
InvertMeasure=1

[MeasureFreeDisk%]
Measure=FreeDiskSpace
Drive=#Drive1#

[MeasureTotalDisk2]
Measure=FreeDiskSpace
Drive=#Drive2#
Total=1
UpdateDivider=-1

[MeasureUsedDisk2]
Measure=FreeDiskSpace
Drive=#Drive2#
InvertMeasure=1

[MeasureFreeDisk2]
Measure=FreeDiskSpace
Drive=#Drive2#

[MeasureUsedDisk2%]
Measure=FreeDiskSpace
Drive=#Drive2#
InvertMeasure=1

[MeasureFreeDisk2%]
Measure=FreeDiskSpace
Drive=#Drive2#

[MeasureTotalDisk3]
Measure=FreeDiskSpace
Drive=#Drive3#
Total=1
UpdateDivider=-1

[MeasureUsedDisk3]
Measure=FreeDiskSpace
Drive=#Drive3#
InvertMeasure=1

[MeasureFreeDisk3]
Measure=FreeDiskSpace
Drive=#Drive3#

[MeasureUsedDisk3%]
Measure=FreeDiskSpace
Drive=#Drive3#
InvertMeasure=1

[MeasureFreeDisk3%]
Measure=FreeDiskSpace
Drive=#Drive3#

[MeasureTotalDisk4]
Measure=FreeDiskSpace
Drive=#Drive4#
Total=1
UpdateDivider=-1

[MeasureUsedDisk4]
Measure=FreeDiskSpace
Drive=#Drive4#
InvertMeasure=1

[MeasureFreeDisk4]
Measure=FreeDiskSpace
Drive=#Drive4#

[MeasureUsedDisk4%]
Measure=FreeDiskSpace
Drive=#Drive4#
InvertMeasure=1

[MeasureFreeDisk4%]
Measure=FreeDiskSpace
Drive=#Drive4#

[MeasureDiskRead1]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Read Bytes/sec
PerfMonInstance=#Drive1#

[MeasureDiskWrite1]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Write Bytes/sec
PerfMonInstance=#Drive1#
UpdateDivider=5

[MeasureDiskRead2]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Read Bytes/sec
PerfMonInstance=#Drive2#

[MeasureDiskWrite2]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Write Bytes/sec
PerfMonInstance=#Drive2#

[MeasureDiskRead3]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Read Bytes/sec
PerfMonInstance=#Drive3#

[MeasureDiskWrite3]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Write Bytes/sec
PerfMonInstance=#Drive3#

[MeasureDiskRead4]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Read Bytes/sec
PerfMonInstance=#Drive4#

[MeasureDiskWrite4]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Write Bytes/sec
PerfMonInstance=#Drive4#

[MeasureTime]
Measure=Time
TimeZone=1
DaylightSavingTime=0

[MeasureTime2]
Measure=Time
TimeZone=1
DaylightSavingTime=0
Format=%X

[measureBMTHour]
Measure=Time
TimeZone=1
DayLightSavingTime=0
Format=%H

[measureBMTMin]
Measure=Time
TimeZone=1
DayLightSavingTime=0
Format=%M

[measureBMTSec]
Measure=Time
TimeZone=1
DayLightSavingTime=0
Format=%S

[measureBeatTime]
Measure=Calc
Formula=(([measureBMTHour:]*3600)+([measureBMTMin:]*60)+([measureBMTSec:])) / 86.4
DynamicVariables=1

[measureBeatTime2]
Measure=Calc
Formula=(([measureBMTHour:]*3600)+([measureBMTMin:]*60)+([measureBMTSec:])) / 0.864
DynamicVariables=1

[MeasureDate]
Measure=Time
Format=%A, %B %e, %Y

[MeasureDate2]
Measure=Time
Format=Day %j%nWeek %U%nUTC %p

[Measure24HrTime]
Measure=Time
Format=%H:%M:%S
