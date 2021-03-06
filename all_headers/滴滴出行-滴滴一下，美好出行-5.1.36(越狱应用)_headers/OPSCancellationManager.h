//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OPSCancellationManager : NSObject
{
    NSString *_token;
    NSString *_phone;
    NSString *_captchaCode;
    CDUnknownBlockType _viewControllerDidLoadHandler;
    CDUnknownBlockType _viewControllerJumpHandler;
}

+ (void)logEvent:(id)arg1 withParameters:(id)arg2;
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType viewControllerJumpHandler; // @synthesize viewControllerJumpHandler=_viewControllerJumpHandler;
@property(copy, nonatomic) CDUnknownBlockType viewControllerDidLoadHandler; // @synthesize viewControllerDidLoadHandler=_viewControllerDidLoadHandler;
@property(copy, nonatomic) NSString *captchaCode; // @synthesize captchaCode=_captchaCode;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *scene;
- (id)createEntryViewControllerWithParameter:(id)arg1;

@end

