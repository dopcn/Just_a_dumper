//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GLPaymentLoading, NSMutableArray, UIView;

@interface GLPPageRouter : NSObject
{
    long long _paymentViewType;
    UIView *_backgroundView;
    GLPaymentLoading *_loadingCard;
    NSMutableArray *_viewStack;
}

+ (id)sharedRouter;
@property(retain, nonatomic) NSMutableArray *viewStack; // @synthesize viewStack=_viewStack;
@property(retain, nonatomic) GLPaymentLoading *loadingCard; // @synthesize loadingCard=_loadingCard;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long paymentViewType; // @synthesize paymentViewType=_paymentViewType;
- (void).cxx_destruct;
- (_Bool)dismissCurrentShowingCardView;
- (void)dismissCurrentShowingPage;
- (_Bool)showCardWithType:(long long)arg1 data:(id)arg2;
- (_Bool)showCardWithType:(long long)arg1;
- (id)init;

@end

