//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ShareViewInnerDelegate-Protocol.h"

@class NSString, SHKItem, ShareView, UIImageView, YKShareManager;
@protocol ShareViewDataSource, ShareViewDelegate;

@interface ShareViewController : NSObject <ShareViewInnerDelegate>
{
    _Bool _isShareViewShowing;
    id <ShareViewDataSource> _dataSource;
    id <ShareViewDelegate> _delegate;
    ShareView *_shareView;
    YKShareManager *_shareManager;
    SHKItem *_shkItem;
    UIImageView *_containerImagaView;
    struct CGRect _shareViewFrame;
}

@property(retain, nonatomic) UIImageView *containerImagaView; // @synthesize containerImagaView=_containerImagaView;
@property(retain, nonatomic) SHKItem *shkItem; // @synthesize shkItem=_shkItem;
@property(retain, nonatomic) YKShareManager *shareManager; // @synthesize shareManager=_shareManager;
@property(nonatomic) struct CGRect shareViewFrame; // @synthesize shareViewFrame=_shareViewFrame;
@property(nonatomic) _Bool isShareViewShowing; // @synthesize isShareViewShowing=_isShareViewShowing;
@property(retain, nonatomic) ShareView *shareView; // @synthesize shareView=_shareView;
@property(nonatomic) __weak id <ShareViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <ShareViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)showUnstallAlert:(id)arg1;
- (void)showOrHideShareView:(_Bool)arg1 withSelector:(SEL)arg2 withObject:(id)arg3;
- (void)hideShareView:(id)arg1 withObject:(id)arg2;
- (void)hideShareView;
- (void)showShareView;
- (_Bool)shareViewOnShowing;
- (void)showOtherApp:(id)arg1;
- (void)dealloc;
- (void)preLoadImageWithUrl:(id)arg1;
- (void)OrientationDidChange:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

