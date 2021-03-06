//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMFeedbackLogicImplementer.h"

@class NMFeedBackEnterFeedBackRideModel;

@interface NMFeedbackRidingImplementer : NMFeedbackLogicImplementer
{
    NMFeedBackEnterFeedBackRideModel *_rideModel;
}

@property(retain, nonatomic) NMFeedBackEnterFeedBackRideModel *rideModel; // @synthesize rideModel=_rideModel;
- (void).cxx_destruct;
- (void)addSpecialCommitInfo:(id)arg1 withDescriptionDic:(id)arg2 withExtraDic:(id)arg3 withPage:(unsigned long long)arg4;
- (id)getSelectCarArgWithPage:(unsigned long long)arg1;
- (id)location:(unsigned long long)arg1;
- (id)commonParam;
- (void)showFeedBackHandlerOverlay;
- (void)removeFeedBackHandlerOverlay;
- (id)feedBackTypeViewGetTitle:(unsigned long long)arg1;
- (id)getPageInfo:(unsigned long long)arg1;
- (id)errorID:(unsigned long long)arg1;
- (id)sourcePage:(unsigned long long)arg1;
- (id)adCode:(unsigned long long)arg1;
- (struct ANPoint)mapCenterPointForLocationSelectService:(unsigned long long)arg1;
- (id)errorType:(unsigned long long)arg1;
- (id)type:(unsigned long long)arg1;
- (void)updateExternalData:(id)arg1;
- (_Bool)processCellEvent:(id)arg1 withPage:(unsigned long long)arg2;
- (unsigned long long)getMainPageType;
- (id)pageArrayWithMainScreedShot;
- (id)allDesPagesArray;
- (_Bool)isTypePage:(unsigned long long)arg1;

@end

