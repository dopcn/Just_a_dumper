//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface VBOLVDiskStatusView : UIView
{
    double _currentCacheFileSize;
    UILabel *_diskInfoView;
    UIView *_bgViewUsedSpace;
}

@property(retain, nonatomic) UIView *bgViewUsedSpace; // @synthesize bgViewUsedSpace=_bgViewUsedSpace;
@property(retain, nonatomic) UILabel *diskInfoView; // @synthesize diskInfoView=_diskInfoView;
@property(nonatomic) double currentCacheFileSize; // @synthesize currentCacheFileSize=_currentCacheFileSize;
- (void)layoutSubviews;
- (void)appEnterForegoundCallBack;
- (float)getFreeDiskSpace;
- (float)getTotalDiskSpace;
- (void)updateDiskUsedInfo:(id)arg1;
- (void)updateDiskInfoViewProperty;
- (void)didThemeChange;
- (void)onChangeFrames;
- (void)addDiskInfoView:(struct CGRect)arg1;
- (void)addSomeViews:(struct CGRect)arg1;
- (void)removeAppObserver;
- (void)addAppObserver;
- (void)releaseObject;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

