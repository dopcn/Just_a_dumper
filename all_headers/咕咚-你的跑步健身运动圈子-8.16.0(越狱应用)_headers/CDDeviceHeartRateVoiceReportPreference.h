//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CDPreference.h"

@class NSString;

@interface CDDeviceHeartRateVoiceReportPreference : CDPreference
{
    _Bool _voiceReportEnabled;
    _Bool _restHeartRateDetected;
    unsigned long long _mode;
    unsigned long long _type;
    unsigned long long _lowHeartRate;
    unsigned long long _highHeartRate;
    unsigned long long _restHeartRate;
    unsigned long long _maxHeartRate;
    long long _alarmHeartRateValue;
    unsigned long long _userAge;
}

+ (id)preferenceWithMode:(unsigned long long)arg1 type:(unsigned long long)arg2;
+ (id)preference;
@property(nonatomic) unsigned long long userAge; // @synthesize userAge=_userAge;
@property(nonatomic) long long alarmHeartRateValue; // @synthesize alarmHeartRateValue=_alarmHeartRateValue;
@property(nonatomic) unsigned long long maxHeartRate; // @synthesize maxHeartRate=_maxHeartRate;
@property(nonatomic) _Bool restHeartRateDetected; // @synthesize restHeartRateDetected=_restHeartRateDetected;
@property(nonatomic) unsigned long long restHeartRate; // @synthesize restHeartRate=_restHeartRate;
@property(nonatomic) unsigned long long highHeartRate; // @synthesize highHeartRate=_highHeartRate;
@property(nonatomic) unsigned long long lowHeartRate; // @synthesize lowHeartRate=_lowHeartRate;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool voiceReportEnabled; // @synthesize voiceReportEnabled=_voiceReportEnabled;
- (double)getTargetPercentWithHeartRate:(unsigned long long)arg1;
- (unsigned long long)getTargetHeartRateWithPercent:(double)arg1;
@property(readonly, nonatomic) NSString *warmUpHeartRateIntroduceString;
@property(readonly, nonatomic) NSString *burnFatHeartRateIntroduceString;
@property(readonly, nonatomic) NSString *aerobicEnduranceHeartRateIntroduceString;
@property(readonly, nonatomic) NSString *anaerobicEnduranceHeartRateIntroduceString;
@property(readonly, nonatomic) NSString *extremeHeartRateIntroduceString;
@property(readonly, nonatomic) unsigned long long professionalHighValue;
@property(readonly, nonatomic) unsigned long long professionalLowValue;
@property(readonly, nonatomic) unsigned long long keepHealthHighValue;
@property(readonly, nonatomic) unsigned long long keepHealthLowValue;
@property(readonly, nonatomic) unsigned long long burnFatHighValue;
@property(readonly, nonatomic) unsigned long long burnFatLowValue;
@property(readonly, nonatomic) NSString *warmUpHeartRateString;
@property(readonly, nonatomic) unsigned long long warmUpHeartRate;
@property(readonly, nonatomic) NSString *burnFatHeartRateString;
@property(readonly, nonatomic) unsigned long long burnFatHeartRate;
@property(readonly, nonatomic) NSString *aerobicEnduranceHeartRateString;
@property(readonly, nonatomic) unsigned long long aerobicEnduranceHeartRate;
@property(readonly, nonatomic) NSString *anaerobicEnduranceHeartRateString;
@property(readonly, nonatomic) unsigned long long anaerobicEnduranceHeartRate;
@property(readonly, nonatomic) NSString *extremeHeartRateString;
@property(readonly, nonatomic) unsigned long long extremeHeartRate;
@property(readonly, nonatomic) NSString *shortName;
- (void)removePreference;
- (void)commit;

@end

