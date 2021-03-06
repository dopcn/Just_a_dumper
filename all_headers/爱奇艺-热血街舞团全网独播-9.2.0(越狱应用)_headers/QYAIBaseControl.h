//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QYNativeSpeechRecognizer;

@interface QYAIBaseControl : UIView
{
    CDUnknownBlockType _AICallBack;
    long long _aiState;
    QYNativeSpeechRecognizer *_aiEngine;
}

@property(retain, nonatomic) QYNativeSpeechRecognizer *aiEngine; // @synthesize aiEngine=_aiEngine;
@property(readonly, nonatomic) long long aiState; // @synthesize aiState=_aiState;
@property(copy, nonatomic) CDUnknownBlockType AICallBack; // @synthesize AICallBack=_AICallBack;
- (void).cxx_destruct;
- (void)didDisappear;
- (void)willDisappear;
- (void)didAppear;
- (void)willAppear;
- (void)stopAI;
- (_Bool)startAI;
- (void)dealloc;

@end

