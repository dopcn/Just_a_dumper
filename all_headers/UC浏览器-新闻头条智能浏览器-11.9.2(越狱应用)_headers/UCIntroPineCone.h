//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UCIntroDisplayerProtocol-Protocol.h"
#import "UCIntroPineConeViewControllerDelegate-Protocol.h"

@class NSString, UCIntroPineConeViewController;
@protocol UCIntroDataProviderProtocol, UCIntroDisplayerDelegate;

@interface UCIntroPineCone : NSObject <UCIntroPineConeViewControllerDelegate, UCIntroDisplayerProtocol>
{
    _Bool _forNew;
    _Bool _shouldDoFinishTask;
    _Bool _isFullScreen;
    id <UCIntroDisplayerDelegate> _delegate;
    id <UCIntroDataProviderProtocol> _dataProvider;
    UCIntroPineConeViewController *_pineConeViewController;
}

+ (_Bool)isLiving;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(retain, nonatomic) UCIntroPineConeViewController *pineConeViewController; // @synthesize pineConeViewController=_pineConeViewController;
@property(nonatomic) _Bool shouldDoFinishTask; // @synthesize shouldDoFinishTask=_shouldDoFinishTask;
@property(retain, nonatomic) id <UCIntroDataProviderProtocol> dataProvider; // @synthesize dataProvider=_dataProvider;
@property(nonatomic) _Bool forNew; // @synthesize forNew=_forNew;
@property(nonatomic) id <UCIntroDisplayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)introVCWillEnterPineConeView:(id)arg1;
- (void)introVCWillDismiss:(id)arg1;
- (void)setupAccessibilityLabel:(id)arg1;
- (void)doViewDisapper;
- (void)showIntroOnView:(id)arg1;
- (void)dealloc;
- (id)initWithDataProvider:(id)arg1 shouldDoFinishTask:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

