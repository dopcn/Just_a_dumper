//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KFViewController.h"

@class KTVKrcPitchModel, KTVTuneViewController, KTV_SongInfo, KtvKrcFragmentView, KtvKrcModel, KtvToneConfigureSetting, NSObject, NSString, NSTimer, UIImage;
@protocol ADCPlayerManagerPortocol;

@interface KtvKrcFragmentSelectVC : KFViewController
{
    _Bool _isSingltonRecored;
    _Bool _isFromFragmentRecord;
    float _recordVolumeRate;
    float _playVolumeRate;
    int _moveStep;
    CDUnknownBlockType _selectedBlock;
    CDUnknownBlockType _singleSelectedBlock;
    KtvKrcModel *_krcModel;
    long long _krcAdjustTime;
    UIImage *_backGroundImage;
    NSString *_krcIdStr;
    long long _currentTime;
    NSString *_filePath;
    long long _krcFragmentStartTime;
    long long _krcFragmentEndTime;
    KtvKrcModel *_krcFragmentKrcModel;
    long long _tempFilePathEndTime;
    long long _totalPalyDuration;
    KTVKrcPitchModel *_pitchModel;
    KTV_SongInfo *_songInfo;
    KTVTuneViewController *_tuneVC;
    KtvToneConfigureSetting *_toneSetting;
    KtvKrcFragmentView *_fragmentView;
    NSObject<ADCPlayerManagerPortocol> *_player;
    NSTimer *_timer;
    long long _beginPlayTime;
    long long _endPlayTime;
    struct CGRect _viewFrame;
}

@property(nonatomic) long long endPlayTime; // @synthesize endPlayTime=_endPlayTime;
@property(nonatomic) long long beginPlayTime; // @synthesize beginPlayTime=_beginPlayTime;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<ADCPlayerManagerPortocol> *player; // @synthesize player=_player;
@property(retain, nonatomic) KtvKrcFragmentView *fragmentView; // @synthesize fragmentView=_fragmentView;
@property(nonatomic) struct CGRect viewFrame; // @synthesize viewFrame=_viewFrame;
@property(nonatomic) int moveStep; // @synthesize moveStep=_moveStep;
@property(nonatomic) float playVolumeRate; // @synthesize playVolumeRate=_playVolumeRate;
@property(nonatomic) float recordVolumeRate; // @synthesize recordVolumeRate=_recordVolumeRate;
@property(retain, nonatomic) KtvToneConfigureSetting *toneSetting; // @synthesize toneSetting=_toneSetting;
@property(retain, nonatomic) KTVTuneViewController *tuneVC; // @synthesize tuneVC=_tuneVC;
@property(retain, nonatomic) KTV_SongInfo *songInfo; // @synthesize songInfo=_songInfo;
@property(retain, nonatomic) KTVKrcPitchModel *pitchModel; // @synthesize pitchModel=_pitchModel;
@property(nonatomic) long long totalPalyDuration; // @synthesize totalPalyDuration=_totalPalyDuration;
@property(nonatomic) long long tempFilePathEndTime; // @synthesize tempFilePathEndTime=_tempFilePathEndTime;
@property(retain, nonatomic) KtvKrcModel *krcFragmentKrcModel; // @synthesize krcFragmentKrcModel=_krcFragmentKrcModel;
@property(nonatomic) long long krcFragmentEndTime; // @synthesize krcFragmentEndTime=_krcFragmentEndTime;
@property(nonatomic) long long krcFragmentStartTime; // @synthesize krcFragmentStartTime=_krcFragmentStartTime;
@property(nonatomic) _Bool isFromFragmentRecord; // @synthesize isFromFragmentRecord=_isFromFragmentRecord;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) long long currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) _Bool isSingltonRecored; // @synthesize isSingltonRecored=_isSingltonRecored;
@property(retain, nonatomic) NSString *krcIdStr; // @synthesize krcIdStr=_krcIdStr;
@property(retain, nonatomic) UIImage *backGroundImage; // @synthesize backGroundImage=_backGroundImage;
@property(nonatomic) long long krcAdjustTime; // @synthesize krcAdjustTime=_krcAdjustTime;
@property(retain, nonatomic) KtvKrcModel *krcModel; // @synthesize krcModel=_krcModel;
@property(copy, nonatomic) CDUnknownBlockType singleSelectedBlock; // @synthesize singleSelectedBlock=_singleSelectedBlock;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (id)dataTojsonString:(id)arg1;
- (void)sendStatisticsInfoForKrcId:(id)arg1 startTime:(long long)arg2 endTime:(long long)arg3;
- (void)loadSetting;
- (void)handleforLivePlayer:(long long)arg1 ext1:(int)arg2 ext2:(int)arg3;
- (void)stop;
- (void)play;
- (void)update;
- (void)KTVUsingControllerState:(int)arg1;
- (void)viewDidLoad;
- (long long)showPlayBarWay;

@end

