[Variables]
Helv=HelveticaNew
100=255,255,255,255
50=255,255,255,128
25=255,255,255,64
hide=255,255,255,0
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
FontColor=255,255,255,128
FontSize=9
InlineSetting=Weight | 400
AntiAlias=1

[MeasureAudio]
Measure=Plugin
Plugin=AudioLevel
Port=Output
Bands=22
FreqMin=20
FreqMax=24000
Sensitivity=32
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

[MeasureHisto6]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=3
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
Group=fx

[MeasureBand1]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=1
Group=fx

[MeasureBand2]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=2
Group=fx

[MeasureBand3]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=3
Group=fx

[MeasureBand4]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=4
Group=fx

[MeasureBand5]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=5
Group=fx

[MeasureBand6]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=6
Group=fx

[MeasureBand7]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=7
Group=fx

[MeasureBand8]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=8
Group=fx

[MeasureBand9]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=9
Group=fx

[MeasureBand10]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=10
Group=fx

[MeasureBand11]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=11
Group=fx

[MeasureBand12]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=12
Group=fx

[MeasureBand13]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=13
Group=fx

[MeasureBand14]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=14
Group=fx

[MeasureBand15]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=15
Group=fx

[MeasureBand16]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=16
Group=fx

[MeasureBand17]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=17
Group=fx

[MeasureBand18]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=18
Group=fx

[MeasureBand19]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=19
Group=fx

[MeasureBand20]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=20
Group=fx

[MeasureBand21]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Channel=Avg
Type=Band
BandIdx=21
Group=fx

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

;Measure Time

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
Format=%a

[MeasureDate2]
Measure=Time
Format=%e

[MeasureDate3]
Measure=Time
Format=%b

[MeasureDate4]
Measure=Time
Format=%Y

[Measure24HrTime]
Measure=Time
Format=%H:%M:%S
