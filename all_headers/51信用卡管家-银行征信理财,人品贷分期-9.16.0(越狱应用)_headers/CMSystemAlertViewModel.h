//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMUserBankModel, NSString;

@interface CMSystemAlertViewModel : NSObject
{
    _Bool _canTouchDismiss;
    CMUserBankModel *_userBankModel;
    NSString *_confirmText;
    NSString *_cancelText;
}

@property(nonatomic) _Bool canTouchDismiss; // @synthesize canTouchDismiss=_canTouchDismiss;
@property(copy, nonatomic) NSString *cancelText; // @synthesize cancelText=_cancelText;
@property(copy, nonatomic) NSString *confirmText; // @synthesize confirmText=_confirmText;
@property(retain, nonatomic) CMUserBankModel *userBankModel; // @synthesize userBankModel=_userBankModel;
- (void).cxx_destruct;

@end

