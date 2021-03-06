//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DCBaseViewController.h"

#import "DBOrderViewProtocol-Protocol.h"

@class NSDictionary, NSString;

@interface DBOrderViewController : DCBaseViewController <DBOrderViewProtocol>
{
    _Bool _enableAutoFloatLayer;
    id _orderData;
    NSDictionary *_userInfo;
    NSString *_identifyId;
    unsigned long long _animationType;
    long long _currentRole;
}

@property(nonatomic) _Bool enableAutoFloatLayer; // @synthesize enableAutoFloatLayer=_enableAutoFloatLayer;
@property(nonatomic) long long currentRole; // @synthesize currentRole=_currentRole;
@property(nonatomic) unsigned long long animationType; // @synthesize animationType=_animationType;
@property(copy, nonatomic) NSString *identifyId; // @synthesize identifyId=_identifyId;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) id orderData; // @synthesize orderData=_orderData;
- (void).cxx_destruct;
- (id)params;
- (long long)imCardStyle;
@property(copy, nonatomic) NSString *orderID;
- (id)orderStatus;
- (void)backButtonClicked:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

