//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCarBaseManager.h"

@interface QNMinshengWebMonitorManager : CCarBaseManager
{
    long long _monitorType;
}

@property(nonatomic) long long monitorType; // @synthesize monitorType=_monitorType;
- (void)dataLoaderDownLoadDataFailed:(id)arg1;
- (void)dataLoaderDownLoadDataComplete:(id)arg1;
- (id)parseJSONResponse:(id)arg1;
- (id)getRequestURL;
- (void)postMonitorInfomation:(id)arg1 withType:(long long)arg2;
- (void)dealloc;
- (id)init;

@end

