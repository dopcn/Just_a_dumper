//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface QZAuthorizingView : UIView
{
    unsigned long long _authType;
    CDUnknownBlockType _closeBlock;
}

+ (void)smartPopPushAuthorizing:(id)arg1 closeBlock:(CDUnknownBlockType)arg2;
+ (_Bool)smartPopMicrophoneAuthorizing:(id)arg1 closeBlock:(CDUnknownBlockType)arg2;
+ (void)reportFirst:(id)arg1 second:(id)arg2 third:(id)arg3;
+ (_Bool)smartPopCameraAuthorizing:(id)arg1 closeBlock:(CDUnknownBlockType)arg2;
+ (void)gotoAuthorizing;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
- (void).cxx_destruct;
- (void)close;
- (void)gotoAuthorizing;
- (void)setupUI:(struct CGSize)arg1;
- (void)setupTitle:(id)arg1 desc:(id)arg2 image:(id)arg3;
- (void)reportClose;
- (void)reportOpenAuth;
- (void)reportExpose;
- (void)report:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 type:(unsigned long long)arg2;

@end

