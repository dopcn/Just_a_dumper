//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AHBusinessFramework/AHRootService.h>

@class AHServerTimeStampManager;

@interface LOGMyDetailService : AHRootService
{
    _Bool _isAddCache;
    float _cacheTime;
    AHServerTimeStampManager *_timeStampManager;
}

+ (long long)getMyDetailInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (long long)checkDetailCache:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) AHServerTimeStampManager *timeStampManager; // @synthesize timeStampManager=_timeStampManager;
@property(nonatomic) float cacheTime; // @synthesize cacheTime=_cacheTime;
@property(nonatomic) _Bool isAddCache; // @synthesize isAddCache=_isAddCache;
- (void).cxx_destruct;
- (void)getMyDetailInfo;
- (_Bool)checkDetailCache;
- (_Bool)parseJSONExceptMessageCount:(id)arg1;
- (_Bool)parseJSON:(id)arg1;
- (void)parseUserInfo:(id)arg1;
- (id)init;

@end

