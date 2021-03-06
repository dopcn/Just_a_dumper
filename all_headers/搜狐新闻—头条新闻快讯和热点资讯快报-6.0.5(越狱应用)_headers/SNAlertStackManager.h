//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, SNBaseAlertView;

@interface SNAlertStackManager : NSObject
{
    _Bool _isShowing;
    NSMutableArray *_alertViewQueue;
    SNBaseAlertView *_currentShowingAlert;
}

+ (id)sharedAlertStackManager;
@property(retain, nonatomic) SNBaseAlertView *currentShowingAlert; // @synthesize currentShowingAlert=_currentShowingAlert;
@property(retain, nonatomic) NSMutableArray *alertViewQueue; // @synthesize alertViewQueue=_alertViewQueue;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
- (void).cxx_destruct;
- (_Bool)checkoutInStackAlertView;
- (_Bool)removeAlertViewFromAlertStack:(id)arg1;
- (_Bool)checkIsAlreadyInStack:(id)arg1;
- (void)addAlertViewToAlertStack:(id)arg1;
- (id)init;

@end

