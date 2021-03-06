//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LOLBoxViewController.h"

@class ALAsset, AVAssetExportSession, AVMutableComposition, AVPlayer, AVPlayerItem, AVURLAsset, HZMicroVideo, MDWBarInfo, MicroVideoMaterialStack, NSDictionary, NSLayoutConstraint, NSString, NSURL, UIButton, UIImageView, UILabel, UIView;

@interface LOLBoxEditVideoPreviewViewController : LOLBoxViewController
{
    ALAsset *_videoAsset;
    UIView *_videoPreviewView;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    AVURLAsset *_sourceAsset;
    AVMutableComposition *_videoComposition;
    id _playerMonitorObserver;
    UIImageView *_playIndicator;
    HZMicroVideo *_microVideo;
    NSString *_baseTopic;
    MDWBarInfo *_barInfo;
    NSDictionary *_ext;
    MicroVideoMaterialStack *_trackStack;
    NSString *_filePath;
    UIButton *_publishButton;
    UIButton *_editButton;
    NSURL *_videoPath;
    AVAssetExportSession *_exportSession;
    NSString *_savePath;
    UIView *_processingViewContainer;
    UIView *_processingViewPanel;
    UIView *_generateVideoProcessBackgroundView;
    NSLayoutConstraint *_width4GenerateVideoProcessView;
    UILabel *_tipsLabel;
}

@property(nonatomic) __weak UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) __weak NSLayoutConstraint *width4GenerateVideoProcessView; // @synthesize width4GenerateVideoProcessView=_width4GenerateVideoProcessView;
@property(nonatomic) __weak UIView *generateVideoProcessBackgroundView; // @synthesize generateVideoProcessBackgroundView=_generateVideoProcessBackgroundView;
@property(nonatomic) __weak UIView *processingViewPanel; // @synthesize processingViewPanel=_processingViewPanel;
@property(nonatomic) __weak UIView *processingViewContainer; // @synthesize processingViewContainer=_processingViewContainer;
@property(retain, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(retain, nonatomic) AVAssetExportSession *exportSession; // @synthesize exportSession=_exportSession;
@property(retain, nonatomic) NSURL *videoPath; // @synthesize videoPath=_videoPath;
@property(nonatomic) __weak UIButton *editButton; // @synthesize editButton=_editButton;
@property(nonatomic) __weak UIButton *publishButton; // @synthesize publishButton=_publishButton;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) MicroVideoMaterialStack *trackStack; // @synthesize trackStack=_trackStack;
@property(retain, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) MDWBarInfo *barInfo; // @synthesize barInfo=_barInfo;
@property(copy, nonatomic) NSString *baseTopic; // @synthesize baseTopic=_baseTopic;
@property(retain, nonatomic) HZMicroVideo *microVideo; // @synthesize microVideo=_microVideo;
@property(retain, nonatomic) UIImageView *playIndicator; // @synthesize playIndicator=_playIndicator;
@property(retain, nonatomic) id playerMonitorObserver; // @synthesize playerMonitorObserver=_playerMonitorObserver;
@property(retain, nonatomic) AVMutableComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain, nonatomic) AVURLAsset *sourceAsset; // @synthesize sourceAsset=_sourceAsset;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak UIView *videoPreviewView; // @synthesize videoPreviewView=_videoPreviewView;
@property(retain, nonatomic) ALAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
- (void).cxx_destruct;
- (void)videoToEdit:(id)arg1;
- (void)videoTopublish:(id)arg1;
- (void)setupVideoTrackStack;
- (id)videosPath;
- (void)didReceiveMemoryWarning;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)playControl;
- (void)stopPlay;
- (void)startPlay;
- (void)setupPreview;
- (void)fetchNotification:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithVideoUrl:(id)arg1 ext:(id)arg2;
- (void)dealloc;

@end

