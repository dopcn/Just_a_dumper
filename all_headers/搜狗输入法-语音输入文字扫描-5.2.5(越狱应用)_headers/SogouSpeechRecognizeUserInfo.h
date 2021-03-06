//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SogouSpeechRecognizeUserInfo : NSObject
{
    _Bool _enableLongRecognition;
    _Bool _isContinue;
    _Bool _isAppendSpxData;
    _Bool _enableTranslate;
    _Bool _enableAGC;
    _Bool _enablePingback;
    _Bool _enableSI;
    int _area;
    float _vad_bos;
    float _vad_eos;
    int _typeNo;
    float _vadSilenceThreshold;
    int _recognizerVersion;
    int _target_level_DB;
    int _compression_gain_DB;
    float _energy_DB;
    float _SNR;
    float _ALFA_FF;
    float _ALFA_SF;
    float _BETA_SF;
    float _ALFA_SNR;
    float _THRES_02;
    float _THRES_24;
    float _THRES_46;
    float _THRES_68;
    float _VAD_DB_BOUND;
    NSString *_serverURL;
    NSString *_correctingServerURL;
    double _max_record_interval;
    double _max_voice_interval;
    NSString *_audioPath;
    NSString *_speexPath;
    NSString *_userID;
    NSString *_key;
    double _actionTime;
    NSString *_uuid;
}

+ (void)setUUID:(id)arg1;
+ (void)enablePingback:(_Bool)arg1;
+ (void)setActionTime:(double)arg1;
+ (void)setEnableSI:(_Bool)arg1;
+ (void)setEnableAGC:(_Bool)arg1;
+ (void)setEnableLongRecognition:(_Bool)arg1;
+ (void)setVadSilenceTimeThreshold:(float)arg1;
+ (void)setAppendingSpxData:(_Bool)arg1;
+ (void)setUserID:(id)arg1 andKey:(id)arg2;
+ (void)setIsContinuous:(_Bool)arg1;
+ (void)setSaveSpxPath:(id)arg1;
+ (void)setMaxRecordInterval:(float)arg1;
+ (void)setAsrAudioPath:(id)arg1;
+ (void)setVadHeadInterval:(float)arg1 withTailInterval:(float)arg2;
+ (void)setRecognizerVersion:(int)arg1;
+ (void)setArea:(int)arg1;
+ (void)setCustomCorrectingUrl:(id)arg1;
+ (void)setCustomUrl:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) float VAD_DB_BOUND; // @synthesize VAD_DB_BOUND=_VAD_DB_BOUND;
@property(nonatomic) float THRES_68; // @synthesize THRES_68=_THRES_68;
@property(nonatomic) float THRES_46; // @synthesize THRES_46=_THRES_46;
@property(nonatomic) float THRES_24; // @synthesize THRES_24=_THRES_24;
@property(nonatomic) float THRES_02; // @synthesize THRES_02=_THRES_02;
@property(nonatomic) float ALFA_SNR; // @synthesize ALFA_SNR=_ALFA_SNR;
@property(nonatomic) float BETA_SF; // @synthesize BETA_SF=_BETA_SF;
@property(nonatomic) float ALFA_SF; // @synthesize ALFA_SF=_ALFA_SF;
@property(nonatomic) float ALFA_FF; // @synthesize ALFA_FF=_ALFA_FF;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) _Bool enableSI; // @synthesize enableSI=_enableSI;
@property(nonatomic) _Bool enablePingback; // @synthesize enablePingback=_enablePingback;
@property(nonatomic) float SNR; // @synthesize SNR=_SNR;
@property(nonatomic) float energy_DB; // @synthesize energy_DB=_energy_DB;
@property(nonatomic) int compression_gain_DB; // @synthesize compression_gain_DB=_compression_gain_DB;
@property(nonatomic) int target_level_DB; // @synthesize target_level_DB=_target_level_DB;
@property(nonatomic) double actionTime; // @synthesize actionTime=_actionTime;
@property(nonatomic) _Bool enableAGC; // @synthesize enableAGC=_enableAGC;
@property(nonatomic) _Bool enableTranslate; // @synthesize enableTranslate=_enableTranslate;
@property(nonatomic) int recognizerVersion; // @synthesize recognizerVersion=_recognizerVersion;
@property(nonatomic) float vadSilenceThreshold; // @synthesize vadSilenceThreshold=_vadSilenceThreshold;
@property(nonatomic) int typeNo; // @synthesize typeNo=_typeNo;
@property(nonatomic) _Bool isAppendSpxData; // @synthesize isAppendSpxData=_isAppendSpxData;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) _Bool isContinue; // @synthesize isContinue=_isContinue;
@property(retain, nonatomic) NSString *speexPath; // @synthesize speexPath=_speexPath;
@property(retain, nonatomic) NSString *audioPath; // @synthesize audioPath=_audioPath;
@property(nonatomic) _Bool enableLongRecognition; // @synthesize enableLongRecognition=_enableLongRecognition;
@property(nonatomic) double max_voice_interval; // @synthesize max_voice_interval=_max_voice_interval;
@property(nonatomic) double max_record_interval; // @synthesize max_record_interval=_max_record_interval;
@property(nonatomic) float vad_eos; // @synthesize vad_eos=_vad_eos;
@property(nonatomic) float vad_bos; // @synthesize vad_bos=_vad_bos;
@property(nonatomic) int area; // @synthesize area=_area;
@property(copy, nonatomic) NSString *correctingServerURL; // @synthesize correctingServerURL=_correctingServerURL;
@property(copy, nonatomic) NSString *serverURL; // @synthesize serverURL=_serverURL;
- (void).cxx_destruct;
- (void)setUserID:(id)arg1 andKey:(id)arg2;
- (id)init;

@end

