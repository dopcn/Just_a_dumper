//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QLCarrierFreeFlowManager, QLUnicomInfosModel;

@interface QLCarrierInfosModel : NSObject
{
    QLCarrierFreeFlowManager *_carrierManager;
    QLUnicomInfosModel *_unicomInfoModel;
}

- (void).cxx_destruct;
- (id)generateErroCodeJson:(long long)arg1;
- (id)getCarrierEnableState;
- (void)getCarrierNativieInfoWithBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

