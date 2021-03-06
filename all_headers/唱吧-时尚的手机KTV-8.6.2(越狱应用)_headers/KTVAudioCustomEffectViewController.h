//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KTVBaseViewController.h"

#import "KTVRCVolumeAdjustViewControllerDelegate-Protocol.h"

@class KTVAUGraphPlayer, KTVRCEffectSelectCustomModel, KTVRCPlayControlViewController, KTVRCVolumeAdjustViewController, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UIScrollView, UIView;

@interface KTVAudioCustomEffectViewController : KTVBaseViewController <KTVRCVolumeAdjustViewControllerDelegate>
{
    _Bool _isSingOnly;
    _Bool _shouldAutoPlaying;
    KTVRCEffectSelectCustomModel *_initialModel;
    KTVRCPlayControlViewController *_playControlViewController;
    KTVAUGraphPlayer *_audioPlayer;
    CDUnknownBlockType _dismissBlock;
    UIView *_playControlArea;
    UIButton *_volumeButton;
    NSLayoutConstraint *_playControlAreaHeightConstraint;
    UIView *_volumeAdjustArea;
    UIScrollView *_scrollView;
    KTVRCEffectSelectCustomModel *_cutomModel;
    KTVRCVolumeAdjustViewController *_volumeAdjustViewController;
    UIView *_contentView;
    NSMutableArray *_sliderViewTrackingArray;
    UIView *_blenderView;
    NSLayoutConstraint *_naviBarHeightConstraint;
    NSLayoutConstraint *_toolBarHeightConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *toolBarHeightConstraint; // @synthesize toolBarHeightConstraint=_toolBarHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *naviBarHeightConstraint; // @synthesize naviBarHeightConstraint=_naviBarHeightConstraint;
@property(retain, nonatomic) UIView *blenderView; // @synthesize blenderView=_blenderView;
@property(retain, nonatomic) NSMutableArray *sliderViewTrackingArray; // @synthesize sliderViewTrackingArray=_sliderViewTrackingArray;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) KTVRCVolumeAdjustViewController *volumeAdjustViewController; // @synthesize volumeAdjustViewController=_volumeAdjustViewController;
@property(retain, nonatomic) KTVRCEffectSelectCustomModel *cutomModel; // @synthesize cutomModel=_cutomModel;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak UIView *volumeAdjustArea; // @synthesize volumeAdjustArea=_volumeAdjustArea;
@property(nonatomic) __weak NSLayoutConstraint *playControlAreaHeightConstraint; // @synthesize playControlAreaHeightConstraint=_playControlAreaHeightConstraint;
@property(nonatomic) __weak UIButton *volumeButton; // @synthesize volumeButton=_volumeButton;
@property(nonatomic) __weak UIView *playControlArea; // @synthesize playControlArea=_playControlArea;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(nonatomic) _Bool shouldAutoPlaying; // @synthesize shouldAutoPlaying=_shouldAutoPlaying;
@property(nonatomic) _Bool isSingOnly; // @synthesize isSingOnly=_isSingOnly;
@property(retain, nonatomic) KTVAUGraphPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) KTVRCPlayControlViewController *playControlViewController; // @synthesize playControlViewController=_playControlViewController;
@property(retain, nonatomic) KTVRCEffectSelectCustomModel *initialModel; // @synthesize initialModel=_initialModel;
- (void).cxx_destruct;
- (void)volumeAdjustViewController:(id)arg1 humanVolumeDidChanged:(double)arg2;
- (void)blenderViewTapped:(id)arg1;
- (void)volumeButtonClicked:(id)arg1;
- (void)saveButtonClicked:(id)arg1;
- (void)restoreButtonClicked:(id)arg1;
- (void)closeButtonClicked:(id)arg1;
- (void)applyEffectFromModel:(id)arg1;
- (void)setupVolumeView;
- (void)setupSliders;
- (void)statEventForKey:(id)arg1;
- (void)playControlPauseStat;
- (void)playControlPlayStat;
- (void)vocalVolumeStat;
- (void)accVolumeStat;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)removeAllStatsOberver;
- (void)addAllStatsOberver;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

