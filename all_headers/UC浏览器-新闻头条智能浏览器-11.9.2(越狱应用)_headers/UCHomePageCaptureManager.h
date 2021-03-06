//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface UCHomePageCaptureManager : NSObject
{
    NSMutableDictionary *_temporaryImages;
    NSMutableDictionary *_snapShotNightModeDic;
    CDStruct_aaa084d1 _currentSnapShotStatus;
}

@property(retain, nonatomic) NSMutableDictionary *snapShotNightModeDic; // @synthesize snapShotNightModeDic=_snapShotNightModeDic;
@property(retain, nonatomic) NSMutableDictionary *temporaryImages; // @synthesize temporaryImages=_temporaryImages;
@property(nonatomic) CDStruct_aaa084d1 currentSnapShotStatus; // @synthesize currentSnapShotStatus=_currentSnapShotStatus;
- (double)screenHeight;
- (id)getHomePageViewImage:(_Bool)arg1 withWebAgentTag:(int)arg2 hpView:(id)arg3 scrollView:(id)arg4 currentPageIndex:(long long)arg5;
- (id)captureHomePageViewImageInWebAgent:(int)arg1 hpView:(id)arg2 scrollView:(id)arg3 currentPageIndex:(long long)arg4;
- (void)setIsHomePageLeftUpdate:(_Bool)arg1;
- (void)setIsHomePageRightUpdate:(_Bool)arg1;
- (void)updateSnapShotStatus;
- (void)setTemporaryImage:(id)arg1 atWebAgentTag:(int)arg2;
- (id)temporaryImageWithTag:(int)arg1;
- (void)dealloc;
- (id)init;

@end

