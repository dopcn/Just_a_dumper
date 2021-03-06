//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QYVideoCutImageCutShareViewDelegate-Protocol.h"
#import "QYVideoCutRecordingDelegate-Protocol.h"
#import "QYVideoCutoutViewDelegate-Protocol.h"

@class NSString, QYPlayerViewController, QYVideoCutImageCutShareView, QYVideoCutRecordingView, QYVideoCutoutView, UIImage, UIImageView, UIView;
@protocol QYVideoCutManagerDelegate;

@interface QYVideoCutManager : NSObject <QYVideoCutoutViewDelegate, QYVideoCutImageCutShareViewDelegate, QYVideoCutRecordingDelegate>
{
    _Bool _isVideoCutAnimationing;
    _Bool _isAnimationing;
    _Bool _isPlaying;
    _Bool _isShowDanmu;
    int _temPlayerSpeed;
    id <QYVideoCutManagerDelegate> _delegate;
    QYVideoCutImageCutShareView *_videoCutImageCutShareView;
    QYVideoCutoutView *_videoCutoutView;
    QYVideoCutRecordingView *_recordingView;
    QYPlayerViewController *_playerVC;
    UIView *_parentView;
    UIImage *_videoCutImg;
    UIImageView *_temVideoCutIV;
    unsigned long long _cutType;
    double _videoCutStartTime;
    double _videoCutEndTime;
    double _temSaveTime;
}

@property(nonatomic) double temSaveTime; // @synthesize temSaveTime=_temSaveTime;
@property(nonatomic) _Bool isShowDanmu; // @synthesize isShowDanmu=_isShowDanmu;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) int temPlayerSpeed; // @synthesize temPlayerSpeed=_temPlayerSpeed;
@property(nonatomic) double videoCutEndTime; // @synthesize videoCutEndTime=_videoCutEndTime;
@property(nonatomic) double videoCutStartTime; // @synthesize videoCutStartTime=_videoCutStartTime;
@property(nonatomic) unsigned long long cutType; // @synthesize cutType=_cutType;
@property(retain, nonatomic) UIImageView *temVideoCutIV; // @synthesize temVideoCutIV=_temVideoCutIV;
@property(retain, nonatomic) UIImage *videoCutImg; // @synthesize videoCutImg=_videoCutImg;
@property(nonatomic) _Bool isAnimationing; // @synthesize isAnimationing=_isAnimationing;
@property(nonatomic) _Bool isVideoCutAnimationing; // @synthesize isVideoCutAnimationing=_isVideoCutAnimationing;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) __weak QYPlayerViewController *playerVC; // @synthesize playerVC=_playerVC;
@property(retain, nonatomic) QYVideoCutRecordingView *recordingView; // @synthesize recordingView=_recordingView;
@property(retain, nonatomic) QYVideoCutoutView *videoCutoutView; // @synthesize videoCutoutView=_videoCutoutView;
@property(retain, nonatomic) QYVideoCutImageCutShareView *videoCutImageCutShareView; // @synthesize videoCutImageCutShareView=_videoCutImageCutShareView;
@property(nonatomic) __weak id <QYVideoCutManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)finishRecordVideo:(double)arg1 end:(double)arg2;
- (void)cancleVideoCutRecord;
- (void)closeShareView_QYVideoCutoutView;
- (void)shareVideoWithType:(int)arg1 withDic:(id)arg2 type:(unsigned long long)arg3;
- (void)shareImageWithType:(int)arg1 withImage:(id)arg2;
- (void)doCutVideo_QYVideoCutoutView;
- (void)doCutImage_QYVideoCutoutView;
- (void)closeVideoCutoutView_QYVideoCutoutView;
- (void)removeVideoCutImage;
- (void)removeVideoCutVideo;
- (void)removeVideoCutTempFile;
- (_Bool)isVideoCutImageExist:(id)arg1;
- (_Bool)isVideoCutVideoExist;
- (id)getVideoCutImagePath;
- (id)getVideoCutVideoPath;
- (void)removeRecordingView;
- (id)transfromSpeedTypeToNumber:(int)arg1;
- (void)resumePlayerStateForImage;
- (void)prepareCutImage;
- (void)resumePlayerStateForVideo;
- (void)prepareRecordingVideo;
- (void)doCutImage;
- (void)cutImage;
- (void)createShareView:(id)arg1;
- (void)doCutForImageFail;
- (void)createImageCutShareIcon;
- (void)showImageCutToast:(id)arg1;
- (void)doImageAnimate;
- (struct CGRect)getImageRationFrame:(id)arg1;
- (void)animateWithCutImage:(id)arg1;
- (void)showImageCutShareView;
- (void)doCutImageFinish:(id)arg1;
- (_Bool)isShowVideoCutView;
- (_Bool)isShowVideoRecordingView;
- (_Bool)isShowVideoCutShareView;
- (void)showVideoCutView;
- (void)backToVideoCutoutView;
- (void)closeSelf;
- (id)initWithPlayerVC:(id)arg1 withParentView:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

