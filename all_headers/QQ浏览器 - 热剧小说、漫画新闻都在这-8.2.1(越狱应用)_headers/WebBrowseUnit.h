//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BrowseUnit.h"

@interface WebBrowseUnit : BrowseUnit
{
    int originalWidth;
    _Bool isAnimated_;
}

- (struct CGRect)snapshotViewContentFrame;
- (id)snapshoViewContentImage;
- (id)snapshoViewContent;
- (struct CGRect)snapshotViewFrameWithAnotherHeaderShowed:(_Bool)arg1;
- (id)snapshotViewAfterScreenUpdates:(_Bool)arg1 anotherHeaderShowed:(_Bool)arg2;
- (void)setPrivacyMode:(_Bool)arg1;
- (void)setToolbarAutoResizingEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (void)onToolbarCommand:(id)arg1;
- (void)toolbarActionGoHome:(id)arg1;
- (void)exitFullScreenMode:(_Bool)arg1 temprorary:(_Bool)arg2;
- (void)exitFullScreenMode:(_Bool)arg1;
- (void)enterFullScreenMode:(_Bool)arg1;
- (void)setHeaderbarPos:(double)arg1 animated:(_Bool)arg2;
- (id)capturedHeaderImage;
- (void)refreshSkinWithMode:(long long)arg1;
- (_Bool)isNeedHeaderBar;
- (id)initWithFrame:(struct CGRect)arg1;

@end

