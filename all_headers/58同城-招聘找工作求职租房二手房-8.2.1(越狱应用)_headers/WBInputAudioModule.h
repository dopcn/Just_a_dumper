//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBHybridBaseModule.h"

@class NSDictionary, WBAudioMsgView;

@interface WBInputAudioModule : WBHybridBaseModule
{
    NSDictionary *_params;
    WBAudioMsgView *_audioMsgView;
}

+ (void)load;
@property(retain, nonatomic) WBAudioMsgView *audioMsgView; // @synthesize audioMsgView=_audioMsgView;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
- (void).cxx_destruct;
- (void)navAudioMsgView:(_Bool)arg1;
- (void)widgetFinish:(id)arg1;
- (void)removeSubWidget:(id)arg1 withAnimation:(_Bool)arg2;
- (id)configAudioMsgView;
- (void)makeAudioInputWithParams:(id)arg1;

@end

