//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MGADBaseControlView.h"

#import "ADInteractiveViewDelegate-Protocol.h"

@class FBKVOController, NSString;

@interface MGADHarlfScreenControlView : MGADBaseControlView <ADInteractiveViewDelegate>
{
    FBKVOController *_KVOController;
}

@property(retain, nonatomic) FBKVOController *KVOController; // @synthesize KVOController=_KVOController;
- (void).cxx_destruct;
- (void)adInteractiveViewDidClickWithInfo:(id)arg1;
- (void)showAdvertiser:(id)arg1;
- (void)playOver;
- (void)welfareClick;
- (void)shrinkWelfareButton;
- (void)showWelfare:(id)arg1;
- (void)removeAllObserver;
- (void)dealloc;
- (void)clickSkipView;
- (void)clickSurplusView;
- (void)updateFrame;
- (void)hasPreview:(_Bool)arg1;
- (void)hasSkipEvent:(_Bool)arg1 canSkipTime:(int)arg2;
- (void)hideButton;
- (void)showButton;
- (void)showAdDetail;
- (void)setSurplusTime:(int)arg1;
- (void)hasDetailEvent:(_Bool)arg1 buttonTitle:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

